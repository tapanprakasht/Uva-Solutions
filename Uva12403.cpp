#include<iostream>
using namespace std;
int main()
{
    long long t, k, ans=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin >> s;
        if(s=="donate")
        {
            cin >> k;
            ans = ans+k;
        }
        else if(s=="report")
        {
            cout << ans << endl;
        }
    }
    return 0;
}
