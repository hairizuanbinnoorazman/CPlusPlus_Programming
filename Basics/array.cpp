#include <iostream>
#include <string>

using namespace std;

int main(){
	int i = 42;
	int *pi = &i;

	cout << "Value of i is: " << i << endl;
	cout<<"Value of i address is: "<< &i << endl;
	cout<<"Value of pi address is: "<<&pi << endl;
	cout<<"Value of pi is: "<< pi << endl;
	cout<<"Value of *pi is: "<< *pi << endl;

	// Unlike higher level languages, using arrays don't give you an array value
	// Instead, it gives you a memory address that allow you to access other values.
    int v[] = { 1, 2, 3, 4, 5 };
    cout << "Assigned Value v: " << v << endl;
    cout << "Address of v: " << &v << endl;
    int *pv = v;
    cout << "Address of pv: " << &pv << endl;
    cout << "Value of pv: " << pv << endl;
    cout << "Value of *pv: " << *pv << endl;
    *pv = 11;
    cout << "Value of *pv: " << *pv << endl;
    cout << "Value of address of pv: " << pv << endl;
    v[1] = 12;
    cout << "Value of v: " << v << endl;
    pv[2] = 13;
    cout << "Value of v: " << v << endl;
    cout << "Value of *pv: " << *pv << endl;
    *(pv + 3) = 14;
    cout << "Value of *pv: " << *pv << endl;

    // Causes warning
    // for(int i : v){
    //  cout << i << endl;
    // }

    // C++ raw arrays don't store their size like Java arrays do; you need to keep track of that separately. 
    // A better strategy might be to use container classes (such as std::vector) instead of raw arrays.

	return 0;
}

