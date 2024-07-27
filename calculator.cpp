#include <iostream>

int main(){
    char x;
    int a;
    int b;
    int result;

    std::cout <<"What operation do you want to perform?(+,-,*,/): ";
    std::cin >> x;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    switch(x){
        case '+':
        result = a + b;
        std::cout << "The result is: " << result << std::endl;
        break;
        
        case '-':
        result = a - b;
        std::cout << "The result is: " << result << std::endl;
        break;

        case '*':
        result = a * b;
        std::cout << "The result is: " << result << std::endl;
        break;
        
        case '/':
        if (b == 0){
            std::cout << "ERROR: Division by zero is not allowed." << std::endl;
        }
        else{
            result = a / b;
            std::cout << "The result is: " << result << std::endl;
        }
        break;
        
        default:
        std::cout << "ERROR: Invalid operation." << std::endl;
        break;
    }



    return 0;
}
