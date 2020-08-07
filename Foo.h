#pragma once
#ifndef FOO_CPP
#define FOO_CPP
#include <memory>

class FooImpl;

class Foo
{
        std::unique_ptr<FooImpl> m_impl;
    public:
        Foo();
    public:
        ~Foo() {};

        int run(int);
};
#endif // FOO_H

