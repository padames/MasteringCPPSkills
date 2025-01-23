// utility functions
#include <numeric>
#include <vector>
#include <queue>

#include <iostream>

#include "sum.h"


int main() {
    std::vector<int> s{1,5,1,10};
    std::cout << "Result=" << sum_all<std::vector<int>>(s);
    
    std::queue<int> q;
    q.push(1);
    q.push(5);
    q.push(1);
    q.push(10);
    std::cout << "Result dequeue=" << sum_all<std::dequeue<int>>(q);
}
