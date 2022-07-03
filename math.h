#pragma once
#include <vector>
#include <assert.h>
#include <iostream>

typedef std::vector<std::vector<float>> mat;



class Math {

public:

	static mat matmul(mat a, mat b);

	static mat add(mat a, std::vector<float> b);

private:
	Math (){};
};
