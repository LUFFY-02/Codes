// Codeforces Round #834 (Div. 3), problem: (B) Lost Permutation

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
   int a,b;
   cin>>a>>b;
   int array_sum=0;
   int ar[a];
   for(int i=0;i<a;i++)
   {
      cin>>ar[i];
      array_sum+=ar[i];
   }
   int mx=*max_element(ar,ar+a);
   int total=mx*(mx+1)/2;
   total-=array_sum;
   if(total==b)
   {
      cout<<"YES"<<endl;return;
   }
   if(total>b)
   {
      cout<<"NO"<<endl;return;
   }
   b-=total;
   while(b>0)
   {
      b-=(mx+1);
      mx++;
   }
   if(b==0) {cout<<"YES"<<endl;return;}
   else {cout<<"NO"<<endl;return;}
}

signed main()
{
   io_file();
   int t;
   cin>>t;
   while(t--)
      ans();
} 