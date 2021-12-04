#include <iostream>
#include <string>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string encrypted_message;
    getline(cin, encrypted_message);
    string str;
    for(auto i = 0; i< encrypted_message.size() -1; i+=2)
    {
        str = encrypted_message[i];
        str += encrypted_message[i+1];
        int j = stoi(str);
        cout << char(j);
        str.clear();
    }
}
