#include<windows.h>

#include <glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>


void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


void clearArea(int u, int v, int w, int x) {

    glColor3f(0.101, 0.176, 0.231);       // Alice

    glBegin(GL_QUADS);
    glVertex2f(u, w);
    glVertex2f(v, w);
    glVertex2f(v, x);
    glVertex2f(u, x);
    glEnd();

}


void outputRed(int x, int y, const char string[])
{
    glColor3f(1, 0.01, 0.24);                 //Alice body                       //Red-B
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    glFlush();
}


void outputPink(int x, int y, char* string)
{
    glColor3f(1, 0.79, 0.29);                 //Alice body                       //Red-B
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    glFlush();
}


void outputHelveticaWhite(int x, int y, const char string[])
{
    glColor3f(1, 1, 1);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
    glFlush();

}


void outputWhite10(int x, int y, char* string)
{
    glColor3f(1, 1, 1);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, string[i]);
    glFlush();

}



void outputWhite(int x, int y, const char string[])
{
    glColor3f(1, 1, 1);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    glFlush();

}

void outputC(int x, int y, const char string[])
{
    glColor3f(1, 1, 0);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    glFlush();

}


void outputBlue(int x, int y, const char string[])
{
    glColor3f(0.5, 0.81, 0.94);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    glFlush();

}


void outputBG(int x, int y, const char string[])
{
    glColor3f(0.101, 0.176, 0.231);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    glFlush();

}

void outputBG1(int x, int y, const char string[])
{
    glColor3f(0.101, 0.176, 0.231);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
    glFlush();

}


void outputBlack(int x, int y, char* string)
{
    glColor3f(0, 0, 0);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    glFlush();

}


void outputHelveticaYellow(int x, int y, char* string)
{
    glColor3f(1, 1, 0);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
    glFlush();

}


void outputGreen(int x, int y, const char string[])
{
    glColor3f(0.4, 1, 0.0);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    glFlush();

}
 

void output(int x, int y, const char string[])
{
    glColor3f(0.7, 0.8, 0.6);
    int len, i;
    glRasterPos2f(x, y);
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    glFlush();

}

float pos1 = 80;
float pos2 = 140;

 
float pos3 = 570;
float pos4 = 630;

float ipos1 = 240;
float ipos2 = 300;


void orange2() {

    glColor3f(1, 0.49, 0);  // Alice orange

    glBegin(GL_QUADS);
    glVertex2f(ipos1, 325);
    glVertex2f(ipos2, 325);
    glVertex2f(ipos2, 300);
    glVertex2f(ipos1, 300);
    glEnd();

    glFlush();

}


float ipos3 = 400;
float ipos4 = 460;


void green2() {

    glColor3f(0, 0.6, 0.0);  //  Bob green

    glBegin(GL_QUADS);
    glVertex2f(ipos3, 325);
    glVertex2f(ipos4, 325);
    glVertex2f(ipos4, 300);
    glVertex2f(ipos3, 300);
    glEnd();

    glFlush();
}
 

void moveHorizontal() {
    int i = 0;
    int j = 630;

    while (i < 490 && j>80)
    {
        glColor3f(1, 0.49, 0);  // Alice orange

        glBegin(GL_QUADS);
        glVertex2f(pos1, 325);
        glVertex2f(pos2, 325);
        glVertex2f(pos2, 300);
        glVertex2f(pos1, 300);
        glEnd();

        delay(4);
        // glutTimerFunc(1000,clearArea(pos1,pos2,325,300));
        clearArea(pos1 - 70, pos2 - 65, 325, 300);

        pos1 += 1;
        pos2 += 1;
        i += 1;

        glColor3f(0, 0.6, 0.0);  //  Bob green
        glBegin(GL_QUADS);
        glVertex2f(pos3, 325);
        glVertex2f(pos4, 325);
        glVertex2f(pos4, 300);
        glVertex2f(pos3, 300);
        glEnd();

        delay(4);
        // glutTimerFunc(1000,clearArea(pos1,pos2,325,300));
        clearArea(pos3 + 60, pos4 + 65, 325, 300);

        pos3 -= 1;
        pos4 -= 1;
        j -= 1;
 
        glFlush();
    }
}


