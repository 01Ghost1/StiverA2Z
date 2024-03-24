/*
Take the age from the user anda then decide accordingly
1. If age < 18,
    print-> not eligible for job
2. If age >=18 and age<54,
    print-> "eligible for job"
3. If age >=55 and age <=57,
    print-> "eligible for job, but retirement soon."
4. If age > 57
    print-> retirement time
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<"\nEnter the age: ";
    cin>>age;
    if(age<18)
    cout<<"\nnot eligible for job";
    
    else if(age<=57)
            cout<<"\neligible for job";
        if(age>=55){
            cout<<"\n, but retirement soon.";
        }
    else
    cout<<"\nretirement time";
    

}