#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1;
    int j =0;

    cin >> s;

    for(int i =0; i<s.size();i++)
    {
        if(i==3)
        {
            continue;
        }
        else
        {
            s1 = s1 + s[i];
        }
    }

    cout << s1;

    return 0;
}
