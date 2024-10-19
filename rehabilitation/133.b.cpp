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
    int n , d; cin >> n >> d;
    vector<vector<int> >hold(n , vector<int>(d));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < d; j++){
            cin >> hold[i][j];
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int sum = 0;
            for(int z = 0; z < d; z++){
                sum += abs(hold[i][z] - hold[j][z]) * abs(hold[i][z] - hold[j][z]);
            }
            // cout << sum << endl;
            
            for(int hey = 1; hey <= 1000; hey++){
                if(hey * hey == sum){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}