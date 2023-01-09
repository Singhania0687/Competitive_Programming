# include<iostream>
# include<vector>
using namespace std;
void swap(vector<int>&v)
{
      int i,temp;
      for(i=0;i<v.size()/2;++i)
      {
           temp=v[i];
           v[i]=v[v.size()-1-i];
           v[v.size()-1-i]=temp;
      }
      return ;
}
void display(vector<int>v)
{
    int i;
    for(i=0;i<v.size();++i)
    cout<<v[i]<<" ";
    return ;
}
int main()
{
    int n,i,x;cin>>n;
    vector<int>v(n,0);
    for(i=0;i<n;++i)
    {
        cin>>x;
        v[i]=x;
    }
    cout<<" Before Swapping"<<endl;
    display(v);
    swap(v);
    cout<<" \n"<<" After swapping "<<endl;
    display(v);
}