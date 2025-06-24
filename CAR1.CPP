#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
 int gd=DETECT,gm,i,j,l,m=0,n=0,x,y,z;
 char k;
 initgraph(&gd,&gm,"..\\BGI");
 k='g';
 for(i=0,j=0;k!='e'; )
 {
  arc(100,200+j,10-i,330-i,10);
  arc(200,200+j,0-i,320-i,10);
  line(110,200+j,190,200+j);
  line(210,200+j,250,200+j);
  line(90,200+j,50,200+j);
  line(50,200+j,80,170+j);
  line(250,200+j,220,170+j);
  line(80,170+j,220,170+j);
  line(100,170+j,120,150+j);
  line(200,170+j,180,150+j);
  line(120,150+j,180,150+j);
  line(135,150+j,135,170+j);
  line(165,150+j,165,170+j);
  line(310-i,210+n,500-i,210+n);
  line(310-m,210+n,500-m,210+n);
   if(i==500)
    i=0;
   else if(i==280)
    m=0;
  k=getch();
  if(k=='d')
  {
   i=i+10;
   m=m+10;
  }
  else if(k=='a')
  {
  i=i-10;
  m=m-10;
  }
  else if(k=='w')
  {
  j=j-10;
  n=n-10;
  }
  else if(k=='s')
  {
  j=j+10;
  n=n+10;
  }
  clearviewport();
  }
  getch();
  closegraph();
  }