void moveVertical() {
    int m = 0;

    float ipos1 = 325;
    float ipos2 = 300;

    while (m < 250)
    {
        glColor3f(1, 0.49, 0);  // Alice orange

        glBegin(GL_QUADS);
        glVertex2f(240, ipos1);
        glVertex2f(300, ipos1);
        glVertex2f(300, ipos2);
        glVertex2f(240, ipos2);
        glEnd();

        glColor3f(0, 0.6, 0.0);  //  Bob green

        glBegin(GL_QUADS);
        glVertex2f(400, ipos1);
        glVertex2f(460, ipos1);
        glVertex2f(460, ipos2);
        glVertex2f(400, ipos2);
        glEnd();

        glFlush();

        delay(4);
        // glutTimerFunc(1000,clearArea(pos1,pos2,325,300));
        clearArea(240, 300, ipos1 - 20, ipos2 - 20);

        clearArea(400, 460, ipos1 - 20, ipos2 - 20);

        ipos1 += 1;
        ipos2 += 1;
        m += 1;

        glFlush();
    }
    outputHelveticaWhite(285, 350, "Now add your private key");
}


void red() {
    glColor3f(1, 0, 0);  // Alice

    glBegin(GL_QUADS);
    glVertex2f(80, 290);
    glVertex2f(140, 290);
    glVertex2f(140, 265);
    glVertex2f(80, 265);
    glEnd();

    outputWhite(170, 170, "2] They select their private key (red and blue) respectively which is not visible to others.");

    glFlush();

    // glutSwapBuffers();
}

void red2() {
    glColor3f(1, 0, 0);  // top right red block

    glBegin(GL_QUADS);
    glVertex2f(550, 653);
    glVertex2f(583, 653);
    glVertex2f(583, 641);
    glVertex2f(550, 641);
    glEnd();

    outputWhite(587, 641, "Alice's Private Key");

    glFlush();

    // glutSwapBuffers();
}


void blue() {
    glColor3f(0, 0, 1.0);  //  Bob blue

    glBegin(GL_QUADS);
    glVertex2f(570, 290);
    glVertex2f(630, 290);
    glVertex2f(630, 265);
    glVertex2f(570, 265);
    glEnd();

    glFlush();
    // glutSwapBuffers();
}


void blue2() {
    glColor3f(0, 0, 1.0);  //  Bob blue

    glBegin(GL_QUADS);
    glVertex2f(550, 626);
    glVertex2f(583, 626);
    glVertex2f(583, 614);
    glVertex2f(550, 614);
    glEnd();

    outputWhite(587, 614, "Bob's Private Key");

    glFlush();
    // glutSwapBuffers();
}

void orange()
{
    glColor3f(1, 0.49, 0);  // Alice orange

    glBegin(GL_QUADS);
    glVertex2f(80, 325);
    glVertex2f(140, 325);
    glVertex2f(140, 300);
    glVertex2f(80, 300);
    glEnd();

    delay(5000);
    outputWhite(170, 120, "3] They disguise thier private key by mixing it with public key to obtain orange and green.");
    // outputWhite(150,75,"                to obtain orange and green");
    // delay(500);

    glFlush();

}

void orange3()
{
    glColor3f(1, 0.49, 0);  // Alice orange

    glBegin(GL_QUADS);
    glVertex2f(550, 599);
    glVertex2f(583, 599);
    glVertex2f(583, 587);
    glVertex2f(550, 587);
    glEnd();
     
    outputWhite(587, 587, "Mixed Color of Alice");
     
    glFlush();

}

void green() {
    glColor3f(0, 0.6, 0.0);  //  Bob green

    glBegin(GL_QUADS);
    glVertex2f(570, 325);
    glVertex2f(630, 325);
    glVertex2f(630, 300);
    glVertex2f(570, 300);
    glEnd();

    glFlush();

}

