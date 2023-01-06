# include<iostream>
# include<vector>
using namespace std;
const int n=1e5;
//int dp[n];
int main()
{     int i,j;
vector<vector<int> >v(18,vector<int>(30,0));
// int arr[25][25];
     for(i=0;i<18;++i)
     {
          for(j=0;j<=i;++j)
          { 
               if(j==0 || j==i)
            v[i][j]=1;
            else
            v[i][j]=v[i-1][j]+v[i-1][j-1];
          }
     }
     for(i=0;i<18;++i)
     {
          for(j=0;j<=i;++j)
               cout<<v[i][j];
               cout<<endl;
     }
}