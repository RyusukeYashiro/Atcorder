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
    int money; cin >> money;
    vector<int> hold(n);
    int mn = INT_MAX;
    int count = n;
    for(int i = 0; i < n; i++){
        cin >> hold[i];
        money-= hold[i];
        mn = min(hold[i] , mn);
    }
    count += money / mn;
    cout << count << endl;
}