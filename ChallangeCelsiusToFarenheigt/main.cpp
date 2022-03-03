#include <iostream>

float CelsiusToFarenheight(float Celsius){
    return (Celsius * 9 / 5 )+ 32;
}

int main() {
    float num = 50;
    std::cout << "p1- Wow its so hot out its 50 C out!" << std::endl;
    std::cout << "p2- Whats that in freedom units?" << std::endl;
    std::cout << "p1- according to this function its: " << CelsiusToFarenheight(num) << " in freedom units" << std::endl;


    return 0;
}