void green3() {
    glColor3f(0, 0.6, 0.0);  //  top right green 

    glBegin(GL_QUADS);
    glVertex2f(550, 572);
    glVertex2f(583, 572);
    glVertex2f(583, 560);
    glVertex2f(550, 560);
    glEnd();

    outputWhite(587, 560, "Mixed Color of Bob");

    glFlush();

}

void brownA()
{
    delay(500);

    clearArea(80, 140, 265, 290);

    glColor3f(0.6, 0.29, 0.0);  // Alice brown

    glBegin(GL_QUADS);
    glVertex2f(80, 325);
    glVertex2f(141, 325);
    glVertex2f(141, 300);
    glVertex2f(80, 300);
    glEnd();
}


void brownB()
{
    delay(500);
    clearArea(570, 630, 265, 290);

    glColor3f(0.6, 0.29, 0.0);  // Bob brown

    glBegin(GL_QUADS);
    glVertex2f(564, 325);
    glVertex2f(630, 325);
    glVertex2f(630, 300);
    glVertex2f(564, 300);
    glEnd();

    outputWhite(170, 70, "4] They mix thier private key and shared secret key to obtain a common color (brown),");
    outputWhite(220, 40, "which is obtained only when you have respective private keys.");

    // outputWhite(150,10,"         ");
}

void brownC()
{
   // clearArea(80, 140, 265, 290);

    glColor3f(0.6, 0.29, 0.0);  // Top right brown

    glBegin(GL_QUADS);
    glVertex2f(550, 545);
    glVertex2f(583, 545);
    glVertex2f(583, 533);
    glVertex2f(550, 533);
    glEnd();

    outputWhite(587, 533, "Shared Secret Key");

     
}

 

void success() {
    glColor3f(0, 1, 0);

    for (int i = 170; i < 530; i++) {
        glBegin(GL_POLYGON);
        glVertex2i(i, 380);
        glVertex2i(i + 1, 380);
        glVertex2i(i + 1, 390);
        glVertex2i(i, 390);
        glEnd();
        glFlush();
        delay(1);
    }

 
    int i = 0;

    while (i < 50) {
        outputBlue(240, 280 + i, "CONNECTION ESTABLISHED !!");
        delay(10);
        outputBG(240, 280 + i, "CONNECTION ESTABLISHED !!");
        i += 1;
    }
    outputBlue(240, 280 + i, "CONNECTION ESTABLISHED !!");
}


void yellow()
{
    glColor3f(1, 1, 0.0);  // Alice

    glBegin(GL_QUADS);
    glVertex2f(80, 325);
    glVertex2f(140, 325);
    glVertex2f(140, 300);
    glVertex2f(80, 300);
    glEnd();

    glColor3f(1, 1, 0.0);  // Bob

    glBegin(GL_QUADS);
    glVertex2f(570, 325);
    glVertex2f(630, 325);
    glVertex2f(630, 300);
    glVertex2f(570, 300);
    glEnd();

    glColor3f(1, 1, 0.0);  // Intruder

    glBegin(GL_QUADS);
    glVertex2f(320, 575);
    glVertex2f(380, 575);
    glVertex2f(380, 555);
    glVertex2f(320, 555);
    glEnd();

    // delay(2000);
    outputWhite(170, 220, "1] Alice and Bob agree with a public key (yellow) which is visible to everyone.");
    //delay(5000);

    // glutSwapBuffers();
    glFlush();
}


void yellow2()
{
    glColor3f(1, 1, 0.0);  //top right yelow block

    glBegin(GL_QUADS);
    glVertex2f(550, 680);
    glVertex2f(583, 680);
    glVertex2f(583, 668);
    glVertex2f(550, 668);
    glEnd();


    // delay(2000);
    outputWhite(587, 668, "Public Key");
    delay(5000);

    // glutSwapBuffers();
    glFlush();
}


