#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

// abaababaab

int ft_solve(string s){
    int s_len = s.length();
    int result = 0;
    for(int i = 2; i < s_len - 1; i++)
    {
        if(i % 2 == 0)
        {
            string a = s.substr(0 , i / 2);
            string b = s.substr(i / 2, i / 2);
            if(a == b) result = max(result , i);
        }
    }
    return result;
}

int main(void){
    string s; cin >> s;
    cout << ft_solve(s) << endl;
}