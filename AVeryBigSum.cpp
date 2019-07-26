/*
  Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description

Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

ar: an array of integers .
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int i,n,sum=0,rem=0;

    cin>>n;
    unsigned long long int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
        sum =sum+ar[i];
    cout<<sum;

return 0;
}
