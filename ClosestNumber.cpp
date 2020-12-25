#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a, b, x, a_pow_b, y, m, n;
        cin>>a>>b>>x;
        a_pow_b=pow(a, b);
        y=a_pow_b/x;
        m=y*x;
        n=(y+1)*x;
        if(a_pow_b-m<n-a_pow_b)
            cout<<m<<endl;
        else
            cout<<n<<endl;
        t--;
    }
}
