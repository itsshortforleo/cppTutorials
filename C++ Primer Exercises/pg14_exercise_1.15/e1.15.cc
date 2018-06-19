// Write programs that contain the common errors discussed in the box on page 16.
// Familiarize yourself with the messages the compiler generates.

#include <iostream>

int main(){
    int sum = 0, value = 0;
    // read until end-of-file (EOF), calculating a running total of all values read
    while(std::cin >> value){
        sum += value; // equivalent to sum = sum + value
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}

