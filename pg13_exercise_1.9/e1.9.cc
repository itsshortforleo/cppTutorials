#include <iostream>

// Write a program that uses a while to sum the numbers from 50 to 100
int main(){

    int sum = 0, val = 50;
    while(val <= 100){
        sum += val;
        val++;
    }

    std::cout << "The sum from 50 to 100 inclusive is " << sum << std::endl;

    return 0;
}