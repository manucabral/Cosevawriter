#include "libs/coseva.cpp"

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5}, size = sizeof arr / sizeof arr[0];
    std::string csv = "alumnos.csv";

    if(!existFile(csv))
        writeData(csv, "notas", arr, size);
    
    return 0;
}
