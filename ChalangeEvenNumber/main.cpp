#include <iostream>
#include <stdlib.h>

bool IsItEven(int a){
    if(a % 2 == 0){
        return true;
    }
    return false;
}

int main() {
    std::cout << "checking if some random numbers are even" << std::endl;

    srand (time(NULL));

    int num[] = {rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),};

    for (int i = 0; i < 9; ++i) {
        std::cout <<"some random number: " << num[i] << " is it even: " << std::boolalpha << IsItEven(num[i]) << std::noboolalpha << std::endl;
    }




    return 0;
}
