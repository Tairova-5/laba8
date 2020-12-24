#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "Student_stuct.h"
#include "swap.h"
void swap(Student**& arr, int i, int j) //смена позиций в сортировке
{
    Student* temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}