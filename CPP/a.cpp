#include<bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr)

void solve(){
    int k = 0; // Tiempo inicial actual
    int n, s, m;
    cin >> n >> s >> m;
    bool flag = false;
    int l, r;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        if(l-k>=s) {flag = true;}
        k = r;
    }
    if(m-k>=s) flag = true;


    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){ 
    FAST_IO;

    int t; 
    cin>>t;

    while (t--) { 
        solve();
    }

    return 0;
}