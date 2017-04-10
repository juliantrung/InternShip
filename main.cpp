#include<iostream>
#include<vector>
#include<conio.h>

using namespace std;

class Animal
{
public:
	virtual void eat() { std::cout << "I'm eating generic food." << endl; }
};

class Cat : public Animal
{
public:
	void eat() { std::cout << "I'm eating a rat." << endl; }
};

void func(Animal *xyz) { xyz->eat(); }

void main(){
	
	Animal *animal = new Animal;
	Cat *cat = new Cat;

	func(animal); // outputs: "I'm eating generic food."
	func(cat);





}