#include <iostream>

// Rewrite the first two exercises from 1.4.1 (p. 13) using for loops.
// In addition to the ++ operator that adds 1 to its operand,
// there is a decrement operator (--) that subtracts 1. Use the
// decrement operator to write a for loop that prints the numbers
// from ten down to zero.
int main(void){
    for(int i = 10; i >= 0; --i){
        std::cout << i << std::endl;
    }
    
    return 0;
}