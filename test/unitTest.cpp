#include <iostream>
#include <gtest/gtest.h>
#include "wrapperTest.h"

// Demonstrate some basic assertions.
TEST_F(WrapperTest, sizeTest) {
    std::size_t size = this->getWrapper()->size();
    EXPECT_EQ(size, 4u);
}

TEST_F(WrapperTest, sortTest1) {
    std::size_t sizeBeforeSort = this->getWrapper()->size();
    this->getWrapper()->sort();
    std::size_t sizeAfterSort = this->getWrapper()->size();
    EXPECT_EQ(sizeBeforeSort, sizeAfterSort);
}


TEST_F(WrapperTest, sortTest2) {
    std::vector<int32_t> p{0,1,1,2}; 
    v->sort();
    for(std::size_t i  = 0 ; i < p.size() ; i++){
        EXPECT_EQ(v->at(i),p.at(i));
    }
}

TEST_F(WrapperTest, sortTest3) {
    std::vector<int32_t>  p{0,1,1,2}; 
    v->sort();
    v->sort();
    for(std::size_t i  = 0 ; i < p.size() ; i++){
        EXPECT_EQ(v->at(i),p.at(i));
    }
}