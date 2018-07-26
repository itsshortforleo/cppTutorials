#include <iostream>

// Write a program that prompts the user for two integers.
// Print each number in the range specified by those two integers.
void printRangeAscending (int min, int max);
void printRangeDescending (int max, int min);
int main(void){
    int v1 = 0, v2 = 0;

    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;

    if(v1 <= v2)
        printRangeAscending(v1, v2);
    else 
        printRangeDescending(v1, v2);

    return 0;
 }

void printRangeAscending (int min, int max){

    while(min <= max){
        std::cout << min << std::endl;
        min++;
    }
}

void printRangeDescending (int max, int min){

    while(max >= min){
        std::cout << max << std::endl;
        max--;
    }
}