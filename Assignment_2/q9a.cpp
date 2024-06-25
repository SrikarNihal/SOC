#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long long int n, m;
    cin >> n >> m;
    vector<vector<long long int>> a(n, vector<long long int>(m));
    vector<vector<long long int>> b(n, vector<long long int>(m));
    
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
    
    vector<pair<long long int, long long int>> dp(n * m);
    
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < m; j++) {
            dp[a[i][j] - 1] = {i, j};
        }
    }
    
    for (long long int i = 0; i < n; i++) {
        long long int row = dp[b[i][0] - 1].first;
        for (long long int j = 0; j < m; j++) {
            if (dp[b[i][j] - 1].first != row) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    
    for (long long int i = 0; i < m; i++) {
        long long int col = dp[b[0][i] - 1].second;
        for (long long int j = 0; j < n; j++) {
            if (dp[b[j][i] - 1].second != col) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    
    cout << "YES" << endl;
}

int main() {
long long int t;
cin>>t;
while(t--){
solve();
}}

