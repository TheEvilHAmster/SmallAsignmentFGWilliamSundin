#include <iostream>

using namespace std;

int add(int a, int b);
int result;

int main(){

    int x(12);
    int* prt{ &x };
    int& ref = x;
    ref = 123;

    cout << "Address of x: " << &x << endl;
    cout << "Adress of x: " << prt << endl;
    cout << "Address of ref: " << &ref << endl;
    cout << "Value of x: " << *prt << endl;
    cout << "Value of x: " << x << endl;



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