#include<bits/stdc++.h>

using namespace std;
int main()
{

    char str[100]; string rev;
    int pos=0;

    gets(str);



    rev = strrev(str);


    cout << "Reverse the orders of the sentences" << endl;

    rev = rev + " ";

    for(int i=0 ; i< rev.size(); i++)
    {
        if(rev[i]==' ' && rev[i+1]!=' ')
        {
            for(int j = i; j>=pos; j--)
            {
                cout << rev[j];
            }
                pos = i+1;

        }
    }

    return  0;
}
