#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>


//全探索パターン２：あり得るものを全て試す
// 制約は高々:50000
int main(void){
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        double x = i;
        x = (int)(x * 1.08);
        if(x == n)
        {
            cout << i << endl;
            return (0);
        }
    }
    cout << ":(" << endl;
}