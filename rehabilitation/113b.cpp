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
    int t , a; cin >> t >> a;
    double mn = INT_MAX;
    int ans = 0;
    vector<int> hold(n);
    for(int i = 0; i < n; i++){
        cin >> hold[i];
    }
    for(int i = 0; i < n; i++){
        double num = abs((t - hold[i] * 0.006) - a);
        if(mn > num){
            mn = num;
            ans = i + 1;
        }
    }
    cout << ans << endl;
}