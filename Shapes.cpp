#include "Shapes.h"

// Function to draw a single pixel
void DrawPixel(HDC hdc, int x, int y, COLORREF color)
{
    SetPixel(hdc, x, y, color);
}


// Function to draw a square of pixels
void DrawSquare(HDC hdc, int startX, int startY, int size, COLORREF color)
{
    for (int x = startX; x < startX + size; x++)
    {
        for (int y = startY; y < startY + size; y++)
        {
            DrawPixel(hdc, x, y, color);
        }
    }
}

void DrawHorizontalLine(HDC hdc, Point
    startPoint, int length,int weight, COLORREF color){
    int itr = startPoint.x;
    while (itr< startPoint.x+length) {
        DrawSquare(hdc, itr, startPoint.y, weight, color);
        itr++;
    }
}
