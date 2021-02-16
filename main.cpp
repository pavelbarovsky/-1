#include "drawLibBarovsky.h"


void renderScene(void);


clock_t curTime, startTime;


int main(int argc, char* argv[]) {
    initOblaka();
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Lesson - Time Interactive");
    glutDisplayFunc(renderScene);
    glutTimerFunc(1000 / 60, animateScene, 1);
    startTime = clock();
    glutMainLoop();
    return 0;
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    float x = 0;
    float y = 0;
    float e = 0;

    curTime = clock() - startTime;

    drawNebo();

    if (curTime > 5000 & curTime < 21000) {
        e = -curTime * 0.001 / 10;

        glPushMatrix();
        glTranslatef(e + 2.5, 0, 0);
        drawGora();
        glPopMatrix();
    }
    else if (curTime > 21000) {
    }


    if (curTime > 21000 & curTime < 50000) {
        e = -curTime * 0.001 / 10;

        glPushMatrix();
        glTranslatef(e + 2.5, -1, 0);
        drawGoraBroke();
        glPopMatrix();
    }
    else if (curTime > 21000) {
    }



    if (curTime < 50000) {
        e = -curTime * 0.001 / 5;

        glPushMatrix();
        glTranslatef(e, 0, 0);
        drawOblaka();
        glPopMatrix();
    }

    curTime = clock();


    y = sin(curTime*0.001);

    glPushMatrix();
    glScalef(.3, .3, 1);
    glTranslatef(x, y*0.2, 0);
    drawPlane();
    glPopMatrix();

    if (curTime > 10000) {
        x = (curTime - 10000) * 0.001;
        glPushMatrix();
        glScalef(.1, .1, .1);
        glTranslatef(x, 0, 0);
        drawRaketa();
        glPopMatrix();

    }

    // if(curTime > 19000){


    curTime = clock() - startTime;
    e = curTime * 0.001;
    if (curTime > 19000 & curTime < 21000) {
        glPushMatrix();
        glScalef(e - 20000, e - 20000, 0);
        drawBoom(1, 1, 0);
        glPopMatrix();
    }
    else if (curTime > 21000)
    {
        glPushMatrix();
        glScalef(0, 0, 0);
        drawBoom(1, 1, 0);
        glPopMatrix();
    }

    glutSwapBuffers();
}
