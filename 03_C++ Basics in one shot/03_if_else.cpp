//Write a program that takes age as an input and prints u r adult or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age<18)
    cout<<"\nNot Adult";
    else
    cout<<"\nAdult";

    return 0;
}