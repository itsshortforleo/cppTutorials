// Revise the program you wrote for the exercises 1.4.1 (p. 13) that
// printed a range of numbers so that it handles input in which the
// first number is smaller than the second.

#include <iostream>
// Exercise 1.4.1 (p. 13): Write a program that prompts the user for two integers.
// Print each number in the range specified by those two integers.
void printRangeAscending (int min, int max);
void printRangeDescending (int max, int min);
int main(void){
    int v1 = 0, v2 = 0;
    bool jobDone = false;
    while(!jobDone){
        std::cout << "Enter two numbers: " << std::endl;
        std::cin >> v1 >> v2;
        if(v1 <= v2){
                printRangeAscending(v1, v2);
                jobDone = true;
            }
            else{
                std::cout << "The first number must be less than the second number." << std::endl;
            }
                
    }
   
    return 0;
}

void printRangeAscending (int min, int max){

    while(min <= max){
        std::cout << min << std::endl;
        min++;
    }
}
