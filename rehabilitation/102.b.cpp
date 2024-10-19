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
    int mx = 0;
    vector<long> hold(n);
    for(int i = 0; i < n; i++) cin >> hold[i];
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(abs(hold[i] - hold[j]) > mx){
                mx = abs(hold[i] - hold[j]);
            }
        }
    }
    cout << mx << endl;
}