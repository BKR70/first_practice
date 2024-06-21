#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define srt(av) sort(av.begin(),av.end())
#define rev(av) reverse(av.begin(),av.end())
#define pii pair<int,int>
#define nl '\n'
#define NO cout<<"NO"<<nl
#define YES cout<<"YES"<<nl
#define ff first
#define ss second
#define MOD 1e9+7
using namespace std;

void p_solved() {
    int n,q,c; cin >> n >> q >> c;
    set<int> ans,tmp;
    tmp.insert(c);
    while(q--) {
        int mov; char ch; cin >> mov >> ch;
        for(auto x:tmp) {
            if(ch =='?') {
                int clockwise = x+mov;
                if(clockwise > n) ans.insert(clockwise-n);
                else ans.insert(clockwise);
                int anticlockwise = x-mov;
                if(anticlockwise <=0) ans.insert(n+anticlockwise);
                else ans.insert(anticlockwise);
            }
            else if(ch == '0') {
                int clockwise = x+mov;
                if(clockwise > n) ans.insert(clockwise-n);
                else ans.insert(clockwise);
            }
            else {
                int anticlockwise = x-mov;
                if(anticlockwise <=0) ans.insert(n+anticlockwise);
                else ans.insert(anticlockwise);
            }
        }
        tmp.clear();
        tmp = ans;
        ans.clear();
    }
    cout << tmp.size() << nl;
    for(auto val:tmp) cout << val << " ";
    cout << nl;
}
int32_t main() {
    //init_code();
    ios::sync_with_stdio(false); cin.tie(0);
    int t;cin>>t;
    //int t=1;
    //int cnt = 0;
    while(t--) {
        p_solved();
    }
    return 0;
}
