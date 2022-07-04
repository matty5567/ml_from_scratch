#pragma once
#include <string>
#include <iostream>
#include <fstream> 
#include <vector>


typedef std::vector<uint8_t> image;

int reverseINT(int i);

std::vector<image> read_images(const std::string& file_loc);
std::vector<uint8_t> read_labels(const std::string& file_loc);
