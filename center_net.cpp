#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string in_str;
    cout << "Enter the a sentence " << endl;
    in_str = "kai";

    int const screen_len = 10;
    int in_len = in_str.size();

    int pad_left  = (screen_len - in_len)/2;
    int pad_right = screen_len - pad_left - in_len;

    string out_str = string( pad_left, '-' ) + in_str + string( pad_right, '-' );
    cout << out_str;

    return 0;
}
