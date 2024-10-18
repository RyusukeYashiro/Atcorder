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
    string s, t; cin >> s >> t;
    sort(s.begin() , s.end());
    reverse(t.begin() , t.end());
    if(s < t) cout << "Yes" << endl;
    else cout << "No" << endl;
}