void computer()
{
    glColor3f(0.61, 0.125, 0.94);

    glBegin(GL_QUADS);        //monitor in
    glVertex2f(80, 350);
    glVertex2f(140, 350);
    glVertex2f(140, 400);
    glVertex2f(80, 400);
    glEnd();

    glColor3f(0.7, 0.8, 0.6);  //monitor out
    glBegin(GL_LINE_LOOP);
    glVertex2f(75, 345);
    glVertex2f(75, 405);
    glVertex2f(145, 405);
    glVertex2f(145, 345);
    glEnd();

    glColor3f(0.7, 0.8, 0.6);  //monitor base
    // glColor3f(0.5,0.81,0.94);
    glBegin(GL_QUADS);
    glVertex2f(85, 340);
    glVertex2f(135, 340);
    glVertex2f(140, 335);
    glVertex2f(80, 335);
    glEnd();

    outputC(85, 420, "ALICE");

}


void computer_dest() {
    // glColor3f(0.7,0.8,0.6);  //monitor in

    glColor3f(0.5, 0.81, 0.94);

    glBegin(GL_QUADS);
    glVertex2f(570, 350);
    glVertex2f(630, 350);
    glVertex2f(630, 400);
    glVertex2f(570, 400);
    glEnd();

    glColor3f(0.7, 0.8, 0.6);  //monitor out
    glBegin(GL_LINE_LOOP);
    glVertex2f(565, 345);
    glVertex2f(635, 345);
    glVertex2f(635, 405);
    glVertex2f(565, 405);
    glEnd();

    glColor3f(0.7, 0.8, 0.6);  //monitor base
    // glColor3f(1,0.01,0.24);
    glBegin(GL_QUADS);
    glVertex2f(575, 340);
    glVertex2f(625, 340);
    glVertex2f(630, 335);
    glVertex2f(570, 335);
    glEnd();

    outputBlue(580, 420, "BOB");
}


void computer_intruder() {

    glColor3f(1, 0.0, 0.0);  //monitor in

    glBegin(GL_QUADS);
    glVertex2f(320, 600);
    glVertex2f(380, 600);
    glVertex2f(380, 650);
    glVertex2f(320, 650);
    glEnd();

    glColor3f(0.7, 0.8, 0.6);  //monitor out
    glBegin(GL_LINE_LOOP);
    glVertex2f(315, 595);
    glVertex2f(385, 595);
    glVertex2f(385, 655);
    glVertex2f(315, 655);
    glEnd();

    glColor3f(0.7, 0.8, 0.6);  //monitor base
    glBegin(GL_QUADS);
    glVertex2f(325, 590);
    glVertex2f(375, 590);
    glVertex2f(380, 585);
    glVertex2f(320, 585);
    glEnd();

    outputRed(305, 670, "INTRUDER");

}

