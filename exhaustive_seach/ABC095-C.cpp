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

// 今回全探索を行うのはABピザに絞る
// なぜなら、ABピザをab枚かえば、a:ab枚 , b:ab枚になるから
int main(void){
    int a , b , c , x , y;
    cin >> a >> b >> c >> x >> y;
    long long ans = LONG_MAX;
    for(int ab = 0; ab < 200001; ab++)
    {
        long long sum = c * ab;
        long long X_remain = x - ab / 2;
        long long Y_remain = y - ab / 2;

        if(0 < X_remain) sum += X_remain * a;
        if(0 < Y_remain) sum += Y_remain * b;
        ans = min(ans , sum);
    }
    cout << ans << endl;
    return (0);
}