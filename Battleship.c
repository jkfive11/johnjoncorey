
//BattleShip

//Jonathan Keller, Corey Hupper, and John Lowery



#include <stdio.h>

#include <math.h>



//h (hidden) values figure out if it is hit or miss, while the other ones are the ones that are diplayed (` for miss, X for hit, and spaces for not tried yet)

char a[9];

int ah[9];

char b[9];

int bh[9];

char c[9];

int ch[9];

char d[9];

int dh[9];

char e[9];

int eh[9];

char f[9];

int fh[9];

char g[9];

int gh[9];

char h[9];

int hh[9];

char i[9];

int ih[9];

char j[9];

int jh[9];



char a2[9];

int ah2[9];

char b2[9];

int bh2[9];

char c2[9];

int ch2[9];

char d2[9];

int dh2[9];

char e2[9];

int eh2[9];

char f2[9];

int fh2[9];

char g2[9];

int gh2[9];

char h2[9];

int hh2[9];

char i2[9];

int ih2[9];

char j2[9];

int jh2[9];



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

  printf("\n\n\n\n\n\n\n\n    *************************BATTLESHIP*************************\n");

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







  //these below are errors, just incase an invalid number is called



}





void change_space(char input_char, int input_int)

{



  if (input_char=='a')

   a[input_int]='X';



    if (input_char=='b')

     b[input_int]='X';



    if (input_char=='c')

   c[input_int]='X';



    if (input_char=='d')

    d[input_int]='X';



    if (input_char=='e')

    e[input_int]='X';



    if (input_char=='f')

    f[input_int]='X';



    if (input_char=='g')

    g[input_int]='X';



    if (input_char=='h')

     h[input_int]='X';



    if (input_char=='i')

     i[input_int]='p';



    if (input_char=='j')

     j[input_int]='X';





}


