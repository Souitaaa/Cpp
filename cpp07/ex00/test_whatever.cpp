/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_whatever.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 00:00:00 by csouita           #+#    #+#             */
/*   Updated: 2025/07/19 00:00:00 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <cassert>
#include <iostream>
#include <string>

void test_swap() {
    std::cout << "Testing swap function..." << std::endl;
    
    // Test with integers
    int a = 5, b = 10;
    swap(a, b);
    assert(a == 10 && b == 5);
    std::cout << "✓ Integer swap test passed" << std::endl;
    
    // Test with strings
    std::string str1 = "hello", str2 = "world";
    swap(str1, str2);
    assert(str1 == "world" && str2 == "hello");
    std::cout << "✓ String swap test passed" << std::endl;
    
    // Test with floats
    float f1 = 3.14f, f2 = 2.71f;
    swap(f1, f2);
    assert(f1 == 2.71f && f2 == 3.14f);
    std::cout << "✓ Float swap test passed" << std::endl;
}

void test_min() {
    std::cout << "\nTesting min function..." << std::endl;
    
    // Test with integers
    assert(min(5, 10) == 5);
    assert(min(10, 5) == 5);
    assert(min(-5, -10) == -10);
    std::cout << "✓ Integer min tests passed" << std::endl;
    
    // Test with strings
    assert(min(std::string("apple"), std::string("banana")) == "apple");
    assert(min(std::string("zebra"), std::string("ant")) == "ant");
    std::cout << "✓ String min tests passed" << std::endl;
    
    // Test with equal values
    assert(min(7, 7) == 7);
    std::cout << "✓ Equal values min test passed" << std::endl;
    
    // Test with floats
    assert(min(3.14f, 2.71f) == 2.71f);
    std::cout << "✓ Float min test passed" << std::endl;
}

void test_max() {
    std::cout << "\nTesting max function..." << std::endl;
    
    // Test with integers
    assert(max(5, 10) == 10);
    assert(max(10, 5) == 10);
    assert(max(-5, -10) == -5);
    std::cout << "✓ Integer max tests passed" << std::endl;
    
    // Test with strings
    assert(max(std::string("apple"), std::string("banana")) == "banana");
    assert(max(std::string("zebra"), std::string("ant")) == "zebra");
    std::cout << "✓ String max tests passed" << std::endl;
    
    // Test with equal values
    assert(max(7, 7) == 7);
    std::cout << "✓ Equal values max test passed" << std::endl;
    
    // Test with floats
    assert(max(3.14f, 2.71f) == 3.14f);
    std::cout << "✓ Float max test passed" << std::endl;
}

int main() {
    std::cout << "=== Testing whatever.hpp template functions ===" << std::endl;
    
    try {
        test_swap();
        test_min();
        test_max();
        
        std::cout << "\n🎉 All tests passed successfully!" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "❌ Test failed: " << e.what() << std::endl;
        return 1;
    }
}
