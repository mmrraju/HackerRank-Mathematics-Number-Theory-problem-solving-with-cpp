#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int arra[n];
        for(int i=0; i<n; i++)
        {
            cin>>arra[i];
        }
        int  result=arra[0];
        for(int i=0; i<n; i++)
        {
            result=gcd(result, arra[i]);
        }
        if(result==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        t--;
    }
}
