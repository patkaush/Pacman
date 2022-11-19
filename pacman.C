#include<stdio.h>
#include<conio.h>
#include<graphics.h>
static int count,check[20],score;
int left=300,right=150,x=400,y=80,x2=10,y2=290,area1,area2,c=0,d=0;
char dummy[20];
void *m,*n;
void monsterl();
void monstermove();
void monsterb();
void collision();
void foodcheck(int ,int);
 void pacr()
 { int area;
 void *p;
 setfillstyle(SOLID_FILL,YELLOW);
  pieslice(left,right,30,330,10);
  area=imagesize(left-10,right-10,left+10,right+10);
  p=malloc(area);
  getimage(left-10,right-10,left+10,right+10,p);
  monsterl();
  monsterb();
setfillstyle(SOLID_FILL,YELLOW);
 while(!kbhit())
	{
    pieslice(left,right,0,360,10);
    collision();
     delay(100);


     putimage(left-10,right-10,p,AND_PUT);

     delay(200);
     putimage(left-10,right-10,p,XOR_PUT);
    putimage(x,y,m,XOR_PUT);
    putimage(x2,y2,n,XOR_PUT);
    monstermove();
     foodcheck(left,right);

  if(count==0)
   {cleardevice();

   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(getmaxx()/2,getmaxy()/2,dummy);
   delay(1000);
   closegraph();
   }


 putimage(x,y,m,XOR_PUT);
 putimage(x2,y2,n,XOR_PUT);
// printf("(%d %d)",left,right);
     if(left<570)
     if(left<=175&&left>=165)
      {	if(right<170||right>230)
	     left+=15;
      }
     else
       if(left<=25&&left>=15)
	  { if(right+15<110||right>260)
	      left+=15;
	  }
     else
	  if(left<=125&&left>=115)
	   { if(right<105||right>280)    //3
		 left+=15;
	   }
	  else
	    if(left<=70&&left>=60)
	    { if(right<30||right>=85)
		     left+=15;
	    }
	   else
	    if(left<=210&&left>=180)
	     { if(right<255||right>290)        //6
		   left+=15;
	     }
	    else
	     if(left<=450&&left>=420)
	     {
	     if((right<30||right>150)&&(right<180||right>290))
			 left+=15;
	     }
	     else
	      if(left<530&&left>=510)
	       {
	       if(right<30||right>305)
		left+=15;
	       }
	   else
	   left+=15;




 }
 }
