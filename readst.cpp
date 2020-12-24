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

#include "readst.h"
Student* readSt(FILE* file) //чтение инфы о студенте
{

    Student* temp = new Student;
    temp->name = readName(file);
    fscanf(file, "%d;\n", &temp->number);
    fscanf(file, "%d;\n", &temp->year);
    fscanf(file, "%f;\n", &temp->srMark);
    if (temp->scholarship == 5.0)
        temp->scholarship = 4;
    if (temp->srMark < 5.0 && temp->srMark >= 4.5)
        temp->scholarship = 3;
    if (temp->srMark < 4.5 && temp->srMark >= 4.0)
        temp->scholarship = 2;
    if (temp->srMark < 4.0)
        temp->scholarship = 1;
    return temp;
}