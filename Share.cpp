/*____________________________ STARTER ____________________________*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define el cout << "\n"
#define ft first
#define sc second
#define all(x) (x).begin(), (x).end
#define pii pair<int, int>
#define on true
#define off false
#define skip continue;
#define N 1000000
using namespace std;

/*_____________________________ CODER _____________________________*/

//# #  #  ###   ##   ##   ##  #      #    ###     #     ###  # #  #
//# #  #   #   #  #  # # # #  #     # #   #  #   # #   #     # #  #
//###  #   #   #  #  #  #  #  #    #   #  ###   #   #   ##   ###  #
//# #  #   #   #  #  #     #  #    #####  # #   #####     #  # #  #
//# #  #   #    ##   #     #  #    #   #  #  #  #   #  ###   # #  #

/*____________________________ SETTING ____________________________*/

bool boost, file, multitest, preinput;
void setting();
void booster();
void file_worker();

/*_____________________ ALL VARIABLE USE HERE _____________________*/

int n;
int ans;

/*____________________ SUPPORT PROGRAM GO HERE ____________________*/

int sum_digit(long long input)
{
    int output = 0;
    while (input > 0)
    {
        output += input % 10;
        input /= 10;
    }
    return output;
}
bool check (long long input)
{
    vector <int> digit;
    set <int> num;
    while (input > 0)
    {
        digit.pb(input % 10);
        num.insert(input % 10);
        input /= 10;
    }
    if (digit.size() == num.size() && sum_digit(input) == n)
        return true;
    else
        return false;
}

/*_______________________ MAIN CODE GO HERE _______________________*/

void prepare_before_input()
{
    
}
void getinput()
{
    cin >> n;
}
void solve()
{
    for (long long i = 0; sum_digit(i) <= n; i ++)
    {
        if (check(i) == true)
        {
            cout << i; return;
        }
    }
}
int main()
{
    boost = on;
    file = off;
    multitest = on;
    preinput = off;
    setting();
    return 0;
}

/*_______________________ VOID CODE GO HERE _______________________*/

void setting()
{
    if (boost == on)
        booster();
    if (file == on)
        file_worker();
    if (preinput == on)
        prepare_before_input();
    if (multitest == on)
    {
        int number_of_test;
        cin >> number_of_test;
        cin.ignore();
        while (number_of_test--)
        {
            getinput();
            solve();
            el;
        }
    }
    else
    {
        getinput();
        solve();
    }
}
void booster()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void file_worker()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}