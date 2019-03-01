#include <string>
#include <sstream>
#include "../../AMAEd-CompProg1-Week010/src/person.h"

using namespace std;

class Student : public Person {
  private:
   string _acadprog, _university;
   short _collegeyear;

  public:
   Student(string name, string address, string gender, short age, string occupation)
    :Person(name, address, gender, age, occupation) {

   }
   
   void setAcadProg(string acadprog) {
     this->_acadprog = acadprog;
   }

   string getAcadProg() {
     return _acadprog;
   }

   void setCollegeYear(short collegeyear) {
     this->_collegeyear = collegeyear;
   }

   short getCollegeYear() {
     return _collegeyear;
   }

   void setUniversity(string university) {
     this->_university = university;
   }

   string getUniversity() {
     return _university;
   }
};
