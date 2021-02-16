#include "drawLibBarovsky.h"

std::vector <Figure> Oblaka;


void drawPlane() {
    // �������

    glBegin(GL_TRIANGLES);


    glColor3f(0.8, 0.8, .8);
    glVertex2f(-1.2, .3);
    glVertex2f(-1.2, .5);
    glVertex2f(-1, .3);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(-1, 0);
    glVertex2f(-1, .3);
    glVertex2f(-1.2, .3);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(-1, .3);
    glVertex2f(-1, .0);
    glVertex2f(-.3, .0);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(-.3, 0);
    glVertex2f(-.3, .3);
    glVertex2f(-1, .3);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(-.3, .3);
    glVertex2f(-.3, .4);
    glVertex2f(-.8, .3);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(-.3, 0);
    glVertex2f(-.3, .4);
    glVertex2f(.0, .0);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(.0, 0);
    glVertex2f(.0, .4);
    glVertex2f(-.3, .4);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(.0, 0);
    glVertex2f(.0, -.1);
    glVertex2f(-1, .0);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(.0, 0);
    glVertex2f(.0, .4);
    glVertex2f(.8, .4);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(.0, 0);
    glVertex2f(.8, .0);
    glVertex2f(.8, .4);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(.8, .2);
    glVertex2f(.8, .4);
    glVertex2f(1.2, .2);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(.8, .2);
    glVertex2f(.8, .0);
    glVertex2f(1.2, .2);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(.8, .0);
    glVertex2f(1.2, .0);
    glVertex2f(1.2, .2);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(.8, .0);
    glVertex2f(.8, -.1);

    glVertex2f(1.2, .0);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(.8, .0);
    glVertex2f(.8, -.1);
    glVertex2f(0, -.1);

    glColor3f(0.8, 0.8, .8);
    glVertex2f(.8, .0);
    glVertex2f(.0, .0);
    glVertex2f(0, -.1);

    glColor3f(0.9, 0.9, 0.9);
    glVertex2f(.2, .0);
    glVertex2f(.6, .0);
    glVertex2f(.2, -1);

    glColor3f(0.9, 0.9, 0.9);
    glVertex2f(.2, .4);
    glVertex2f(.6, .4);
    glVertex2f(-.1, 1);


    glEnd();

}

void drawNebo() {
    // ����

    glBegin(GL_QUADS);

    glColor3f(0.8, 0.8, 0.8);
    glVertex2f(-3, 3);
    glVertex2f(3, 3);
    glColor3f(0.5, 0.5, 0.9);
    glVertex2f(3, -3);
    glVertex2f(-3, -3);

    glEnd();
}

void drawGora() {
    // ����

    glBegin(GL_TRIANGLES);

    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(0, 1);
    glColor3f(0, 0, 0);
    glVertex2f(-.4, -1);
    glVertex2f(.8, 0);

    glColor3f(0, 0, 0);
    glVertex2f(-1, -1);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(-.4, .4);
    glColor3f(0, 0, 0);
    glVertex2f(.4, -1);

    glColor3f(0.3, 0.3, 0.3);
    glVertex2f(.8, .6);
    glColor3f(0, 0, 0);
    glVertex2f(1, -1);
    glVertex2f(-.3, -1);

    glColor3f(1, 1, 1);
    glVertex2f(-.1, .5);
    glVertex2f(.4, .5);
    glVertex2f(.0, 1);

    glColor3f(1, 1, 1);
    glVertex2f(.1, .5);
    glVertex2f(.2, .4);
    glVertex2f(.3, .5);

    glColor3f(1, 1, 1);
    glVertex2f(-.1, .4);
    glVertex2f(-.1, .5);
    glVertex2f(.1, .5);

    glEnd();
}

