#include <iostream>

int main(void){
    // int v1 = 1;
    // int v2 = 1;
    // int v3 = 0;
    // int v4 = 0;

    // std::cout << "Before increment operator, v1 = " << v1 << ", v2 = " << v2 << ", v3 = " << v3 << ", and v4 = " << v4 << std::endl;

    // v3 = ++v1;
    // v4 = v2++;

    // std::cout << "After increment operator, v1 = " << v1 << ", v2 = " << v2 << ", and v3 = " << v3 << std::endl;

    
    // for(int i = 0; i < 3; ++i)
    // {
    //     std::cout << i << std::endl;
    // }

    // for(int j = 0; j < 3; j++)
    // {
    //     std::cout << j << std::endl;
    // }

    // What does the following for loop do? What is the final value of sum?
    int sum = 0;
    for (int i = -100; i <= 100; ++i){
        sum += i;
    }

    // add all numbers from -100 until 100
    // sum ends up being zero

    return 0;

}