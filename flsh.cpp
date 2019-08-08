#include<graphics.h>
#include<math.h>
#include<stdio.h>
main()
{int driver,mode;
double q,t,w,v;
double x[5],y[5],x1[5],x2[5],y1[5],y2[5];
int i,j,x0=50,y0=50,r=30,m=20,a=10,b=5,k,n;
driver=DETECT;
mode=0;
t=(2*3.1415926)/5;
v=(2*3.1415926)/12;
?
initgraph(&driver,&mode," ");
setcolor(14);
setbkcolor(4);
for(i=0;i<=4;i++)
{q=t*i;
x[i]=r*cos(q)+x0;
y[i]=r*sin(q)+y0;}
moveto(x[0],y[0]);
lineto(x[2],y[2]);
lineto(x[4],y[4]);
lineto(x[1],y[1]);
lineto(x[3],y[3]);
lineto(x[0],y[0]);
lineto(x[2],y[2]);
setfillstyle(1,14);
floodfill(x0,y0,14);
for(i=0;i<=4;i++)
{q=t*i;
x1[i]=m*cos(q)+x0;
y1[i]=m*sin(q)+y0;
setfillstyle(1,14);
floodfill(x1[i],y1[i],14);}
?
for(j=0;j<=3;j++)
{w=v*j;
x2[j]=120*cos(w)-50*sin(w)+50*(1-cos(w))+50*sin(w);
y2[j]=120*sin(w)+50*cos(w)+50*(1-cos(w))-50*sin(w);
?for(k=0;k<=4;k++)
{q=t*k;
x[k]=a*cos(q)+x2[j];
y[k]=a*sin(q)+y2[j];}
moveto(x[0],y[0]);
lineto(x[2],y[2]);
lineto(x[4],y[4]);
lineto(x[1],y[1]);
lineto(x[3],y[3]);
lineto(x[0],y[0]);
lineto(x[2],y[2]);
setfillstyle(1,14);
floodfill(x2[j],y2[j],14); ? for(k=0;k<=4;k++)
{q=t*k;
x1[k]=b*cos(q)+x2[j];
y1[k]=b*sin(q)+y2[j];
setfillstyle(1,14);
floodfill(x1[k],y1[k],14);}

 }
getch();
closegraph();
}
