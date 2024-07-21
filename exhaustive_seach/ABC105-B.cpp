#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    int n; cin >> n;
    for(int n4 = 0; n4 < 101; n4++)
    {
        for(int n7 = 0; n7 < 101; n7++)
        {
            if(n4 * 4 + n7 * 7 == n)
            {
                cout << "Yes" << endl;
                return (0);
            }
        }
    }
    cout << "No" << endl;
}