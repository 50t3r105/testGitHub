#ifndef WRAPPER_VECTOR_H
#define WRAPPER_VECTOR_H
#include <iostream>
#include "wrapper.h"
#include <vector>
class WrapperVector: public Wrapper {
    public:
        
        WrapperVector(std::vector<std::int32_t> v){
        };
        void pushBack(std::int32_t  n) override {
        };
        //da cancellare tutto il bodio dio ca
        std::int32_t popBack() override {return 0;};
        std::size_t size() const override {return 0u;};
        std::vector<int32_t> sort() override{ std::vector<int32_t> v{};  return v; };
};
#endif