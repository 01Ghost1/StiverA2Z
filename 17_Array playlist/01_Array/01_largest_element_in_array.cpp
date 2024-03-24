// Find largest element in an array
/*

*/
// optimal solution

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter no of elements in an array :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int largest = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
            largest = arr[i];
    }
    cout<<"\n largest element in an array is :"<<largest;
}