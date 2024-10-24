#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <climits>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

vector<bool> seen;

void dfs(const vector<vector<int>> &g , int v){
    seen[v] = true;

    for(auto next_v : g[v]){
        if(seen[next_v]) continue;
        dfs(g , next_v);
    }
}

int main(void){
    int n , m; cin >> n >> m;
    int start; cin >> start;
    int target; cin >> target;
    vector<vector<int>> g(n);
    for(int i = 0; i < n; i++){
        int a , b; cin >> a >> b;
        g[a].push_back(b);
    }

    seen.assign(n , false);

    dfs(g , start);

    if(seen[target]) cout << "Yes" << endl;
    else cout << "No" << endl;
}