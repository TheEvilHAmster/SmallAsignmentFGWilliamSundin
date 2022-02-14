#include <iostream>

using namespace std;

int add(int a, int b);

int main(){

    int result=0;

    result = add(1,4);
    cout << "Result: " << result;
    return 0;
}

int add(int a, int b){
    return a+b;
}


/*  reminder on how to c++
#include <iostream>
#include <cstdio>
#define LENGTH 20

using namespace std; //this is for so that you dont need to use std:: ex cout << "Hello, World!" << LENGTH <<  endl;

namespace utils{
    void sayHello(){
        std::cout << "Sup my man? "<<std::endl;
    }
}

int main() {
    std::cout << "Hello, World!" << LENGTH <<  std::endl;
    utils::sayHello();


    //you can use  c libs like this
    int test = 10;
    char str[] = "hello";
    printf("\n kek Im part os C not c++  %s %d", str, test);

    return 0;
}
*/