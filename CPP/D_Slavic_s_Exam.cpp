#include<bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr)

void solve() {
    string s, t;
    cin >> s >> t;

    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == t[j]) j++;
        if(s[i] == '?') {
            if(j < t.length()) {
                s[i] = t[j];
                j++;
            } else s[i] = 'a';
        }
    }

    if(j >= t.length()) cout << "YES\n" << s << "\n";
    else cout << "NO\n";   
        
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