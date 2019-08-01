/*
Function Description

Complete the plusMinus function in the editor below. It should print out the ratio of positive, negative and zero items in the array, 
each on a separate line rounded to six decimals.

plusMinus has the following parameter(s):

arr: an array of integers
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n],i;
    float zero=0,pos=0,neg=0;
    for(i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
    if(arr[i]>0)
    {
        pos=pos+1;
    }
    else if(arr[i]<0)
    {
        neg=neg+1;
    }
    else
    {
        zero=zero+1;
    }
    }
    cout << fixed << setprecision(6)<<pos/n<<endl;
    cout << fixed << setprecision(6)<<neg/n<<endl;
    cout << fixed << setprecision(6)<<zero/n;


return 0;
  } 