void home()
{
    glClearColor(0.101, 0.176, 0.231, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    outputHelveticaWhite(225, 370, "Right Click on the Screen to Exchange Keys");

    computer();
    computer_dest();
    computer_intruder();

    // glutSwapBuffers();
    glFlush();
}

void credits() {
    glClearColor(0.101, 0.176, 0.231, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    outputGreen(260, 650, "SDM Institute Of Technology, Ujire");
    outputGreen(185, 610, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");

    outputHelveticaWhite(65, 130, " Presented By:");
    outputHelveticaWhite(55, 100, "1. Sandesh - 4SU18CS075");
    outputHelveticaWhite(55, 75, "2. Sumanth - 4SU18CS097");

    outputHelveticaWhite(295, 310, "UNDER THE GUIDENCE OF");
    outputWhite(285, 270, "Prof. Raghavendra Patil G E");
    outputHelveticaWhite(250, 230, "ASSISTANT PROFESSOR, DEPARTMENT OF CSE");
 
    /*
    int i = 0;
    while (i < 400) {

        outputHelveticaWhite(0 + i - 100, 450, "A MINI-PROJECT ON");

        outputC(630 - i, 410, "DIFFIE-HELLMAN KEY EXCHANGE");

        delay(8);

        outputBG1(0 + i - 100, 450, "A MINI-PROJECT ON");
        outputBG(630 - i, 410, "DIFFIE-HELLMAN KEY EXCHANGE");

        i += 1;
    }

    outputHelveticaWhite(0 + i - 100, 450, "A MINI-PROJECT ON");
     
    outputC(630 - i, 410, "DIFFIE-HELLMAN KEY EXCHANGE");
    */

    outputHelveticaWhite(305, 450, "A MINI-PROJECT ON");
    outputC(255,410, "DIFFIE-HELLMAN KEY EXCHANGE");



    glColor3f(0, 0, 0.0);  // Bottom

    glBegin(GL_QUADS);
    glVertex2f(0, 50);
    glVertex2f(700, 50);
    glVertex2f(700, 0);
    glVertex2f(0, 0);
    glEnd();

    output(260, 020, "        Press \"Enter\" to Start");

    // glutSwapBuffers();
    glFlush();
}


void miniSecure() {

    int i = 0;
    while (i < 30) {
        delay(500);
        outputC(300 + i + 50, 200, "*");
        i += 1;
    }
 
}


void miniUses() {

    float theata;

    glColor3f(1, 0.79, 0.29);                //Alice head
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        theata = i * 3.142 / 180;
        glVertex2f(150 + 10 * cos(theata), 220 + 20 * sin(theata));
    }

    glEnd();

    glColor3f(1, 0.01, 0.24);                 //Alice body
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        theata = i * 3.142 / 180;
        glVertex2f(150 + 10 * cos(theata), 150 + 40 * sin(theata));
    }

    glEnd();

    glColor3f(0.101, 0.176, 0.231);            //clear Alice
    glBegin(GL_QUADS);
    glVertex2f(140.0, 105.0);
    glVertex2f(160.0, 105.0);
    glVertex2f(160.0, 145.0);
    glVertex2f(140.0, 145.0);
    glEnd();

    outputHelveticaWhite(132, 110, "ALICE");

    glColor3f(1, 0.79, 0.29);                //Bob head
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        theata = i * 3.142 / 180;
        glVertex2f(520 + 10 * cos(theata), 220 + 20 * sin(theata));
    }

    glEnd();

    glColor3f(0.5, 0.81, 0.94);                 //Bob body
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        theata = i * 3.142 / 180;
        glVertex2f(520 + 10 * cos(theata), 150 + 40 * sin(theata));
    }

    glEnd();

    glColor3f(0.101, 0.176, 0.231);            //clear Bob
 
    glBegin(GL_QUADS);
    glVertex2f(510.0, 105.0);
    glVertex2f(560.0, 105.0);
    glVertex2f(560.0, 145.0);
    glVertex2f(510.0, 145.0);
    glEnd();

    outputHelveticaWhite(508, 110, "BOB");

    int i = 0;

    while (i < 220) {

        glColor3f(0.7, 0.8, 0.6);  //message
        glBegin(GL_QUADS);
        glVertex2f(205 + i, 190);
        glVertex2f(265 + i, 190);
        glVertex2f(270 + i, 185);
        glVertex2f(210 + i, 185);
        glEnd();

        delay(3);

        glColor3f(0.101, 0.176, 0.231); //clear  message

        // glColor3f(1,0,0);
        glBegin(GL_QUADS);
        glVertex2f(205 + i - 30, 190);
        glVertex2f(265 + i - 30, 190);
        glVertex2f(270 + i - 30, 185);
        glVertex2f(210 + i - 30, 185);
        glEnd();

        i += 1;
        glFlush();
    }
    glFlush();
}

// float kposx=2

void clearKey(int kposx) {

    glColor3f(0.101, 0.176, 0.231);  // Top

    // glColor3f(1,0,0);  // Top

    glBegin(GL_LINE_LOOP);
    glVertex2f(500.0 + kposx, 550.0);
    glVertex2f(520.0 + kposx, 580.0);
    glVertex2f(525.0 + kposx, 580.0);
    glVertex2f(525.0 + kposx, 550.0);
    glVertex2f(520.0 + kposx, 530.0);
    glVertex2f(525.0 + kposx, 510.0);
    glVertex2f(520.0 + kposx, 490.0);
    glVertex2f(525.0 + kposx, 470.0);
    glVertex2f(525.0 + kposx, 410.0);

    glVertex2f(545.0 + kposx, 390.0);   //Bottom

    glVertex2f(545.0 + kposx, 360.0);

    glVertex2f(525.0 + kposx, 330.0);


    glVertex2f(500.0 + kposx, 330.0);  //prob

//    glVertex2f(500.0+kposx,410.0);

    glVertex2f(480.0 + kposx, 360.0);

    glVertex2f(480.0 + kposx, 390.0);

    glVertex2f(500.0 + kposx, 410.0);

    glEnd();

    glFlush();
}

