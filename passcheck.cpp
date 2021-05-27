
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count =0;
    int rep =0;
    bool flag=false;
    int cnt=0;
    int rem=0;
    int n = 0;
    string s;
    cin >> s;
    n = s.size();

    if(n>=6 && n<=20)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a' && s[i] <='z')
            {
                for(int j=0; j<s.size(); j++)
                {
                    if(s[j]>='A' && s[j]<='Z')
                    {
                        for(int k=0; k<s.size(); k++)
                        {
                            if(s[k]>='0' && s[k] <='9')
                            {
                                cnt=3;
                                break;
                            }
                            else
                            {
                                continue;
                            }
                        }
                    }
                    else
                    {
                        continue;
                    }

                }
            }
            else
            {
                continue;
            }
        }
        for(int l=0; l<(s.size()-2); l++)
        {
            if(s[l]==s[l+1])
            {
                if(s[l+1]==s[l+2])
                {
                    rep++;
                    continue;

                }
                else
                {
                    cnt ++;
                    continue;
                }
            }
        }

    }
    if(n<6)
    {
        rem = 6 - n;
        cout << rem << endl;
    }
    if(n>20)
    {
        rem = n - 20;
        cout << rem << endl;
    }

    if(rep>0)
    {
        cout << rep << endl;
    }
    else if(rep<=0 && cnt>=3)
    {
        cout << "0"<< endl;
    }


    return 0;
}
