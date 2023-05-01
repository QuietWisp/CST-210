
#include <iostream>
#include <string>
using namespace std;

void encrypt(string &s, int n) //takes two arguments, string &s and int n
{
    for (int i = 0; i < s.length(); i++) //reads string length
    {
        if (s[i] > 64 && s[i] < 91) //checks if the string is all lowercase
        {
            s[i] = s[i] + 32; //adds 32 to the ascii value to change any upper to lowercase characters
        }
    }
    for (int i = 0; i < s.length(); i++) //reads string length
    {
        if (s[i] == 32) {
            s[i] = ' ';
            continue; //skips over the space character
        }
        s[i] = char(int(s[i] + n - 97) % 26 + 97); //takes the ascii value, subtracts it by 97, adds 26, and adds 97 again
    } //this ensures that the characters of the string are between 97-122
        //the result s[i] is the current character string
}

int main()
{
    string word; //word == string, stores the user's input
    int shift;  //shift == int, stores the shift value
    cout << "What would you like to encrypt? : "; //text you'd like to encrypt
    getline(cin, word); //takes the entered word into a string
    cout << endl << "What is the shift? "; //number of shifts
    cin >> shift; //takes the shift number into int
    encrypt(word, shift); //encrypts the word + shift
    cout << word; //output's the new encrypted word
}
