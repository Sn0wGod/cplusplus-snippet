#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
/*#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int;*/
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int              long long int
#define pb              push_back
#define mp12            make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pq1             priority_queue<int>
#define pqr1            priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void fast()
{
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
void file(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int modInv(int a,int b,int m)
{
    int res=1;
    a=a%m;
    while(b>0){
        if(b&1){
            res=(res*a)%m;
        }
        a=(a*a)%m;
        b=b>>1;
    }
    return res;
}

int nCr(int n, int r){
        // code here
        if(n<r) return 0;
        if((n-r)<r) r = n-r;
        // int mod = 1000000007;
        int a = 1;
        int b = 1;
        for(int i=0;i<r;i++){
            a = (a*(i+1))%mod;
            b = (b*(n-i))%mod;
        }
       
        int x = (b*modInv(a,mod-2,mod))%mod;
        return x;
    }


bool p[100006];
vector<int> prime;
void seive(){
    for(int i=2;i<100006;i++) {
        if(p[i]){
            prime.pb(i);
            for(int j=i*i;j<=100006;j=j+i){
                p[j]=false;
            }
        }
    }

}

void testcases(){
      int t=10;
    srand(time(0)); 
    cout<<t<<endl;
    while(t--){
        int n = (rand()%(1000-100+1)) + 100;
        // unordered_set<int> s;
        vector<int> v;
        cout<<n<<endl;
        // int x = (rand()%(1000000000-100+1)) + 100;
        // cout<<x<<endl;
        for(int i=1;i<=n;i++){
            int aa = (rand()%(10-1+1)) + 1;
            cout<<aa<<" ";
            // s.insert(i);
            // v.push_back(i);
        }
        // cout<<endl;
        // for(int i=1;i<=n;i++){
        //     int bb = (rand()%(100-10+1)) + 10;
        //     cout<<bb<<" ";
        //     // s.insert(i);
        //     // v.push_back(i);
        // }
        // sort(v.begin(),v.end(),greater<int>());
        // for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        // for(auto x:s) cout<<x<<" ";
        cout<<endl;
        
        // int k = (rand()%(100000000-100000+1)) + 100000;
        // cout<<k<<endl;
    }
}


int32_t main()
{
 
    // memset(p,true,sizeof(p));   
    // seive();
    file();
    fast();
    int mo=1000000007;
    testcases();
    // cout<<"6 5"<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<i<<" "<<i+1;
    //     cout<<endl;
    // }

    


    return 0;
    
    
}

