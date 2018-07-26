#include <iostream>

// In addition to the ++ operator that adds 1 to its operand,
// there is a decrement operator (--) that subtracts 1. Use the
// decrement operator to write a while that prints the numbers
// from ten down to zero.
int main(void){

    int val = 10;
    while(val >= 0){
        std::cout << val << std::endl;
        val--;
    }

    return 0;

}