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
    int n , w; cin >> n >> w;
    vector<int> hold(n);
    rep(i , n) cin >> hold[i];
    vector<bool> can(w + 1);
    rep(i , n){
        if(hold[i] <= w) can[hold[i]] = true;
    }
    rep(i , n)rep(j , i){
        if(i == j) continue;
        int s = hold[i] + hold[j];
        if(s <= w) can[s] = true;
    }
    rep(i , n)rep(j , i)rep(z , j){
        int s = hold[i] + hold[j] + hold[z];
        if(s <= w) can[s] =  true;
    }

    int ans = 0;
    for(int i = 1; i <= w; i++){
        if(can[i]) ans++;
    }
    cout << ans << endl;

}