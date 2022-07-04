#include "reader.h"
#include <array>

int reverseINT(int i)
{
	unsigned char c1, c2, c3, c4;

	c1 = i & 255;
	c2 = (i >> 8) & 255;
	c3 = (i >> 16) & 255;
	c4 = (i >> 24) & 255;

	return ((int)c1 << 24) + ((int)c2 << 16) + ((int)c3 << 8) + c4;
}



std::vector<uint8_t> read_labels(const std::string& file_loc)
{
	std::ifstream file;

	file.open(file_loc);

	if (file.is_open())
	{
		int magic_number = 0;
		int num_labels = 0;

		file.read((char*)&magic_number, sizeof(int));
		magic_number = reverseINT(magic_number);

		file.read((char*)&num_labels, sizeof(int));
		num_labels = reverseINT(num_labels);


		std::vector<uint8_t> labels;

		for (int i=0; i<num_labels; i++)
		{
				uint8_t px = 0;
				file.read((char *)&px, sizeof(char));
				labels.push_back(px);
		}

	return labels;
	}
	else {
		return std::vector<uint8_t> {};
	}
}

std::vector<image> read_images(const std::string& file_loc)
{

	std::ifstream file;

	file.open(file_loc);

	if (file.is_open())
	{
		int magic_number = 0;
		int num_images = 0;
		int n_rows = 0;
		int n_cols = 0;

		file.read((char*)&magic_number, sizeof(int));
		magic_number = reverseINT(magic_number);

		file.read((char*)&num_images, sizeof(int));
		num_images = reverseINT(num_images);

		file.read((char*)&n_rows, sizeof(int));
		n_rows = reverseINT(n_rows);

		file.read((char*)&n_cols, sizeof(int));
		n_cols = reverseINT(n_cols);


		std::vector<std::vector<uint8_t>> images;

		for (int i=0; i<num_images; i++)
		{
			std::vector<uint8_t> image;
			for (int j=0 ; j<n_rows*n_cols; j++)
			{
					uint8_t px = 0;
					file.read((char *)&px, sizeof(char));
					image.push_back(px);
			}
		images.push_back(image);
		}

	return images;
	}
	else {
		return std::vector<image> {};
	}
}
