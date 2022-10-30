#include <iostream>
#include "queue_application.h"

class queue_application;


int main() {
    queue_application processor(4);

    int number;

    while (std::cin >> number)
        std::cout << processor.next(number) << std::endl;

    return 0;
}