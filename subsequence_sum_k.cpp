# include<iostream>
# include<vector>
using namespace std;
void print(int idx,vector<int>v,int s,int k,vector<int>v2)
{
    if(idx==v.size() && s==k)
    {
       for(int i=0;i<v2.size();++i)
           cout<<v2[i]<<" ";
           cout<<endl;
           return ;
    }
    print(idx+1,v,s+v[idx],k,v2=v[idx]);

}
int main()
{

}