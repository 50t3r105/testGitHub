#ifndef WRAPPER_H
#define WRAPPER_H
#include <iostream>
#include <vector>
class Wrapper{
    public:
        Wrapper(){};
        virtual void pushBack(std::int32_t n) = 0;
        virtual std::int32_t popBack() = 0;
        virtual std::size_t size() const = 0;
        virtual void sort() = 0;
        virtual std::int32_t at(std::size_t i) =0;
};
#endif