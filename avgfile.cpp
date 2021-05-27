#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream file;
    int n,i=0;
    float result=0;
    float avg;

    file.open("input.txt");

    if(file.fail())
    {
        cerr << "error opening the file" << endl;
    }
    else
    {
        while(!file.eof())
        {
            file >> n;
            result = result + n;
            i++;
        }
        avg = (result / i);
        cout << avg << endl;
    }
}
