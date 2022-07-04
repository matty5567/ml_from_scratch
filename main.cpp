
#include <iostream>
#include "reader.h"
#include "assert.h"
#include "math.h"


int main() {

	std::vector<image> train_images = read_images("data/train-images-idx3-ubyte");
//	std::vector<image> test_images  = read_images("data/t10k-images-idx3-ubyte");

//	std::vector<uint8_t> test_labels = read_labels("data/t10k-labels-idx1-ubyte");
	std::vector<uint8_t> train_labels = read_labels("data/train-labels-idx1-ubyte");

	assert (train_images.size() == train_labels.size());
//	assert (test_images.size()  == test_labels.size());


	mat a = { {1.0f, 2.0f, 3.0f},
						{1.0f, 2.0f, 3.0f},};

	mat b = { {1.0f, 2.0f},
						{1.0f, 2.0f},
						{1.0f, 2.0f}};

	mat c = { {6.0f, 12.0f},
						{6.0f, 12.0f}};


//	mat d = Math::matmul(a, b);


// img dim 28 x 28 = 784 inputs to first layer
//
//
//

}


