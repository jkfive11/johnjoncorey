//BattleShip--Final Project (with smart_strike)



//Jonathan Keller, Corey Hupper, and John Lowery







#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>







//h (hidden) values figure out if it is hit or miss, while the other ones are the ones that are displayed (` for miss, X for hit, and spaces for not tried yet)



char a[10];



int ah[10];



char b[10];



int bh[10];



char c[10];



int ch[10];



char d[10];



int dh[10];



char e[10];



int eh[10];



char f[10];



int fh[10];



char g[10];



int gh[10];



char h[10];



int hh[10];



char i[10];



int ih[10];



char j[10];



int jh[10];







char a2[10];



int ah2[10];



char b2[10];







int bh2[10];



char c2[10];



int ch2[10];



char d2[10];



int dh2[10];



char e2[10];



int eh2[10];



char f2[10];



int fh2[10];



char g2[10];



int gh2[10];



char h2[10];



int hh2[10];



char i2[10];



int ih2[10];



char j2[10];



int jh2[10];


struct loc
{
    char row;
    int element;
};

struct loc A0 = {'a', 1};
struct loc A1 = {'a', 2};
struct loc A2 = {'a', 3};
struct loc A3 = {'a', 4};
struct loc A4 = {'a', 5};
struct loc A5 = {'a', 6};
struct loc A6 = {'a', 7};
struct loc A7 = {'a', 8};
struct loc A8 = {'a', 9};
struct loc A9 = {'a', 10};

struct loc B0	 = {'b', 1};
struct loc B1	 = {'b', 2};
struct loc B2	 = {'b', 3};
struct loc B3	 = {'b', 4};
struct loc B4	 = {'b', 5};
struct loc B5	 = {'b', 6};
struct loc B6	 = {'b', 7};
struct loc B7	 = {'b', 8};
struct loc B8	 = {'b', 9};
struct loc B9	 = {'b', 10};

struct loc C0	 = {'c', 1};
struct loc C1	 = {'c', 2};
struct loc C2	 = {'c', 3};
struct loc C3	 = {'c', 4};
struct loc C4	 = {'c', 5};
struct loc C5	 = {'c', 6};
struct loc C6	 = {'c', 7};
struct loc C7	 = {'c', 8};
struct loc C8	 = {'c', 9};
struct loc C9	 = {'c', 10};


struct loc D0	 = {'d', 1};
struct loc D1	 = {'d', 2};
struct loc D2	 = {'d', 3};
struct loc D3	 = {'d', 4};
struct loc D4	 = {'d', 5};
struct loc D5	 = {'d', 6};
struct loc D6	 = {'d', 7};
struct loc D7	 = {'d', 8};
struct loc D8	 = {'d', 9};
struct loc D9	 = {'d', 10};

struct loc E0	 = {'e', 1};
struct loc E1	 = {'e', 2};
struct loc E2	 = {'e', 3};
struct loc E3	 = {'e', 4};
struct loc E4	 = {'e', 5};
struct loc E5	 = {'e', 6};
struct loc E6	 = {'e', 7};
struct loc E7	 = {'e', 8};
struct loc E8	 = {'e', 9};
struct loc E9	 = {'e', 10};

struct loc F0	 = {'f', 1};
struct loc F1	 = {'f', 2};
struct loc F2	 = {'f', 3};
struct loc F3	 = {'f', 4};
struct loc F4	 = {'f', 5};
struct loc F5	 = {'f', 6};
struct loc F6	 = {'f', 7};
struct loc F7	 = {'f', 8};
struct loc F8	 = {'f', 9};
struct loc F9	 = {'f', 10};


struct loc G0	 = {'g', 1};
struct loc G1	 = {'g', 2};
struct loc G2	 = {'g', 3};
struct loc G3	 = {'g', 4};
struct loc G4	 = {'g', 5};
struct loc G5	 = {'g', 6};
struct loc G6	 = {'g', 7};
struct loc G7	 = {'g', 8};
struct loc G8	 = {'g', 9};
struct loc G9	 = {'g', 10};

struct loc H0	 = {'h', 1};
struct loc H1	 = {'h', 2};
struct loc H2	 = {'h', 3};
struct loc H3	 = {'h', 4};
struct loc H4	 = {'h', 5};
struct loc H5	 = {'h', 6};
struct loc H6	 = {'h', 7};
struct loc H7	 = {'h', 8};
struct loc H8	 = {'h', 9};
struct loc H9	 = {'h', 10};


struct loc I0	 = {'i', 1};
struct loc I1	 = {'i', 2};
struct loc I2	 = {'i', 3};
struct loc I3	 = {'i', 4};
struct loc I4	 = {'i', 5};
struct loc I5	 = {'i', 6};
struct loc I6	 = {'i', 7};
struct loc I7	 = {'i', 8};
struct loc I8	 = {'i', 9};
struct loc I9	 = {'i', 10};

struct loc J0	 = {'j', 1};
struct loc J1	 = {'j', 2};
struct loc J2	 = {'j', 3};
struct loc J3	 = {'j', 4};
struct loc J4	 = {'j', 5};
struct loc J5	 = {'j', 6};
struct loc J6	 = {'j', 7};
struct loc J7	 = {'j', 8};
struct loc J8	 = {'j', 9};
struct loc J9	 = {'j', 10};

struct loc open_space[100];

void initialize_open_space()
{
open_space[0].row='a';
open_space[0].element=1;
open_space[1].row='a';
open_space[1].element=2;
open_space[2].row='a';
open_space[2].element=3;
open_space[3].row='a';
open_space[3].element=4;
open_space[4].row='a';
open_space[4].element=5;
open_space[5].row='a';
open_space[5].element=6;
open_space[6].row='a';
open_space[6].element=7;
open_space[7].row='a';
open_space[7].element=8;
open_space[8].row='a';
open_space[8].element=9;
open_space[9].row='a';
open_space[9].element=10;
open_space[10].row='b';
open_space[10].element=1;
open_space[11].row='b';
open_space[11].element=2;
open_space[12].row='b';
open_space[12].element=3;
open_space[13].row='b';
open_space[13].element=4;
open_space[14].row='b';
open_space[14].element=5;
open_space[15].row='b';
open_space[15].element=6;
open_space[16].row='b';
open_space[16].element=7;
open_space[17].row='b';
open_space[17].element=8;
open_space[18].row='b';
open_space[18].element=9;
open_space[19].row='b';
open_space[19].element=10;
open_space[20].row='c';
open_space[20].element=1;
open_space[21].row='c';
open_space[21].element=2;
open_space[22].row='c';
open_space[22].element=3;
open_space[23].row='c';
open_space[23].element=4;
open_space[24].row='c';
open_space[24].element=5;
open_space[25].row='c';
open_space[25].element=6;
open_space[26].row='c';
open_space[26].element=7;
open_space[27].row='c';
open_space[27].element=8;
open_space[28].row='c';
open_space[28].element=9;
open_space[29].row='c';
open_space[29].element=10;
open_space[30].row='d';
open_space[30].element=1;
open_space[31].row='d';
open_space[31].element=2;
open_space[32].row='d';
open_space[32].element=3;
open_space[33].row='d';
open_space[33].element=4;
open_space[34].row='d';
open_space[34].element=5;
open_space[35].row='d';
open_space[35].element=6;
open_space[36].row='d';
open_space[36].element=7;
open_space[37].row='d';
open_space[37].element=8;
open_space[38].row='d';
open_space[38].element=9;
open_space[39].row='d';
open_space[39].element=10;
open_space[40].row='e';
open_space[40].element=1;
open_space[41].row='e';
open_space[41].element=2;
open_space[42].row='e';
open_space[42].element=3;
open_space[43].row='e';
open_space[43].element=4;
open_space[44].row='e';
open_space[44].element=5;
open_space[45].row='e';
open_space[45].element=6;
open_space[46].row='e';
open_space[46].element=7;
open_space[47].row='e';
open_space[47].element=8;
open_space[48].row='e';
open_space[48].element=9;
open_space[49].row='e';
open_space[49].element=10;
open_space[50].row='f';
open_space[50].element=1;
open_space[51].row='f';
open_space[51].element=2;
open_space[52].row='f';
open_space[52].element=3;
open_space[53].row='f';
open_space[53].element=4;
open_space[54].row='f';
open_space[54].element=5;
open_space[55].row='f';
open_space[55].element=6;
open_space[56].row='f';
open_space[56].element=7;
open_space[57].row='f';
open_space[57].element=8;
open_space[58].row='f';
open_space[58].element=9;
open_space[59].row='f';
open_space[59].element=10;
open_space[60].row='g';
open_space[60].element=1;
open_space[61].row='g';
open_space[61].element=2;
open_space[62].row='g';
open_space[62].element=3;
open_space[63].row='g';
open_space[63].element=4;
open_space[64].row='g';
open_space[64].element=5;
open_space[65].row='g';
open_space[65].element=6;
open_space[66].row='g';
open_space[66].element=7;
open_space[67].row='g';
open_space[67].element=8;
open_space[68].row='g';
open_space[68].element=9;
open_space[69].row='g';
open_space[69].element=10;
open_space[70].row='h';
open_space[70].element=1;
open_space[71].row='h';
open_space[71].element=2;
open_space[72].row='h';
open_space[72].element=3;
open_space[73].row='h';
open_space[73].element=4;
open_space[74].row='h';
open_space[74].element=5;
open_space[75].row='h';
open_space[75].element=6;
open_space[76].row='h';
open_space[76].element=7;
open_space[77].row='h';
open_space[77].element=8;
open_space[78].row='h';
open_space[78].element=9;
open_space[79].row='h';
open_space[79].element=10;
open_space[80].row='i';
open_space[80].element=1;
open_space[81].row='i';
open_space[81].element=2;
open_space[82].row='i';
open_space[82].element=3;
open_space[83].row='i';
open_space[83].element=4;
open_space[84].row='i';
open_space[84].element=5;
open_space[85].row='i';
open_space[85].element=6;
open_space[86].row='i';
open_space[86].element=7;
open_space[87].row='i';
open_space[87].element=8;
open_space[88].row='i';
open_space[88].element=9;
open_space[89].row='i';
open_space[89].element=10;
open_space[90].row='j';
open_space[90].element=1;
open_space[91].row='j';
open_space[91].element=2;
open_space[92].row='j';
open_space[92].element=3;
open_space[93].row='j';
open_space[93].element=4;
open_space[94].row='j';
open_space[94].element=5;
open_space[95].row='j';
open_space[95].element=6;
open_space[96].row='j';
open_space[96].element=7;
open_space[97].row='j';
open_space[97].element=8;
open_space[98].row='j';
open_space[98].element=9;
open_space[99].row='j';
open_space[99].element=10;
}

int optimize_char(struct loc x)
{

char char_array_assigner[10]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

char last_strike_char=x.row;

if(last_strike_char=='a')
    {last_strike_char=char_array_assigner[0];
    return 0;}
else if(last_strike_char=='b')
    {last_strike_char=char_array_assigner[1];
    return 1;}
else if(last_strike_char=='c')
    {last_strike_char=char_array_assigner[2];
    return 2;}
else if(last_strike_char=='d')
    {last_strike_char=char_array_assigner[3];
    return 3;}
else if(last_strike_char=='e')
    {last_strike_char=char_array_assigner[4];
    return 4;}
else if(last_strike_char=='f')
    {last_strike_char=char_array_assigner[5];
    return 5;}
else if(last_strike_char=='g')
    {last_strike_char=char_array_assigner[6];
    return 6;}
else if(last_strike_char=='h')
    {last_strike_char=char_array_assigner[7];
    return 7;}
else if(last_strike_char=='i')
    {last_strike_char=char_array_assigner[8];
    return 8;}
else if(last_strike_char=='j')
    {last_strike_char=char_array_assigner[9];
    return 9;}
}

int hits;



int enemy_hits;



//this function initalizes the arrays



void initialize_arrays()



