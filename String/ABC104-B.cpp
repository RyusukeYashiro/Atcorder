#include <iostream>
#include <string>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>


bool ft_solve(string s)
{
    if(s[0] != 'A') return false;
    
    int num_c = 0;
    for(int i = 2; i < s.size() - 1; i++ )
    {
        if(s[i] == 'C') num_c++;
    }
    if(num_c != 1) return false;

    int num_upper = 0;
    for(auto hold : s){
        if(isupper(hold)){
            num_upper++;
        }
    }
    if(num_upper != 2) return false;
    return true;
}

int main(void){
    string s;
    cin >> s;

    if(ft_solve(s)) cout << "AC" << endl;
    else cout << "WA" << endl;
}