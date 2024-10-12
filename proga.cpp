//Link library
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>


/*const int x_max = 100;
const int y_max = 25;*/

void GoToXY(int x, int y);
void CursorVisible(bool visible);

enum Rotation
{
    //Value of rotation
    left,
    right,
    up,
    down
};

struct Position
{
    int x;
    int y;
};

class Field
{
public:
    //char field[y_max][x_max + 1];
    void CreateBoundaries(char ch);
    void //Show();
    void SpownPrice();
};