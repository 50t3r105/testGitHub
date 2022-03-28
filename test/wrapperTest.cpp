#include <iostream>
#include "wrapperTest.h"


void WrapperTest::SetUp(){
    std::vector<std::int32_t> u{};
    this->v=std::shared_ptr<WrapperVector>(new WrapperVector(u));
    this->v->pushBack(3);
    this->v->pushBack(12);
    this->v->pushBack(-13);
    this->v->pushBack(7);
};

std::shared_ptr<Wrapper>& WrapperTest::getWrapper(){
    
    return this->v;
};

