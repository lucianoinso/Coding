#include <stdio.h>
#define UND 0
#define N 9

bool solveSudoku(int arr[N][N]);
bool findUnassignedPlaces(int arr[N][N], int &row, int &col);
bool isSafe(int arr[N][N], int row, int col, int num);
void printGrid(int arr[N][N]);
