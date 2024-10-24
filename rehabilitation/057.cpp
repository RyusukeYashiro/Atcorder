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

int solve(long long n){
    int res = 0;
    while(n > 0){
        res++;
        n /= 10;
    }
    return res;
}

int main(void){
    long long n; cin >> n;
    long long res = 1e11;
    for(long long a = 1; a * a <= n; a++){
        if(n % a != 0) continue;
        long long b = n / a;
        long long temp = max(solve(a) , solve(b));
        res = min(res , temp);
    }
    cout << res << endl;
}