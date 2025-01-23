// utility functions
#include <numeric>

// add all elements in sequence container using iterators
template <typename T>
int sum_all(T t){
    return std::reduce(t.begin(), t.end());
}

