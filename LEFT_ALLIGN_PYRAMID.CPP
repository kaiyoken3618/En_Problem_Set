#include<bits/stdc++.h>

using namespace std;

int main()
{
    string t = "   A\n  A B\n A B C\nA B C D\n";


    string t1 = "";

    for(int i=0; i<t.size();i++)
    {
        t1 = t1 + t[i];
        if(t[i]=='\n')
        {
          for(int k=0; k<t1.size();k++)
          {
              if(t1[k]!=' ')
              {
                  for(int j=k;j<t1.size();j++)
                  {
                      cout << t1[j];

                  }
                  t1.clear();
                  break;
              }
          }
        }


    }


    return 0;
}
