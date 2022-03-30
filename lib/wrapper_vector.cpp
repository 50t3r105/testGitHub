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
    for (std::size_t i = 0; i< this->size(); i++){
        for(std::size_t j = i; j< this->size(); j++){
            if(this->at(i)>this->at(j)){
                auto tmp = this->vec[i];
                this->vec[i]=this->vec[j];
                this->vec[j]=tmp;
            } 
        }
    }
}

std::int32_t WrapperVector::at(std::size_t i) {
    return this->vec.at(i);
}