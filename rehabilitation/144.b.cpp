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
    int n; cin >> n;
    for(int i = 1; i < 10; i++){
        for(int j= 1; j < 10; j++){
            if(i * j == n){
                cout << "Yes" << endl;
                return (0);
            }
        }
    }
    cout << "No" << endl;
}