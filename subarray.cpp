#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a value: ";
    cin>>n;

    int a[n];
    cout<<"Enter the value of array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int curr=0;
    for(int i=0; i<n; i++){
        curr=0;
        for(int j=i; j<n; j++){
            curr = curr + a[j];
            cout<<curr<<endl;
        }
    }

    return 0;

}