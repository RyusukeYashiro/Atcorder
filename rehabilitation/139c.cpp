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
    vector<int> hold(n);
    rep(i , n) cin >> hold[i];
    reverse(hold.begin() , hold.end());
    int ans = 0;
    int val = 0;
    for(int i = 1; i < n; i++){
        if(hold[i - 1] <= hold[i])val++;
        else val = 0;
        ans = max(val , ans);
    }
    cout << ans << endl;
}