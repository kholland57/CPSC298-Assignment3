
/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 3: pet.cpp
*/


#include "pet.h"

//Default Constructor when the user does not enter in parameters
Pet::Pet()
{
  name = "";
  age = 0;
  type = "";
  weight = 0;
}

//Constructor for parameters
Pet::Pet(string name, int age, string type, double weight)
{
  this->name = name;
  this->age = age;
  this->type = type;
  this->weight = weight;
}


//-----------------------------------------------------------
//Accessors to return variable data to the user
string Pet::getName()
{
  return name;
}

int Pet::getAge()
{
  return age;
}

string Pet::getType()
{
  return type;
}

double Pet::getWeight()
{
  return weight;
}

//-----------------------------------------------------------
//Mutators to set the variables
void Pet::setName(string newName){
  name = newName;
}

void Pet::setAge(int newAge){
  age = newAge;
}

void Pet::setType(string newType){
  type = newType;
}

void Pet::setWeight(double newWeight){
  weight = newWeight;
}

//--------------------------------------
//Other methods

//This method prints out the info of the pet
void Pet::printInfo(){
  cout << "This is " << this->name << endl;
  cout << "They are " << this->age << " years old" << endl;
  cout << "They are a " << this->type << "." << endl;
  cout << "They weigh " << this->weight << " pounds." << endl;

}
