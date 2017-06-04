#include <iostream>
#include <string>
using namespace std;

#define ARRAY_LENGTH 25
#define PI 3.1456
// This is one of those practises which is quite bad. It alters your code in a dumb way which means
// doing too much of it would just murder this script
#define MY_DOUBLE double 
#define FAV_DISH "chicken rice"

int main(){
	int myNumbers[ARRAY_LENGTH] = {0};
	cout << "Array length of myNumbers is " << sizeof(myNumbers)/sizeof(int) << endl;

	cout << "Enter a radius: " << endl;
	MY_DOUBLE radius = 0.0;
	cin >> radius;
	cout << "Area is: " << PI * radius * radius << endl;

	string favouriteDish = FAV_DISH;
	cout << "My ultimate dish is: " << favouriteDish << endl;

	return 0;
}