#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    int n,d; cin >> n >> d;
    int count = 0;

    vector<vector<int>> hold(n , vector<int>(d));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < d; j++)
        {
            cin >> hold[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int sq = 0;
            for(int k = 0; k < d; k++)
            {
                int s = hold[i][k] - hold[j][k];
                sq += s * s;
            }
            bool flag = false;
            for(int k = 1; k <= sq; k++)
            {
                if(k * k == sq) flag = true;
            }
            if(flag) count++;
        }
    }
    cout << count << endl;
}
