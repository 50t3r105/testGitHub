#ifndef WRAPPER_TEST
#define WRAPPER_TEST
#include <iostream>
#include "lib/wrapper.h"
#include "lib/wrapper_vector.h"
#include "gtest/gtest.h"
#include <memory>
class WrapperTest: public ::testing::Test{
    protected:
        std::shared_ptr<Wrapper> v;
        WrapperTest(){};
        void SetUp() override;
        std::shared_ptr<Wrapper>& getWrapper();
};


#endif


