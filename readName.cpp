#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "Student_stuct.h"

#include "readName.h"
char* readName(FILE* file) //чтение имени
{

    char* str = new char[1];
    char symbol = '\0';
    int symbolCount = 0;
    while (symbol != ';')
    {
        fscanf(file, "%c", &symbol);
        if (symbol == ';')
        {
            break;
        }

        char* tmpStr = new char[symbolCount + 2];
        for (int i = 0; i < symbolCount; i++)
        {
            tmpStr[i] = str[i];
        }
        tmpStr[symbolCount] = symbol;
        delete[] str;
        str = tmpStr;
        symbolCount++;
    }
    str[symbolCount] = '\0';
    return str;
}
