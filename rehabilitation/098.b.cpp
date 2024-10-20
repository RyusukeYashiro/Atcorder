#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <set>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;

    for(int i = 1; i < n; i++){
        int count = 0;
        for(char c = 'a'; c <= 'z'; c++){
            bool left = false;
            bool right = false;
            for(int j = 0; j < i; j++){
                if(s[j] == c){
                    left = true;
                }
            }
            for(int j = i; j < n; j++){
                if(s[j] == c){
                    right = true;
                }
            }
            if(left && right) count++;
        }
        ans = max(ans , count);
    }
    cout << ans << endl;
}