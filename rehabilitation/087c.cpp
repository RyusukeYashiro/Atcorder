#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <climits>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    vector<vector<int> > hold(3 , vector<int> (3));
    rep(i , 3){
        rep(j , 3){
            cin >> hold[i][j];
        }
    }
    
    for(int a1 = 0; a1 <= 100; a1++){
        vector<int> b(3);
        for(int j = 0; j < 3; j++){
            b[j] = hold[0][j] - a1;
        }
        
        bool valid = true;
        for(int i = 0; i < 2; i++){
            int ai = hold[i + 1][0] - b[0];
            for(int j = 1; j < 3; j++){
                if(hold[i + 1][j] - b[j] != ai){
                    valid = false;
                    break;
                }
            }
            if(!valid) break;
        }

        if(valid) {
            cout << "Yes" << endl;
            return (0);
        }
    }
    cout << "No" << endl;
    return (0);
}