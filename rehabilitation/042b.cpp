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
    int n , l; cin >> n >> l;
    vector<string> s(n);
    rep(i , n){
        cin >> s[i];
    }
    sort(s.begin() , s.end());
    string ans = "";
    for(int i = 0 ; i < n; i++){
        ans += s[i];
    }
    cout << ans << endl;
}