#ifndef DRAWLIBBAROVSKY_H
#define DRAWLIBBAROVSKY_H

#include <GL/glut.h>
#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>


struct Figure {
    float x, y;
    float r, g, b;
};
using std::cout;
using std::cin;
using std::endl;




void renderScene(void);
void animateScene(int value);
void drawPlane();
void drawNebo();
void drawGora();
void drawGoraBroke();
void drawCircle(float r, float g, float b);
void drawCloud(Figure f);
void drawRaketa();
void drawBoom(float r, float g, float b);
void drawOblaka();
void initOblaka();

#endif // DRAWLIBBAROVSKY_H
