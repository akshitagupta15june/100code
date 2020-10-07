#include<stdio.h>  
#include<graphics.h>   
#define HEIGHT getmaxy()  
#define WIDTH getmaxx()  
#define GROUND 450  
#define MAXHEIGHT 420   
void main()  
{  
        int x,y=0,t=MAXHEIGHT,c=1;  
        int gd=DETECT,gm;  
       initgraph(&gd,&gm,"C:\\T urboC3\\BGI");   
      for(x=40;x<=getmaxx();x=x+2)  
 {  
     //Draw Ground  
     rectangle (0,MAXHEIGHT,getmaxx(),MAXHEIGHT+5);  
     floodfill (5,MAXHEIGHT+3,WHITE);  
    //Draw Ball  
   pieslice(x,y,0,360,20);  
   //floodfill(x,y,RED);  
   delay(100);  
   if(y>MAXHEIGHT-20)  
     {  
         c=0;  
         t=t-40;  
     }  
     if(y<=(MAXHEIGHT-t))  
    {  
           c=1;  
     }  
        if(t>=40)  
       y=y+(c? 15:-15);   
       cleardevice();  
       //Exit upon keypress  
       if(kbhit())  
       break;  
}  
getch();  
}  
