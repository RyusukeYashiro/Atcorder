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
    int ans = 1;
    for(int b = 2; b < n; b++){
        int power = b * b;
        while(1){
            if(power > n) break;
            ans = max(ans , power);
            power *= b;
        }
    }
    cout << ans << endl;
}