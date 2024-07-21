#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    int num; cin >> num;
    //最初の値を-1にしておくことで１も拾えるようにしている
    int hold_max = -1;
    int ans_i = 0;
    for(int i = 1; i <= num; i++)
    {
        int hold_i = i;
        int ans = 0;
        while(hold_i % 2 == 0)
        {
            hold_i /= 2;
            ans++;
        }
        if(ans > hold_max)
        {
            hold_max = ans;
            ans_i = i;
        }
    }
    cout << ans_i << endl;
}
