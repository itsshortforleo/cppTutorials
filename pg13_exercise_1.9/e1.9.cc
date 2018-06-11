#include <iostream>

// Write a program that uses a while to sum the numbers from 50 to 100 inclusive.
int main(void){
    int val = 50, sum = 0;
    while (val < 101){
        sum = sum + val;
        val++;
        std::cout << "The sum is now " << sum << ", and val is " << val << std::endl; 
    } 
    return 0;
}