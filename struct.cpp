#include<iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

struct CartesianCoordinate  {
float x;
float y;
}

float calculateDistance (CartesianCoordinate xx, CartesianCoordinate yy)  {

float tempDistance;

tempDistance = sqrt((xx.x-yy.x)*(xx.x-yy.x))+((xx.y-yy.y)*(xx.y-yy.y));

return tempDistance;
}
