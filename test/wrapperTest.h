#ifndef WRAPPER_TEST
#define WRAPPER_TEST
#include <iostream>
#include "lib/wrapper.h"
#include "lib/wrapper_vector.h"
#include "gtest/gtest.h"
class WrapperTest: public ::testing::Test{
    protected:
        std::unique_ptr <Wrapper> v;
        WrapperTest();
        void SetUp() override{};


};


#endif