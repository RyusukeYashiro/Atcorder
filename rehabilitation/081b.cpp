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
    int n , m; cin >> n >> m;
    map<int , int> hold;
    for(int i = 0; i < n; i++){
        int v; cin >> v;
        hold[v] += 1;
    }
    vector<pair<int , int> > bass(hold.begin() , hold.end());
    sort(bass.begin() , bass.end() ,
        [](const pair<int ,int> &a , const pair<int , int> &b) {
            return (a.second < b.second);
        });
    int current_kind = bass.size();
    int ans = 0;
    if(current_kind > m){
        int num = abs(current_kind - m);
        for(int i = 0; i < num; i++){
            ans += bass[i].second;
        }
    } else {
        cout << 0 << endl;
        return (0);
    }
    cout << ans << endl;
}