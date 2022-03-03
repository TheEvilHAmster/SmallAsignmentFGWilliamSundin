#include <iostream>

void swap(int& a, int& b);

int main() {
    std::cout << "Hello, World!" << std::endl;
    int num = 212;
    int other = 98;
    std::cout << "number a is: " << num << " and the other number is: " << other << std::endl;
    swap(num, other);
    std::cout << "number a is: " << num << " and the other number is: " << other << std::endl;

    return 0;
}

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;

}
