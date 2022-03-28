#ifndef WRAPPER_H
#define WRAPPER_H
#include <iostream>
class Wrapper{
    public:
        Wrapper();
        virtual void pushBack();
        virtual std::int32_t intpopBack();
        virtual std::size_t size();
};
#endif