/*
take the day number and print the corresponding day
for 1 print monday, 2 print Tuesday and so on for 7 sunday.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cout<<"\nEnter the day no :";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"\nMonday";
        break;
    
    case 2:
        cout<<"\nTuesday";
        break;
    
    case 3:
        cout<<"\nWednesday";
        break;
    
    case 4:
        cout<<"\nThursday";
        break;
    
    case 5:
        cout<<"\nFriday";
        break;
    
    case 6:
        cout<<"\nSaturday";
        break;
    
    case 7:
        cout<<"\nSunday";
        break;
    
    default:
        cout<<"\nInvalid";
        break;
    }
}