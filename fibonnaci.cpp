# include<iostream>
using namespace std;
int Fibbo(int n)
        {
            if(n==0 || n==1)
                return n;

           return (Fibbo(n-1)+Fibbo(n-2));
        }
int main()
{
    int x,i;cin>>x;
    for(i=0;i<=x;++i)
    {
    cout<<Fibbo(i)<<" ";}
}   // 0 1 1 2 3 5 8