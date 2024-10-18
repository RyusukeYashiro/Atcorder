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
    string s; cin >> s;
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') count++;
    }
    cout << count << endl;
}