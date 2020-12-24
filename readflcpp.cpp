#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "Student_stuct.h"
#include "readfl.h"
void readFl(FILE* file, Student**& readarr, int& lengadd)  //чтение файла
{
    int size = 0;
    while (!feof(file))
    {
        Student** temp = new Student * [size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = readarr[i];
        }
        temp[size] = readSt(file);
        delete[] readarr;
        readarr = temp;
        size++;
    }
    lengadd = size;
}