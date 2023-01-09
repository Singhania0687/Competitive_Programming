# include<iostream>
using namespace std;
void print(string st,string curr=" ",int idx=0)// ab
{                                                // __ ,a,b,ab
    if(idx==st.size())
          {cout<<curr<<" ";return ;}
           print(st,curr+st[idx],idx+1);
          print(st,curr,idx+1);
}
         
int main()
{
    string st,curr=" ";int idx=0;
    cin>>st;
    print(st,curr,idx);

}