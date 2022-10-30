#include <queue>
#include <iostream>
#include <sstream>
#include <tuple>

#include "queue_application.h"

queue_application::queue_application(int k) : sum_k_(0) {
    k_ = k;
}

std::string queue_application::next(int new_number) {
            
    sum_k_ += new_number;
    q_.push(new_number);
    
    if (static_cast<int>(q_.size()) > k_) {
         
        sum_k_ -= q_.front();
        q_.pop();
    }
     
    std::stringstream msg;

    msg << "partial sum of last " << k_ << " numbers ( ";
    auto b=q_.begin();
    while ( b != q_.end() ) {
        msg << *b << ( (++b == q_.end())? " ":" + " );
    }
    msg << ") = " << sum_k_ << std::endl;

    return msg.str();
}


