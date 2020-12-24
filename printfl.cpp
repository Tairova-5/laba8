#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "Student_stuct.h"
#include "printfl.h"
void printFl(FILE* file, Student** arr, int leng) //запись в файл
{
    for (int i = 0; i < leng; i++)
    {
        fprintf(file, "%s;%d;%d;%f;\n", arr[i]->name, arr[i]->number, arr[i]->year, arr[i]->srMark);
    }
}