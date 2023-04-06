#include<iostream>
using namespace std;
int main()
{
// OPERATOR '+'
int y,z;
cout <<"Enter the first number"<<endl;
cin >>y;
cout <<"Enter the second number"<<endl;
cin >>z;
cout <<"The sum number is "<<y+z<<endl ;
/* OPERATOR '-' */
int w,x;
cout <<"Enter the first number"<<endl;
cin >>w;
cout <<"Enter the second number"<<endl;
cin >>x;
cout <<"The difference number is "<<w-x<<endl ;
/* OPERATOR '*' */
int u,v;
cout <<"Enter the first number"<<endl;
cin >>u;
cout <<"Enter the second number"<<endl;
cin >>v;
cout <<"The Multiplication number is "<<u*v<<endl;
// OPERATOR '/' 
int s,t;
cout <<"Enter the first number"<<endl;
cin >>s;
cout <<"Enter the second number"<<endl;
cin >>t;
cout <<"The division number is "<<s/t<<endl ;
// OPERATOR '%'
int q,r;
cout <<"Enter the first number"<<endl;
cin >>q;
cout <<"Enter the second number"<<endl;
cin >>r;
cout <<"The remainder number is "<<q%r<<endl ;
//LOGICAL OPERATOR '!'(not)
bool p=true;
cout <<p<<endl ;//it outs 1
cout <<!p<<endl ;//it outs 0
//LOGICAL OPERATOR "&&"(and)
bool n=true;
bool o=false;
if(n&&o);//the if will execute if and only if both are true
//LOGICAL OPERATOR "||"(or)
int m=5;
if(m==2 || m==5){
cout <<m<<endl ;
}//This code will be executed because m is equal to 5
// pre increment 
int l=7;
cout <<++l<<endl;//the operation is done before assigning the variable 
//post increment 
int k=4;
cout <<k++<<endl;//the operation is done after assigning the variable
// pre decrement 
int j=3;
cout <<--j<<endl;//the operation is done before assigning the variable
int i=9;
cout <<i--<<endl;//the operation is done after assigning the variable
//precedence of operator 
int a=1,b=2,c=6,d=8;
cout <<a+b/c*d-a<<endl;


    return 0;
}