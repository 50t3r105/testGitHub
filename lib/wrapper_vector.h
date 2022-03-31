#ifndef WRAPPER_VECTOR_H
#define WRAPPER_VECTOR_H
#include <iostream>
#include "wrapper.h"
#include <vector>
class WrapperVector: public Wrapper {
    public:
        
        WrapperVector(std::vector<std::int32_t> v){
        };

        std::vector<std::int32_t> vec;
        void pushBack(std::int32_t  n) override; 
        void replace(std::vector<int32_t> input)override;
        //da cancellare tutto il bodio dio ca
        std::int32_t popBack() override;
        std::size_t size() const override; 
        void sort() override;
        std::int32_t at(std::size_t i)override ;
};
#endif