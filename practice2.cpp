# include<iostream>
# include<vector>
using namespace std;
int main()
{ 
    int rowIndex;cin>>rowIndex;
    vector<vector<int> >v;
        int i,j;
       vector<int>res;
        for(i=0;i<=rowIndex;++i)
        {
            vector<int>temp(i+1,1);
            for(j=1;j<i;++j)
            temp[j]=v[i-1][j-1]+v[i-1][j];
            v.push_back(temp);
            if(i==rowIndex-1)
              res=temp;
        }
       for(i=0;i<rowIndex;++i)
       cout<<res[i];
}