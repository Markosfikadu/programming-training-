#include <iostream>
#include <cmath>
using namespace std;

int main() {
// 1 product of three numbers 
int x,y,z,result;
cout <<"Enter three numbers "<<endl;
cin >> x>> y>> z;
result = x*y*z;
cout <<"The product is"<<result<<endl;
//2.Write a program that accepts two 
//integers and display the sum, difference, 
//product and division of the two
//numbers The program should also state the 
//greater an-smaller number.
    int a, b, sum, diffe, mult, divi;
   cout << "Enter the first number: "<<endl;
    cin >> a;  
    cout << "Enter the second number: "<<endl;
    cin >> b;
    sum = a +b ;
    diffe= a - b;
    mult= a * b;
    divi= a / b; 
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diffe<< endl;
    cout << "Multiplication: " << mult << endl;
    cout << "Division: " << divi << endl;    
    if (a > b) {
        cout << a << " is greater than " << b<< endl;
        cout << b << " is smaller than " << a<< endl;
    } else if (b > a) {
        cout << b << " is greater than " << a << endl;
        cout << a << " is smaller than " << b<< endl;
    } else {
        cout << a << " and " << b << " are equal" << endl;
    }

//3. Write a program that calculate and display 
//the circumference of a circle. (C= 2|r)  
    float radius, circumference;
    
    cout << "Enter the radius of the circle: "<<endl;
    cin >> radius;
    
    circumference = 2 * 3.14 * radius;
    
    cout << "Circumference: " << circumference << endl;
 
float m,n;
m=(2*(n*n))+(3*n)+4;
root1 =((-3+sqrt((3*3)+(4*(4*2))))/(2*2));
root2 =((-3+sqrt((3*3)-(4*(4*2))))/(2*2));
cout << root1 <<" "<< root2;    
    return 0;
}
    