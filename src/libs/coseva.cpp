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

void file_write(char const *filename, int columns, int rows)
{
    FILE *file;
    char data[10] = "";
    const char *truncate;
    if (file = fopen(filename, "wb+"))
    {
        f(i, rows)
            f(i, columns)
        {
            std::cin >> data;
            fwrite(data, sizeof(char), strlen(data), file);
            truncate = (i == columns - 1 ? "\n" : ",");
            fwrite(truncate, sizeof(char), 1, file);
        }
        fclose(file);
    }
}
