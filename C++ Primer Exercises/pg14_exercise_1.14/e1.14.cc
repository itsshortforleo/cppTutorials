#include <iostream>
// Compare and contrast the loops that used a for with those using a
// while. Are there advantages or disadvantages to using either form?
// While loop advantages:
//      Simpler syntax.
//      You can skip index increments/decrements
//      by using the 'continue' keyword.
//      Evaluates the condition first, unless you use 'do while'
// While loops disadvantages:
// 
// for loop advantages:
//      the for loop's index will always either increment or decrement
//      provided you don't break out of the loop early.
//      Convenient when you want to iterate a specific number of times.
//      Convenient when you want to 
// for loop disadvantages:
// 

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