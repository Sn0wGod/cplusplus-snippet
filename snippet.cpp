#include<bits/stdc++.h>
#define int             long long int
#define pb              push_back
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mod             1000000007
#define w(x)            int x; cin>>x; while(x--)
using namespace std;
 
void dfile() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
stack<int> st;

void insert_at_bottom(char x)
{
    if(st.size() == 0)
    st.push(x);
 
    else
    {
        char a = st.top();
        st.pop();
        insert_at_bottom(x);
        st.push(a);
    }
}
void reverse()
{
    if(st.size()>0)
    {
        char x = st.top();
        st.pop();
        reverse();
        insert_at_bottom(x);
    }
}

int32_t main() {
  
     
   dfile();
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse();

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}

