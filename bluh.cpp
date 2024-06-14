#include <iostream>
#include <windows.h>
#include <vector>
#include <time.h>
#include <random>
   int pnts =0;
using namespace std;
class s{
 public:
   int x,y;
   s(){
      x = 9;
      y = 4;
   }
};

class player{
public:
 int x;
 int y;
 int hp;
 player(){
    x,y=0;
    hp = 100;
 }

 void moveup(){
   if(y>0){ 
   y -=1;} else{y=y;}
 }
 void movedown(){
   if(y<9){ 
   y +=1;} else {y=y;};
 }
 void moveright(){
   if(x<19){ 
   x += 1;}else{x=x;}
 }
 void moveleft(){
   if(x>0){ 
   x -=1;}else{x = x;}
 }
};

int pos(int i, int j, int xp, int yp, int xs, int ys);

int main(){

 player player1;
 s s1;
while(true) { 
   srand(time(0));
 s1.x=rand()%20;
 s1.y=rand()%10;

 cout<<"Points : "<< pnts/10 <<endl<<"--------------------"<<endl;
 for (int i = 0; i<10; i++){ 
 for (int j = 0; j < 20; j++)
 {

 if (pos(i,j,player1.x,player1.y,s1.x,s1.y) == 4)
 {
   pnts=pnts+1;
   break;
   break;
 }


  switch (pos(i,j,player1.x,player1.y,s1.x,s1.y))
  {
  case 1:
   cout<<'x';
   continue;
  case 0:
  cout<<'o';
  continue;
  default:
  cout<<' ';
   continue;
  }




 }
 cout<<endl;

}

while(true){


if (GetAsyncKeyState(VK_UP))
{
   Sleep(100);
   player1.moveup();
   break;
}

if (GetAsyncKeyState(VK_DOWN))
{
   Sleep(100);
   player1.movedown();
   break;
}

if (GetAsyncKeyState(VK_RIGHT))
{
   Sleep(100);
   player1.moveright();
   break;
}

if (GetAsyncKeyState(VK_LEFT))
{
   Sleep(100);
   player1.moveleft();
   break;
}

}
system("cls");

}
}


int pos(int i, int j, int xp, int yp, int xs, int ys){
   if(j == xp && i==yp){
      return 1;
   }else if(j == xs && i==ys){
      return 0;
   }else if(xs == xp && ys==yp){
      return 4;
   }
return 3;}