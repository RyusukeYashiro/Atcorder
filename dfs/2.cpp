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

vector<string> hold;

int dx[4] = {0 , 1 , 0 , -1};
int dy[4] = {1, 0 , -1 , 0};

bool dfs(vector<vector<int> > &g , int vh , int vw){
    g[vh][vw] = -1;
    for(int i = 0; i < 4; i++){
        int next_x = vh + dx[i];
        int next_y = vw + dy[i];

        if(next_x < 0 || next_x >= 10 || next_y < 0 || next_y >= 10) continue;
        if(g[next_x][next_y] == -1 || g[next_x][next_y] == 0) continue;

        dfs(g , next_x , next_y);
    }

    bool flag = true;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(g[i][j] == 1) flag = false;
        }
    }

    return (flag);
}

int main(void) {
    hold.resize(10);
    vector<vector<int> > g(10 , vector<int> (10));
    for(int i = 0; i < 10; i++){
        string s; cin >> s;
        hold[i] = s;
    }

    for(int i = 0 ; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(hold[i][j] == 'x') g[i][j] = 0;
            else g[i][j] = 1;
        }
    }

    
    for(int vh = 0; vh < 10; vh++){
        for(int vw = 0; vw < 10; vw++){
            if(g[vh][vw] == 0){
                vector<vector<int> > temp = g;
                temp[vh][vw] = 1;
                if(dfs(temp , vh, vw)) {
                    cout << "YES" << endl;
                    return (0);
                }
            }
        }
    }
    cout << "NO" << endl;
}