# include<iostream>
# include<vector>
using namespace std;
int main()
{
    vector<vector<int> >v;
    int i,j;
    for(i=0;i<7;++i)
    {    vector<int>temp(i+1,1);
        for(j=1;j<i;++j)
        {
            temp[j]=v[i-1][j]+v[i-1][j-1];
        }
        v.push_back(temp);
    }
    for(i=0;i<v[6].size();++i)
       {
        cout<<v[6][i]<<" ";
       }
         

}