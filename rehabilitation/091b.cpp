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

int main(void){
    int n; cin >> n;
    map<string , int> blue;
    for(int i = 0; i < n; i++){
        string v; cin >> v;
        blue[v] += 1;
    }
    int m; cin >> m;
    for(int i = 0; i < m; i++){
        string v2; cin >> v2;
        blue[v2] -= 1;
    }
    int mx = 0;
    for(auto v : blue){
        mx = max(v.second , mx);
    }
    // if(mx > 0) cout << 0 << endl;
    cout << mx << endl;
}