#include <iostream>
#include <gtest/gtest.h>
#include "wrapperTest.h"

// Demonstrate some basic assertions.
TEST_F(WrapperTest, sizeTest) {
    std::size_t size = this->getWrapper()->size();
    EXPECT_EQ(size, 4u);
}

TEST_F(WrapperTest, sortTest) {
    std::size_t sizeBeforeSort = this->getWrapper()->size();
    this->getWrapper()->sort();
    std::size_t sizeAfterSort = this->getWrapper()->size();
    EXPECT_EQ(sizeBeforeSort, sizeAfterSort);
}