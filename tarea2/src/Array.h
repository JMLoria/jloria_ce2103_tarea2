#ifndef TAREA2_ARRAY_H
#define TAREA2_ARRAY_H

#include <iostream>
#include <unistd.h>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
#include <utility>

#include "LinkedList/LinkedList.h"

using namespace std;

void printArray(int a[], int size);

void copyArray(int a[], int b[], int n);

void generateArray(int a[], int n);

void randArray(int a[], int n);

void generateList(LinkedList &list, int n);

#endif //TAREA2_ARRAY_H
