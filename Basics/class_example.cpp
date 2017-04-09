/* Student class */

#include <iostream>
using namespace std;

class Student{
    string name;
    int id;
    string gradDate;

  public:
    void setName(string nameIn);
    void setId(int idIn);
    void setGradDate(string gradDateIn);
    string getName();
    int getId();
    string getGradDate();
    void print();
};

void Student::setName(string nameIn){
  name = nameIn;
}

void Student::setId(int idIn){
  id = idIn;
}

void Student::setGradDate(string gradDateIn){
  gradDate = gradDateIn;
}

string Student::getName(){
  return name;
}

int Student::getId(){
  return id;
}

string Student::getGradDate(){
  return gradDate;
}

void Student::print(){
  cout<<"Student Name: "<<name<<", Student ID: "<<id<<", Student Grad Date: "<<gradDate<<endl;
}

int main(){
  Student student1;

  student1.setName("Christopher");
  student1.setId(1234);
  student1.setGradDate("2017-01-01");

  student1.print();
  return 0;
}
