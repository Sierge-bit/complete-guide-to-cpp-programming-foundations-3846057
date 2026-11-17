// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; //since this is at the same indentation they are global variables

int main(){
    bool my_flag; //local variable
    a = 7; //local variable
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positve;
    positve = b - a;
    std::cout << "b - a (unsinged) = " << positve << std::endl; 
    
    //when the code is ran you will see that when we usigned a variable and that varable became a -2 we will get the bianary version of that number. So if the number is negative do not use unsigned.




    std::cout << std::endl << std::endl;
    return 0;
}
