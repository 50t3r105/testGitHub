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

void WrapperVector::replace(std::vector<int32_t> input){
    this->vec = input;

}
void WrapperVector::sort() {
    bool inc=false;
    auto tmp = vec.at(0);
    for (std::size_t i = 0, l = 0, r = this->size()-1u; i< r;){
        inc = true;
        auto &vec = this->vec;
        if (vec.at(i)==0){
            tmp = vec.at(i);
            vec.at(i) = vec.at(l);
            vec.at(l) = tmp;
            inc = false;
            if (l<i)
                l++;
        }
        else if (vec.at(r)==2){
            r--;
            inc = false;
        }
        else if (vec.at(i)==2){
            tmp = vec.at(i);
            vec.at(i) = vec.at(r);
            vec.at(r) = tmp;
            inc = false;
            r--;
        }
        if (inc || l>=i){
        
            i++;
        }
    }
}

std::int32_t WrapperVector::at(std::size_t i) {
    return this->vec.at(i);
}


