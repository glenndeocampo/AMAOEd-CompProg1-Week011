//****************dog******************
//#include <cstdlib>
//#include <iostream>
//#include "dog.h"

//using namespace std;

//int main () 
//{
//  Dog pet(4, "Soft", true);
//  pet.setBreed("Chow Chow");
//  pet.setSize("Small");
//  pet.setIsRegister(false);
//  cout << "Dog Details \n" << endl << pet.getMammal();
//  cout << "Breed: " << pet.getBreed() << endl;
//  cout << "Size: " << pet.getSize() << endl;
//  cout << "Is Registered: " << pet.getIsRegister() << endl;
//  cout << endl;

//system("pause");  
//return EXIT_SUCCESS;

//}
//****************end******************
//***************student***************
#include <cstdlib>
#include <iostream>
#include "student.h"

using namespace std;

int main () 
{
  Student pers("Glenn Deocampo", "Maricaban, Pasay City", "Male", 32, "Student");
  pers.setAcadProg("BS Information Technology");
  pers.setCollegeYear(1);
  pers.setUniversity("AMA University");
  cout << "Student Details \n" << endl << pers.getPerson();
  cout << "Academic Program: " << pers.getAcadProg() << endl;
  cout << "Year in College: " << pers.getCollegeYear() << endl;
  cout << "University: " << pers.getUniversity() << endl;
  cout << endl;

system("pause");  
return EXIT_SUCCESS;

}
