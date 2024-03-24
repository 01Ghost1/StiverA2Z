/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
*/

//here for eg: input : 24 it will print F , but all the conditions will be executed and then return false so this is time consuming process. this happends for multiple if statements
// but for else if statements this does'nt happends. i.e if 24 is true none of the other statements will be executed.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cin>>marks; 
    if(marks < 25){
        cout<<"F"<<endl;
    }
    else if(marks>=25 && marks<=44){
        cout<<"E"<<endl;
    }
    
    else if(marks>=45 && marks<=49){
        cout<<"D"<<endl;
    }
    
    else if(marks>=50 && marks<=59){
        cout<<"C"<<endl;
    }
    
    else if(marks>=60 && marks<=79){
        cout<<"B"<<endl;
    }
    
    else if(marks>=80 && marks<=100){
        cout<<"A"<<endl;
    }
    
    return 0;
}