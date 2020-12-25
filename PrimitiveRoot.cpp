#include<bits/stdc++.h>
using namespace std;
int power(long long int x, unsigned int y, long long int p)
{
    long long int res=1;
    x=x%p;
    while(y>0)
    {
        if (y&1)
            res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}
int main()
{
    long long int n;
    cin>>n;
    long long int number=n-1;
    vector<long long int> fact;
    for(long long int i=2; i*i<=number; i++)
    {
        if(number%i==0)
            fact.push_back(i);
        while(number%i==0)
        {
            number/=i;
        }
    }
    if (number>2)
        fact.push_back(number);
    long long int small;
    for(long long int i=2; i<n; i++)
    {
        bool flag=true;
        for(auto prime: fact)
        {
            if(power(i, n/prime, n)==1)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            small=i;
            break;
        }
    }
    cout<<small<<endl;
    n--;
    for(auto fa:fact)
    {
        n=n/fa*(fa-1);
    }
    cout<<n<<endl;
}
/*#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0)return false;
    for(int i=5; i*i<=n; i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}
int power(int x, unsigned int y, int p)
{
    int res=1;
    x=x%p;
    while(y>0)
    {
        if (y&1)
            res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}
void primeGenerate(unordered_set<int>& s, int n)
{
    while(n%2==0)
    {
        s.insert(2);
        n=n/2;
    }
    for(int i=3; i<=sqrt(n); i+=2)
    {
        while(n%i==0)
        {
            s.insert(i);
            n=n/i;
        }
    }
    if (n>2)
        s.insert(n);
}
int findRoot(int n)
{
    unordered_set<int> s;
    if(isPrime(n)==false)
        return -1;
    int EulerFun=n-1;
    primeGenerate(s, EulerFun);
    for(int r=2; r<=EulerFun; r++)
    {
        bool flag=false;
        for(auto it=s.begin(); it!=s.end(); it++)
        {
            if(power(r, EulerFun/(*it), n)==1)
            {
                flag =true;
                break;
            }

        }
        //cout<<r<<endl;
        if(flag==false)
        {
            //cout<<r<<endl;
            return r;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    cout<<findRoot(n)<<endl;

}*/
