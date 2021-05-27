#include<bits/stdc++.h>
#include<string>

using namespace std;

char to_lowercase(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }

    return c;
}

int main()
{
    string se="of";
    string s = "ACM academy of computer makers";

     for (char &c: s) {
        c = to_lowercase(c);
    }

    int start = s.find("of");

    string firsthalf = s.substr(0,start);
    string secondhalf = s.substr(start+se.length());

    string res = firsthalf + secondhalf;


    cout << res;


    return 0;

}
