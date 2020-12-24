#ifndef READST_F_H_INCLUDED
#define RREADST_F_H_INCLUDED
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "readName.h"
#include "Student_stuct.h"
using namespace std;
Student* readSt(FILE*);
#endif // READST_F_H_INCLUDED