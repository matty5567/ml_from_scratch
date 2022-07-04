#pragma once
#include <vector>
#include <assert.h>
#include <iostream>

typedef std::vector<std::vector<float>> mat;



class Math {

public:

	static mat matmul(mat a, mat b);

	static mat addBias(mat a, float b);


	static mat relu(mat x);

private:
	Math (){};
};
