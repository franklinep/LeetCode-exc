#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<string> arr(n);
    for (auto &x: arr) {
        cin >> x;
    }
    
    queue<ii> q;
    vector<vector<int>> dp(n, vector<int>(m, -1));
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        q.emplace(a, b);
        dp[a][b] = 0;
    }
    
    auto ok = [&] (int x, int y) -> bool {
        return x >= 0 && x < n && y >= 0 && y < m && arr[x][y] == '.' && dp[x][y] == -1;  
    };
    
    int ans = 0;
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (ok(nx, ny)) {
                dp[nx][ny] = dp[x][y] + 1;
                ans += dp[nx][ny];
                q.emplace(nx, ny);
            }
        }
    }
    
    cout << ans << "\n";
    
    return 0;
}