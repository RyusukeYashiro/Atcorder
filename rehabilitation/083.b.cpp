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
    int a , b; cin >> a >> b;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        int num = i;
        int digit = 0;
        while(num > 0){
            digit += num % 10;
            num /= 10;
        }
        if(digit >= a && digit <= b){
            sum += i;
        }
    }
    cout << sum << endl;
}