#pragma once

#include "iostream"
#include "iomanip"
#include "random"
#include "ctime"

using namespace std;

void generator(float** matrix, int n);
void founder(float** matrix, int n);
int sum_f(float number);
void outer(float** matrix, int n, string name);