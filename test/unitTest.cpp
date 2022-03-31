#include <iostream>
#include <gtest/gtest.h>
#include "wrapperTest.h"

// Demonstrate some basic assertions.
TEST_F(WrapperTest, sizeTest) {
    std::size_t size = this->getWrapper()->size();
    EXPECT_EQ(size, p.size());
}

TEST_F(WrapperTest, sortTest1) {
    std::vector<std::int32_t> w{0,1,1,0,2,1,1,1,2,2,2,2,2,2,2,0,1,2,2,2,2,1,0};
    vectorSetup(w);
    std::size_t sizeBeforeSort = this->getWrapper()->size();
    this->getWrapper()->sort();
    std::size_t sizeAfterSort = this->getWrapper()->size();
    EXPECT_EQ(sizeBeforeSort, sizeAfterSort);
}


TEST_F(WrapperTest, sortTest2) {
    
    std::vector<std::int32_t> w{0,1,1,0,2,1,1,1,2,2,2,2,2,2,2,0,1,2,2,2,2,1,0};
    vectorSetup(w);
    for(std::size_t i  = 0 ; i < p.size() ; i++){
        EXPECT_EQ(v->at(i),p.at(i));
    }
}

TEST_F(WrapperTest, sortTest3) {
    
    std::vector<std::int32_t> w{0,1,1,0,2,1,1,1,2,2,2,2,2,2,2,0,1,2,2,2,2,1,0};
    vectorSetup(w);
    for(std::size_t i  = 0 ; i < p.size() ; i++){
        EXPECT_EQ(v->at(i),p.at(i));
    }
}