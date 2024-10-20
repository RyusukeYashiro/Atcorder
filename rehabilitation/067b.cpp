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
    int n , k; cin >> n >> k;
    vector<int> hold(n);
    for(int i = 0; i < n; i++){
        cin >> hold[i];
    }
    sort(hold.rbegin() , hold.rend());
    int ans = 0;
    for(int i = 0; i < k; i++){
        ans += hold[i];
    }
    cout << ans << endl;
}