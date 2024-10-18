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
    // internationalization
    string s; cin >> s;
    string ans = "";
    string size = to_string (s.size() - 2);
    ans += s[0];
    ans += size;
    ans += s[s.size() -1];
    cout << ans << endl;
}

// int main(void) {
//     string s; cin >> s;
//     int size = s.length();
//     cout << s[0] << size - 2 << s[size-1] << endl;
// }


