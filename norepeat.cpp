#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  arr[100],arr2[100]; int k=0;
    for(int n=0; n<5; n++)
    {
        cin >> arr[n];
    }

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5 ; j++)
        {
                if(arr[i]==arr[j])
                {
                    break;
                }
                else
                {
                    arr2[k] = arr[i];
                    k++;
                }

        }
    }
    for(int l=0; l<k; l++)
    {
        cout << arr2[l];
    }
    return 0;
}
