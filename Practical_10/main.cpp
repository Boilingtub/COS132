#include"StudentDetails.h"
#include"Assessment.h"

#include<iostream>
void test_StudentDetails() {
  StudentDetails* det1 = constructor(std::string("tlckvzg , Mpdzmujh ,47907523 ,22.28 , t"));
  destructor(det1);

  det1 = constructor("Tlckvzg", "Mpdzmujh" ,47907523 ,22.28 , true);
  destructor(det1);
}

std::string Assessment_toString(Assessment* ass) {
  std::stringstream ss;
  ss << "assessmentName = " << ass->assessmentName << "\n"
     << "FullMarks = " << ass->fullMarks << "\n";

  for(int a = 0; a < 26; a++) {
    for(int b = 0; b < ass->numberOfStudents[a]; b++) {
      ss << "[" << toString(*(ass->roster[a][b])) << "],";
    }
    ss << "numberOfStudents for " << a << " = " 
       << ass->numberOfStudents[a] << "\n";
  }
  return ss.str();
}

void test_Assessment() {
  Assessment* ass = constructor("ASS-1",100.0);
  std::string path = "students.txt";
  loadFromCSV(ass,path);
  sort(ass);
  std::cout << Assessment_toString(ass) << "\n";  
  destructor(ass);
}
int main() {
  test_Assessment();
  return 0;
}
