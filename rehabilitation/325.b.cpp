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
    vector<pair<int , int> > hold(n);
    for(int i = 0; i < n; i++){
        int a , b; cin >> a >> b;
        hold[i].first = a;
        hold[i].second = b;
    }
    int mx = 0;
    for(int i = 0; i <= 23; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            int start = (hold[j].second + i) % 24;
            int end = (hold[j].second + i + 1) % 24;
            // cout << start << " " << end << endl;
            if(start >= 9 && start <= 17 && end <= 18){
                sum += hold[j].first;
            } else {
                sum += 0;
            } 
        }
        // cout << "これがデバック" <<  i << " " << sum << endl;
        mx = max(sum , mx);
    }
    cout << mx << endl;
}