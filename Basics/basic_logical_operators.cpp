#include <iostream>
#include <string>

void operatorComparison(){
  using namespace std;
  string TorF[] = {"False", "True"};

  int a = 100;
  int b = 33;
  int c = 33;

  //Print out the string values of each relational operation
  cout<<"a < b is "<<TorF[a<b];
  cout<<"\na > b is "<<TorF[a>b];
  cout<<"\na != b is "<<TorF[a!=b];
  cout<<"\nc >= b is "<<TorF[c>=b];
  cout<<"\nc <= b is "<<TorF[c<=b];
  cout<<"\n";
}

void usingIfElse(){
  using namespace std;
  int a = 10;
  string TorF[] = {"False", "True"};
  if (a == 10){
    cout<<"a == 10"<<TorF[a==10];
    cout<<"\na <= 10"<<TorF[a<=10];
    cout<<"\na <= 6"<<TorF[a<=6];
    cout<<"\nInitial Loop Complete";
  } else if(a < 6){
    cout<<"\nWon't reach here";
  } else {
    cout<<"Reached final statement";
  }
}

void usingForLoops(){
  using namespace std;
  int z = 1;
  for(int i=0; i < 10; i++){
    z = z + i;
    cout<<"\nCurrent number i "<<i;
    cout<<"\nCurrent number z "<<z;
  }
}

int main(){
  // Run functions defined above
  operatorComparison();
  usingIfElse();
  usingForLoops();
  return 0;
}
