#ifndef _coseva_h_included_
#define _coseva_h_included_

#include <iostream>

/**
 * @brief for macro
 * 
 */
#define f(i, max) for (int i = 0; i < max; i++)

/**
 * @brief verify if exist a file on the directory
 * 
 * @param filename target filename with his extension "example.csv"
 * @return true if exist
 * @return false if not exist
 */
bool file_exists(char const *filename);

/**
 * @brief get length of string
 * 
 * @param str target string 
 * @return int string length
 */
int strlen(char *str);

/**
 * @brief compare two strings
 * 
 * @param s1 first string
 * @param s2 second string
 * @return int 
 */
int strcmp(char const *s1, char const *s2);

/**
 * @brief write a file
 * 
 * @param filename target filename with his extension: "example.csv"
 * @param columns max columns to write
 * @param rows max rows to write
 */
void file_write(char const *filename, int columns, int rows);

#endif