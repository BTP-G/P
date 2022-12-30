#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#include<stdio.h>

#include<time.h>
#include<stdlib.h>

#include <conio.h>
#include <string.h>


#define ROW 4
#define COL 4

void setboard(long b[ROW][COL], int row, int col);

void showboard(long b[ROW][COL], int row, int col);

int play(long b[ROW][COL], int row, int col);