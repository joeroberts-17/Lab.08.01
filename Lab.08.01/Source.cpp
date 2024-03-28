/*
Lab.08.01
Despription: how many vowels 
Date: 3/28/24
JOE ROBERTS
*/
#include <iostream>
#include <string>
using namespace std;

// Function prototypes for both character count and vowel count 
int countCharacter(string str);
int countVowel(string str);

int main() {
    string input;

    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);

        if (input == "Q")
            break;

        // Call the countVowel function and output the result
        cout << "Vowel count: " << countVowel(input) << endl;
    }

    return 0;
}

// Function to count the number of characters in a string
int countCharacter(string str) {
    return str.length();
}

// Function to count the number of vowels in a string
int countVowel(string str) {
    int count = 0;
    for (char c : str) {
        // Convert the character to lowercase for easier comparison
        char lowercase = tolower(c);
        // Check if the character is a vowel
        if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u') {
            count++;
        }
    }
    return count;
}
