// What happens in the program presented in this section if the input
// values are all equal? What is there are no duplicated values?

#include <iostream>
#include <string>
void printOcurranceRate(int currVal, int count);

int main(int argc, char const *argv[])
{
    int currVal = 0, val = 0;

    if(std::cin >> currVal){
        int count = 1;
        while(std::cin >> val){
            if(currVal == val){
                count++;
            }
            else
            {
                printOcurranceRate(currVal, count);
                currVal = val;
                count = 1;
            }
        }
        printOcurranceRate(currVal, count);

    }
    return 0;
}

void printOcurranceRate(int currVal, int count){
    std::string singular = " time";
    std::string plural = " times";
    if(count == 1){
        std::cout << "The value " << currVal << " occurs " << count << singular << "." << std::endl;
    }
    else if (count > 1){
        std::cout << "The value " << currVal << " occurs " << count << plural << "." << std::endl;
    }

}
