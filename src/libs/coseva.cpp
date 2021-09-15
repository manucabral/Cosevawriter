#include "coseva.hpp"

bool file_exists(char const *filename)
{
    FILE *file = fopen(filename, "r");
    return !(file == NULL);
}

int strcmp(char const *s1, char const *s2)
{
    if (!s1 && !s2)
        return 0;
    if (s1 && !s2)
        return 1;
    if (!s1 && s2)
        return -1;

    while (*s1 && *s2 && *s1 == *s2)
        s1++, s2++;

    if (!*s1 && !*s2)
        return 0;
    else if (*s1 > *s2)
        return 1;
    else
        return -1;
}

int strlen(char *str)
{
    int length = 0;
    while (str[++length] != '\0')
    {
    }

    return length;
}

int file_write(char const *filename, int columns, int rows)
{
    FILE *file;
    char data[MAX_STR_LEN] = "";
    const char *truncate;
    if (file = fopen(filename, "wb+"))
    {
        f(i, rows)
            f(j, columns)
        {
            if (i == 0)
                std::cout << "Enter header column " << j + 1 << ":";
            else
                std::cout << "Enter value row " << i << " column " << j;

            std::cin >> data;

            fwrite(data, sizeof(char), strlen(data), file);
            truncate = (j == columns - 1 ? "\n" : ",");
            fwrite(truncate, sizeof(char), 1, file);
        }
        fclose(file);
        return 0;
    }
    else
        return 1;
}

int file_read(char const *filename, bool export_txt)
{
    FILE *file;
    char data[MAX_STR_LEN] = "";
    if (file = fopen(filename, "rb"))
    {
        fseek(file, 0, SEEK_SET);
        while (!feof(file))
        {
            fread(data, sizeof(char), 1, file);
            std::cout << data;
        }
        fclose(file);
        return 1;
    }
    else
        return 0;
}
