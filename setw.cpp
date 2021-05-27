#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    const unsigned int SIZE = 5; // change this to your needs
    vector<string> lines;
    string sname;

    //read loop:
    for (unsigned int i = 0; i < SIZE; i++){
        cout << "Enter sentence " << i+1 << " of " << SIZE << '\n';
        getline(cin,sname);
        lines.push_back(sname);
    }

    //display loop
    for (unsigned int j = 0; j < SIZE; j ++){
        string current_line = lines.at(j);
        unsigned int padding = 40 + (current_line.size() / 2);
        cout << setw(padding) << current_line << '\n'; // '\n' works faster then endl
    }
    return 0;
}
