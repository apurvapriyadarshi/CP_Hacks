/*
program for printing k largest elements in an array. Elements in array can be in any order.
For example, if given array is [1, 23, 12, 9, 30, 2, 50] and you are asked for the largest 3 elements i.e., k = 3 then your program should print 50, 30 and 23.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    cout << "Hello World!" << endl;
    */
    int tc=0;
    cin>>tc;
    while(tc--)
    {
        int inp,n,k,temp=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(arr[j] > arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(int i=0;i<k;i++)
        {
            cout<<arr[n-i-1]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
