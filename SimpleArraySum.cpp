/*
Given an array of integers, find the sum of its elements.

For example, if the array ar=[1,2,3],1+2+3=6 , so return 6.

Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
*/

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int ar[1000],n,i,sum=0;
// cout << enter_number_of_elements_to_add;
    cin >>n;
for(i=0;i<n;i++)
cin>>ar[i];
    for(i=0;i<n;i++)
    sum= sum+ar[i];
    cout <<sum;
}
