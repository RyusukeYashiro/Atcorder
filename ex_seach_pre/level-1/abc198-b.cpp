#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    string s;
    cin >> s;
    for(int i = 0; i <= 9; i++)
    {
        string t = "";
        for(int j = 1 ; j <= i; j++)
        {
            t += "0";
        }
        t = t + s;
        string re = t;
        reverse(re.begin() , re.end());
        if(t == re)
        {
            cout << "Yes" << endl;
            return (0);
        }
    }
    cout << "No" << endl;
}

//別

// bool is_check(string s)
// {
//     string re = s;
//     reverse(s.begin() , s.end());
//     return (re == s);
// }
// int main() {
//     int n; cin >> n;
//     if(n == 0)
//     {
//         cout << "Yes" << endl;
//         return (0);
//     }
//     while(n % 10 == 0)
//     {
//         n /= 10;
//     }
//     if(is_check(to_string(n))) cout << "Yes" << endl;
//     else cout << "No" << endl;
// }