void keyDraw(int kposx) {
    // glColor3f(0.75,0.85,0.65);  //key

    glColor3f(1, 1, 0);  //key

    glBegin(GL_LINE_LOOP);
    glVertex2f(500.0 + kposx, 550.0);
    glVertex2f(520.0 + kposx, 580.0);
    glVertex2f(525.0 + kposx, 580.0);
    glVertex2f(525.0 + kposx, 550.0);
    glVertex2f(520.0 + kposx, 530.0);
    glVertex2f(525.0 + kposx, 510.0);
    glVertex2f(520.0 + kposx, 490.0);
    glVertex2f(525.0 + kposx, 470.0);
    glVertex2f(525.0 + kposx, 410.0);

    glVertex2f(545.0 + kposx, 390.0);   //Bottom
    glVertex2f(545.0 + kposx, 360.0);

    glVertex2f(525.0 + kposx, 330.0);
    glVertex2f(500.0 + kposx, 330.0);

    glVertex2f(525.0 + kposx, 330.0);
    glVertex2f(500.0 + kposx, 330.0);

    glVertex2f(480.0 + kposx, 360.0);
    glVertex2f(480.0 + kposx, 390.0);
    glVertex2f(500.0 + kposx, 410.0);
    glVertex2f(500.0 + kposx, 410.0);

    glEnd();
 
    glFlush();
 
    delay(10);

    clearKey(kposx);
}

void drawCircle1() {
    float theata;

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        theata = i * 3.142 / 180;
        glVertex2f(250 + 10 * cos(theata), 250 + 10 * sin(theata));
    }

    glEnd();
    glFlush();
}


void drawCircle2() {
    float theata;

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        theata = i * 3.142 / 180;
        glVertex2f(250 + 10 * cos(theata), 250 + 10 * sin(theata));
    }

    glEnd();
    glFlush();
}


void miniSolution() {
    float theata1;                              //Bulb
    float theata2;

    glColor3f(1, 1, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        theata1 = i * 3.142 / 180;
        glVertex2f(550 + 10 * cos(theata1), 340 + 20 * sin(theata1));
    }

    glEnd();

    glColor3f(0, 0, 0.0);              //  Bulb bottom

    glBegin(GL_QUADS);
    glVertex2f(545, 320);
    glVertex2f(555, 320);
    glVertex2f(555, 310);
    glVertex2f(545, 310);
    glEnd();

    glColor3f(1, 1, 0);         //Bulb lines
    glBegin(GL_LINES);
    glVertex2f(560, 360);   //right
    glVertex2f(570, 380);

    glVertex2f(540, 360);    //left
    glVertex2f(530, 380);

    glVertex2f(550, 370);    //center
    glVertex2f(550, 390);

    glEnd();

    glColor3f(1, 0.79, 0.29);                //Bob head
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        theata2 = i * 3.142 / 180;
        glVertex2f(500 + 10 * cos(theata2), 280 + 20 * sin(theata2));
    }

    glEnd();

    glColor3f(0.5, 0.81, 0.94);                 //Bob body
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {

        theata2 = i * 3.142 / 180;
        glVertex2f(500 + 10 * cos(theata2), 210 + 40 * sin(theata2));
    }

    glEnd();

    glColor3f(0.101, 0.176, 0.231);            //clear Bob
        // glColor3f(1,1,0);

    glBegin(GL_QUADS);
    glVertex2f(480.0, 145.0);
    glVertex2f(560.0, 145.0);
    glVertex2f(560.0, 205.0);
    glVertex2f(480.0, 205.0);
    glEnd();

    outputHelveticaWhite(538, 280, "Idea");
 
    glFlush();
}