//THE GLITCH OF THIS FUNCTION IS THAT YOU CAN PLACE SHIPS ON TOP OF EACH OTHER. ENTERING THE SHIPS KINDA STINKS
void place_ships()
{
  char char_beg;
  char char_end;
  int int_1;
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
 /* if(difference!=4||difference!=0||int_1>=10||int_5>=10)//THERE'S AN ERROR HERE BECAUSE IT WILL ALWAYS BE TRUE
  {printf("This input is invalid, please try again."); */
  valid=1;}
 while(valid==0);

  if (difference==0)
  {
      int int_2=int_1;
   int int_3=int_1;
   int int_4=int_1;
     if (char_beg=='a')
      ah[int_1], bh[int_2], ch[int_3], dh[int_4], eh[int_5]=1;
    if (char_beg=='b')
      bh[int_1], ch[int_2], dh[int_3], eh[int_4], fh[int_5]=1;
    if (char_beg=='c')
      ch[int_1], dh[int_2], eh[int_3], fh[int_4], gh[int_5]=1;
    if (char_beg=='d')
      dh[int_1], eh[int_2], fh[int_3], gh[int_4], hh[int_5]=1;
    if (char_beg=='e')
      eh[int_1], fh[int_2], gh[int_3], hh[int_4], ih[int_5]=1;
    if (char_beg=='f')
      fh[int_1], gh[int_2], hh[int_3], ih[int_4], jh[int_5]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f')
    printf("Invalid letter, restart program\n");
  }
  if (difference==4)
{
  int int_2=abs(int_1+1);
   int int_3=int_2++;
   int int_4=int_3++;
  if (char_beg=='a')
      ah[int_1], ah[int_2], ah[int_3], ah[int_4], ah[int_5]=1;
    if (char_beg=='b')
      bh[int_1], bh[int_2], bh[int_3], bh[int_4], bh[int_5]=1;
    if (char_beg=='c')
      ch[int_1], ch[int_2], ch[int_3], ch[int_4], ch[int_5]=1;
    if (char_beg=='d')
      dh[int_1], dh[int_2], dh[int_3], dh[int_4], dh[int_5]=1;
    if (char_beg=='e')
      eh[int_1], eh[int_2], eh[int_3], eh[int_4], eh[int_5]=1;
    if (char_beg=='f')
      fh[int_1], fh[int_2], fh[int_3], fh[int_4], fh[int_5]=1;
    if (char_beg=='g')
      gh[int_1], gh[int_2], gh[int_3], gh[int_4], gh[int_5]=1;
    if (char_beg=='h')
      hh[int_1], hh[int_2], hh[int_3], hh[int_4], hh[int_5]=1;
    if (char_beg=='i')
      ih[int_1], ih[int_2], ih[int_3], ih[int_4], ih[int_5]=1;
    if (char_beg=='j')
      jh[int_1], jh[int_2], jh[int_3], jh[int_4], jh[int_5]=1;
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
/*  if(difference!=3||difference!=0||int_1>=10||int_5>=10)
  {printf("This input is invalid, please try again.");*/
  valid=1;}
 while(valid!=1);
  if (difference==0)
  {int int_2=int_1;
   int int_3=int_1;
   int int_4=int_1;
     if (char_beg=='a')
      ah[int_1], bh[int_2], ch[int_3], dh[int_4]=1;
    if (char_beg=='b')
      bh[int_1], ch[int_2], dh[int_3], eh[int_4]=1;
    if (char_beg=='c')
      ch[int_1], dh[int_2], eh[int_3], fh[int_4]=1;
    if (char_beg=='d')
      dh[int_1], eh[int_2], fh[int_3], gh[int_4]=1;
    if (char_beg=='e')
      eh[int_1], fh[int_2], gh[int_3], hh[int_4]=1;
    if (char_beg=='f')
      fh[int_1], gh[int_2], hh[int_3], ih[int_4]=1;
    if (char_beg=='g')
      gh[int_1], hh[int_2], ih[int_3], jh[int_4]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f')
    printf("Invalid letter, restart program\n");
  }
  if (difference==3)
  {int int_2=abs(int_1+1);
   int int_3=int_2++;
   int int_4=int_3++;
  if (char_beg=='a')
      ah[int_1], ah[int_2], ah[int_3], ah[int_4]=1;
    if (char_beg=='b')
      bh[int_1], bh[int_2], bh[int_3], bh[int_4]=1;
    if (char_beg=='c')
      ch[int_1], ch[int_2], ch[int_3], ch[int_4]=1;
    if (char_beg=='d')
      dh[int_1], dh[int_2], dh[int_3], dh[int_4]=1;
    if (char_beg=='e')
      eh[int_1], eh[int_2], eh[int_3], eh[int_4]=1;
    if (char_beg=='f')
      fh[int_1], fh[int_2], fh[int_3], fh[int_4]=1;
    if (char_beg=='g')
      gh[int_1], gh[int_2], gh[int_3], gh[int_4]=1;
    if (char_beg=='h')
      hh[int_1], hh[int_2], hh[int_3], hh[int_4]=1;
    if (char_beg=='i')
      ih[int_1], ih[int_2], ih[int_3], ih[int_4]=1;
    if (char_beg=='j')
      jh[int_1], jh[int_2], jh[int_3], jh[int_4]=1;
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
/*  if(difference!=3||difference!=0||int_1>=10||int_5>=10)
  {printf("This input is invalid, please try again.");*/
  valid=1;}
    while(valid!=1);
  if (difference==0)
  {int int_2=int_1;
   int int_3=int_1;
   int int_4=int_1;
     if (char_beg=='a')
      ah[int_1], bh[int_2], ch[int_3]=1;
    if (char_beg=='b')
      bh[int_1], ch[int_2], dh[int_3]=1;
    if (char_beg=='c')
      ch[int_1], dh[int_2], eh[int_3]=1;
    if (char_beg=='d')
      dh[int_1], eh[int_2], fh[int_3]=1;
    if (char_beg=='e')
      eh[int_1], fh[int_2], gh[int_3]=1;
    if (char_beg=='f')
      fh[int_1], gh[int_2], hh[int_3]=1;
    if (char_beg=='g')
      gh[int_1], hh[int_2], ih[int_3]=1;
    if (char_beg=='h')
      hh[int_1], ih[int_2], jh[int_3]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f')
    printf("Invalid letter, restart program\n");
  }
  if (difference==2)
  {int int_2=abs(int_1+1);
   int int_3=int_2++;
   int int_4=int_3++;
  if (char_beg=='a')
      ah[int_1], ah[int_2], ah[int_3]=1;
    if (char_beg=='b')
      bh[int_1], bh[int_2], bh[int_3]=1;
    if (char_beg=='c')
      ch[int_1], ch[int_2], ch[int_3]=1;
    if (char_beg=='d')
      dh[int_1], dh[int_2], dh[int_3]=1;
    if (char_beg=='e')
      eh[int_1], eh[int_2], eh[int_3]=1;
    if (char_beg=='f')
      fh[int_1], fh[int_2], fh[int_3]=1;
    if (char_beg=='g')
      gh[int_1], gh[int_2], gh[int_3]=1;
    if (char_beg=='h')
      hh[int_1], hh[int_2], hh[int_3]=1;
    if (char_beg=='i')
      ih[int_1], ih[int_2], ih[int_3]=1;
    if (char_beg=='j')
      jh[int_1], jh[int_2], jh[int_3]=1;
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
/*  if(difference!=3||difference!=0||int_1>=10||int_5>=10)
  {printf("This input is invalid, please try again.");*/
  valid=1;}
    while(valid!=1);
  if (difference==0)
  {int int_2=int_1;
   int int_3=int_1;
   int int_4=int_1;
     if (char_beg=='a')
      ah[int_1], bh[int_2], ch[int_3]=1;
    if (char_beg=='b')
      bh[int_1], ch[int_2], dh[int_3]=1;
    if (char_beg=='c')
      ch[int_1], dh[int_2], eh[int_3]=1;
    if (char_beg=='d')
      dh[int_1], eh[int_2], fh[int_3]=1;
    if (char_beg=='e')
      eh[int_1], fh[int_2], gh[int_3]=1;
    if (char_beg=='f')
      fh[int_1], gh[int_2], hh[int_3]=1;
    if (char_beg=='g')
      gh[int_1], hh[int_2], ih[int_3]=1;
    if (char_beg=='h')
      hh[int_1], ih[int_2], jh[int_3]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f')
    printf("Invalid letter, restart program\n");
  }
  if (difference==2)
  {int int_2=abs(int_1+1);
   int int_3=int_2++;
   int int_4=int_3++;
  if (char_beg=='a')
      ah[int_1], ah[int_2], ah[int_3]=1;
    if (char_beg=='b')
      bh[int_1], bh[int_2], bh[int_3]=1;
    if (char_beg=='c')
      ch[int_1], ch[int_2], ch[int_3]=1;
    if (char_beg=='d')
      dh[int_1], dh[int_2], dh[int_3]=1;
    if (char_beg=='e')
      eh[int_1], eh[int_2], eh[int_3]=1;
    if (char_beg=='f')
      fh[int_1], fh[int_2], fh[int_3]=1;
    if (char_beg=='g')
      gh[int_1], gh[int_2], gh[int_3]=1;
    if (char_beg=='h')
      hh[int_1], hh[int_2], hh[int_3]=1;
    if (char_beg=='i')
      ih[int_1], ih[int_2], ih[int_3]=1;
    if (char_beg=='j')
      jh[int_1], jh[int_2], jh[int_3]=1;
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
/*  if(difference!=3||difference!=0||int_1>=10||int_5>=10)
  {printf("This input is invalid, please try again.");*/
  valid=1;}
    while(valid!=1);
  if (difference==0)
  {int int_2=int_1;
   int int_3=int_1;
   int int_4=int_1;
     if (char_beg=='a')
      ah[int_1], bh[int_2]=1;
    if (char_beg=='b')
      bh[int_1], ch[int_2]=1;
    if (char_beg=='c')
      ch[int_1], dh[int_2]=1;
    if (char_beg=='d')
      dh[int_1], eh[int_2]=1;
    if (char_beg=='e')
      eh[int_1], fh[int_2]=1;
    if (char_beg=='f')
      fh[int_1], gh[int_2]=1;
    if (char_beg=='g')
      gh[int_1], hh[int_2]=1;
    if (char_beg=='h')
      hh[int_1], ih[int_2]=1;
    if (char_beg=='i')
      ih[int_1], jh[int_2]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f')
    printf("Invalid letter, restart program\n");
  }
  if (difference==1)
  {int int_2=abs(int_1+1);
   int int_3=int_2++;
   int int_4=int_3++;
  if (char_beg=='a')
      ah[int_1], ah[int_2]=1;
    if (char_beg=='b')
      bh[int_1], bh[int_2]=1;
    if (char_beg=='c')
      ch[int_1], ch[int_2]=1;
    if (char_beg=='d')
      dh[int_1], dh[int_2]=1;
    if (char_beg=='e')
      eh[int_1], eh[int_2]=1;
    if (char_beg=='f')
      fh[int_1], fh[int_2]=1;
    if (char_beg=='g')
      gh[int_1], gh[int_2]=1;
    if (char_beg=='h')
      hh[int_1], hh[int_2]=1;
    if (char_beg=='i')
      ih[int_1], ih[int_2]=1;
    if (char_beg=='j')
      jh[int_1], jh[int_2]=1;
    if (char_beg!='a'&&char_beg!='b'&&char_beg!='c'&&char_beg!='d'&&char_beg!='e'&&char_beg!='f'&&char_beg!='g'&&char_beg!='h'&&char_beg!='i'&&char_beg!='j')
    printf("Invalid letter, restart program\n");
  }
    if(difference!=0&&difference!=1)
    printf("Invalid Range, restart program\n");
}//end of function place_ships

int main()

{

int input_int;

char input_char;

initialize_arrays();

print_screen(input_char, input_int);

place_ships();

printf("Input the row of letters that you'd like to chance to 'x'");

scanf("%c", &input_char);

printf("Input the number of the box that you'd like to change to 'x'");

scanf("%d", &input_int);

input_int=input_int-1;//BECAUSE OF ARRAYS

change_space(input_char, input_int);

print_screen();



return 0;

}//end of main function
