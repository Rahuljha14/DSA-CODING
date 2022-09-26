/******************************************************************************
INPUT1-15
OUTPUT1-9

INPUT2-100
OUTPUT2-10

INPUT3-1001
OUTPUT3-909
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int ans=0;
   for(int i=1;i<=n;i++)
   {  
       int count =0;
      
      int j=i;
       while(j!=0)
       {   
           j=j/10;
           count++;
           
       }
       if((count%2) != 0)
       ans++;
   }
   cout<<ans;

    return 0;
}