void problem() {
    glClearColor(0.101, 0.176, 0.231, 1);

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0, 0, 0.0);  // Top

    glBegin(GL_QUADS);
    glVertex2f(0, 650);
    glVertex2f(700, 650);
    glVertex2f(700, 700);
    glVertex2f(0, 700);
    glEnd();

    output(285, 665, "PROBLEM");

    outputWhite(70, 500, "Exchanging the keys between two communicating ");
    outputWhite(70, 450, "parties securely,we dont just want to establish a common key ");
    outputWhite(70, 400, "but want to do so in a such way that anyone who is listning to");
    outputWhite(70, 350, "communication between the devices donot find out the key.");

    int kposx = 20;
    int i = 0;
    while (i <= 40) {

        keyDraw(kposx);
        i += 1;
        kposx += 1;
    }

    glColor3f(1, 1, 0);  //key

    glBegin(GL_LINE_LOOP);
    glVertex2f(500.0 + kposx, 550.0);
    glVertex2f(520.0 + kposx, 580.0);
    glVertex2f(525.0 + kposx, 580.0);
    glVertex2f(525.0 + kposx, 550.0);
    glVertex2f(520.0 + kposx, 530.0);
    glVertex2f(525.0 + kposx, 510.0);
    glVertex2f(520.0 + kposx, 490.0);
    glVertex2f(525.0 + kposx, 470.0);
    glVertex2f(525.0 + kposx, 410.0);

    glVertex2f(545.0 + kposx, 390.0);   //Bottom
    glVertex2f(545.0 + kposx, 360.0);

    glVertex2f(525.0 + kposx, 330.0);
    glVertex2f(500.0 + kposx, 330.0);

    glVertex2f(525.0 + kposx, 330.0);
    glVertex2f(500.0 + kposx, 330.0);

    glVertex2f(480.0 + kposx, 360.0);
    glVertex2f(480.0 + kposx, 390.0);
    glVertex2f(500.0 + kposx, 410.0);
    glVertex2f(500.0 + kposx, 410.0);

    glEnd();
    glFlush();               // keyDraw(kposx);

    miniUses();

    glColor3f(0, 0, 0.0);  // Bottom

    glBegin(GL_QUADS);
    glVertex2f(0, 50);
    glVertex2f(700, 50);
    glVertex2f(700, 0);
    glVertex2f(0, 0);
    glEnd();

    output(260, 020, "Press any key to Continue");

    glFlush();
}


void solution() {

    glClearColor(0.101, 0.176, 0.231, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0, 0, 0.0);  // Top

    glBegin(GL_QUADS);
    glVertex2f(0, 650);
    glVertex2f(700, 650);
    glVertex2f(700, 700);
    glVertex2f(0, 700);
    glEnd();

    output(285, 665, "SOLUTION");

    int i = 0;

    while (i < 150) {

        outputC(50 + i, 550, "DIFFIE-HELLMAN KEY EXCHANGE");
        outputRed(50 + i, 540, "_______________________________");
        delay(8);

        outputBG(50 + i, 550, "DIFFIE-HELLMAN KEY EXCHANGE");
        outputBG(50 + i, 540, "______________________________");

        i += 1;
    }
    outputC(50 + i, 550, "DIFFIE-HELLMAN KEY EXCHANGE");
    outputRed(50 + i, 540, "______________________________");

    outputWhite(50, 460, "- Diffe-Hellman key exchange algorithm establishes a shared secret between two parties,");

    outputWhite(50, 430, "    that can be used for secret communication for exchanging data over public networks.");

    //miniSecure();

    //  that can be used for secret communication for exchanging data over public networks.");

    outputWhite(50, 350, "- This algorithm can also be used for:");
    outputWhite(54, 310, "  Encryption");
    outputWhite(54, 270, "  Password Authenticated Agreement");
    outputWhite(54, 230, "  Forward Secrecy");

    miniSolution();
    //miniSecure();

    glColor3f(0, 0, 0.0);  // Bottom

    glBegin(GL_QUADS);
    glVertex2f(0, 50);
    glVertex2f(700, 50);
    glVertex2f(700, 0);
    glVertex2f(0, 0);
    glEnd();

    output(225, 020, "Press \"M\" to see Mathematical Implementation");

    glFlush();
}

