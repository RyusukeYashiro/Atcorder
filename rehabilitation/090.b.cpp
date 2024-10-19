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

int solve(int a){
    int result = 0;
    int count = 0;
    while(a > 0){
        int digit = a % 10;
        a /= 10;
        if(count > 0) result = result * 10 + digit;
        else result = result + digit;
        count++;
    }
    // cout << result << endl;
    return (result);
}
int main(void){
    int a , b; cin >> a >> b;
    int ans = 0;
    for(int i = a; i <= b; i++){
        if(solve(i) == i)ans++;
    }
    cout << ans << endl;
}
