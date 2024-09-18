#ifndef TAREA2_CASES_H
#define TAREA2_CASES_H

#include <iostream>
#include <unistd.h>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
#include <utility>

// Include headers
#include "Array.h"
#include "BubbleSort/BubbleSort.h"
#include "SelectionSort/SelectionSort.h"
#include "MergeSort/MergeSort.h"
#include "LinkedList/LinkedList.h"
#include "BinaryTree/BinaryTree.h"

using namespace std;

void calculateN(int i, int n[]);

void worstCase(int i, int n[], double bsTime[], double msTime[], double ssTime[], double llTime[], double btTime[]);

void bestCase(int i, int n[], double bsTime[], double msTime[], double ssTime[], double llTime[], double btTime[]);

void averageCase(int i, int n[], double bsTime[], double msTime[], double ssTime[], double llTime[], double btTime[]);

void printCase(int i, int n[], double bsTime[], double msTime[], double ssTime[], double llTime[], double btTime[]);

#endif //TAREA2_CASES_H
