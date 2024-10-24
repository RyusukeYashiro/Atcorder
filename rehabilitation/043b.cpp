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
    int n; cin >> n;
    vector<int> hold(n);
    int flag = true;
    for(int i = 0; i < n; i++){
        cin >> hold[i];
    }
    for(int i = 1; i < n; i++){
        if(hold[i - 1] != hold[i]) flag = false;
    }
    if(flag){
        cout << 0 << endl;
        return (0);
    }
    long long mn = INT_MAX;
    for(int i = -100 ; i <= 100; i++){
        long long sum = 0;
        for(int j = 0; j < n; j++){
            long long  v = (hold[j] - i) * (hold[j] - i);
            sum += v;
        }
        mn = min(mn , sum);
    }
    cout << mn << endl;
}