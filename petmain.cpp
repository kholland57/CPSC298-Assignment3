/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 3: petmain.cpp
*/

#include "pet.h"


//Main method
int main(int argc, char **argv)
{
  //One pet is created with the default constructor while the other
  //is created with parameters
  Pet *pet1 = new Pet();
  Pet *pet2 = new Pet("Cody", 12 , "dog" , 90.00 );

  //The one created with default parameters has its information
  //entered using setters
  pet1->setName("Jiji");
  pet1->setAge(5);
  pet1->setType("cat");
  pet1->setWeight(13);

//This pet's information is printed with the printInfo method
  cout <<"Pet1 : "<< endl;
  pet1->printInfo();

//These cout statements are here to show that the accessor methods work and to
//print the information of the other pet.
  cout <<"\nPet2:" << endl;
  cout << "This is " << pet2->getName() << endl;
  cout << pet2->getName() << " is " << pet2-> getAge() << " years old." << endl;
  cout << pet2->getName() << " is a " << pet2->getType() << "." << endl;
  cout << pet2->getName() << " weighs " << pet2->getWeight() << " pounds." << endl;

//Both objects are then deleted
  delete pet1;
  delete pet2;

  return 0;
}
