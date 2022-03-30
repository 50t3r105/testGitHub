#include <iostream>
#include "wrapper_vector.h"
#include <algorithm>

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
    for (std::size_t i = 0, l = 0, r = this->size()-1u; i< this->size(); i++){
        if(this->at(i)==0){
            auto tmp = this->vec[i];
            this->vec[i]=this->vec[l];
            this->vec[l]=tmp;
            l++;
        }
        else if(this->at(i)==1){
            auto tmp = this->vec[i];
            this->vec[i]=this->vec[r];
            this->vec[r]=tmp;
            r--;
        }
    }
}

std::int32_t WrapperVector::at(std::size_t i) {
    return this->vec.at(i);
}