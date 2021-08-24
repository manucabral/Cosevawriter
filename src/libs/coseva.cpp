#include "coseva.hpp"

bool existFile(std::string fileName)
{
    return static_cast<bool>(std::ifstream(fileName));
}

template <typename A, typename B>
void  writeData(std::string fileName, A column, B *arr, int arrsize)
{
    std::ofstream file(fileName);
    file << column << '\n';
    f(i, arrsize)
            file
        << arr[i] << '\n';
    file.close();
}
