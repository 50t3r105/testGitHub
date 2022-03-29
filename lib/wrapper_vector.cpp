#include <iostream>
#include "wrapper_vector.h"

void WrapperVector::pushBack(std::int32_t v){
    this->vec.push_back(v);
}

std::int32_t WrapperVector::popBack(){
    std::int32_t tmp = this->vec.back(); 
    this->vec.pop_back();
    return tmp;
}

std::size_t WrapperVector::size()const{
    return this->vec.size();
}

void WrapperVector::sort() {
}

std::int32_t WrapperVector::at(std::size_t i) {
    return this->vec.at(i);
}