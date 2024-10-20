#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <map>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    string s; cin >> s;
    sort(s.begin() , s.end());
    map<char , bool>hold;
    for(char i = 'a'; i <= 'z'; i++){
        hold[i] = false;
    }
    for(int i = 0; i < s.length(); i++){
        hold[s[i]] = true;
    }
    for(char c = 'a'; c <= 'z'; c++){
        if(!hold[c]){
            cout << c << endl;
            return (0);
        }
    }
    cout << "None" << endl;
}