//LabP9-1 Author: Landen Drees  Description: Counting Vowels


#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main() {
    string str;
    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, str);
        if (str == "Q") break;
        cout << "Number of vowels: " << countVowel(str) << endl;
    }
    return 0;
}

int countVowel(string str) {
    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    return count;
}