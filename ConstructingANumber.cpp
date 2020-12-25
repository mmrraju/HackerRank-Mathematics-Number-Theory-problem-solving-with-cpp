#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;

        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
            while(arr[i]!=0)
            {
                sum=sum+arr[i]%10;
                arr[i]=arr[i]/10;
            }
        }
        if(sum%3==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        t--;
    }
}
