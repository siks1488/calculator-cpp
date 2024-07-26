#include <iostream>

int main(){
    std::string x;
    int a;
    int b;
    int result;

    std::cout <<"What operation do you want to perform?(+,-,*,/): ";
    std::cin >> x;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    if(x == "+"){
        result = a + b;
        std::cout << "The result is: " << result << std::endl;
    }
    else if (x == "-"){
        result = a - b;
        std::cout << "The result is: " << result << std::endl;
    }
    else if (x == "*"){
        result = a * b;
        std::cout << "The result is: " << result << std::endl;
    }
    else if (x == "/"){
        if(b != 0 ){
            result = a / b;
            std::cout << "The result is: " << result << std::endl;
        }else{
            std::cout << "ERROR: Division by zero is not allowed.";
        }
    }
    else{
        std::cout << "ERROR";
    }

    return 0;
}