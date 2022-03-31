#include <iostream>
#include "wrapperTest.h"


void WrapperTest::SetUp(){
    std::vector<std::int32_t> u{};
    this->v=std::shared_ptr<WrapperVector>(new WrapperVector(u));
};
void WrapperTest::vectorSetup(std::vector<std::int32_t> input){
    for(std::size_t i=0; i< input.size(); i++){
        this->v->pushBack(input.at(i));
    }
    this->v->sort();
    this->p = input;
    std::sort(this->p.begin(), this->p.end());
        
}
std::shared_ptr<Wrapper>& WrapperTest::getWrapper(){
    
    return this->v;
}
void WrapperTest::changeVector(std::vector<int32_t> input){
    this->v->replace(input);
    this->v->sort();
    this->p = input;
    std::sort(this->p.begin(), this->p.end());
} 
