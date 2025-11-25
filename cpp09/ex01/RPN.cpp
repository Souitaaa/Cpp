#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}
RPN::RPN(const RPN &src) { *this = src; }
RPN &RPN::operator=(const RPN &src) 
{
    if (this != &src)
        this->numbers = src.numbers;
    return *this;
}
RPN::RPN(std::string str) 
{
    for (size_t i = 0; i < str.length(); i++)   
    {
        if (str[i] == ' ')
            continue;
        else if (isdigit(str[i]))
            numbers.push(str[i] - '0');
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') 
        {
            if (numbers.size() < 2)
                throw std::runtime_error("Error: Not enough operands");
            int b = numbers.top();
            numbers.pop();
            int a = numbers.top();
            numbers.pop();
            int result;
            if (b == 0)
                throw std::runtime_error("Error: Division by zero");
            switch (str[i]) 
            {
                case '+':
                    result = a + b;
                    break;
                case '-':
                    result = a - b;
                    break;
                case '*':
                    result = a * b;
                    break;
                case '/': 
                    result = a / b;
                    break;
                default:
                    throw std::runtime_error("Error: Unknown operator");
            }
            numbers.push(result);
        } 
        else
            throw std::runtime_error("Error: Invalid character");
    }
    if (numbers.size() != 1){
        std::cout << "size = " << numbers.size() << std::endl;
        throw std::runtime_error("Error: Invalid RPN expression");
    }
    std::cout << numbers.top() << std::endl;
}
