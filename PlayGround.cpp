#include <future>

#include "Foo.h"
#include <functional>

#include <assert.h>

void runFunction(std::function<int(int)> pFunction, 
	std::vector<int>& vec, int value) 
{
	vec.push_back(pFunction(value));
}

int main() {
	Foo foo;

	std::function<int(int)> pFunction = std::bind(&Foo::run, &foo, std::placeholders::_2);
		std::vector<unsigned int> vec;
	int value = 42;
	      
	
	auto future = std::async(std::launch::async, runFunction, pFunction, vec, value); future.wait();


	assert(vec[0] == 32); 
}


