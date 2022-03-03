#include <iostream>
#include <stdlib.h>


std::string ReverseCollection(std::string word){
    int size = word.size();
    std::string reversedWord;

    for (int i = size-1; i >= 0; --i) {
        reversedWord += word[i];
    }
    return reversedWord;


}

int main() {

    std::string wordToReverce;
    std::cout << "type a word to reverse: " << std::endl;
    std::cin >> wordToReverce;
    std::cout << "your word is: " << wordToReverce << " and reversed its: " << ReverseCollection(wordToReverce) << std::endl;

    return 0;
}
