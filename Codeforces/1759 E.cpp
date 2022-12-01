// Codeforces Round #834 (Div. 3), problem: (E) The Humanoid

#include<bits/stdc++.h>
using namespace std;
using ll= long long;
#define Monkey ios_base::sync_with_stdio(false);
#define D cin.tie(NULL);
#define Luffy cout.tie(NULL);
#define pb push_back
typedef vector<int> vi;
void io_file(){
   #ifndef ONLINE_JUDGE 
      freopen("Input.txt","r",stdin);
      freopen("Output.txt","w",stdout);
   #endif
}

void ans()
{
   ll x,b1;
   cin>>x>>b1;
   ll a[x];
   for(ll i=0;i<x;i++)
   {
      cin>>a[i];
   }
   sort(a,a+x);
   ll b2=b1;
   ll b3=b1;
   ll green=2,blue=1; 
   ll no1=0,no2=0;
   for(ll i=0;i<x;i++)
   {  
      while(b1<=a[i] && (green>0 || blue>0))
      {
         if(green>0)
            {b1*=2;green--;}
         else
            {b1*=3;blue--;}
      }
      if(b1<a[i])
         break;
      if(b1>a[i])
      {
         b1+=(a[i]/2);
         no1++;
      }
   }
   blue=1;green=2;
   for(ll i=0;i<x;i++)      
   { 
      while(b2<=a[i] && (green>0 || blue>0))
      {
         if(blue>0)
            {b2*=3;blue--;}
         else
            {b2*=2;green--;}
      }
      if(b2<=a[i])
         break;
      if(b2>a[i])
      {
         b2+=(a[i]/2);
         no2++;
      }
   }
   blue=1;green=2;
   ll no3=0;
   for(ll i=0;i<x;i++)      
   { 
      while(b3<=a[i] && (green>0 || blue>0))
      {
         if(green==2)
            {b3*=2;green--;}
         else if(blue==1) {b3*=3;blue--;}
         else if(green==1) {b3*=2;green--;}
      }
      if(b3<=a[i])
         break;
      if(b3>a[i])
      {
         b3+=(a[i]/2);
         no3++;
      }
   }
   cout<<max(no1,max(no2,no3))<<endl;
   return;
}

signed main()
{
   io_file();
   int t;
   cin>>t;
   while(t--)
      ans();
} 