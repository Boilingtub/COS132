#include"StudentDetails.h"
#include<iostream>
#include <sstream>
#include <string>

bool err_not_t_or_f(char e) {
  std::cout << "While parsing parameter 5 of StudentDetails constructor: Expected \'t\' or \'f\' but found \' " << e << "\'\n";
  return false;
  
}

StudentDetails* constructor(std::string line) {
    size_t pos = line.find(" ,");
    while (pos != std::string::npos) {
        line.replace(pos, 2, ",");
        pos = line.find(" ,",pos + 1);
    }
    pos = line.find(", ");
    while (pos != std::string::npos) {
        line.replace(pos, 2, ",");
        pos = line.find(", ",pos + 1);
    }
  std::stringstream ss;
  unsigned int prev_pos = 0;
  unsigned short idx = 0;
  StudentDetails* details = new StudentDetails;
  for(unsigned int pos = 0; pos <= line.length() && (idx < 5); pos++ ) {
    if(line[pos] == ',' || line[pos] == '\n' || line[pos] == '\0') {
      char* parse = new char[pos-prev_pos+1]; 
      for(unsigned int x = 0; x <= (pos-prev_pos-1); x++)
          parse[x] = line[prev_pos+x];
      if(idx < 2 && parse[0] <= 122 && parse[0] >= 97)
        parse[0] = parse[0] - ('a'-'A'); 
      ss << parse;
      switch(idx) {
        case 0: ss >> details->firstName; break;
        case 1: ss >> details->lastName; break;
        case 2: ss >> details->studentNumber; break;
        case 3: ss >> details->mark; break;
        case 4: details->didPrepWork = 
          parse[0]=='t'?true:parse[0]=='f'?false:err_not_t_or_f(parse[0]); break;
        default: std::cout << "StudentDetails.cpp:ERR! invalid idx";
      }
      ss.clear();
      idx++;
      delete[] parse;
      prev_pos = ++pos;
    }
  } 
  return details;
}


StudentDetails* constructor(std::string fName, std::string lName, int studentNumber, float mark,  bool didPrepWork) {
  StudentDetails* details = new StudentDetails;
  if(fName[0] <= 122 && fName[0] >= 97)
      fName[0] = fName[0] - ('a'-'A'); 
  if(lName[0] <= 122 && lName[0] >= 97)
      lName[0] = lName[0] - ('a'-'A'); 

  details->firstName = fName;
  details->lastName = lName;
  details->studentNumber = studentNumber;
  details->mark = mark;
  details->didPrepWork = didPrepWork;
  return details;
}

void destructor(StudentDetails*& stdDetails) {
  if(stdDetails == NULL)
    return;
  else {
    delete stdDetails;
    stdDetails = NULL;
  }

}

std::string toString(StudentDetails& stdDetails) {
  char didPrepWork = stdDetails.didPrepWork?'t':'f';
  std::stringstream ss;
  ss << stdDetails.firstName<<","
     <<stdDetails.lastName<<","
     <<stdDetails.studentNumber<<","
     <<stdDetails.mark<<","
     <<didPrepWork;
  std::string out;
  ss >> out;
  return out;
}





