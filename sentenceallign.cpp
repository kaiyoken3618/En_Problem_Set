

#include<bits/stdc++.h>
using namespace std;


int main()
{
    string t="Nahid ekta madar chod. Sharadin ganja khay. Meyeder proti durbol kintu meyeder sathe kotha bolte lojja pay. Nahid k shahajjo korar jonno ekjon loveguru lagbe.";
    string t1="";
    int cnt=0;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]!=' ')cnt++;
        else if(t[i]==' ')
        {
            if(t1.size()+cnt>20)
            {
                cout<<t1<<endl;
                t1.clear();
            }
            for(int j=cnt;j>=0;j--)
            {
                t1=t1+t[i-j];

            }
            cnt=0;
        }
        if(i+1==t.size())
        {
            if(t1.size()+cnt>20)
            {
                cout<<t1<<endl;
                t1.clear();
            }
            for(int j=cnt;j>0;j--)t1+=t[i-j+1];
            cout<<t1<<endl;
        }
    }


}
