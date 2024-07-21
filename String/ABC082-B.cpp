#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>


// ratcode
// atlas
// 例えば、ratcode を acdeort と並べ替え、atlas を tslaa と並べ替えれば、acdeort 
// < tslaa となります。

string ft_solve(string s, string t){
    int t_len = t.size();
    sort(s.begin() , s.end());
    sort(t.begin() , t.end());
    for(int i = 0; i < t_len; i++){
        t = t.substr(t_len - 1) + t.substr(0 , t_len - 1);
        if(s < t) return "Yes";
    }
    return "No";
}

int main(void){
    string s, t; cin >> s >> t;
    cout << ft_solve(s , t) << endl;
}