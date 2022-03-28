#ifndef WRAPPER_VECTOR_H
#define WRAPPER_VECTOR_H
#include <iostream>
#include "wrapper.h"
#include <vector>
class WrapperVector: public Wrapper {
    public:
        
        WrapperVector(std::vector<std::int32_t> v){};
        void pushBack(std::vector<std::int32_t>  n);
        std::int32_t popBack();
};
#endif