#include <iostream>
int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        char lowercaseCh = tolower(ch);
        if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
            std::cout << "The character is a vowel." << std::endl;
        } else {
            std::cout << "The character is a consonant." << std::endl;
        }
    } else {
        std::cout << "Invalid input. Please enter an alphabetic character." << std::endl;
    }
    return 0;
}

