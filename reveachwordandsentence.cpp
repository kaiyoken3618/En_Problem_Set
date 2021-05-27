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
    cout << endl;

    char str2[100];int p =0;

    for(int k = strlen(str)-1; k>=0; k--)
    {
        str2[p] = str[k];
        p++;
    }
    strcat(str2," ");
    pos = 0;

       for(int m=0 ; m<=strlen(str2)-1; m++)
    {
        if(str2[m]==' ' && str2[m+1]!=' ')
        {
            for(int n = m; n>=pos; n--)
            {
                cout << str2[n];
            }
                pos = m+1;

        }
    }
    return 0;
}
