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

// 10 10
// s.........
// #########.
// #.......#.
// #..####.#.
// ##....#.#.
// #####.#.#.
// g.#.#.#.#.
// #.#.#.#.#.
// #.#.#.#.#.
// #.....#...

const int dx[4] = {0 , 1 , 0 , -1};
const int dy[4] = {-1 , 0 , 1 , 0};

vector<string> hold;
vector<vector<bool> >seen;

void dfs(int x , int y , int h , int w){
    seen[x][y] = true;

    for(int dir = 0; dir < 4; dir++){
        int next_h = x + dx[dir];
        int next_w = y + dy[dir];

        if(next_h < 0 || next_h >= h || next_w < 0 || next_w >= w) continue;
        if(hold[next_h][next_w] == '#') continue;

        if(seen[next_h][next_w]) continue;

        dfs(next_h , next_w , h , w);
    }
}


int main(void){
    int h , w; cin >> h >> w;
    hold.resize(h);
    
    for(int i = 0; i < h; i++){
        cin >> hold[i];
    }

    int sh , sw , gw , gh;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(hold[i][j] == 's'){
                sh = i;
                sw = j;
            }
            if(hold[i][j] == 'g'){
                gh = i;
                gw = j;
            }
        }
    }

    seen.assign(h , vector<bool> (w , false));

    dfs(sh , sw, h , w);

    if(seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;
}