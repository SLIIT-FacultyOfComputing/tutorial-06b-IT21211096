#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char sName[20]) {
  studentId = id;
  strcpy (name, sName);
  
}

// Display StudentId and Name
void Student::display() {
  cout << studentId << endl;
  cout << name << endl;
  
}
