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
    vector<int> hold(n);
    for(int i = 0; i < n; i++){
        cin >> hold[i];
    }
    sort(hold.begin() , hold.end());
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            for(int k = 0; k < j; k++){
                if(hold[k] != hold[j] and hold[j] != hold[i] and hold[k] + hold[j] > hold[i]) ans++;
            }
        }
    }
    cout << ans << endl;
}