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

int solve(int num){
    int result = 0;
    while(num > 0){
        int digit = num % 10;
        result += digit;
        num /= 10;
    }
    return (result);
}
int main(void){
    int n; cin >> n;
    int mn = INT_MAX;
    for(int i = 1 ; i < n; i++){
        int remain = n - i;
        int sum = 0;
        sum+= solve(i);
        sum+= solve(remain);
        mn = min(sum, mn);
    }
    cout << mn << endl;
}