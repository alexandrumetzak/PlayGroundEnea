#include "Foo.h"

class FooImpl
{
public:
    int run(int value) {
        return value - 10;
    }
    ~FooImpl() {};
};

Foo::Foo()
    : m_impl(new FooImpl()) {
}

int Foo::run(int value) {
    return m_impl->run(value);
}