void derive()
{
    glClearColor(0.101, 0.176, 0.231, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0, 0, 0.0);  // Top

    glBegin(GL_QUADS);
    glVertex2f(0, 650);
    glVertex2f(700, 650);
    glVertex2f(700, 700);
    glVertex2f(0, 700);
    glEnd();

    output(280, 665, "Mathematical Implementation");

    outputBlue(320, 600, "Algorithm");
    outputRed(319, 590, "________");

    outputWhite(180, 550, "1) Alice selects a prime 'a', a random integer number x1 and a generator 'g'.");
    outputWhite(235, 520, "   Then creates y1 such that, ");
    outputC(370, 520, "y1 = g^(x1) mod a");

    outputWhite(180, 460, "2) Bob performs the same function and creates ");
    outputC(400, 460, "y2 = g^(x2) mod a");

    outputWhite(180, 400, "3) Alice sends y1 to Bob and Bob sends y2 to Alice.");

    outputWhite(180, 340, "4) Alice forms his key as,");
    outputC(300, 340, "k1 = y2^(x1) mod a");

    outputWhite(194, 300, "Bob forms his key as,");
    outputC(300, 300, "k2 = y1^(x2) mod a");

    outputWhite(220, 230, "It can easily be proved that two keys k1 and k2 are equal.");
    outputWhite(190, 190, "Therefore, the two users can now encrypt their messages, each using its");
    outputWhite(240, 150, "own key created by the other one's information.");

    glColor3f(0, 0, 0.0);  // Bottom

    glBegin(GL_QUADS);
    glVertex2f(0, 50);
    glVertex2f(700, 50);
    glVertex2f(700, 0);
    glVertex2f(0, 0);
    glEnd();

    output(280, 020, "Press \"S\" to Start Simulation");

    // glutSwapBuffers();
    glFlush();
}

void menu(int id) {
    if (id == 1) {
        clearArea(215, 500, 340, 390);
        yellow();
        yellow2();
        // delay(500);
        //glutTimerFunc(1000,red,0);
        red();
        red2();

        //glutTimerFunc(1000,blue,0);
        blue();
        blue2();

        //glutTimerFunc(3000,orange,0);
        orange();
        orange3();
        //glutTimerFunc(3000,green,0);
        green();
        green3();
       
        //glutTimerFunc(3000,moveHorizontal,0);
        moveHorizontal();
        // orange2();
        // green2();
        //glutTimerFunc(3000,moveVertical,0);
        moveVertical();
        // glutTimerFunc(5000,step1,0);
        // moveAll(80,140,570,630);
        // glutTimerFunc(2500,moveLeft,0);

        // moveLeft();

        // glutPostRedisplay();

    }

    else if (id == 2) {
        clearArea(285, 500, 340, 390);
        brownA();
        brownB();
        brownC();

        // problems();
        //glutTimerFunc(500,success,0);
        success();
    }
    else { exit(0); }
}


void keyfunc(unsigned char key, int x, int y)
{
    switch (key) {

    case 'S':
    case 's':
        // glutDisplayFunc(keys);
         // glutPostRedisplay();
        home();
        break;

    case 'M':
    case 'm':
        derive();
        break;

    case 'q':
    case 'Q':
        exit(0);

    case '\r':
        problem();
        break;

    default: solution();
    }
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutInitWindowPosition(0, 0);

    glutInitWindowSize(1000, 700);

    glutCreateWindow("Diffie-Hellman Key Exchange");

    glMatrixMode(GL_MODELVIEW);//INIT

    gluOrtho2D(0, 700, 0, 700);

    glPointSize(100.0);

    glutKeyboardFunc(keyfunc);//enabling keyboard

    glutCreateMenu(menu);
    glutAddMenuEntry("1.Exchange Public Keys", 1);
    glutAddMenuEntry("2.Add Your Private Key", 2);
    glutAddMenuEntry("3.Quit", 3);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

    //credits();
    glutDisplayFunc(credits);

    glutMainLoop();
}
