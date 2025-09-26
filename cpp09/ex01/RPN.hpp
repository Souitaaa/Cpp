#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
    private:    
        std::stack<int > numbers;
    public :   
        RPN();
        RPN(std::string str);
        ~RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
};


#endif 