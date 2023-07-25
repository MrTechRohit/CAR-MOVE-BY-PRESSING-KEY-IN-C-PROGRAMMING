//>>>>>>>>>>> WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL <<<<<<<<<<<<<<//
//.............. C++ PROGRAM TO CREATE CAR, MOVE BY KEY ..................//

#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>

void main()
{

int gd=DETECT , gm;
initgraph(&gd,&gm,(char*)"c://tc//bgi");

while(1)
{

int i=0;
while(i<450)
{
setcolor(10);
outtextxy(50,20,"PRESS e TO EXIT ");
setcolor(14);
outtextxy(50,35,"PRESS r TO MOVE RIGHT ");
setcolor(15);
outtextxy(50,50,"PRESS l TO MOVE LEFT ");
if(kbhit())
{
int key = getch();
if(key=='r')
{
i+=3;
}

if(key=='l')
{
i-=3;
}
if(key=='e')
{
exit (0);
}
}
// BODY
setcolor(11);
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);

// Windows
setcolor(14);
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

// Wheels
setcolor(10);
circle(110+i,370,17);
circle(240+i,370,17);


delay(20);
cleardevice();
setcolor(7);
line(0,390,639,390);  //ROAD
}
}
closegraph();
getch();
}