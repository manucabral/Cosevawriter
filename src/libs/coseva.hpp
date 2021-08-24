#ifndef _coseva_h_included_
#define _cosev_h_included_

#include <iostream>
#include <fstream>

#define f(i, max) for (int i = 0; i < max; i++)

bool existFile(std::string fileName);

template <typename A, typename B>
void writeData(std::string fileName, A column, B *arr, int arrsize);

#endif