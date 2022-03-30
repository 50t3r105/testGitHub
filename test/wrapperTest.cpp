#include <iostream>
#include "wrapperTest.h"


void WrapperTest::SetUp(){
    std::vector<std::int32_t> u{};
    this->v=std::shared_ptr<WrapperVector>(new WrapperVector(u));
    this->v->pushBack(1);
    this->v->pushBack(2);
    this->v->pushBack(1);
    this->v->pushBack(0);
};

std::shared_ptr<Wrapper>& WrapperTest::getWrapper(){
    
    return this->v;
};

