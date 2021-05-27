#include<bits/stdc++.h>

using namespace std;

int main()
{

     int arr[100];
     int k=0;
     int res[100];

     gets(arr);

     for(int i=0; i<strlen(arr); i++)
     {
        for(int j=i+1;j<strlen(arr);j++)
        {

            if(arr[i] == arr[j])
            {
                res[k] = arr[i];

                if(res[k]!=res[k+1])
                {
                    cout << res[k];
                    k++;
                }
            }
        }
     }


    return 0;
}
