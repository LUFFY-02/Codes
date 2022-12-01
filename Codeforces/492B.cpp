// Codeforces Round #280 (Div. 2), problem: (B) Vanya and Lanterns

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

signed main()
{   Monkey D Luffy
   io_file();
   // CODE ........................................................................
   int n,m;
   cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   } 
   sort(a,a+n);
   int r;
   r=max(a[0],m-a[n-1]) *2;
   for(int i=0;i<n-1;i++)
      r=max(r,(a[i+1]-a[i]));
   cout.precision(20);
   cout<<fixed<<r/2.0;
}