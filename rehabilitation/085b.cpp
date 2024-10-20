#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <set>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    int n; cin >> n;
    set<int>hold;
    rep(i , n){
        int v; cin >> v;
        hold.insert(v);
    }
    cout << hold.size() << endl;;
}