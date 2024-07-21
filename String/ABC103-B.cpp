#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

// test case 1
// kyoto
// tokyo


string ft_solve(string s1 , string s2){
    int s_len = s1.size();
    for(int i = 0; i < s_len; i++)
    {
        if(s1 == s2) return "Yes";
        //s1sustr(x)でx文字以降を取り出す
        s1 = s1.substr(s_len - 1) + s1.substr(0 , s_len - 1);
    }
    return "No";
}

int main(void){
    string s1 , s2;
    cin >> s1 >> s2;
    cout << ft_solve(s1 , s2) << endl;
}