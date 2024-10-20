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
    int a , b; cin >> a >> b;
    int ans = 0;
    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= a; j++){
            if(i + j > b) continue;
            int k = b - (i + j);
            if(k > a)continue;
            if(i + j + k == b) ans++;
        }
    }
    cout << ans << endl;
}