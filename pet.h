
/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 3: pet.h
*/



//Libraries included here
#include <iostream>
#include <string>

using namespace std;


class Pet {
  public:
  //Constructors declared here
    Pet();
    Pet(string name, int age, string type, double weight);

//Accessors/Getters
    string getName();
    int getAge();
    string getType();
    double getWeight();

//Mutators/Setters
    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);

//Other methods
    void printInfo();

//Private variables declared here
  private:
    string name;
    unsigned int age;
    string type;
    double weight;

};
