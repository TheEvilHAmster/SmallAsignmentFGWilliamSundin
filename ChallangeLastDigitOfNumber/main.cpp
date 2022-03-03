#include <iostream>
#include <cstdlib>

int LastDigitOfANumber(int a);

int main() {
    std::cout << "Hello, World!" << std::endl;

    srand (time(NULL));
    int num = rand();
    printf("A random num is: %i \n", num);

    num = LastDigitOfANumber(num);
    printf("The last Digit is %i", num);

    return 0;
}

int LastDigitOfANumber(int a){
    return (a % 10);
}