void pacd()
 {int area;
 void *p;
 setfillstyle(SOLID_FILL,YELLOW);

 pieslice(left,right,0,240,10);
 pieslice(left,right,300,360,10);
  area=imagesize(left-10,right-10,left+10,right+10);
  p=malloc(area);
  getimage(left-10,right-10,left+10,right+10,p);
  monsterl();
  setfillstyle(SOLID_FILL,YELLOW);
 while(!kbhit())
 {
    pieslice(left,right,0,240,10);

    pieslice(left,right,240,360,10);
     collision();
     delay(100);
     putimage(left-10,right-10,p,AND_PUT);
     delay(200);
     putimage(left-10,right-10,p,XOR_PUT);

    putimage(x,y,m,XOR_PUT);
    putimage(x2,y2,n,XOR_PUT);
  monstermove();
  foodcheck(left,right);

 if(count==0)
   {cleardevice();

   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(getmaxx()/2,getmaxy()/2,dummy);
   delay(1000);
   closegraph();
   }
 putimage(x,y,m,XOR_PUT);
  putimage(x2,y2,n,XOR_PUT);
//  printf("(%d %d)",left,right);
     if(right<325)
     {
     if(right<=190&&(right>160||right>170))  //1    6-1
     {
      if((left<180||left>395)&&(left-10<420||left-10>490))
	right+=15;
      }
     else
      if(right>=90&&right<100)               //2
       {
	 if((left<30||left>110)&&(left<135||left>260))
	   right+=15;
       }

     else
     if(right+10>20&&right+10<50)                  //4  9 8
     {
     if((left-10<60||left-10>350)&&(left-10<510||left-10>550)&&(left-10<420||left-10>490))              //error
	right+=15;

  }
     else
   if(right+15<140&&right+15>145)
      {   if(left-10<210||left-10>380)
		   right+=15;             //3

      }
  else
     if(right+15<260&&right+15>240)
	{

	if(left-10<180||left-10>390)
		     right+=15;
	}
     else
     if(right+15<320&&right+15>300)
      {
	 if(left-10>150)
	   right+=15;
      }
    else
	 right+=15;

  }

  }
}
void pacl()
 {  int area;
 void *p;
 setfillstyle(SOLID_FILL,YELLOW);
 pieslice(left,right,0,150,10);
 pieslice(left,right,210,360,10);
  area=imagesize(left-10,right-10,left+10,right+10);
  p=malloc(area);
  monsterl();
  getimage(left-10,right-10,left+10,right+10,p);
 while(!kbhit())
 {
    pieslice(left,right,0,150,10);
    pieslice(left,right,150,360,10);
     delay(100);
     collision();

     putimage(left-10,right-10,p,AND_PUT);
     delay(200);
     putimage(left-10,right-10,p,XOR_PUT);

     putimage(x,y,m,XOR_PUT);
   putimage(x2,y2,n,XOR_PUT);
   monstermove();
  foodcheck(left,right);
  if(count==0)
   {cleardevice();

   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(getmaxx()/2,getmaxy()/2,dummy);
   delay(1000);
   closegraph();
   }
 putimage(x,y,m,XOR_PUT);
 putimage(x2,y2,n,XOR_PUT);
    if(left>25)
     if(left>390&&left<=410)
       {
	 if((right<170||right>230)&&(right-15<240||right-15>280))   //1 6

	       left-=15;
       }
     else
      if(left>=95&&left<=130)
      {                                         //2

      if(right<110||right>255)
	      left-=15;
      }
      else
      if(left>250&&left<280)
       {  			   //3-1
	 if((right<105||right>130))

	    left-=15;
       }
     else
      if(left-15>130&&left-15<160)
      {
	if((right<110||right>270)&&(right<305))
	      left-=15;                              //3  7-1
      }
      else
      if(left-15>330&&left-15<370)                //4
      {  if(right-15<10||right-15>70)
	    left-=15;
      }
      else
      if(left-15>490&&left-15<510)
      {  if((right-15<10||right-15>140)&&(right-15<170||right-15>275))        //6 6-1
	 left-=15;
      }
     else
      if(left-15>540&&left-15<570)
       { if(right-15<10||right-15>285)
	  left-=15;

       }
      else
       left-=15;

 }
}
  void pacu()
 {    int area,ch=0;
 void *p;
 setfillstyle(SOLID_FILL,YELLOW);
 pieslice(left,right,0,60,10);
 pieslice(left,right,120,360,10);
  area=imagesize(left-10,right-10,left+10,right+10);
  p=malloc(area);
  monsterl();
  getimage(left-10,right-10,left+10,right+10,p);
 while(!kbhit())
 {
    pieslice(left,right,0,60,10);
    pieslice(left,right,60,360,10);
     collision();
     delay(100);
     putimage(left-10,right-10,p,AND_PUT);
     delay(200);
     putimage(left-10,right-10,p,XOR_PUT);
    putimage(x,y,m,XOR_PUT);
     putimage(x2,y2,n,XOR_PUT);
    monstermove();
    foodcheck(left,right);

    if(count==0)
   {cleardevice();

   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(getmaxx()/2,getmaxy()/2,dummy);
   delay(1000);
   closegraph();
   }
     putimage(x,y,m,XOR_PUT);
  putimage(x2,y2,n,XOR_PUT);
    if(right>25)
    if(right>=225&&right<=240)                 //error
     {
	  if(left<180||left>395)      //1
	   right-=15;
     }
    else
    if(right-15>=250&&right-15<270)      //2
      {   if(left<30||left>110)
	     right-=15;
      }
    else
    if(right-15>=250&&right-15<280)
     { if(left+15<145||left+15>180)
	 right-=15;                   //3
     }
    else
    if(right>110&&right<150)
    {
    if(left-15<150||left>270)               //3-1
       right-=15;
    }
   else
    if(right-15>60&&right-15<90)
    {
				   //4
      if(left<70||left+15>365)
	right-=15;
    }
   else
  if(right-15>260&&right-15<290)
    {                                   //6        8-1
       if((left-15<200||left-15>390)&&(left<430||left>505))
	 right-=15;
    }
   else
   if(right==165)
   {                   //8
   if(left<430||left>505)
     right-=15;

   }

 else
 if(right==315)
  {if(left<520||left>565)
    right-=15;                     //9
  }
   else
   right-=15;
 }
}
void obstacles()
 {setcolor(BLUE);

rectangle(40,110,100,250);                 //2
 rectangle(138,110,150,270);//3
rectangle(138,105,260,110);//3-1
rectangle(80,40,350,75);//4

//  rectangle(210,145,380,145);    //5
    rectangle(190,180,390,220);//1
   rectangle(200,255,390,280);      //6
   //   rectangle(220,255,210,290);//6-1
     rectangle(1,315,150,350);  //7-1
    rectangle(440,40,490,150);      //8
    rectangle(440,190,490,280);//8-1
    rectangle(530,40,550,300);      //9
//    rectangle(550,315,440,315); //9-1
  setcolor(WHITE);
 /* line(100,350,360,350);
   line(440,360,490,360);
   line(490,40,490,360);
   bar(          */
setcolor(YELLOW);
 }
