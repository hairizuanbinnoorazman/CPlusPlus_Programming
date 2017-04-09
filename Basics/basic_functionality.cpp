#include "iostream"
#include <iomanip> // This library allows one to format output console

using namespace std;

// Print Simple Message
void printMessage(){
  cout<<"This is a sample message to be printed out"<<endl;
}

// Returns a constant to main function
int constantMessage(){
  const int aNumber = 6;
  return aNumber;
}

// Print a table of numbers with headers
void printTable(){
  int a = 45;
  float b = 45.323;
  double c = 45.5468;
  int aa = a + 9;
  float bb = b + 9;
  double cc = c + 9;
  int aaa = aa + 9;
  float bbb = bb + 9;
  double ccc = cc + 9;

  cout<<"Ints"<<setw(10);
  cout<<"Float"<<setw(10);
  cout<<"Double"<<setw(10)<<endl;
  cout<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<endl;
  cout<<aa<<setw(10)<<bb<<setw(10)<<cc<<setw(10)<<endl;
  cout<<aaa<<setw(10)<<bbb<<setw(10)<<ccc<<setw(10)<<endl;
}

int main(){
  cout<<"Within main function"<<endl;
  printMessage();
  int bNumber = constantMessage();
  cout<<"The number to look out for "<<bNumber<<endl;
  printTable();
  cout<<"Back within main function"<<endl;
  return 0;
}
