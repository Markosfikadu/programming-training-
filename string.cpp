#include<iostream>
using namespace std;
string getdayofweek (int daynum){
    string dayname;
    switch (daynum){
    case 0: 
    dayname =" Sunday";
    break;
     case 1: 
    dayname =" Monday";
    break;
     case 2: 
    dayname =" Tuesday";
    break;
     case 3: 
    dayname =" Wednesday";
    break;
     case 4: 
    dayname =" Thursday";
    break;
     case 5: 
    dayname =" Friday";
    break;
     case 6: 
    dayname =" Saturday";
    break;
    default:
    dayname ="invalid day of the week";
    }
    return dayname;

}
int main()
{
cout <<getdayofweek(1);
return 0;
}