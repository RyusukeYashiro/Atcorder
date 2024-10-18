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
    int mx_count = 0;
    int ans = 0;
    int i = 1;
    if(n == 1){
        cout << n << endl;
        return (0);
    }
    while (i <= n)
    {
        int num = i;
        int count = 0;
        while (num % 2 == 0)
        {
            num /= 2;
            count++;
        }
        if(count > mx_count){
            mx_count = count;
            ans = i;
        }
        i++;
    }
    cout << ans << endl;
}