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
    for(int i = 0; i < m; i++){
        int a , b;
        cin >> a >> b;
        hold[a]++;
        hold[b]++;
    }
    for(int i = 1; i <= n; i++){
        if(hold[i] == 0) cout << 0 << endl;
        else cout << hold[i] << endl;
    }
}