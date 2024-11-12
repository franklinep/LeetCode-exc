#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr)

#define MAX_NUM 200001
int psum[MAX_NUM];

int g(int n){
    int c = 0;
    while (n > 0)
    {
        n /= 3;
        c++;
    }
    return c;
}

void ft(){
    psum[0] = 0;
    for (int i = 1; i <= MAX_NUM; i++){
        psum[i] = g(i);
    }
}

void solve() {
    int l, r; 
    cin >> l >> r;
    int x = 2 * psum[l];
    for (int i = l+1; i <= r; i++){
        x += psum[i];
    }
    cout << x << "\n";
}

int main(){ 
    fastio;

    int t; 
    cin>>t;

    ft();
    while (t--) {
        solve();
    }

    return 0;
}