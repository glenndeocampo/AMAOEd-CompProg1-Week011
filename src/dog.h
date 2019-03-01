#include <string>
#include <sstream>
#include "../../AMAEd-CompProg1-Week010/src/mammal.h"

using namespace std;

class Dog : public LeggedMammal {
  private:
   string _breed, _size;
   bool _isRegister;

  public:
   Dog(short legs, string fur, bool hasTail)
    :LeggedMammal(legs,fur,hasTail) {

   }
   
   void setBreed(string breed) {
     this->_breed = breed;
   }

   string getBreed() {
     return _breed;
   }

   void setSize(string size) {
     this->_size = size;
   }

   string getSize() {
     return _size;
   }

   void setIsRegister(bool isregister) {
     this->_isRegister = isregister;
   }

   bool getIsRegister() {
     return _isRegister;
   }
};
