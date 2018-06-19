#include <iostream>

// Rewrite the first two exercises from 1.4.1 (p. 13) using for loops.
// Write a program that uses a for loop to sum the numbers from 50 to 100
int main(void){
    int sum = 0;
    for(int val = 50; val <= 100; ++val){
        sum += val;
    }  
    std::cout << sum << std::endl;
    return 0;
}