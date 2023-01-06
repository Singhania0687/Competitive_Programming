# include <iostream>
using namespace std;
void bin(int n)
{
    if(n>1)
    
        (bin(n/2));
        cout<<n%2;
    
}
int main()
{
//    long long int n,c=0;cin>>n;
//     while(n>1)
//     {
//         if((n&1)==0)
//             {
//                 n>>=1;
//                 c++;
//                 }
//                 else
//                 break;
//                     }
//                     cout<<c;
        // int arr[10]={1,2,3,4,5,6,7,8,9,10};int k;
        // for(int i=0;i<10;++i)
        // {
        //    k=arr[i];
        // }
        int n;cin>>n;
        bin(n);
        
        



}