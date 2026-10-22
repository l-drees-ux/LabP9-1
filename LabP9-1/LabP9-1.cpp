//LabP9-1 Author: Landen Drees  Description: Counting Vowels


#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Number of characters: " << countCharacter(str) << endl;

    return 0;
}

int countCharacter(string str) {
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        count++;
    }

    return count;
}