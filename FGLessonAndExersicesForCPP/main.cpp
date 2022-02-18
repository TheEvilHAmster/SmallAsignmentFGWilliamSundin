#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void lesson1();
void lesson2();
void lesson3();

string ReverseCollection(string word);
void GuessingGame();
void swap(int& a, int& b);
int LastDigitOfANumber(int a);
int AbsolutDiffrence(int a, int b);
float CelsiusToFarenheight(float Celsius);
bool IsItEven(int a);
void increment(int& number){
    number++;
    cout << "num in funk: "<<number << endl;
}



template<typename T, size_t S>
void swap(T(&items)[S]){
    T temp = items[0];
    items[0]=items[S-1];
    items[S -1] = temp;
}

class Rectangle{
private:
    int x{1};
    int y{1};
public:
    Rectangle(int x, int y){
        this->x = x;
        this->y = y;
    }
    Rectangle(){
    }
    ~Rectangle(){
        cout << "in Deconstructor" <<endl;
    }

    //Accessor methods
    int getX(){return x;}
    int getY(){return y;}
    //Mutator methods
    void setX(int x){this->x = x;}
    void setY(int y){this->y = y;}
    // Facilitator methods
    int area(){return  x*y;}
    int circumfrerence(){return (x*2)+(y*2);}
    // Inspector methods
    bool isSquere(){return x==y;}
};





int main(){

    Rectangle* rect1 = new Rectangle;
    cout << boolalpha;
    cout << "is a squere? " << rect1->isSquere() << endl;
    rect1->setX(2);
    rect1->setY(5);
    cout << "is a squere? " << rect1->isSquere() << endl;


    return 0;
}

string ReverseCollection(string word){
    int goingOtherWay, size = word.size();
    string reversedWord;

    for (int i = size-1; i >= 0; --i) {
        reversedWord += word[i];
    }
    return reversedWord;


}

void GuessingGame(){
    int numberToGuess, guessedNumber, guessedTimes = 0;

    srand (time(NULL));

    numberToGuess = rand() % 100 + 1;

    do {

        cout << "Guess the number (1 to 100): " << endl;
        scanf ("%d",&guessedNumber);
        guessedTimes++;

        if (numberToGuess < guessedNumber){
            cout << "The number you are guessing is lower, please try again" << endl;

        }
        else if (numberToGuess > guessedNumber){
            cout << "The number you are guessing is higher, please try again" << endl;
        }

    }while(numberToGuess != guessedNumber);

    cout << "Congratulations you where right with the number: " << guessedNumber << " it took you " << guessedTimes <<
    " to guess the number" << endl;

}

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;

  //int num = 212;
  //int other = 98;

  //cout << "number a is: " << num << " and the other number is: " << other << endl;

  //swap(num, other);

  //cout << "number a is: " << num << " and the other number is: " << other << endl;
}

int LastDigitOfANumber(int a){
    return (a % 10);
}

bool IsItEven(int a){
    if(a % 2 == 0){
        return true;
    }
    return false;
}

float CelsiusToFarenheight(float Celsius){
    return (Celsius * 9 / 5 )+ 32;
}

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

void lesson1(){
    int x(12);
    int* prt{ &x };
    int& ref = x;
    ref = 123;

    cout << "Address of x: " << &x << endl;
    cout << "Adress of x: " << prt << endl;
    cout << "Address of ref: " << &ref << endl;
    cout << "Value of x: " << *prt << endl;
    cout << "Value of x: " << x << endl;
}
void lesson2(){
    int numbers[]{12,123,1,142,1234};
    int* ptr = numbers;

    cout << numbers << endl;
    cout << ptr << endl;
    cout << &numbers[0] << endl;

    for (size_t i = 0; i < 5; ++i) {
        cout << numbers[i] << endl;
        cout << *(numbers + i) << endl;
        cout << *(ptr + i) << endl;
        cout << ptr[i] << endl;
    }
    while (ptr < numbers + (sizeof(numbers)/4)){
        cout << *ptr++ << endl;
    }
}
void lesson3(){
    int* ptr = new int[100];
    delete[] ptr;
    ptr = new int{100};

    cout << "my int on heap" << *ptr << endl;

    delete ptr;
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