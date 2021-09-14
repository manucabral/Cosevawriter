#include "libs/coseva.cpp"

// for execute: g++ main.cpp -o coseva -> coseva <param1> <param2>

int main(int argc, char const *argv[])
{
    bool success = false;
    int rows = 0, columns = 0;

    if (argc != 3)
    {
        std::cout << "Usage: cosava <filename> <mode>";
        return 0;
    }

    if (!file_exists(argv[1]))
    {
        std::cout << "File not found: " << argv[1] << std::endl;
        return 0;
    }

    if (strcmp(argv[2], "write") == 0)
    {
        success = true;
        std::cout << "> Executing writing mode.." << std::endl;
        std::cout << "Number of rows:";
        std::cin >> rows;
        std::cout << "Number of columns:";
        std::cin >> columns;
        file_write(argv[1], columns, rows);
    }

    if (!success)
    {
        std::cout << "Missing file mode :(" << std::endl;
    }

    return 0;
}
