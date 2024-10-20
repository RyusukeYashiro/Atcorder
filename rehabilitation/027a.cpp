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
    long long n , x; cin >> n >> x;
    vector<long long>hold(n);
    for(long long i = 0; i < n; i++){
        cin >> hold[i];
    }
    sort(hold.begin() , hold.end());
    int res = 0;
    for(long long i = 0; i < n; i++){
        if(hold[i] >= x){
            res++;
            x -= hold[i];
        } else {
            break;
        }
    }
    if(res == n && x != 0) res--;
    cout << res << endl;
}