void food()
{setcolor(RED);
setfillstyle(SOLID_FILL,LIGHTRED);

//left
circle(15,150,5); floodfill(15,150,RED);
circle(15,180,5); floodfill(15,180,RED);
circle(15,210,5);floodfill(15,210,RED);

circle(60,270,5);floodfill(60,270,RED);
circle(120,150,5);floodfill(120,150,RED);
circle(120,180,5);floodfill(120,180,RED);
circle(120,210,5);floodfill(120,210,RED);
//right
circle(420,60,5);floodfill(420,60,RED);
circle(420,105,5);floodfill(420,105,RED);
circle(420,135,5);floodfill(420,135,RED);
circle(420,195,5);floodfill(420,195,RED);
circle(420,225,5);floodfill(420,225,RED);
circle(420,255,5);floodfill(420,255,RED);
//
circle(510,60,5);floodfill(510,60,RED);
circle(510,105,5);floodfill(510,105,RED);
circle(510,135,5);floodfill(510,135,RED);
circle(510,195,5);floodfill(510,195,RED);
circle(510,225,5);floodfill(510,225,RED);
circle(510,255,5);floodfill(510,255,RED);
circle(465,15,5);floodfill(465,15,RED);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
}

void monsterl()
 {  setcolor(RED);
setfillstyle(SOLID_FILL,LIGHTRED);
rectangle(x,y,x+20,y+20);

floodfill(x+1,y+1,RED);

area1=imagesize(x,y,x+20,y+20);
m=malloc(area1);
getimage(x,y,x+20,y+20,m);
//rectangle(x-20,y,x,y+20);
//floodfill(x-19,y+1,RED);

setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
}
void monsterb()
{setcolor(CYAN);
setfillstyle(SOLID_FILL,LIGHTCYAN);
rectangle(x2,y2,x2+20,y2+20);

floodfill(x2+1,y2+1,CYAN);

area2=imagesize(x2,y2,x2+20,y2+20);
n=malloc(area2);
getimage(x2,y2,x2+20,y2+20,n);

setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
}
void monstermove()
{
  if(x<=15)
    c=1;
    if(x>15&&c==0)
   { x-=30;

   }
    else
     { if(c==1&&x<=390)
      x+=30;
      else
      if(x>390)
      c=0;
     }
 if(x2<=10)
    d=1;
    if(d==0)
   { x2-=40;

   }
    else
     { if(d==1&&x2<=480)
      x2+=40;
      else
      if(x2>480)
      d=0;
     }




}
void foodcheck(int x1,int y1)
{   if(x1==15)
   switch(y1)
   {case 150: if(check[0]==1)
	      {count--;score+=100;
	      check[0]=0;}break;
    case 180:if(check[1]==1)
	      { count--;score+=100;
	      check[1]=0;}break;
    case 210:if(check[2]==1)
	       {count--;score+=100;
	       check[2]=0;}break;
   }
   else
  { if(x1==120)
     switch(y1)
   {case 150: if(check[3]==1)
	      {count--;score+=100;
	      check[3]=0;}break;
    case 180:if(check[4]==1)
	       {count--;score+=100;
	       check[4]=0;}break;
    case 210:if(check[5]==1)
	      { count--;score+=100;
	      check[5]=0;}break;
   }
   else
   {if(x1==60&&y1==270)
     if(check[6]==1)
	{count--;score+=100;
	check[6]=0;}
    }
  }
   if(x1==420)
   switch(y1)
   {case 60:if(check[7]==1)
	     { count--;check[7]=0;score+=100;
	     }break;
    case 105:if(check[8]==1)
	     { count--;check[8]=0;score+=100;
	     }break;
    case 135:if(check[9]==1)
	      { count--;check[9]=0;score+=100;
	      }break;
    case 195:if(check[10]==1)
	      { count--;check[10]=0;score+=100;
	      }break;
    case 225:if(check[11]==1)
	      {count--;check[11]=0;score+=100;
	      }break;
    case 255:if(check[12]==1)
	     { count--;check[12]=0;score+=100;
	     }break;
   }
  else
   {if(x1==510)
     switch(y1)
   {case 60:if(check[13]==1)
	     { count--;check[13]=0;
	     score+=100;}break;
    case 105:if(check[14]==1)
	     { count--;check[14]=0;score+=100;}break;
    case 135:if(check[15]==1)
	      { count--;check[15]=0;score+=100;}break;
    case 195:if(check[16]==1)
	      { count--;check[16]=0;score+=100;}break;
    case 225:if(check[17]==1)
	     { count--;check[17]=0;score+=100;}break;
    case 255:if(check[18]==1)
	     { count--;check[18]=0;score+=100;}break;
   }

  else
  { if(x1==465&&y1==15)
    if(check[19]==1)
    { count--;check[19]=0;score+=100;}
  }
   }
sprintf(dummy,"%d-score",score);
}
void collision()
{settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 if((right-10==y))
    {//printf("(%d %d ,%d %d) ",left,right,x2,y2);
    if(left>=x&&left<=x+40)
   { //printf("(%d %d ,%d %d) ",left,right,x2,y2);
   cleardevice();
   outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
   outtextxy(getmaxx()/2,getmaxy()/2+20,dummy);}
    else
    if(x>=left&&x<=left+40)
   {// printf("(%d %d ,%d %d) ",left,right,x2,y2);
   cleardevice();
   outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
   outtextxy(getmaxx()/2,getmaxy()/2+20,dummy); }

   }
     if((right==y2+5||right==y2+10))
    {//printf("(%d %d ,%d %d) ",left,right,x2,y2);
    if(left>=x2&&left<=x2+40)
   {// printf("(%d %d ,%d %d) ",left,right,x2,y2);
   cleardevice();
   outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
   outtextxy(getmaxx()/2,getmaxy()/2+20,dummy);}
    else
    if(x2>=left&&x2<=left+40)
   { //printf("(%d %d ,%d %d) ",left,right,x2,y2);
   cleardevice();
   outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
   outtextxy(getmaxx()/2,getmaxy()/2+20,dummy); }

   }
}

void entry()
{delay(500);
outtextxy(200,200,"WELCOME TO PACMAN");
outtextxy(200,250,"PRESS ANY ARROW TO PLAY");
outtextxy(200,300,"PRESS ESC TO QUIT THE GAME");
getch();
cleardevice();




}
  void main()
{int ch1,ch2,x=20,y=60,i,j;
 int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
entry();
rectangle(10,45,600,390);
setviewport(10,45,600,390,1);

food();
for(i=0;i<20;i++)
check[i]=1;
count=20;
obstacles();

pacr();

while(1)
{ch1=getch();
switch(ch1)
{ case 0:ch2=getch();
	  switch(ch2)
	  {
	     case 80:pacd();//monster();
			  break;
		 case 77:pacr();//monster();
			 break;
		 case 75:pacl();//monster();
			 break;
		 case 72:pacu();//monster();
			 break;
	   }
	  break;
  case 27:return;
 }
}

getch();
}
