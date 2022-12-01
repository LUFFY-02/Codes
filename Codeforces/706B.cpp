// Codeforces Round #834 (Div. 3), problem: (E) The Humanoid

#include<bits/stdc++.h>
using namespace std;
using ll= long long;
#define Monkey ios_base::sync_with_stdio(false);
#define D cin.tie(NULL);
#define Luffy cout.tie(NULL);
#define pb push_back
typedef std::vector<int> vi;
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){for(int i=0;i<n;i++) cout << arr[i] << " ";cout << "\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;for(int i=0;i<n;i++)s+=v[i];return s;}
void io_file(){
   #ifndef ONLINE_JUDGE 
      freopen("Input.txt","r",stdin);
      freopen("Output.txt","w",stdout);
   #endif
}
void ans()
{
   int x;cin>>x;
   int a[x];
   for(int i=0;i<x;i++)
      cin>>a[i];
   sort(a,a+x);
   int k;cin>>k;
   int ans=0;
   while(k--)
   {
      int z;cin>>z;
      ans=upper_bound(a,a+x,z)-a;
      cout<<ans<<endl;
   }
}
signed main()
{
   Monkey D Luffy
   io_file();
   // CODE ........................................................................
   ans();
}