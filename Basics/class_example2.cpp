#include <iostream>
#include <string>
using namespace std;

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

	void setName(string HumanName){
		Name = HumanName;
	}

	void setAge(int HumanAge){
		Age = HumanAge;
	}

	void introduceSelf(){
		cout << "I am " + Name << " and am ";
		cout << Age << " years old." << endl;
	}
};

int main(){
	Human FirstMan;
	FirstMan.setName("Test1");
	FirstMan.setAge(123);

	Human SuperMan;

	FirstMan.introduceSelf();
	SuperMan.introduceSelf();
}