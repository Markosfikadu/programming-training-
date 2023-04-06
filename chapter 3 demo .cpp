#include<iostream>
using namespace std;

int main()
{
// if statement 
int a = 13;
if(a > 7){
  cout << "The number is greater than 5." << endl;
  }
// if else statement 
int c = 15;
if( c > 19) {
  cout << "The number is greater than 15." << endl;
}
else {
  cout << "The number is less than or equal to 15." << endl;
}
// multi way of if statement 
int d = 20;
if(d < 10) {
  cout << "The number is less than 10." << endl;
}
else if(d< 20) {
  cout << "The number is between 10 and 19." << endl;
}
else if(d < 30) {
  cout << "The number is between 20 and 29." << endl;
}
else {
  cout << "The number is greater than or equal to 30." << endl;
}
// nested if statement 

int e = 10;
int f = 20;
if(e > 5) {
  if(f > 15) {
    cout << " Both  numbers   are  greater   than their respective thresholds." << endl;
  }
  else {
    cout << "The second number is not greater than its threshold." << endl;
  }
}
else {
  cout << "The first number is not greater than  its threshold." << endl;
}



    return 0;
}