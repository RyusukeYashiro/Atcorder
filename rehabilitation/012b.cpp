#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    int n; cin >> n;
    vector<long long> hold(n * 3);
    rep(i , n * 3) cin >> hold[i];
    sort(hold.begin() , hold.end());
    long long ans = 0;
    for(int i = n; i < (n * 3); i+=2){
        ans += hold[i];
    }
    cout << ans << endl;
}