#pragma once
#ifndef SHAPES_H
#define SHAPES_H

#include <windows.h>
// Structure to represent a point
struct Point
{
    int x;
    int y;
};

// Structure to represent a line
struct Line
{
    Point start;
    Point end;
    COLORREF color;
};

// Function to draw a single pixel
void DrawPixel(HDC hdc, int x, int y, COLORREF color);

// Function to draw a square of pixels
void DrawSquare(HDC hdc, int startX, int startY, int size, COLORREF color);

// Function to draw a horizontal line
void DrawHorizontalLine(HDC hdc, Point
    startPoint, int length, int weight, COLORREF color);

#endif // SHAPES_H