{



int counter =0;



while (counter<10)



{



  ah[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  bh[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  ch[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  dh[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  eh[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  fh[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  gh[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  hh[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  ih[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  jh[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  a[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  b[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  c[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  d[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  e[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  f[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  g[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  h[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  i[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  j[counter]=' ';



counter++;



}



counter=0;























while (counter<10)



{



  ah2[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  bh2[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  ch2[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  dh2[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  eh2[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  fh2[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  gh2[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  hh2[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  ih2[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  jh2[counter]=0;



counter++;



}



counter=0;



while (counter<10)



{



  a2[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  b2[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  c2[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  d2[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  e2[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  f2[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  g2[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  h2[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  i2[counter]=' ';



counter++;



}



counter=0;



while (counter<10)



{



  j2[counter]=' ';



counter++;



}



counter=0;



}//end of function initialize_arrays



void print_screen()//will be 5 spaces in between each vertical line filled with the



{

//system("cls");



  printf("    *************************BATTLESHIP*************************\n");



  printf("\n    *************************YOUR SHIPS*************************\n");



  printf("      1     2     3     4     5     6     7     8     9     10\n");



  printf("     ___________________________________________________________\n");



  printf("A  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", a[0], a[0], a[0], a[0], a[0], a[1], a[1], a[1], a[1], a[1], a[2], a[2], a[2], a[2], a[2], a[3], a[3], a[3], a[3], a[3], a[4], a[4], a[4], a[4], a[4], a[5], a[5], a[5], a[5], a[5], a[6], a[6], a[6], a[6], a[6], a[7], a[7], a[7], a[7], a[7], a[8], a[8], a[8], a[8], a[8], a[9], a[9], a[9], a[9], a[9], a[10], a[10], a[10], a[10], a[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", a[0], a[0], a[0], a[0], a[0], a[1], a[1], a[1], a[1], a[1], a[2], a[2], a[2], a[2], a[2], a[3], a[3], a[3], a[3], a[3], a[4], a[4], a[4], a[4], a[4], a[5], a[5], a[5], a[5], a[5], a[6], a[6], a[6], a[6], a[6], a[7], a[7], a[7], a[7], a[7], a[8], a[8], a[8], a[8], a[8], a[9], a[9], a[9], a[9], a[9], a[10], a[10], a[10], a[10], a[10]);



  printf("    ___________________________________________________________\n");



  printf("B  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", b[0], b[0], b[0], b[0], b[0], b[1], b[1], b[1], b[1], b[1], b[2], b[2], b[2], b[2], b[2], b[3], b[3], b[3], b[3], b[3], b[4], b[4], b[4], b[4], b[4], b[5], b[5], b[5], b[5], b[5], b[6], b[6], b[6], b[6], b[6], b[7], b[7], b[7], b[7], b[7], b[8], b[8], b[8], b[8], b[8], b[9], b[9], b[9], b[9], b[9], b[10], b[10], b[10], b[10], b[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", b[0], b[0], b[0], b[0], b[0], b[1], b[1], b[1], b[1], b[1], b[2], b[2], b[2], b[2], b[2], b[3], b[3], b[3], b[3], b[3], b[4], b[4], b[4], b[4], b[4], b[5], b[5], b[5], b[5], b[5], b[6], b[6], b[6], b[6], b[6], b[7], b[7], b[7], b[7], b[7], b[8], b[8], b[8], b[8], b[8], b[9], b[9], b[9], b[9], b[9], b[10], b[10], b[10], b[10], b[10]);



  printf("    ___________________________________________________________\n");



  printf("C  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", c[0], c[0], c[0], c[0], c[0], c[1], c[1], c[1], c[1], c[1], c[2], c[2], c[2], c[2], c[2], c[3], c[3], c[3], c[3], c[3], c[4], c[4], c[4], c[4], c[4], c[5], c[5], c[5], c[5], c[5], c[6], c[6], c[6], c[6], c[6], c[7], c[7], c[7], c[7], c[7], c[8], c[8], c[8], c[8], c[8], c[9], c[9], c[9], c[9], c[9], c[10], c[10], c[10], c[10], c[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", c[0], c[0], c[0], c[0], c[0], c[1], c[1], c[1], c[1], c[1], c[2], c[2], c[2], c[2], c[2], c[3], c[3], c[3], c[3], c[3], c[4], c[4], c[4], c[4], c[4], c[5], c[5], c[5], c[5], c[5], c[6], c[6], c[6], c[6], c[6], c[7], c[7], c[7], c[7], c[7], c[8], c[8], c[8], c[8], c[8], c[9], c[9], c[9], c[9], c[9], c[10], c[10], c[10], c[10], c[10]);



  printf("    ___________________________________________________________\n");



  printf("D  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", d[0], d[0], d[0], d[0], d[0], d[1], d[1], d[1], d[1], d[1], d[2], d[2], d[2], d[2], d[2], d[3], d[3], d[3], d[3], d[3], d[4], d[4], d[4], d[4], d[4], d[5], d[5], d[5], d[5], d[5], d[6], d[6], d[6], d[6], d[6], d[7], d[7], d[7], d[7], d[7], d[8], d[8], d[8], d[8], d[8], d[9], d[9], d[9], d[9], d[9], d[10], d[10], d[10], d[10], d[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", d[0], d[0], d[0], d[0], d[0], d[1], d[1], d[1], d[1], d[1], d[2], d[2], d[2], d[2], d[2], d[3], d[3], d[3], d[3], d[3], d[4], d[4], d[4], d[4], d[4], d[5], d[5], d[5], d[5], d[5], d[6], d[6], d[6], d[6], d[6], d[7], d[7], d[7], d[7], d[7], d[8], d[8], d[8], d[8], d[8], d[9], d[9], d[9], d[9], d[9], d[10], d[10], d[10], d[10], d[10]);



  printf("    ___________________________________________________________\n");



  printf("E  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", e[0], e[0], e[0], e[0], e[0], e[1], e[1], e[1], e[1], e[1], e[2], e[2], e[2], e[2], e[2], e[3], e[3], e[3], e[3], e[3], e[4], e[4], e[4], e[4], e[4], e[5], e[5], e[5], e[5], e[5], e[6], e[6], e[6], e[6], e[6], e[7], e[7], e[7], e[7], e[7], e[8], e[8], e[8], e[8], e[8], e[9], e[9], e[9], e[9], e[9], e[10], e[10], e[10], e[10], e[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", e[0], e[0], e[0], e[0], e[0], e[1], e[1], e[1], e[1], e[1], e[2], e[2], e[2], e[2], e[2], e[3], e[3], e[3], e[3], e[3], e[4], e[4], e[4], e[4], e[4], e[5], e[5], e[5], e[5], e[5], e[6], e[6], e[6], e[6], e[6], e[7], e[7], e[7], e[7], e[7], e[8], e[8], e[8], e[8], e[8], e[9], e[9], e[9], e[9], e[9], e[10], e[10], e[10], e[10], e[10]);



  printf("    ___________________________________________________________\n");



  printf("F  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", f[0], f[0], f[0], f[0], f[0], f[1], f[1], f[1], f[1], f[1], f[2], f[2], f[2], f[2], f[2], f[3], f[3], f[3], f[3], f[3], f[4], f[4], f[4], f[4], f[4], f[5], f[5], f[5], f[5], f[5], f[6], f[6], f[6], f[6], f[6], f[7], f[7], f[7], f[7], f[7], f[8], f[8], f[8], f[8], f[8], f[9], f[9], f[9], f[9], f[9], f[10], f[10], f[10], f[10], f[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", f[0], f[0], f[0], f[0], f[0], f[1], f[1], f[1], f[1], f[1], f[2], f[2], f[2], f[2], f[2], f[3], f[3], f[3], f[3], f[3], f[4], f[4], f[4], f[4], f[4], f[5], f[5], f[5], f[5], f[5], f[6], f[6], f[6], f[6], f[6], f[7], f[7], f[7], f[7], f[7], f[8], f[8], f[8], f[8], f[8], f[9], f[9], f[9], f[9], f[9], f[10], f[10], f[10], f[10], f[10]);



  printf("    ___________________________________________________________\n");



  printf("G  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", g[0], g[0], g[0], g[0], g[0], g[1], g[1], g[1], g[1], g[1], g[2], g[2], g[2], g[2], g[2], g[3], g[3], g[3], g[3], g[3], g[4], g[4], g[4], g[4], g[4], g[5], g[5], g[5], g[5], g[5], g[6], g[6], g[6], g[6], g[6], g[7], g[7], g[7], g[7], g[7], g[8], g[8], g[8], g[8], g[8], g[9], g[9], g[9], g[9], g[9], g[10], g[10], g[10], g[10], g[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", g[0], g[0], g[0], g[0], g[0], g[1], g[1], g[1], g[1], g[1], g[2], g[2], g[2], g[2], g[2], g[3], g[3], g[3], g[3], g[3], g[4], g[4], g[4], g[4], g[4], g[5], g[5], g[5], g[5], g[5], g[6], g[6], g[6], g[6], g[6], g[7], g[7], g[7], g[7], g[7], g[8], g[8], g[8], g[8], g[8], g[9], g[9], g[9], g[9], g[9], g[10], g[10], g[10], g[10], g[10]);



  printf("    ___________________________________________________________\n");



  printf("H  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", h[0], h[0], h[0], h[0], h[0], h[1], h[1], h[1], h[1], h[1], h[2], h[2], h[2], h[2], h[2], h[3], h[3], h[3], h[3], h[3], h[4], h[4], h[4], h[4], h[4], h[5], h[5], h[5], h[5], h[5], h[6], h[6], h[6], h[6], h[6], h[7], h[7], h[7], h[7], h[7], h[8], h[8], h[8], h[8], h[8], h[9], h[9], h[9], h[9], h[9], h[10], h[10], h[10], h[10], h[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", h[0], h[0], h[0], h[0], h[0], h[1], h[1], h[1], h[1], h[1], h[2], h[2], h[2], h[2], h[2], h[3], h[3], h[3], h[3], h[3], h[4], h[4], h[4], h[4], h[4], h[5], h[5], h[5], h[5], h[5], h[6], h[6], h[6], h[6], h[6], h[7], h[7], h[7], h[7], h[7], h[8], h[8], h[8], h[8], h[8], h[9], h[9], h[9], h[9], h[9], h[10], h[10], h[10], h[10], h[10]);



  printf("    ___________________________________________________________\n");



  printf("I  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", i[0], i[0], i[0], i[0], i[0], i[1], i[1], i[1], i[1], i[1], i[2], i[2], i[2], i[2], i[2], i[3], i[3], i[3], i[3], i[3], i[4], i[4], i[4], i[4], i[4], i[5], i[5], i[5], i[5], i[5], i[6], i[6], i[6], i[6], i[6], i[7], i[7], i[7], i[7], i[7], i[8], i[8], i[8], i[8], i[8], i[9], i[9], i[9], i[9], i[9], i[10], i[10], i[10], i[10], i[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", i[0], i[0], i[0], i[0], i[0], i[1], i[1], i[1], i[1], i[1], i[2], i[2], i[2], i[2], i[2], i[3], i[3], i[3], i[3], i[3], i[4], i[4], i[4], i[4], i[4], i[5], i[5], i[5], i[5], i[5], i[6], i[6], i[6], i[6], i[6], i[7], i[7], i[7], i[7], i[7], i[8], i[8], i[8], i[8], i[8], i[9], i[9], i[9], i[9], i[9], i[10], i[10], i[10], i[10], i[10]);



  printf("    ___________________________________________________________\n");



  printf("J  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", j[0], j[0], j[0], j[0], j[0], j[1], j[1], j[1], j[1], j[1], j[2], j[2], j[2], j[2], j[2], j[3], j[3], j[3], j[3], j[3], j[4], j[4], j[4], j[4], j[4], j[5], j[5], j[5], j[5], j[5], j[6], j[6], j[6], j[6], j[6], j[7], j[7], j[7], j[7], j[7], j[8], j[8], j[8], j[8], j[8], j[9], j[9], j[9], j[9], j[9], j[10], j[10], j[10], j[10], j[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", j[0], j[0], j[0], j[0], j[0], j[1], j[1], j[1], j[1], j[1], j[2], j[2], j[2], j[2], j[2], j[3], j[3], j[3], j[3], j[3], j[4], j[4], j[4], j[4], j[4], j[5], j[5], j[5], j[5], j[5], j[6], j[6], j[6], j[6], j[6], j[7], j[7], j[7], j[7], j[7], j[8], j[8], j[8], j[8], j[8], j[9], j[9], j[9], j[9], j[9], j[10], j[10], j[10], j[10], j[10]);



  printf("    ___________________________________________________________\n");



  printf("\n");



  printf("\n   *************************ENEMY SHIPS*************************\n");



printf("      1     2     3     4     5     6     7     8     9     10\n");



 printf("     ___________________________________________________________\n");



  printf("A  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", a2[0], a2[0], a2[0], a2[0], a2[0], a2[1], a2[1], a2[1], a2[1], a2[1], a2[2], a2[2], a2[2], a2[2], a2[2], a2[3], a2[3], a2[3], a2[3], a2[3], a2[4], a2[4], a2[4], a2[4], a2[4], a2[5], a2[5], a2[5], a2[5], a2[5], a2[6], a2[6], a2[6], a2[6], a2[6], a2[7], a2[7], a2[7], a2[7], a2[7], a2[8], a2[8], a2[8], a2[8], a2[8], a2[9], a2[9], a2[9], a2[9], a2[9], a2[10], a2[10], a2[10], a2[10], a2[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", a2[0], a2[0], a2[0], a2[0], a2[0], a2[1], a2[1], a2[1], a2[1], a2[1], a2[2], a2[2], a2[2], a2[2], a2[2], a2[3], a2[3], a2[3], a2[3], a2[3], a2[4], a2[4], a2[4], a2[4], a2[4], a2[5], a2[5], a2[5], a2[5], a2[5], a2[6], a2[6], a2[6], a2[6], a2[6], a2[7], a2[7], a2[7], a2[7], a2[7], a2[8], a2[8], a2[8], a2[8], a2[8], a2[9], a2[9], a2[9], a2[9], a2[9], a2[10], a2[10], a2[10], a2[10], a2[10]);



  printf("    ___________________________________________________________\n");



  printf("B  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", b2[0], b2[0], b2[0], b2[0], b2[0], b2[1], b2[1], b2[1], b2[1], b2[1], b2[2], b2[2], b2[2], b2[2], b2[2], b2[3], b2[3], b2[3], b2[3], b2[3], b2[4], b2[4], b2[4], b2[4], b2[4], b2[5], b2[5], b2[5], b2[5], b2[5], b2[6], b2[6], b2[6], b2[6], b2[6], b2[7], b2[7], b2[7], b2[7], b2[7], b2[8], b2[8], b2[8], b2[8], b2[8], b2[9], b2[9], b2[9], b2[9], b2[9], b2[10], b2[10], b2[10], b2[10], b2[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", b2[0], b2[0], b2[0], b2[0], b2[0], b2[1], b2[1], b2[1], b2[1], b2[1], b2[2], b2[2], b2[2], b2[2], b2[2], b2[3], b2[3], b2[3], b2[3], b2[3], b2[4], b2[4], b2[4], b2[4], b2[4], b2[5], b2[5], b2[5], b2[5], b2[5], b2[6], b2[6], b2[6], b2[6], b2[6], b2[7], b2[7], b2[7], b2[7], b2[7], b2[8], b2[8], b2[8], b2[8], b2[8], b2[9], b2[9], b2[9], b2[9], b2[9], b2[10], b2[10], b2[10], b2[10], b2[10]);



  printf("    ___________________________________________________________\n");



  printf("C  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", c2[0], c2[0], c2[0], c2[0], c2[0], c2[1], c2[1], c2[1], c2[1], c2[1], c2[2], c2[2], c2[2], c2[2], c2[2], c2[3], c2[3], c2[3], c2[3], c2[3], c2[4], c2[4], c2[4], c2[4], c2[4], c2[5], c2[5], c2[5], c2[5], c2[5], c2[6], c2[6], c2[6], c2[6], c2[6], c2[7], c2[7], c2[7], c2[7], c2[7], c2[8], c2[8], c2[8], c2[8], c2[8], c2[9], c2[9], c2[9], c2[9], c2[9], c2[10], c2[10], c2[10], c2[10], c2[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", c2[0], c2[0], c2[0], c2[0], c2[0], c2[1], c2[1], c2[1], c2[1], c2[1], c2[2], c2[2], c2[2], c2[2], c2[2], c2[3], c2[3], c2[3], c2[3], c2[3], c2[4], c2[4], c2[4], c2[4], c2[4], c2[5], c2[5], c2[5], c2[5], c2[5], c2[6], c2[6], c2[6], c2[6], c2[6], c2[7], c2[7], c2[7], c2[7], c2[7], c2[8], c2[8], c2[8], c2[8], c2[8], c2[9], c2[9], c2[9], c2[9], c2[9], c2[10], c2[10], c2[10], c2[10], c2[10]);



  printf("    ___________________________________________________________\n");



  printf("D  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", d2[0], d2[0], d2[0], d2[0], d2[0], d2[1], d2[1], d2[1], d2[1], d2[1], d2[2], d2[2], d2[2], d2[2], d2[2], d2[3], d2[3], d2[3], d2[3], d2[3], d2[4], d2[4], d2[4], d2[4], d2[4], d2[5], d2[5], d2[5], d2[5], d2[5], d2[6], d2[6], d2[6], d2[6], d2[6], d2[7], d2[7], d2[7], d2[7], d2[7], d2[8], d2[8], d2[8], d2[8], d2[8], d2[9], d2[9], d2[9], d2[9], d2[9], d2[10], d2[10], d2[10], d2[10], d2[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", d2[0], d2[0], d2[0], d2[0], d2[0], d2[1], d2[1], d2[1], d2[1], d2[1], d2[2], d2[2], d2[2], d2[2], d2[2], d2[3], d2[3], d2[3], d2[3], d2[3], d2[4], d2[4], d2[4], d2[4], d2[4], d2[5], d2[5], d2[5], d2[5], d2[5], d2[6], d2[6], d2[6], d2[6], d2[6], d2[7], d2[7], d2[7], d2[7], d2[7], d2[8], d2[8], d2[8], d2[8], d2[8], d2[9], d2[9], d2[9], d2[9], d2[9], d2[10], d2[10], d2[10], d2[10], d2[10]);



  printf("    ___________________________________________________________\n");



  printf("E  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", e2[0], e2[0], e2[0], e2[0], e2[0], e2[1], e2[1], e2[1], e2[1], e2[1], e2[2], e2[2], e2[2], e2[2], e2[2], e2[3], e2[3], e2[3], e2[3], e2[3], e2[4], e2[4], e2[4], e2[4], e2[4], e2[5], e2[5], e2[5], e2[5], e2[5], e2[6], e2[6], e2[6], e2[6], e2[6], e2[7], e2[7], e2[7], e2[7], e2[7], e2[8], e2[8], e2[8], e2[8], e2[8], e2[9], e2[9], e2[9], e2[9], e2[9], e2[10], e2[10], e2[10], e2[10], e2[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", e2[0], e2[0], e2[0], e2[0], e2[0], e2[1], e2[1], e2[1], e2[1], e2[1], e2[2], e2[2], e2[2], e2[2], e2[2], e2[3], e2[3], e2[3], e2[3], e2[3], e2[4], e2[4], e2[4], e2[4], e2[4], e2[5], e2[5], e2[5], e2[5], e2[5], e2[6], e2[6], e2[6], e2[6], e2[6], e2[7], e2[7], e2[7], e2[7], e2[7], e2[8], e2[8], e2[8], e2[8], e2[8], e2[9], e2[9], e2[9], e2[9], e2[9], e2[10], e2[10], e2[10], e2[10], e2[10]);



  printf("    ___________________________________________________________\n");



  printf("F  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", f2[0], f2[0], f2[0], f2[0], f2[0], f2[1], f2[1], f2[1], f2[1], f2[1], f2[2], f2[2], f2[2], f2[2], f2[2], f2[3], f2[3], f2[3], f2[3], f2[3], f2[4], f2[4], f2[4], f2[4], f2[4], f2[5], f2[5], f2[5], f2[5], f2[5], f2[6], f2[6], f2[6], f2[6], f2[6], f2[7], f2[7], f2[7], f2[7], f2[7], f2[8], f2[8], f2[8], f2[8], f2[8], f2[9], f2[9], f2[9], f2[9], f2[9], f2[10], f2[10], f2[10], f2[10], f2[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", f2[0], f2[0], f2[0], f2[0], f2[0], f2[1], f2[1], f2[1], f2[1], f2[1], f2[2], f2[2], f2[2], f2[2], f2[2], f2[3], f2[3], f2[3], f2[3], f2[3], f2[4], f2[4], f2[4], f2[4], f2[4], f2[5], f2[5], f2[5], f2[5], f2[5], f2[6], f2[6], f2[6], f2[6], f2[6], f2[7], f2[7], f2[7], f2[7], f2[7], f2[8], f2[8], f2[8], f2[8], f2[8], f2[9], f2[9], f2[9], f2[9], f2[9], f2[10], f2[10], f2[10], f2[10], f2[10]);



  printf("    ___________________________________________________________\n");



  printf("G  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", g2[0], g2[0], g2[0], g2[0], g2[0], g2[1], g2[1], g2[1], g2[1], g2[1], g2[2], g2[2], g2[2], g2[2], g2[2], g2[3], g2[3], g2[3], g2[3], g2[3], g2[4], g2[4], g2[4], g2[4], g2[4], g2[5], g2[5], g2[5], g2[5], g2[5], g2[6], g2[6], g2[6], g2[6], g2[6], g2[7], g2[7], g2[7], g2[7], g2[7], g2[8], g2[8], g2[8], g2[8], g2[8], g2[9], g2[9], g2[9], g2[9], g2[9], g2[10], g2[10], g2[10], g2[10], g2[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", g2[0], g2[0], g2[0], g2[0], g2[0], g2[1], g2[1], g2[1], g2[1], g2[1], g2[2], g2[2], g2[2], g2[2], g2[2], g2[3], g2[3], g2[3], g2[3], g2[3], g2[4], g2[4], g2[4], g2[4], g2[4], g2[5], g2[5], g2[5], g2[5], g2[5], g2[6], g2[6], g2[6], g2[6], g2[6], g2[7], g2[7], g2[7], g2[7], g2[7], g2[8], g2[8], g2[8], g2[8], g2[8], g2[9], g2[9], g2[9], g2[9], g2[9], g2[10], g2[10], g2[10], g2[10], g2[10]);



  printf("    ___________________________________________________________\n");



  printf("H  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", h2[0], h2[0], h2[0], h2[0], h2[0], h2[1], h2[1], h2[1], h2[1], h2[1], h2[2], h2[2], h2[2], h2[2], h2[2], h2[3], h2[3], h2[3], h2[3], h2[3], h2[4], h2[4], h2[4], h2[4], h2[4], h2[5], h2[5], h2[5], h2[5], h2[5], h2[6], h2[6], h2[6], h2[6], h2[6], h2[7], h2[7], h2[7], h2[7], h2[7], h2[8], h2[8], h2[8], h2[8], h2[8], h2[9], h2[9], h2[9], h2[9], h2[9], h2[10], h2[10], h2[10], h2[10], h2[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", h2[0], h2[0], h2[0], h2[0], h2[0], h2[1], h2[1], h2[1], h2[1], h2[1], h2[2], h2[2], h2[2], h2[2], h2[2], h2[3], h2[3], h2[3], h2[3], h2[3], h2[4], h2[4], h2[4], h2[4], h2[4], h2[5], h2[5], h2[5], h2[5], h2[5], h2[6], h2[6], h2[6], h2[6], h2[6], h2[7], h2[7], h2[7], h2[7], h2[7], h2[8], h2[8], h2[8], h2[8], h2[8], h2[9], h2[9], h2[9], h2[9], h2[9], h2[10], h2[10], h2[10], h2[10], h2[10]);



  printf("    ___________________________________________________________\n");



  printf("I  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", i2[0], i2[0], i2[0], i2[0], i2[0], i2[1], i2[1], i2[1], i2[1], i2[1], i2[2], i2[2], i2[2], i2[2], i2[2], i2[3], i2[3], i2[3], i2[3], i2[3], i2[4], i2[4], i2[4], i2[4], i2[4], i2[5], i2[5], i2[5], i2[5], i2[5], i2[6], i2[6], i2[6], i2[6], i2[6], i2[7], i2[7], i2[7], i2[7], i2[7], i2[8], i2[8], i2[8], i2[8], i2[8], i2[9], i2[9], i2[9], i2[9], i2[9], i2[10], i2[10], i2[10], i2[10], i2[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", i2[0], i2[0], i2[0], i2[0], i2[0], i2[1], i2[1], i2[1], i2[1], i2[1], i2[2], i2[2], i2[2], i2[2], i2[2], i2[3], i2[3], i2[3], i2[3], i2[3], i2[4], i2[4], i2[4], i2[4], i2[4], i2[5], i2[5], i2[5], i2[5], i2[5], i2[6], i2[6], i2[6], i2[6], i2[6], i2[7], i2[7], i2[7], i2[7], i2[7], i2[8], i2[8], i2[8], i2[8], i2[8], i2[9], i2[9], i2[9], i2[9], i2[9], i2[10], i2[10], i2[10], i2[10], i2[10]);




  printf("    ___________________________________________________________\n");



  printf("J  |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", j2[0], j2[0], j2[0], j2[0], j2[0], j2[1], j2[1], j2[1], j2[1], j2[1], j2[2], j2[2], j2[2], j2[2], j2[2], j2[3], j2[3], j2[3], j2[3], j2[3], j2[4], j2[4], j2[4], j2[4], j2[4], j2[5], j2[5], j2[5], j2[5], j2[5], j2[6], j2[6], j2[6], j2[6], j2[6], j2[7], j2[7], j2[7], j2[7], j2[7], j2[8], j2[8], j2[8], j2[8], j2[8], j2[9], j2[9], j2[9], j2[9], j2[9], j2[10], j2[10], j2[10], j2[10], j2[10]);



  printf("   |%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|%c%c%c%c%c|\n", j2[0], j2[0], j2[0], j2[0], j2[0], j2[1], j2[1], j2[1], j2[1], j2[1], j2[2], j2[2], j2[2], j2[2], j2[2], j2[3], j2[3], j2[3], j2[3], j2[3], j2[4], j2[4], j2[4], j2[4], j2[4], j2[5], j2[5], j2[5], j2[5], j2[5], j2[6], j2[6], j2[6], j2[6], j2[6], j2[7], j2[7], j2[7], j2[7], j2[7], j2[8], j2[8], j2[8], j2[8], j2[8], j2[9], j2[9], j2[9], j2[9], j2[9], j2[10], j2[10], j2[10], j2[10], j2[10]);



  printf("    ___________________________________________________________\n");



}




char select_difficulty()
{
char difficulty;
printf("Please Select a Difficulty. Press e for Easy, and h for Hard");
scanf("%c", &difficulty);
return difficulty;
}


void user_shoots(char input_char, int input_int)
{
printf("TEST %c %d", input_char, input_int);
input_int=input_int-1;
  if (input_char=='a')
{



   //a2[input_int]=ah2[input_int];
     if (ah2[input_int]==1)
{
           a2[input_int]='X';
           hits=hits+1;
}
        else
            a2[input_int]='0';
}
    if (input_char=='b')
{
    // b2[input_int]=bh2[input_int];
     if (bh2[input_int]==1)
{
           b2[input_int]='X';
            hits=hits+1;
}
        else
            b2[input_int]='0';
}
    if (input_char=='c')
{
   //c2[input_int]=ch2[input_int];
   if (ch2[input_int]==1)
{
           c2[input_int]='X';
            hits=hits+1;
}
        else
            c2[input_int]='0';
}
    if (input_char=='d')
{
    //d2[input_int]=dh2[input_int];
    if (dh2[input_int]==1)
{
           d2[input_int]='X';
            hits=hits+1;
}
        else
            d2[input_int]='0';
}
    if (input_char=='e')
{

   // e2[input_int]=eh2[input_int];
    if (eh2[input_int]==1)
{
           e2[input_int]='X';
            hits=hits+1;
}
        else
            e2[input_int]='0';
}

    if (input_char=='f')
{
   // f2[input_int]=fh2[input_int];
    if (fh2[input_int]==1)
{
           f2[input_int]='X';
            hits=hits+1;
}
        else
            f2[input_int]='0';
}

    if (input_char=='g')
{
    //g2[input_int]=gh2[input_int];
    if (gh2[input_int]==1)
{
           g2[input_int]='X';
            hits=hits+1;
}
        else
            g2[input_int]='0';
}

    if (input_char=='h')
{
     //h2[input_int]=hh2[input_int];
     if (hh2[input_int]==1)
{
           h2[input_int]='X';
            hits=hits+1;
}
        else
            h2[input_int]='0';
}

    if (input_char=='i')
{
    // i2[input_int]=ih2[input_int];
     if (ih2[input_int]==1)
     {
           i2[input_int]='X';
            hits=hits+1;
}
        else
            i2[input_int]='0';
}

    if (input_char=='j')
{
     //j2[input_int]=jh2[input_int];
     if (jh2[input_int]==1)
{
           j2[input_int]='X';
            hits=hits+1;
}
        else
            j2[input_int]='0';
}

}



void place_ships()
{
  char char_beg;
  char char_end;
  int int_1;
  int int_2;
  int int_3;
  int int_4;
  int int_5;
  int valid;
  int difference;
    do{
        valid=0;
  printf("Where would you like to place your carrier? (5 spaces) You may only place it horizontally or vertically.\n");
  printf("Please enter it in form a5-a1 with the HIGHEST number first or the FIRST letter alphabetically first (ex:a1-e1)\n");
  scanf("%c%d-%c%d", &char_beg, &int_1, &char_end, &int_5);
  getchar();

        int_1=int_1-1;
        int_5=int_5-1;
  difference = int_1-int_5;
  if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
  { printf("Please input a valid first letter");
    valid=1;}
  if (char_end!='a'&&char_end!='b'&&char_end!='c'&&char_end!='d'&&char_end!='e'&&char_end!='f'&&char_end!='g'&&char_end!='h'&&char_end!='i'&&char_end!='j')
  { printf("Please input a valid second letter");
    valid=1;}
  if (int_1!=0&&int_1!=1&&int_1!=2&&int_1!=3&&int_1!=4&&int_1!=5&&int_1!=6&&int_1!=7&&int_1!=8&&int_1!=9)
    { printf("Please input a valid first number");
    valid=1;}
  if (int_5!=0&&int_5!=1&&int_5!=2&&int_5!=3&&int_5!=4&&int_5!=5&&int_5!=6&&int_5!=7&&int_5!=8&&int_5!=9)
    { printf("Please input a valid first number");
    valid=1;}
 /* if(difference!=4||difference!=0||int_1>=10||int_5>=10)//THERE'S AN ERROR HERE BECAUSE IT WILL ALWAYS BE TRUE
  {printf("This input is invalid, please try again."); */}while(valid==1);

  if (difference==0)
  {
      int int_2=int_1;
   int int_3=int_1;
   int int_4=int_1;
     if (char_beg=='a')
      {ah[int_1]=1, bh[int_2]=1, ch[int_3]=1, dh[int_4]=1, eh[int_5]=1;}
    if (char_beg=='b')
      {bh[int_1]=1, ch[int_2]=1, dh[int_3]=1, eh[int_4]=1, fh[int_5]=1;}
    if (char_beg=='c')
      {ch[int_1]=1, dh[int_2]=1, eh[int_3]=1, fh[int_4]=1, gh[int_5]=1;}
    if (char_beg=='d')
      {dh[int_1]=1, eh[int_2]=1, fh[int_3]=1, gh[int_4]=1, hh[int_5]=1;}
    if (char_beg=='e')
      {eh[int_1]=1, fh[int_2]=1, gh[int_3]=1, hh[int_4]=1, ih[int_5]=1;}
    if (char_beg=='f')
      {fh[int_1]=1, gh[int_2]=1, hh[int_3]=1, ih[int_4]=1, jh[int_5]=1;}
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f')
    printf("Invalid letter, restart program\n");
  }
  if (difference==4)
{
  int int_2=int_1-1;
   int int_3=int_2-1;
   int int_4=int_3-1;
  if (char_beg=='a')
      {ah[int_1]=1, ah[int_2]=1, ah[int_3]=1, ah[int_4]=1, ah[int_5]=1;}
    if (char_beg=='b')
      {bh[int_1]=1, bh[int_2]=1, bh[int_3]=1, bh[int_4]=1, bh[int_5]=1;}
    if (char_beg=='c')
      {ch[int_1]=1, ch[int_2]=1, ch[int_3]=1, ch[int_4]=1, ch[int_5]=1;}
    if (char_beg=='d')
      {dh[int_1]=1, dh[int_2]=1, dh[int_3]=1, dh[int_4]=1, dh[int_5]=1;}
    if (char_beg=='e')
      {eh[int_1]=1, eh[int_2]=1, eh[int_3]=1, eh[int_4]=1, eh[int_5]=1;}
    if (char_beg=='f')
      {fh[int_1]=1, fh[int_2]=1, fh[int_3]=1, fh[int_4]=1, fh[int_5]=1;}
    if (char_beg=='g')
      {gh[int_1]=1, gh[int_2]=1, gh[int_3]=1, gh[int_4]=1, gh[int_5]=1;}
    if (char_beg=='h')
      {hh[int_1]=1, hh[int_2]=1, hh[int_3]=1, hh[int_4]=1, hh[int_5]=1;}
    if (char_beg=='i')
      {ih[int_1]=1, ih[int_2]=1, ih[int_3]=1, ih[int_4]=1, ih[int_5]=1;}
    if (char_beg=='j')
      {jh[int_1]=1, jh[int_2]=1, jh[int_3]=1, jh[int_4]=1, jh[int_5]=1;}
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
    printf("Invalid letter, restart program\n");
  }


  if(difference!=0&&difference!=4)
    printf("Invalid Range, restart program\n");
        do{
        valid=0;
  printf("Where would you like to place your battleship? (4 spaces) You may only place it horizontally or vertically.\n");
  printf("Please enter it in form a4-a1 with the HIGHEST number first or the FIRST letter alphabetically first (ex:a1-d1)\n");
  scanf("%c%d-%c%d", &char_beg, &int_1, &char_end, &int_5);
    getchar();
                    int_1=int_1-1;
        int_5=int_5-1;
  difference = int_1-int_5;
  if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
  { printf("Please input a valid first letter");
    valid=1;}
  if (char_end!='a'&&char_end!='b'&&char_end!='c'&&char_end!='d'&&char_end!='e'&&char_end!='f'&&char_end!='g'&&char_end!='h'&&char_end!='i'&&char_end!='j')
  { printf("Please input a valid second letter");
    valid=1;}
  if (int_1!=0&&int_1!=1&&int_1!=2&&int_1!=3&&int_1!=4&&int_1!=5&&int_1!=6&&int_1!=7&&int_1!=8&&int_1!=9)
    { printf("Please input a valid first number");
    valid=1;}
  if (int_5!=0&&int_5!=1&&int_5!=2&&int_5!=3&&int_5!=4&&int_5!=5&&int_5!=6&&int_5!=7&&int_5!=8&&int_5!=9)
    { printf("Please input a valid first number");
    valid=1;}
 /* if(difference!=4||difference!=0||int_1>=10||int_5>=10)//THERE'S AN ERROR HERE BECAUSE IT WILL ALWAYS BE TRUE
  {printf("This input is invalid, please try again."); */}while(valid==1);
  if (difference==0)
  {int int_2=int_1;
   int int_3=int_1;
   int int_4=int_1;
     if (char_beg=='a')
      ah[int_1]=1, bh[int_2]=1, ch[int_3]=1, dh[int_4]=1;
    if (char_beg=='b')
      bh[int_1]=1, ch[int_2]=1, dh[int_3]=1, eh[int_4]=1;
    if (char_beg=='c')
      ch[int_1]=1, dh[int_2]=1, eh[int_3]=1, fh[int_4]=1;
    if (char_beg=='d')
      dh[int_1]=1, eh[int_2]=1, fh[int_3]=1, gh[int_4]=1;
    if (char_beg=='e')
      eh[int_1]=1, fh[int_2]=1, gh[int_3]=1, hh[int_4]=1;
    if (char_beg=='f')
      fh[int_1]=1, gh[int_2]=1, hh[int_3]=1, ih[int_4]=1;
    if (char_beg=='g')
      gh[int_1]=1, hh[int_2]=1, ih[int_3]=1, jh[int_4]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f')
    printf("Invalid letter, restart program\n");
  }
  if (difference==3)
  {int int_2=int_1-1;
   int int_3=int_2-1;
   int int_4=int_3-1;
  if (char_beg=='a')
      ah[int_1]=1, ah[int_2]=1, ah[int_3]=1, ah[int_4]=1;
    if (char_beg=='b')
      bh[int_1]=1, bh[int_2]=1, bh[int_3]=1, bh[int_4]=1;
    if (char_beg=='c')
      ch[int_1]=1, ch[int_2]=1, ch[int_3]=1, ch[int_4]=1;
    if (char_beg=='d')
      dh[int_1]=1, dh[int_2]=1, dh[int_3]=1, dh[int_4]=1;
    if (char_beg=='e')
      eh[int_1]=1, eh[int_2]=1, eh[int_3]=1, eh[int_4]=1;
    if (char_beg=='f')
      fh[int_1]=1, fh[int_2]=1, fh[int_3]=1, fh[int_4]=1;
    if (char_beg=='g')
      gh[int_1]=1, gh[int_2]=1, gh[int_3]=1, gh[int_4]=1;
    if (char_beg=='h')
      hh[int_1]=1, hh[int_2]=1, hh[int_3]=1, hh[int_4]=1;
    if (char_beg=='i')
      ih[int_1]=1, ih[int_2]=1, ih[int_3]=1, ih[int_4]=1;
    if (char_beg=='j')
      jh[int_1]=1, jh[int_2]=1, jh[int_3]=1, jh[int_4]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
    printf("Invalid letter, restart program\n");
  }
    if(difference!=0&&difference!=3)
    printf("Invalid Range, restart program\n");
        do{
        valid=0;
  printf("Where would you like to place your submarine? (3 spaces) You may only place it horizontally or vertically.\n");
  printf("Please enter it in form a3-a1 with the HIGHEST number first or the FIRST letter alphabetically first (ex:a1-c1)\n");
  scanf("%c%d-%c%d", &char_beg, &int_1, &char_end, &int_5);
    getchar();
                    int_1=int_1-1;
        int_5=int_5-1;
  difference = int_1-int_5;
  if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
  { printf("Please input a valid first letter");
    valid=1;}
  if (char_end!='a'&&char_end!='b'&&char_end!='c'&&char_end!='d'&&char_end!='e'&&char_end!='f'&&char_end!='g'&&char_end!='h'&&char_end!='i'&&char_end!='j')
  { printf("Please input a valid second letter");
    valid=1;}
  if (int_1!=0&&int_1!=1&&int_1!=2&&int_1!=3&&int_1!=4&&int_1!=5&&int_1!=6&&int_1!=7&&int_1!=8&&int_1!=9)
    { printf("Please input a valid first number");
    valid=1;}
  if (int_5!=0&&int_5!=1&&int_5!=2&&int_5!=3&&int_5!=4&&int_5!=5&&int_5!=6&&int_5!=7&&int_5!=8&&int_5!=9)
    { printf("Please input a valid first number");
    valid=1;}
 /* if(difference!=4||difference!=0||int_1>=10||int_5>=10)//THERE'S AN ERROR HERE BECAUSE IT WILL ALWAYS BE TRUE
  {printf("This input is invalid, please try again."); */}while(valid==1);
  if (difference==0)
  {int int_2=int_1;
   int int_3=int_1;
   int int_4=int_1;
     if (char_beg=='a')
      ah[int_1]=1, bh[int_2]=1, ch[int_3]=1;
    if (char_beg=='b')
      bh[int_1]=1, ch[int_2]=1, dh[int_3]=1;
    if (char_beg=='c')
      ch[int_1]=1, dh[int_2]=1, eh[int_3]=1;
    if (char_beg=='d')
      dh[int_1]=1, eh[int_2]=1, fh[int_3]=1;
    if (char_beg=='e')
      eh[int_1]=1, fh[int_2]=1, gh[int_3]=1;
    if (char_beg=='f')
      fh[int_1]=1, gh[int_2]=1, hh[int_3]=1;
    if (char_beg=='g')
      gh[int_1]=1, hh[int_2]=1, ih[int_3]=1;
    if (char_beg=='h')
      hh[int_1]=1, ih[int_2]=1, jh[int_3]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f')
    printf("Invalid letter, restart program\n");
  }
  if (difference==2)
  {int int_2=int_1-1;
   int int_3=int_2-1;
   int int_4=int_3-1;
  if (char_beg=='a')
      ah[int_1]=1, ah[int_2]=1, ah[int_3]=1;
    if (char_beg=='b')
      bh[int_1]=1, bh[int_2]=1, bh[int_3]=1;
    if (char_beg=='c')
      ch[int_1]=1, ch[int_2]=1, ch[int_3]=1;
    if (char_beg=='d')
      dh[int_1]=1, dh[int_2]=1, dh[int_3]=1;
    if (char_beg=='e')
      eh[int_1]=1, eh[int_2]=1, eh[int_3]=1;
    if (char_beg=='f')
      fh[int_1]=1, fh[int_2]=1, fh[int_3]=1;
    if (char_beg=='g')
      gh[int_1]=1, gh[int_2]=1, gh[int_3]=1;
    if (char_beg=='h')
      hh[int_1]=1, hh[int_2]=1, hh[int_3]=1;
    if (char_beg=='i')
      ih[int_1]=1, ih[int_2]=1, ih[int_3]=1;
    if (char_beg=='j')
      jh[int_1]=1, jh[int_2]=1, jh[int_3]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
    printf("Invalid letter, restart program\n");
  }
    if(difference!=0&&difference!=2)
    printf("Invalid Range, restart program\n");
         do{
        valid=0;
  printf("Where would you like to place your cruiser? (3 spaces) You may only place it horizontally or vertically.\n");
  printf("Please enter it in form a3-a1 with the HIGHEST number first or the FIRST letter alphabetically first (ex:a1-c1)\n");
  scanf("%c%d-%c%d", &char_beg, &int_1, &char_end, &int_5);
    getchar();
                     int_1=int_1-1;
        int_5=int_5-1;
  difference = int_1-int_5;
  if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
  { printf("Please input a valid first letter");
    valid=1;}
  if (char_end!='a'&&char_end!='b'&&char_end!='c'&&char_end!='d'&&char_end!='e'&&char_end!='f'&&char_end!='g'&&char_end!='h'&&char_end!='i'&&char_end!='j')
  { printf("Please input a valid second letter");
    valid=1;}
  if (int_1!=0&&int_1!=1&&int_1!=2&&int_1!=3&&int_1!=4&&int_1!=5&&int_1!=6&&int_1!=7&&int_1!=8&&int_1!=9)
    { printf("Please input a valid first number");
    valid=1;}
  if (int_5!=0&&int_5!=1&&int_5!=2&&int_5!=3&&int_5!=4&&int_5!=5&&int_5!=6&&int_5!=7&&int_5!=8&&int_5!=9)
    { printf("Please input a valid first number");
    valid=1;}
 /* if(difference!=4||difference!=0||int_1>=10||int_5>=10)//THERE'S AN ERROR HERE BECAUSE IT WILL ALWAYS BE TRUE
  {printf("This input is invalid, please try again."); */}while(valid==1);
  if (difference==0)
  {int int_2=int_1;
   int int_3=int_1;
   int int_4=int_1;
     if (char_beg=='a')
      ah[int_1]=1, bh[int_2]=1, ch[int_3]=1;
    if (char_beg=='b')
      bh[int_1]=1, ch[int_2]=1, dh[int_3]=1;
    if (char_beg=='c')
      ch[int_1]=1, dh[int_2]=1, eh[int_3]=1;
    if (char_beg=='d')
      dh[int_1]=1, eh[int_2]=1, fh[int_3]=1;
    if (char_beg=='e')
      eh[int_1]=1, fh[int_2]=1, gh[int_3]=1;
    if (char_beg=='f')
      fh[int_1]=1, gh[int_2]=1, hh[int_3]=1;
    if (char_beg=='g')
      gh[int_1]=1, hh[int_2]=1, ih[int_3]=1;
    if (char_beg=='h')
      hh[int_1]=1, ih[int_2]=1, jh[int_3]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f')
    printf("Invalid letter, restart program\n");
  }
  if (difference==2)
  {int int_2=int_1-1;
   int int_3=int_2-1;
   int int_4=int_3-1;
  if (char_beg=='a')
      ah[int_1]=1, ah[int_2]=1, ah[int_3]=1;
    if (char_beg=='b')
      bh[int_1]=1, bh[int_2]=1, bh[int_3]=1;
    if (char_beg=='c')
      ch[int_1]=1, ch[int_2]=1, ch[int_3]=1;
    if (char_beg=='d')
      dh[int_1]=1, dh[int_2]=1, dh[int_3]=1;
    if (char_beg=='e')
      eh[int_1]=1, eh[int_2]=1, eh[int_3]=1;
    if (char_beg=='f')
      fh[int_1]=1, fh[int_2]=1, fh[int_3]=1;
    if (char_beg=='g')
      gh[int_1]=1, gh[int_2]=1, gh[int_3]=1;
    if (char_beg=='h')
      hh[int_1]=1, hh[int_2]=1, hh[int_3]=1;
    if (char_beg=='i')
      ih[int_1]=1, ih[int_2]=1, ih[int_3]=1;
    if (char_beg=='j')
      jh[int_1]=1, jh[int_2]=1, jh[int_3]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
    printf("Invalid letter, restart program\n");
  }
    if(difference!=0&&difference!=2)
    printf("Invalid Range, restart program\n");

         do{
        valid=0;
  printf("Where would you like to place your destroyer? (2 spaces) You may only place it horizontally or vertically.\n");
  printf("Please enter it in form a2-a1 with the HIGHEST number first or the FIRST letter alphabetically first (ex:a1-b1)\n");
  scanf("%c%d-%c%d", &char_beg, &int_1, &char_end, &int_5);
    getchar();
          int_1=int_1-1;
        int_5=int_5-1;
  difference = int_1-int_5;
  if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
  { printf("Please input a valid first letter");
    valid=1;}
  if (char_end!='a'&&char_end!='b'&&char_end!='c'&&char_end!='d'&&char_end!='e'&&char_end!='f'&&char_end!='g'&&char_end!='h'&&char_end!='i'&&char_end!='j')
  { printf("Please input a valid second letter");
    valid=1;}
  if (int_1!=0&&int_1!=1&&int_1!=2&&int_1!=3&&int_1!=4&&int_1!=5&&int_1!=6&&int_1!=7&&int_1!=8&&int_1!=9)
    { printf("Please input a valid first number");
    valid=1;}
  if (int_5!=0&&int_5!=1&&int_5!=2&&int_5!=3&&int_5!=4&&int_5!=5&&int_5!=6&&int_5!=7&&int_5!=8&&int_5!=9)
    { printf("Please input a valid first number");
    valid=1;}
 /* if(difference!=4||difference!=0||int_1>=10||int_5>=10)//THERE'S AN ERROR HERE BECAUSE IT WILL ALWAYS BE TRUE
  {printf("This input is invalid, please try again."); */}while(valid==1);
  if (difference==0)
  {int int_2=int_1;
   int int_3=int_1;
   int int_4=int_1;
     if (char_beg=='a')
      ah[int_1]=1, bh[int_2]=1;
    if (char_beg=='b')
      bh[int_1]=1, ch[int_2]=1;
    if (char_beg=='c')
      ch[int_1]=1, dh[int_2]=1;
    if (char_beg=='d')
      dh[int_1]=1, eh[int_2]=1;
    if (char_beg=='e')
      eh[int_1]=1, fh[int_2]=1;
    if (char_beg=='f')
      fh[int_1]=1, gh[int_2]=1;
    if (char_beg=='g')
      gh[int_1]=1, hh[int_2]=1;
    if (char_beg=='h')
      hh[int_1]=1, ih[int_2]=1;
    if (char_beg=='i')
      ih[int_1]=1, jh[int_2]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f')
    printf("Invalid letter, restart program\n");
  }
  if (difference==1)
  {int int_2=abs(int_1-1);
   int int_3=int_2-1;
   int int_4=int_3-1;
  if (char_beg=='a')
      ah[int_1]=1, ah[int_2]=1;
    if (char_beg=='b')
      bh[int_1]=1, bh[int_2]=1;
    if (char_beg=='c')
      ch[int_1]=1, ch[int_2]=1;
    if (char_beg=='d')
      dh[int_1]=1, dh[int_2]=1;
    if (char_beg=='e')
      eh[int_1]=1, eh[int_2]=1;
    if (char_beg=='f')
      fh[int_1]=1, fh[int_2]=1;
    if (char_beg=='g')
      gh[int_1]=1, gh[int_2]=1;
    if (char_beg=='h')
      hh[int_1]=1, hh[int_2]=1;
    if (char_beg=='i')
      ih[int_1]=1, ih[int_2]=1;
    if (char_beg=='j')
      jh[int_1]=1, jh[int_2]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
    printf("Invalid letter, restart program\n");
  }
    if(difference!=0&&difference!=1)
    printf("Invalid Range, restart program\n");


      printf("   |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", ah[0], ah[0], ah[0], ah[0], ah[0], ah[1], ah[1], ah[1], ah[1], ah[1], ah[2], ah[2], ah[2], ah[2], ah[2], ah[3], ah[3], ah[3], ah[3], ah[3], ah[4], ah[4], ah[4], ah[4], ah[4], ah[5], ah[5], ah[5], ah[5], ah[5], ah[6], ah[6], ah[6], ah[6], ah[6], ah[7], ah[7], ah[7], ah[7], ah[7], ah[8], ah[8], ah[8], ah[8], ah[8], ah[9], ah[9], ah[9], ah[9], ah[9], ah[10], ah[10], ah[10], ah[10], ah[10]);

  printf("    ___________________________________________________________\n");

  printf("B  |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", bh[0], bh[0], bh[0], bh[0], bh[0], bh[1], bh[1], bh[1], bh[1], bh[1], bh[2], bh[2], bh[2], bh[2], bh[2], bh[3], bh[3], bh[3], bh[3], bh[3], bh[4], bh[4], bh[4], bh[4], bh[4], bh[5], bh[5], bh[5], bh[5], bh[5], bh[6], bh[6], bh[6], bh[6], bh[6], bh[7], bh[7], bh[7], bh[7], bh[7], bh[8], bh[8], bh[8], bh[8], bh[8], bh[9], bh[9], bh[9], bh[9], bh[9], bh[10], bh[10], bh[10], bh[10], bh[10]);

  printf("   |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", bh[0], bh[0], bh[0], bh[0], bh[0], bh[1], bh[1], bh[1], bh[1], bh[1], bh[2], bh[2], bh[2], bh[2], bh[2], bh[3], bh[3], bh[3], bh[3], bh[3], bh[4], bh[4], bh[4], bh[4], bh[4], bh[5], bh[5], bh[5], bh[5], bh[5], bh[6], bh[6], bh[6], bh[6], bh[6], bh[7], bh[7], bh[7], bh[7], bh[7], bh[8], bh[8], bh[8], bh[8], bh[8], bh[9], bh[9], bh[9], bh[9], bh[9], bh[10], bh[10], bh[10], bh[10], bh[10]);

  printf("    ___________________________________________________________\n");

  printf("C  |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", ch[0], ch[0], ch[0], ch[0], ch[0], ch[1], ch[1], ch[1], ch[1], ch[1], ch[2], ch[2], ch[2], ch[2], ch[2], ch[3], ch[3], ch[3], ch[3], ch[3], ch[4], ch[4], ch[4], ch[4], ch[4], ch[5], ch[5], ch[5], ch[5], ch[5], ch[6], ch[6], ch[6], ch[6], ch[6], ch[7], ch[7], ch[7], ch[7], ch[7], ch[8], ch[8], ch[8], ch[8], ch[8], ch[9], ch[9], ch[9], ch[9], ch[9], ch[10], ch[10], ch[10], ch[10], ch[10]);

  printf("   |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", ch[0], ch[0], ch[0], ch[0], ch[0], ch[1], ch[1], ch[1], ch[1], ch[1], ch[2], ch[2], ch[2], ch[2], ch[2], ch[3], ch[3], ch[3], ch[3], ch[3], ch[4], ch[4], ch[4], ch[4], ch[4], ch[5], ch[5], ch[5], ch[5], ch[5], ch[6], ch[6], ch[6], ch[6], ch[6], ch[7], ch[7], ch[7], ch[7], ch[7], ch[8], ch[8], ch[8], ch[8], ch[8], ch[9], ch[9], ch[9], ch[9], ch[9], ch[10], ch[10], ch[10], ch[10], ch[10]);

  printf("    ___________________________________________________________\n");

  printf("D  |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", dh[0], dh[0], dh[0], dh[0], dh[0], dh[1], dh[1], dh[1], dh[1], dh[1], dh[2], dh[2], dh[2], dh[2], dh[2], dh[3], dh[3], dh[3], dh[3], dh[3], dh[4], dh[4], dh[4], dh[4], dh[4], dh[5], dh[5], dh[5], dh[5], dh[5], dh[6], dh[6], dh[6], dh[6], dh[6], dh[7], dh[7], dh[7], dh[7], dh[7], dh[8], dh[8], dh[8], dh[8], dh[8], dh[9], dh[9], dh[9], dh[9], dh[9], dh[10], dh[10], dh[10], dh[10], dh[10]);

  printf("   |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", dh[0], dh[0], dh[0], dh[0], dh[0], dh[1], dh[1], dh[1], dh[1], dh[1], dh[2], dh[2], dh[2], dh[2], dh[2], dh[3], dh[3], dh[3], dh[3], dh[3], dh[4], dh[4], dh[4], dh[4], dh[4], dh[5], dh[5], dh[5], dh[5], dh[5], dh[6], dh[6], dh[6], dh[6], dh[6], dh[7], dh[7], dh[7], dh[7], dh[7], dh[8], dh[8], dh[8], dh[8], dh[8], dh[9], dh[9], dh[9], dh[9], dh[9], dh[10], dh[10], dh[10], dh[10], dh[10]);

  printf("    ___________________________________________________________\n");

  printf("E  |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", eh[0], eh[0], eh[0], eh[0], eh[0], eh[1], eh[1], eh[1], eh[1], eh[1], eh[2], eh[2], eh[2], eh[2], eh[2], eh[3], eh[3], eh[3], eh[3], eh[3], eh[4], eh[4], eh[4], eh[4], eh[4], eh[5], eh[5], eh[5], eh[5], eh[5], eh[6], eh[6], eh[6], eh[6], eh[6], eh[7], eh[7], eh[7], eh[7], eh[7], eh[8], eh[8], eh[8], eh[8], eh[8], eh[9], eh[9], eh[9], eh[9], eh[9], eh[10], eh[10], eh[10], eh[10], eh[10]);

  printf("   |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", eh[0], eh[0], eh[0], eh[0], eh[0], eh[1], eh[1], eh[1], eh[1], eh[1], eh[2], eh[2], eh[2], eh[2], eh[2], eh[3], eh[3], eh[3], eh[3], eh[3], eh[4], eh[4], eh[4], eh[4], eh[4], eh[5], eh[5], eh[5], eh[5], eh[5], eh[6], eh[6], eh[6], eh[6], eh[6], eh[7], eh[7], eh[7], eh[7], eh[7], eh[8], eh[8], eh[8], eh[8], eh[8], eh[9], eh[9], eh[9], eh[9], eh[9], eh[10], eh[10], eh[10], eh[10], eh[10]);

  printf("    ___________________________________________________________\n");

  printf("F  |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", fh[0], fh[0], fh[0], fh[0], fh[0], fh[1], fh[1], fh[1], fh[1], fh[1], fh[2], fh[2], fh[2], fh[2], fh[2], fh[3], fh[3], fh[3], fh[3], fh[3], fh[4], fh[4], fh[4], fh[4], fh[4], fh[5], fh[5], fh[5], fh[5], fh[5], fh[6], fh[6], fh[6], fh[6], fh[6], fh[7], fh[7], fh[7], fh[7], fh[7], fh[8], fh[8], fh[8], fh[8], fh[8], fh[9], fh[9], fh[9], fh[9], fh[9], fh[10], fh[10], fh[10], fh[10], fh[10]);

  printf("   |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", fh[0], fh[0], fh[0], fh[0], fh[0], fh[1], fh[1], fh[1], fh[1], fh[1], fh[2], fh[2], fh[2], fh[2], fh[2], fh[3], fh[3], fh[3], fh[3], fh[3], fh[4], fh[4], fh[4], fh[4], fh[4], fh[5], fh[5], fh[5], fh[5], fh[5], fh[6], fh[6], fh[6], fh[6], fh[6], fh[7], fh[7], fh[7], fh[7], fh[7], fh[8], fh[8], fh[8], fh[8], fh[8], fh[9], fh[9], fh[9], fh[9], fh[9], fh[10], fh[10], fh[10], fh[10], fh[10]);

  printf("    ___________________________________________________________\n");

  printf("G  |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", gh[0], gh[0], gh[0], gh[0], gh[0], gh[1], gh[1], gh[1], gh[1], gh[1], gh[2], gh[2], gh[2], gh[2], gh[2], gh[3], gh[3], gh[3], gh[3], gh[3], gh[4], gh[4], gh[4], gh[4], gh[4], gh[5], gh[5], gh[5], gh[5], gh[5], gh[6], gh[6], gh[6], gh[6], gh[6], gh[7], gh[7], gh[7], gh[7], gh[7], gh[8], gh[8], gh[8], gh[8], gh[8], gh[9], gh[9], gh[9], gh[9], gh[9], gh[10], gh[10], gh[10], gh[10], gh[10]);

  printf("   |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", gh[0], gh[0], gh[0], gh[0], gh[0], gh[1], gh[1], gh[1], gh[1], gh[1], gh[2], gh[2], gh[2], gh[2], gh[2], gh[3], gh[3], gh[3], gh[3], gh[3], gh[4], gh[4], gh[4], gh[4], gh[4], gh[5], gh[5], gh[5], gh[5], gh[5], gh[6], gh[6], gh[6], gh[6], gh[6], gh[7], gh[7], gh[7], gh[7], gh[7], gh[8], gh[8], gh[8], gh[8], gh[8], gh[9], gh[9], gh[9], gh[9], gh[9], gh[10], gh[10], gh[10], gh[10], gh[10]);

  printf("    ___________________________________________________________\n");

  printf("H  |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", hh[0], hh[0], hh[0], hh[0], hh[0], hh[1], hh[1], hh[1], hh[1], hh[1], hh[2], hh[2], hh[2], hh[2], hh[2], hh[3], hh[3], hh[3], hh[3], hh[3], hh[4], hh[4], hh[4], hh[4], hh[4], hh[5], hh[5], hh[5], hh[5], hh[5], hh[6], hh[6], hh[6], hh[6], hh[6], hh[7], hh[7], hh[7], hh[7], hh[7], hh[8], hh[8], hh[8], hh[8], hh[8], hh[9], hh[9], hh[9], hh[9], hh[9], hh[10], hh[10], hh[10], hh[10], hh[10]);

  printf("   |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", hh[0], hh[0], hh[0], hh[0], hh[0], hh[1], hh[1], hh[1], hh[1], hh[1], hh[2], hh[2], hh[2], hh[2], hh[2], hh[3], hh[3], hh[3], hh[3], hh[3], hh[4], hh[4], hh[4], hh[4], hh[4], hh[5], hh[5], hh[5], hh[5], hh[5], hh[6], hh[6], hh[6], hh[6], hh[6], hh[7], hh[7], hh[7], hh[7], hh[7], hh[8], hh[8], hh[8], hh[8], hh[8], hh[9], hh[9], hh[9], hh[9], hh[9], hh[10], hh[10], hh[10], hh[10], hh[10]);

  printf("    ___________________________________________________________\n");

  printf("I  |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", ih[0], ih[0], ih[0], ih[0], ih[0], ih[1], ih[1], ih[1], ih[1], ih[1], ih[2], ih[2], ih[2], ih[2], ih[2], ih[3], ih[3], ih[3], ih[3], ih[3], ih[4], ih[4], ih[4], ih[4], ih[4], ih[5], ih[5], ih[5], ih[5], ih[5], ih[6], ih[6], ih[6], ih[6], ih[6], ih[7], ih[7], ih[7], ih[7], ih[7], ih[8], ih[8], ih[8], ih[8], ih[8], ih[9], ih[9], ih[9], ih[9], ih[9], ih[10], ih[10], ih[10], ih[10], ih[10]);

  printf("   |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", ih[0], ih[0], ih[0], ih[0], ih[0], ih[1], ih[1], ih[1], ih[1], ih[1], ih[2], ih[2], ih[2], ih[2], ih[2], ih[3], ih[3], ih[3], ih[3], ih[3], ih[4], ih[4], ih[4], ih[4], ih[4], ih[5], ih[5], ih[5], ih[5], ih[5], ih[6], ih[6], ih[6], ih[6], ih[6], ih[7], ih[7], ih[7], ih[7], ih[7], ih[8], ih[8], ih[8], ih[8], ih[8], ih[9], ih[9], ih[9], ih[9], ih[9], ih[10], ih[10], ih[10], ih[10], ih[10]);

  printf("    ___________________________________________________________\n");

  printf("J  |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", jh[0], jh[0], jh[0], jh[0], jh[0], jh[1], jh[1], jh[1], jh[1], jh[1], jh[2], jh[2], jh[2], jh[2], jh[2], jh[3], jh[3], jh[3], jh[3], jh[3], jh[4], jh[4], jh[4], jh[4], jh[4], jh[5], jh[5], jh[5], jh[5], jh[5], jh[6], jh[6], jh[6], jh[6], jh[6], jh[7], jh[7], jh[7], jh[7], jh[7], jh[8], jh[8], jh[8], jh[8], jh[8], jh[9], jh[9], jh[9], jh[9], jh[9], jh[10], jh[10], jh[10], jh[10], jh[10]);

  printf("   |%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|%d%d%d%d%d|\n", jh[0], jh[0], jh[0], jh[0], jh[0], jh[1], jh[1], jh[1], jh[1], jh[1], jh[2], jh[2], jh[2], jh[2], jh[2], jh[3], jh[3], jh[3], jh[3], jh[3], jh[4], jh[4], jh[4], jh[4], jh[4], jh[5], jh[5], jh[5], jh[5], jh[5], jh[6], jh[6], jh[6], jh[6], jh[6], jh[7], jh[7], jh[7], jh[7], jh[7], jh[8], jh[8], jh[8], jh[8], jh[8], jh[9], jh[9], jh[9], jh[9], jh[9], jh[10], jh[10], jh[10], jh[10], jh[10]);

}//end of function place_ships



void place_enemy_ships()

{



   int randomnumber=rand()%100;

   if (randomnumber>=0&&randomnumber<10)

   {

     ah2[2]=1;

     bh2[2]=1;

     ch2[2]=1;

     dh2[2]=1;

     eh2[2]=1;



     fh2[5]=1;

     fh2[6]=1;

     fh2[7]=1;

     fh2[8]=1;



     hh2[1]=1;

     hh2[2]=1;

     hh2[3]=1;



     ch2[6]=1;

     dh2[6]=1;

     eh2[6]=1;



     dh2[3]=1;

     dh2[4]=1;

   }

   if (randomnumber>=10&&randomnumber<20)

   {

     ah2[8]=1;

     bh2[8]=1;

     ch2[8]=1;

     dh2[8]=1;

     eh2[8]=1;



     jh2[5]=1;

     jh2[6]=1;

     jh2[7]=1;

     jh2[8]=1;



     hh2[1]=1;

     hh2[2]=1;

     hh2[3]=1;



     ch2[1]=1;

     dh2[1]=1;

     eh2[1]=1;



     dh2[5]=1;

     dh2[6]=1;

   }



   if (randomnumber>=20&&randomnumber<30)

   {

     dh2[4]=1;

     eh2[4]=1;

     fh2[4]=1;

     gh2[4]=1;

     hh2[4]=1;



     ih2[5]=1;

     ih2[6]=1;

     ih2[7]=1;

     ih2[8]=1;



     ah2[9]=1;

     bh2[9]=1;

     ch2[9]=1;



     eh2[1]=1;

     fh2[1]=1;

     gh2[1]=1;



     dh2[0]=1;

     ch2[0]=1;

   }





   if (randomnumber>=30&&randomnumber<40)

   {

     eh2[4]=1;

     fh2[4]=1;

     gh2[4]=1;

     hh2[4]=1;

     ih2[4]=1;



     ih2[5]=1;

     ih2[6]=1;

     ih2[7]=1;

     ih2[8]=1;



     hh2[7]=1;

     hh2[8]=1;

     hh2[9]=1;



     ch2[0]=1;

     dh2[0]=1;

     eh2[0]=1;



     dh2[2]=1;

     dh2[3]=1;



   }



   if (randomnumber>=40&&randomnumber<50)

   {

     jh2[0]=1;

     fh2[0]=1;

     gh2[0]=1;

     hh2[0]=1;

     ih2[0]=1;



     ch2[5]=1;

     ch2[6]=1;

     ch2[7]=1;

     ch2[8]=1;



     bh2[7]=1;

     bh2[8]=1;

     bh2[9]=1;



     gh2[7]=1;

     hh2[7]=1;

     ih2[7]=1;



     jh2[8]=1;

     jh2[9]=1;

   }





   if (randomnumber>=50&&randomnumber<60)

   {

     ah2[4]=1;

     ah2[5]=1;

     ah2[6]=1;

     ah2[7]=1;

     ah2[8]=1;



     ch2[2]=1;

     dh2[2]=1;

     eh2[2]=1;

     fh2[2]=1;



     bh2[7]=1;

     bh2[8]=1;

     bh2[9]=1;



     gh2[7]=1;

     hh2[7]=1;

     ih2[7]=1;



     ah2[0]=1;

     ah2[1]=1;

   }



   if (randomnumber>=60&&randomnumber<70)

   {

     eh2[4]=1;

     eh2[5]=1;

     eh2[6]=1;

     eh2[7]=1;

     eh2[8]=1;



     ch2[3]=1;

     dh2[3]=1;

     eh2[3]=1;

     fh2[3]=1;



     dh2[7]=1;

     dh2[8]=1;

     dh2[9]=1;



     gh2[7]=1;

     hh2[7]=1;

     ih2[7]=1;



     jh2[0]=1;

     jh2[1]=1;

   }



   if (randomnumber>=70&&randomnumber<80)

   {

     ih2[0]=1;

     ih2[1]=1;

     ih2[2]=1;

     ih2[3]=1;

     ih2[4]=1;



     ch2[1]=1;

     dh2[1]=1;

     eh2[1]=1;

     fh2[1]=1;



     dh2[7]=1;

     bh2[7]=1;

     ch2[7]=1;



     gh2[7]=1;

     hh2[7]=1;

     ih2[7]=1;



     eh2[4]=1;

     eh2[5]=1;

   }

   if (randomnumber>=80&&randomnumber<90)

   {

     ch2[1]=1;

     ch2[2]=1;

     ch2[3]=1;

     ch2[4]=1;

     ch2[5]=1;



     gh2[3]=1;

     hh2[3]=1;

     ih2[3]=1;

     jh2[3]=1;



     ch2[7]=1;

     ch2[8]=1;

     ch2[9]=1;



     bh2[6]=1;

     ch2[6]=1;

     dh2[6]=1;



     gh2[1]=1;

     hh2[1]=1;

   }



   if (randomnumber>=90&&randomnumber<100)

   {





     jh2[3]=1;

     jh2[4]=1;

     jh2[5]=1;

     jh2[6]=1;

     jh2[7]=1;



     gh2[8]=1;

     hh2[8]=1;

     ih2[8]=1;

     jh2[8]=1;



     gh2[4]=1;

     gh2[5]=1;

     gh2[6]=1;



     ah2[4]=1;

     ah2[5]=1;

     ah2[6]=1;



     gh2[1]=1;

     hh2[1]=1;

   }

}//end of place_enemy_ships


int verify_open_space(struct loc x)
{
    int k=0;
    while(k<100)
    {
        if(x.row==open_space[k].row&&x.element==open_space[k].element)
            {
                //printf("verify_open_space input: %c", x.row);
                //printf("%d\n", x.element);
                open_space[k].row = 'z';
                open_space[k].element = 11;
                //printf("%c", open_space[k].row);
                //printf("%d", open_space[k].element);
            return 1;
            }
        k=k+1;
    }
    return 0;

}



double random()
{
    return (double)rand()/(double)RAND_MAX;
}






 struct loc choose_struct()
{
        double choice = random();

    if(choice<.01)
return A0;

else if(0.01<=choice&&choice<0.02)
return A1;
else if(0.02<=choice&&choice<0.03)
return A2;
else if(0.03<=choice&&choice<0.04)
return A3;
else if(0.04<=choice&&choice<0.05)
return A4;
else if(0.05<=choice&&choice<0.06)
return A5;
else if(0.06<=choice&&choice<0.07)
return A6;
else if(0.07<=choice&&choice<0.08)
return A7;
else if(0.08<=choice&&choice<0.09)
return A8;
else if(0.09<=choice&&choice<0.10)
return A9;
else if(0.10<=choice&&choice<0.11)
return B0;
else if(0.11<=choice&&choice<0.12)
return B1;
else if(0.12<=choice&&choice<0.13)
return B2;
else if(0.13<=choice&&choice<0.14)
return B3;
else if(0.14<=choice&&choice<0.15)
return B4;
else if(0.15<=choice&&choice<0.16)
return B5;
else if(0.16<=choice&&choice<0.17)
return B6;
else if(0.17<=choice&&choice<0.18)
return B7;
else if(0.18<=choice&&choice<0.19)
return B8;
else if(0.19<=choice&&choice<0.20)
return B9;
else if(0.20<=choice&&choice<0.21)
return C0;
else if(0.21<=choice&&choice<0.22)
return C1;
else if(0.22<=choice&&choice<0.23)
return C2;
else if(0.23<=choice&&choice<0.24)
return C3;
else if(0.24<=choice&&choice<0.25)
return C4;
else if(0.25<=choice&&choice<0.26)
return C5;
else if(0.26<=choice&&choice<0.27)
return C6;
else if(0.27<=choice&&choice<0.28)
return C7;
else if(0.28<=choice&&choice<0.29)
return C8;
else if(0.29<=choice&&choice<0.30)
return C9;
else if(0.30<=choice&&choice<0.31)
return D0;
else if(0.31<=choice&&choice<0.32)
return D1;
else if(0.32<=choice&&choice<0.33)
return D2;
else if(0.33<=choice&&choice<0.34)
return D3;
else if(0.34<=choice&&choice<0.35)
return D4;
else if(0.35<=choice&&choice<0.36)
return D5;
else if(0.36<=choice&&choice<0.37)
return D6;
else if(0.37<=choice&&choice<0.38)
return D7;
else if(0.38<=choice&&choice<0.39)
return D8;
else if(0.39<=choice&&choice<0.40)
return D9;
else if(0.40<=choice&&choice<0.41)
return E0;
else if(0.41<=choice&&choice<0.42)
return E1;
else if(0.42<=choice&&choice<0.43)
return E2;
else if(0.43<=choice&&choice<0.44)
return E3;
else if(0.44<=choice&&choice<0.45)
return E4;
else if(0.45<=choice&&choice<0.46)
return E5;
else if(0.46<=choice&&choice<0.47)
return E6;
else if(0.47<=choice&&choice<0.48)
return E7;
else if(0.48<=choice&&choice<0.49)
return E8;
else if(0.49<=choice&&choice<0.50)
return E9;
else if(0.50<=choice&&choice<0.51)
return F0;
else if(0.51<=choice&&choice<0.52)
return F1;
else if(0.52<=choice&&choice<0.53)
return F2;
else if(0.53<=choice&&choice<0.54)
return F3;
else if(0.54<=choice&&choice<0.55)
return F4;
else if(0.55<=choice&&choice<0.56)
return F5;
else if(0.56<=choice&&choice<0.57)
return F6;
else if(0.57<=choice&&choice<0.58)
return F7;
else if(0.58<=choice&&choice<0.59)
return F8;
else if(0.59<=choice&&choice<0.60)
return F9;
else if(0.60<=choice&&choice<0.61)
return G0;
else if(0.61<=choice&&choice<0.62)
return G1;
else if(0.62<=choice&&choice<0.63)
return G2;
else if(0.63<=choice&&choice<0.64)
return G3;
else if(0.64<=choice&&choice<0.65)
return G4;
else if(0.65<=choice&&choice<0.66)
return G5;
else if(0.66<=choice&&choice<0.67)
return G6;
else if(0.67<=choice&&choice<0.68)
return G7;
else if(0.68<=choice&&choice<0.69)
return G8;
else if(0.69<=choice&&choice<0.70)
return G9;
else if(0.70<=choice&&choice<0.71)
return H0;
else if(0.71<=choice&&choice<0.72)
return H1;
else if(0.72<=choice&&choice<0.73)
return H2;
else if(0.73<=choice&&choice<0.74)
return H3;
else if(0.74<=choice&&choice<0.75)
return H4;
else if(0.75<=choice&&choice<0.76)
return H5;
else if(0.76<=choice&&choice<0.77)
return H6;
else if(0.77<=choice&&choice<0.78)
return H7;
else if(0.78<=choice&&choice<0.79)
return H8;
else if(0.79<=choice&&choice<0.80)
return H9;
else if(0.80<=choice&&choice<0.81)
return I0;
else if(0.81<=choice&&choice<0.82)
return I1;
else if(0.82<=choice&&choice<0.83)
return I2;
else if(0.83<=choice&&choice<0.84)
return I3;
else if(0.84<=choice&&choice<0.85)
return I4;
else if(0.85<=choice&&choice<0.86)
return I5;
else if(0.86<=choice&&choice<0.87)
return I6;
else if(0.87<=choice&&choice<0.88)
return I7;
else if(0.88<=choice&&choice<0.89)
return I8;
else if(0.89<=choice&&choice<0.90)
return I9;
else if(0.90<=choice&&choice<0.91)
return J0;
else if(0.91<=choice&&choice<0.92)
return J1;
else if(0.92<=choice&&choice<0.93)
return J2;
else if(0.93<=choice&&choice<0.94)
return J3;
else if(0.94<=choice&&choice<0.95)
return J4;
else if(0.95<=choice&&choice<0.96)
return J5;
else if(0.96<=choice&&choice<0.97)
return J6;
else if(0.97<=choice&&choice<0.98)
return J7;
else if(0.98<=choice&&choice<0.99)
return J8;
else if(0.99<=choice&&choice<=1.00)
return J9;
}


struct loc strike_location(struct loc x);

struct loc strike_location_synergy();


struct loc strike_location(struct loc x)
{
    if(verify_open_space(x)==1)
           return x;
    else
        return strike_location_synergy();

}
struct loc strike_location_synergy()
{

    struct loc x=choose_struct();
        return strike_location(x);
}


/*void struct_int_printer(struct loc x)
{
    printf("%d\n", x.element);
}
void struct_char_printer(struct loc x)
{
    printf("%c", x.row);
}*/

int struct_int_return(struct loc x)
{
    return x.element;
}
char struct_char_return(struct loc x)
{
    return x.row;
}

/*char RETURN_ROW(struct loc x)
{


    char CHAR_INPUT = struct_char_return(strike_location(x));
    return CHAR_INPUT;
}

int RETURN_ELEMENT(struct loc x)
{

    int INT_INPUT = struct_int_return(strike_location(x));
    return INT_INPUT;
}*/



struct loc one_of_four(struct loc x,struct loc y,struct loc z,struct loc a)
{
         if(verify_open_space(x)==1)
            {
            //printf("smart_strike return:");
            //struct_char_printer(x);
            //struct_int_printer(x);
            return x;
            }

         else if(verify_open_space(y)==1)
         {
            //printf("smart_strike return:");
            //struct_char_printer(y);
            //struct_int_printer(y);
            return y;
         }
         else if(verify_open_space(z)==1)
            {
            //printf("smart_strike return:");
            //struct_char_printer(z);
            //struct_int_printer(z);
            return z;
            }
         else if(verify_open_space(a)==1)
            {
            //printf("smart_strike return:");
            //struct_char_printer(a);
            //struct_int_printer(a);
            return a;
            }
        else
        {
            struct loc seed ={'e', 5};

            return strike_location(seed);
        }


}




struct loc smart_strike(struct loc x)
{


char secondary_char_array_assigner[10]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    char row_plus = secondary_char_array_assigner[optimize_char(x)+1];
    char row_minus = secondary_char_array_assigner[optimize_char(x)-1];

    int int_plus = x.element+1;
    int int_minus = x.element-1;

         struct loc down;
         down.row = row_plus;
         down.element = x.element;

    	 struct loc right;
    	 right.row= x.row;
    	 right.element= int_plus;

         struct loc left;
         left.row = x.row;
         left.element= int_minus;

         struct loc up;
         up.row= row_minus;
         up.element = x.element;

        return one_of_four(right, up, left, down);
}

int RETURN_ELEMENT_SMART(struct loc x)
{
    struct_int_return(x);
}

char RETURN_ROW_SMART(struct loc x)
{
    struct_char_return(x);
}



int enemy_shoots(char input_char, int input_int)
{

    input_int=input_int-1;

  if (input_char=='a')
{

   //a[input_int]=ah[input_int];
     if (ah[input_int]==1)
{
           a[input_int]='X';
           enemy_hits++;
           return 1;
}
        else
            {a[input_int]='0';
            return 0;}
}
    if (input_char=='b')
{
    // b[input_int]=bh[input_int];
     if (bh[input_int]==1)
{
           b[input_int]='X';
            enemy_hits++;
            return 1;
}
        else
            {b[input_int]='0';
            return 0;}
}
    if (input_char=='c')
{
  // c[input_int]=ch[input_int];
   if (ch[input_int]==1)
{
           c[input_int]='X';
            enemy_hits++;
            return 1;
}
        else
            {c[input_int]='0';
            return 0;}
}
    if (input_char=='d')
{
    //d[input_int]=dh[input_int];
    if (dh[input_int]==1)
{
           d[input_int]='X';
            enemy_hits++;
            return 1;
}
        else
            {d[input_int]='0';
            return 0;}
}
    if (input_char=='e')
{

   // e[input_int]=eh[input_int];
    if (eh[input_int]==1)
{
           e[input_int]='X';
            enemy_hits++;
            return 1;
}
        else
            {e[input_int]='0';
            return 0;}
}

    if (input_char=='f')
{
  //  f[input_int]=fh[input_int];
    if (fh[input_int]==1)
{
           f[input_int]='X';
            enemy_hits++;
            return 1;
}
        else
            {f[input_int]='0';
            return 0;}
}

    if (input_char=='g')
{
    //g[input_int]=gh[input_int];
    if (gh[input_int]==1)
{
           g[input_int]='X';
            enemy_hits++;
            return 1;
}
        else
            {g[input_int]='0';
            return 0;}
}

    if (input_char=='h')
{
    // h[input_int]=hh[input_int];
     if (hh[input_int]==1)
{
           h[input_int]='X';
            enemy_hits++;
            return 1;
}
        else
            {h[input_int]='0';
            return 0;}
}

    if (input_char=='i')
{
    // i[input_int]=ih[input_int];
     if (ih[input_int]==1)
     {
           i[input_int]='X';
            enemy_hits++;
            return 1;
}
        else
            {i[input_int]='0';
            return 0;}
}

    if (input_char=='j')
{
     //j[input_int]=jh[input_int];
     if (jh[input_int]==1)
{
           j[input_int]='X';
            enemy_hits++;
            return 1;
}
        else
            {j[input_int]='0';
            return 0;}
}

}



int main()

{
initialize_open_space();

srand(time(NULL));

int enemy_int;

char enemy_char;

initialize_arrays();

print_screen();

place_enemy_ships();

char difficulty=select_difficulty();

getchar();

printf("Welcome to Battleship! Press Enter to Continue!");

place_ships();

getchar();

if (difficulty=='h')
{
            struct loc seed = {'e', 5};
            int count=0;
            int input_int;
        char input_char;
        struct loc start_enemy = strike_location(seed);
        char enemy_char = struct_char_return(start_enemy);
        int enemy_int = struct_int_return(start_enemy);
    while (hits<17&&enemy_hits<17)
    {

        printf("Input the letter of the space you would like to shoot at: ");
        scanf("%c", &input_char);
        getchar();
        printf("Input the number of the space you would like to shoot at: ");
        scanf("%d", &input_int);
        getchar();
        user_shoots(input_char, input_int);
        if (hits>=17)
        {printf("YOU WIN!! CONGRATS!!");}


        if(enemy_shoots(enemy_char, enemy_int)==1)
        {
            printf("\tI entered smart_strike loop");
            count=0;
            char enemy_char_save = enemy_char;
            int enemy_int_save = enemy_int;
            struct loc enemy_guess;
            enemy_guess.row=enemy_char;
            enemy_guess.element= enemy_int;
            enemy_guess = smart_strike(enemy_guess);

            enemy_char=enemy_guess.row;
            enemy_int=enemy_guess.element;

            printf("%c", enemy_char);
            printf("%d\n", enemy_int);

            print_screen();



       //******************************************\\


            while (hits<17&&enemy_hits<17&&count<4)
    {


        printf("Input the letter of the space you would like to shoot at: ");
        scanf("%c", &input_char);
        getchar();
        printf("Input the number of the space you would like to shoot at: ");
        scanf("%d", &input_int);
        getchar();
        user_shoots(input_char, input_int);
        if (hits>=17)
        {printf("YOU WIN!! CONGRATS!!");}


        if(enemy_shoots(enemy_char, enemy_int)==0)
        {
            printf("\tOops, I missed!");
            enemy_guess.row=enemy_char_save;
            enemy_guess.element= enemy_int_save;
            enemy_guess = smart_strike(enemy_guess);

            enemy_char=enemy_guess.row;
            enemy_int=enemy_guess.element;
            printf("%c", enemy_char);
            printf("%d this is where I'm going to shoot next\n", enemy_int);
        }

        else
        {

        printf("smart strike helped!");
        enemy_char_save=enemy_char;
        enemy_int_save=enemy_int;
        enemy_guess.row=enemy_char;
        enemy_guess.element=enemy_int;
        enemy_guess = smart_strike(enemy_guess);
        enemy_char=enemy_guess.row;
        enemy_int=enemy_guess.element;
        printf("%c", enemy_char);
            printf("%d this is where I'm going to shoot next\n", enemy_int);

        count=0;

        }


        if (enemy_hits>=17)
        {
        printf("You Lost...Please Try Again!");

        break;
        }
        print_screen();

        count= count + 1;

        }

}

        else
        {
              printf("going to shoot randomly");
            start_enemy= strike_location(seed);
              enemy_char = struct_char_return(start_enemy);
              enemy_int = struct_int_return(start_enemy);
        }

        if (enemy_hits>=17)
        {
            printf("You Lost...Please Try Again!");

            break;
        }
        print_screen();

        }
}




if (difficulty=='e')
{
        struct loc seed={'e', 5};
        char enemy_char;
        int enemy_int;
        struct loc start_enemy;
        int input_int;
        char input_char;
    while (hits<17&&enemy_hits<17)
    {
        printf("Input the letter of the space you would like to shoot at: ");
        scanf("%c", &input_char);
        getchar();
        printf("Input the number of the space you would like to shoot at: ");
        scanf("%d", &input_int);
        getchar();
        user_shoots(input_char, input_int);

        if (hits>=17)
        {printf("YOU WIN!! CONGRATS!!");
        break;}

        start_enemy=strike_location(seed);
        enemy_char=start_enemy.row;
        enemy_int=start_enemy.element;
        enemy_shoots(enemy_char,enemy_int);
        if (enemy_hits>=17)
        {printf("You Lost...Please Try Again!");
        break;}
        print_screen();
    }
}
if (enemy_hits>=17)
{printf("You Lost...Please Try Again!");}
if (hits>=17)
{printf("YOU WIN!! CONGRATS!!");}
printf("Program Ended. Thank You For Playing!");
return 0;

}//end of main function

