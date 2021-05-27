#include<bits/stdc++.h>

using namespace std;

int main()
{

    char str[100];
    int pos = 0;
    gets(str);

    strcat(str," ");

    for(int i=0 ; i<=strlen(str)-1; i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        {
            for(int j = i; j>=pos; j--)
            {
                cout << str[j];
            }
                pos = i+1;

        }
    }

    return 0;
}
