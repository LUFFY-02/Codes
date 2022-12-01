// Codeforces Round #277.5 (Div. 2), problem: (B) BerSU Ball

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
   cin>>n;
   int boys[102]={0};
   for(int i=0;i<n;i++)
   {
      int z;cin>>z;
      boys[z]++;
   }
   cin>>m;
   int ans=0;
   int girl[m];
   for(int i=0;i<m;i++)
   {
      cin>>girl[i];
   }
   sort(girl,girl+m);
   for(int i=m-1;i>=0;i--)
   {
      if(boys[girl[i]+1]>0)
      {
         boys[girl[i]+1]--;ans++;
      }
      else if(boys[girl[i]]>0)
      {
         boys[girl[i]]--;ans++;
      }
      else if(boys[girl[i]-1]>0)
      {
         boys[girl[i]-1]--;ans++;
      }
   }
   cout<<ans;
   return 0;
}