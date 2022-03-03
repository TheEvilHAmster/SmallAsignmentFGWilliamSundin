#include <iostream>
#include <stdlib.h>

int AbsolutDiffrence(int a, int b){
    int result;
    if (a == b){
        return 0;
    }
    if (a < b){
        result = a - b;
        return  result * -1;
    }
    if (b < a){
        result = b-a;
        return result *-1;
    }

}
int main() {

    srand (time(NULL));

    int num1= rand(),num2 = rand();
    std::cout << "Whats the absolut diffrence between num1: " << num1 << " and num2:" << num2 << "?" << std::endl;
    std::cout << "The Absolute diffrence is: " << AbsolutDiffrence(num1, num2) << std::endl;
    return 0;
}
