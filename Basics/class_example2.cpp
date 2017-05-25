#include <iostream>
#include <string>
using namespace std;

/*
This tutorial is to cover cases of the following concepts:
- Constructors
- Overloaded constructors
- Default values for functions
- Initialization lists
*/

class Human{
private:
	string Name;
	int Age;

public:
	Human(){
		Age = 0;
		Name = "Default Name";
		cout << "New instance of Human" << endl;
	}

	Human(string HumanName){
		Age = 0;
		Name = HumanName;
		cout << "New instance of Human - via secondary constructor" << endl;
	}

	// Initialization lists
	// This is only for constructiors; doesn't work on functions
	Human(int HumanAge, string HumanName)
		:Name(HumanName), Age(HumanAge){
			cout << "Initialization lists" << endl;
		}

	void setName(string HumanName){
		Name = HumanName;
	}

	// Set default values for this function
	void setAge(int HumanAge=18){
		Age = HumanAge;
	}

	void introduceSelf(){
		cout << "I am " + Name << " and am ";
		cout << Age << " years old." << endl;
	}
};

int main(){
	cout << "Demonstrate constructors";

	Human FirstMan;
	FirstMan.setName("Test1");
	FirstMan.setAge(123);

	Human SuperMan;

	FirstMan.introduceSelf();
	SuperMan.introduceSelf();

	// Introduce new line to cover
	cout << endl;

	cout << "Demonstrate Overloaded constructors" << endl;

	Human SecondMan(15, "second man maybe");
	SecondMan.introduceSelf();
	cout << "Demonstrate functions with default values" << endl;
	SecondMan.setAge();
	SecondMan.introduceSelf();

	cout << &SecondMan << endl;

	cout << "Additional exercises on pointers." << endl;

	char testChar = 'a';
	char * testChar2 = new char[4];
	//testChar2[0] = 'a';
	//testChar2[1] = 'b';
	cout << testChar << endl;
	cout << testChar2 << endl;
	cout << &testChar2 << endl;

	return 0;
}