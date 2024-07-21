#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(1 <= i && i <= 9) ans++;
        else if(100 <= i && i <= 999) ans++;
        else if(10000 <= i && i <= 99999)ans++;
    }
    cout << ans << endl;
}