void drawGoraBroke() {
    // ��������� ����

    glBegin(GL_TRIANGLES);

    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(.1, .6);
    glColor3f(0, 0, 0);
    glVertex2f(-.3, 0);
    glVertex2f(.4, 0);

    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(-.5, .3);
    glColor3f(0, 0, 0);
    glVertex2f(-1, 0);
    glVertex2f(-.1, 0);

    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(.4, .5);
    glColor3f(0, 0, 0);
    glVertex2f(.6, 0);
    glVertex2f(.1, 0);

    glEnd();
}


void drawCircle(float r, float g, float b) {
    glScalef(0.1, 0.1, 0);
    glBegin(GL_TRIANGLE_FAN);
    for (float i = 0; i < 2 * 3.14; i += 3.14 / 16) {
        glColor3f(r, g, b);
        glVertex2f(cos(i), sin(i));
    }
    glEnd();
}
void drawEllipse(float r, float g, float b) {
    glPushMatrix();
    glTranslatef(0, 0.8, 0);
    glScalef(0.1, 0.05, 1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(r, g, b);
    for (float a = 0; a < 2 * 3.14; a += 3.14 / 8) {

        glVertex2f(cos(a), sin(a));

    }

    glEnd();

    glPopMatrix();
}

void drawCloud(Figure f) {
    glPushMatrix();
    glTranslatef(f.x, f.y, 0);

    glPushMatrix();
    drawEllipse(1, 1, 1);
    glTranslatef(0, -0.05, 0);
    drawEllipse(1, 1, 1);
    glTranslatef(0.1, 0, 0);
    drawEllipse(1, 1, 1);
    glTranslatef(-0.2, 0, 0);
    drawEllipse(1, 1, 1);
    glPopMatrix();

    glPopMatrix();
}

void drawRaketa() {
    // ������

    glBegin(GL_TRIANGLES);

    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(-.4, -.2);
    glVertex2f(-.4, .2);
    glVertex2f(.2, .2);

    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(-.4, -.2);
    glVertex2f(.2, -.2);
    glVertex2f(.2, .2);

    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(-.4, .2);
    glVertex2f(-.4, .4);
    glVertex2f(-.1, .2);

    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(-.4, -.2);
    glVertex2f(-.4, -.4);
    glVertex2f(-.1, -.2);

    glColor3f(0.8, 0.2, 0.2);
    glVertex2f(.2, .2);
    glVertex2f(.2, -.2);
    glVertex2f(.7, .0);

    glColor3f(0.9, 0.4, 0.1);
    glVertex2f(-.4, .1);
    glVertex2f(-.4, .2);
    glVertex2f(-.6, .1);

    glColor3f(0.9, 0.4, 0.1);
    glVertex2f(-.4, -.1);
    glVertex2f(-.4, -.2);
    glVertex2f(-.6, -.1);

    glColor3f(0.9, 0.4, 0.1);
    glVertex2f(-.4, .1);
    glVertex2f(-.4, -.1);
    glVertex2f(-.7, .0);

    glEnd();
}

void drawBoom(float r, float g, float b) {
    // �����

    glBegin(GL_TRIANGLES);

    glColor3f(r, g, b);

    glVertex2f(-.1, 0);
    glVertex2f(0, .3);
    glVertex2f(.1, 0);

    glVertex2f(.0, .1);
    glVertex2f(.3, .0);
    glVertex2f(.0, -.1);

    glVertex2f(-.1, .0);
    glVertex2f(.1, .0);
    glVertex2f(.0, -.3);

    glVertex2f(.0, .1);
    glVertex2f(.0, -.1);
    glVertex2f(-.3, .0);

    glEnd();
}

void drawOblaka() {
    glPushMatrix();
    for (int i = 0; i < Oblaka.size(); i++) {
        drawCloud(Oblaka[i]);
    }
    glPopMatrix();
}

void initOblaka() {
    srand(clock());
    Figure f;
    for (int i = 0; i < 100; i++) {
        f.x = .01 * ((rand() % 1000) - 100);
        f.y = 0.01 * ((rand() % 250) - 200);
        Oblaka.push_back(f);
    }
}

void animateScene(int value) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, animateScene, 1);
}
