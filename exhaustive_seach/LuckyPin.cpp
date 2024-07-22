#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>



// 123123
// 213

int main(void){
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < 1000; i++)
    {
        string t;
        t = to_string(i);
        int ti = 0;
        for(int j = 0; j < n; j++)
        {
            if(s[j] == t[ti])
            {
                ti++;
                if(ti == 3) break;
            }
        }
        if(ti == 3) ans++;
    }
    cout << ans << endl;
}