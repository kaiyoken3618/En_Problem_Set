#include<bits/stdc++.h>

 using namespace std;

int main()
{
    string t = "A\nA B\nA B C\nA B C D\nA B C D E\n";
    cout << t;

    string t1 = "";

    int max = 50;
    int left = 0;


    for (int i = 0; i < t.size(); i++){

        t1 = t1 + t[i];
        if(t[i]=='\n')
        {
             left = (max - t1.size())/2;

            for(int k=0; k<left;k++)
             {
                cout << " ";
             }
             cout << t1;
             t1.clear();
        }

     }

    return 0;
}
