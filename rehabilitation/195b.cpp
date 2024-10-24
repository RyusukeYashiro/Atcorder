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
    int a , b; cin >> a >> b;
    int w; cin >> w;
    w *= 1000;
    int mx = 0;
    int mn = INT_MAX;
    for(int i = 1; i <= w ; i++){
        if(a * i <= w && b * i >= w){
            mn = min(i , mn);
            mx = max(i , mx);
        }
    }
    if(mn == INT_MAX){
        cout << "UNSATISFIABLE" << endl;
        return (0);
    }
    cout << mn << " " << mx << endl;
}