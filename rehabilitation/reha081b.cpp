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
    vector<long> hold(n);
    for(int i = 0; i < n; i++){
        cin >> hold[i];
    }
    int count = 0;
    bool flag = true;
    while(flag){
        for(int i = 0; i < n; i++){
            if(hold[i] % 2 == 0) {
                hold[i] /= 2;
            } else {
                flag = false;
                break;
            }
        }
        if(flag){
            count++;
        } else {
            break;
        }
    }
    cout << count << endl;
}