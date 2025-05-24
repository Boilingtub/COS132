#include "Assessment.h"
#include "StudentDetails.h"

Assessment* constructor(std::string assessmentName, float fullMarks) {
  #define DEFAULT_ROW_NUM 26
  Assessment* ass = new Assessment;
  ass->assessmentName = assessmentName;
  ass->fullMarks = fullMarks;
  ass->numberOfStudents = new int[DEFAULT_ROW_NUM];
  ass->roster = new StudentDetails**[DEFAULT_ROW_NUM];
  for(int i = 0; i < DEFAULT_ROW_NUM; ++i) { 
    ass->roster[i] = new StudentDetails*[0];
    ass->numberOfStudents[i] = 0;
  }
  return ass;
}

void destructor(Assessment*& assessment) {
  if(assessment == NULL) return;
  for(int a = 0; a < 26; a++) {
    for(int b = 0; b< assessment->numberOfStudents[a]; b++) {
      destructor(assessment->roster[a][b]);
    }
  }
  delete[] assessment->roster;
  delete assessment;
  assessment = NULL;
}



void insertStudent(Assessment*& assessment, StudentDetails newStudent) {
  int name_index = newStudent.lastName[0] - 'A';
  for(int a = 0; a < assessment->numberOfStudents[name_index]; a++)
    if(assessment->roster[name_index][a] == NULL) {
      assessment->roster[name_index][a] = &newStudent;
      return;
    };
  int new_num_students = assessment->numberOfStudents[name_index] + 1;
  StudentDetails** new_group = new StudentDetails*[new_num_students]; 

  for(int a = 0; a < assessment->numberOfStudents[name_index]; a++)
    new_group[a] = assessment->roster[name_index][a];
  
  delete[] assessment->roster[name_index];


  

  new_group[new_num_students-1] = new StudentDetails(newStudent);
  
  assessment->numberOfStudents[name_index] = new_num_students;
  assessment->roster[name_index] = new_group;
}

void sort(Assessment* assessment) {
  for(int a = 0; a < 26; a++) {
    for(int b = 0; b < assessment->numberOfStudents[a]; b++) {
      for(int c =0; c < assessment->numberOfStudents[a]; c++) {
        if(assessment->roster[a][c] < assessment->roster[a][c+1]) {
          StudentDetails* temp = assessment->roster[a][c+1];
          assessment->roster[a][c+1] = assessment->roster[a][c];
          assessment->roster[a][c] = temp;
        }
      }
    }
  } 
}

float avg(Assessment* assessment) {
  if(assessment->roster == NULL) return 0;
  if(assessment->numberOfStudents == NULL) return 0;

  float total_mark = 0;
  float total_students = 0;
  for(int a = 0; a < 26; a++) {
    for(int b = 0; b < assessment->numberOfStudents[a]; b++) {
      if(assessment->roster[a][b] != NULL) {
        total_mark += assessment->roster[a][b]->mark;
        total_students += 1;
      }
    }
  } 
  if(total_students == 0) return 0;
  return total_mark/total_students;
}

int totalNumberOfStudents(Assessment* assessment) {
  if(assessment->roster == NULL) return 0;
  if(assessment->numberOfStudents == NULL) return 0;

  int count = 0;
  for(int a = 0; a < 26; a++) {
    for(int b = 0; b < assessment->numberOfStudents[a]; b++)
      if(assessment->roster[a][b] != NULL)
        count++;
      else break;
  }
  return count;

};

int numberThatCompletedPrep(Assessment* assessment) {
  if(assessment->roster == NULL) return 0;
  if(assessment->numberOfStudents == NULL) return 0;

  int total_students = 0;
  for(int a = 0; a < 26; a++) {
    for(int b = 0; b < assessment->numberOfStudents[a]; b++) {
      if(assessment->roster[a][b] != NULL)
        if(assessment->roster[a][b]->didPrepWork)
          total_students += 1;
    }
  } 
  return total_students;
}

float passRate(Assessment* assessment) {
  if(assessment->roster == NULL) return 0;
  if(assessment->numberOfStudents == NULL) return 0;

  float total_students = 0;
  float total_passed = 0;
  for(int a = 0; a < 26; a++) {
    for(int b = 0; b < assessment->numberOfStudents[a]; b++) {
      if(assessment->roster[a][b] != NULL) {
        total_students += 1;
        if((assessment->roster[a][b]->mark/assessment->fullMarks) >= 0.5)
          total_passed += 1;
      }
    }
  } 
  return total_passed/total_students;
}

int distinction(Assessment* assessment) {
  if(assessment->roster == NULL) return 0;
  if(assessment->numberOfStudents == NULL) return 0;

  float total_students = 0;
  for(int a = 0; a < 26; a++) {
    for(int b = 0; b < assessment->numberOfStudents[a]; b++) {
      if(assessment->roster[a][b] != NULL) {
        if((assessment->roster[a][b]->mark/assessment->fullMarks) >= 0.75)
          total_students += 1;
      }
    }
  } 
  return total_students;
}

int fullMarks(Assessment* assessment) {
  if(assessment->roster == NULL) return 0;
  if(assessment->numberOfStudents == NULL) return 0;

  float total_students = 0;
  for(int a = 0; a < 26; a++) {
    for(int b = 0; b < assessment->numberOfStudents[a]; b++) {
      if(assessment->roster[a][b] != NULL) {
        if(assessment->roster[a][b]->mark == assessment->fullMarks)
          total_students += 1;
      }
    }
  } 
  return total_students;

}

StudentDetails* bestStudent(Assessment* assessment) {
  if(assessment->roster == NULL) return 0;
  if(assessment->numberOfStudents == NULL) return 0;

  StudentDetails* best;
  for(int a = 0; a < 26; a++) {
    for(int b = 0; b < assessment->numberOfStudents[a]; b++) {
      if(assessment->roster[a][b] != NULL) {
        if(assessment->roster[a][b]->mark > best->mark) 
          best = assessment->roster[a][b];
      }
    }
  } 
  return best;
}
StudentDetails* worstStudent(Assessment* assessment) {
  if(assessment->roster == NULL) return 0;
  if(assessment->numberOfStudents == NULL) return 0;

  StudentDetails* worst;
  for(int a = 0; a < 26; a++) {
    for(int b = 0; b < assessment->numberOfStudents[a]; b++) {
      if(assessment->roster[a][b] != NULL) {
        if(assessment->roster[a][b]->mark < worst->mark) 
          worst = assessment->roster[a][b];
      }
    }
  } 
  return worst;
}

void loadFromCSV(Assessment* assignment, std::string fileName) {
  std::ifstream file(fileName.data());
  std::string line;
  if(!file.is_open()) return;
  while(getline(file,line)) {
    insertStudent(assignment,*constructor(line));
  }
  file.close();
}

//11x26 table
char** marksHistogram(Assessment* assessment) {
  char** graph = new char*[11];
  for(int a = 0; a < 11; a++) {
    graph[a] = new char[26];
  }
  for(int a = 0; a < 26; a++) {
    float group_tot_mark = 0;
    int group_tot_students = 0;
    for(int b = 0; b < assessment->numberOfStudents[a]; b++) {
      if( assessment->roster[a][b] != NULL) {
        group_tot_mark += assessment->roster[a][b]->mark;
        group_tot_students += 1;
      }
    }
    int group_avg = 
      static_cast<int>(((group_tot_mark/group_tot_students)/assessment->fullMarks)*10);
    graph[11][a] = 'A' + a;
    for(int b = 1; b <= group_avg;b++) {
      graph[11-b][a] = 'X';
    }
  }
  return graph;
}




