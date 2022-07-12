#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#define MAX 13

void gotoxy(int x,int y)
{
	HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD g = {x,y};
	SetConsoleCursorPosition(h,g);
}

void textcolor(int x)
{
	HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,x);
}
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
void Begin()
{
	gotoxy(28,2); textcolor(12); printf("CONNECTING FROM 2K4");
   gotoxy(13,4); textcolor(12); printf("%c%c%c",3,3,3);gotoxy(65,4);printf("%c%c%c",3,3,3);
   gotoxy(16,4); textcolor(11); printf(" Send to...........Cac si tu 2k4");
  // gotoxy(18,6); textcolor(14); printf("____________________________________________");
   gotoxy(32,6); textcolor(13); printf("Loading......10%%");
   gotoxy(18,7); textcolor(14); printf("____________________________________________");
}

void love(int luu)
{
int traitim[MAX][MAX]= {
{0,0,1,1,1,0,0,0,1,1,1,0,0},
{0,1,0,0,0,1,0,1,0,0,0,1,0},
{1,0,0,0,0,0,1,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,1},
{0,1,0,0,0,0,0,0,0,0,0,1,0},
{0,0,1,0,0,0,0,0,0,0,1,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,0},
{0,0,0,0,1,0,0,0,1,0,0,0,0},
{0,0,0,0,0,1,0,1,0,0,0,0,0},
{0,0,0,0,0,0,1,0,0,0,0,0,0}};
textcolor(luu%14+1);
if(luu==0)
{
	for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	Sleep(10);
        	if(traitim[i][j]) {gotoxy(j+20,i+10); printf("%c",3);}
		    else  {gotoxy(j+20,i+10); printf(" ");} 
		}
	printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	Sleep(10);
        	if(traitim[i][j]) {gotoxy(j+33,i+10); printf("%c",3);}
		    else  {gotoxy(j+33,i+10); printf(" ");} 
		}
	printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	Sleep(10);
        	if(traitim[i][j]) {gotoxy(j+46,i+10); printf("%c",3);}
		    else  {gotoxy(j+46,i+10); printf(" ");} 
		}
	printf("\n");
}
}
if(luu%2==0)
{
	for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	if(traitim[i][j]) {gotoxy(j+20,i+10); printf("%c",3);}
		    else  {gotoxy(j+20,i+10); printf(" ");} 
		}
	printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	if(traitim[i][j]) {gotoxy(j+33,i+10); printf("%c",3);}
		    else  {gotoxy(j+33,i+10); printf(" ");} 
		}
	printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
        	if(traitim[i][j]) {gotoxy(j+46,i+10); printf("%c",3);}
		    else  {gotoxy(j+46,i+10); printf(" ");} 
		}
	printf("\n");
}
}
   textcolor(12);
   gotoxy(26,14); printf("Thi");   gotoxy(38,14); printf("Tot");    gotoxy(51,14); printf("Nhe");
}
int main()
{
	resizeConsole(900,450);
   	Begin(); 
   	gotoxy(10,10); textcolor(15); printf("Ki Thi Tot nghiep THPT 2022 den roi:              ");
   	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......15%%");
   	gotoxy(10,10); textcolor(15); printf("Chuc Cac Sy Tu Khoe manh, Tinh Than Thoai Mai, Dat duoc ket qua Tot                         ");
   	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......21%%");
   	gotoxy(10,10); textcolor(15); printf("Nay Ban, Con Nguoi Ta Luon Co Du Kha Nang Va Nghi Luc  !!!                  ");
   	gotoxy(10,12); textcolor(15); printf(" Vi Vay, Hay Bing tinh và Can Than de lam bai thi mot cach thong minh ban nhe  !!!                ");
   	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......26%%");
   	gotoxy(10,10); textcolor(15); printf("DAT DUOC KET QUA MONG MUON NHE!!!!         ");
   	gotoxy(10,12); textcolor(15); printf("                                                                              ");
   	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......35%%");
   	gotoxy(10,10); textcolor(15); printf("...........................................               ");
   	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......41%%");
   	gotoxy(10,10); textcolor(15); printf("Hay De Tam Tri Thoai Mai nhe!!                 ");
   	gotoxy(10,12); textcolor(15); printf("    Dung tao ap luc cho ban than                                           ");
  	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......49%%");
   	gotoxy(10,10); textcolor(15); printf("  Binh Tinh va Tu Tin len                 ");
   	gotoxy(10,12); textcolor(15); printf("                                               ");
   	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......55%%");
   	gotoxy(10,10); textcolor(15); printf("............................             ");
   	gotoxy(10,12); textcolor(11); printf("Dung so con duong phia truoc canh Cong Dai Hoc Dang Mo             ");
  	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......61%%");
   	gotoxy(10,10); textcolor(15); printf("Thi That Tot de Khong Phu Long Cha Me                                        ");
   	gotoxy(10,12); textcolor(15); printf(" Co Ngan Thu Khoa Nhe -_-"                 );
  	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......68%%");
   	gotoxy(10,10); textcolor(15); printf("12 nam ren sach Chinh Chien 2 ngay Nhe!!                 ");
   	gotoxy(10,12); textcolor(15); printf("                                                                         ");
  	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......85%%");
   	gotoxy(10,10); textcolor(15); printf("Vi vay....On bai hoc ky cac Ban Nhe                       ");
   	gotoxy(10,12); textcolor(15); printf("                        ");         
  	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......93%%");
   	gotoxy(10,10); textcolor(15); printf("                   Chuyen Bay Cuoi Sap Cap Ben Roi Day            ");
   	gotoxy(10,12); textcolor(15); printf(" Tro ngai Cuoi Cung Co Gang Vuot qua Nhe                    ");
  	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......99%%");
   	gotoxy(10,10); textcolor(15); printf(".......................            ");
   	gotoxy(10,12); textcolor(15); printf("Cap ben ben do Mang Ten 'DAI HOC'                           ");
  	Sleep(3000);gotoxy(32,6); textcolor(13); printf("Loading......100%%");
   	gotoxy(10,10); textcolor(15); printf("Va Cuoi Cung Chuc Cac Si TU 2k4 THI TOT!!!!!!!!                       ");
   	Sleep(15000);
   	system("cls");
   	int luu = 0;
   	while(1)
   	{
   		love(luu);
   		luu++;
   		Sleep(300);
	   }
   	
getch();
}
