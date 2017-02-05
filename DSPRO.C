#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#include<graphics.h>

typedef struct node
{
	int atomic;
	char symbol[4];
	char name[20];
	float mass;
	int group;
	int period;
	struct node *next;
	struct node *down;
	struct node *in;
}node;

typedef struct ll
{
	node *start;
	int count;
}ll;

typedef struct element
{
	int atomic;
	char symbol[4];
	char name[20];
	float mass;
	int group;
	int period;
}element;

typedef struct tnode
{
	int atomic;
	char symbol[4];
	char name[20];
	float mass;
	int group;
	int period;
	struct tnode *left;
	struct tnode *right;
}tnode;

void display_table(){
int s,d,f,key,i,j,x,y,n,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");

 //---------------------For lines in Perodic Table------------//

line(0,30,30,30);
line(30,30,30,275);
line(0,135,625,135);
line(65,65,65,275);
line(0,100,65,100);
line(415,65,625,65);
line(415,100,625,100);
line(590,30,625,30);
line(590,30,625,30);
line(485,65,485,275);
line(520,65,520,275);
line(555,65,555,275);
line(590,30,590,275);
line(625,30,625,275);
line(135,420,625,420);
line(135,350,135,420);
line(135,350,625,350);
line(135,385,625,385);
line(170,350,170,420);
line(205,350,205,420);
line(240,350,240,420);
line(275,350,275,420);
line(310,350,310,420);
line(345,350,345,420);
line(380,350,380,420);
line(0,30,0,275);
line(0,170,625,170);
line(0,205,625,205);
line(0,240,625,240);
line(0,275,625,275);
line(415,350,415,420);
line(450,350,450,420);
line(485,350,485,420);
line(520,350,520,420);
line(555,350,555,420);
line(590,350,590,420);
line(625,350,625,420);
line(0,65,65,65);
line(100,135,100,275);
line(135,135,135,275);
line(170,135,170,275);
line(205,135,205,275);
line(240,135,240,275);
line(275,135,275,275);
line(310,135,310,275);
line(345,135,345,275);
line(380,135,380,275);
line(415,65,415,275);
line(450,65,450,275);

//------------------ Entering Elements----------------- //

//-----------------------s block-----------------------//

setcolor(1);
settextstyle(0,0,0);
outtextxy(10,50,"H");
outtextxy(10,85,"Li");
outtextxy(10,120,"Na");
outtextxy(10,155,"K");
outtextxy(10,190,"Rb");
outtextxy(10,225,"Cs");
outtextxy(10,260,"Fr");
outtextxy(40,85,"Be");
outtextxy(40,120,"Mg");
outtextxy(40,155,"Ca");
outtextxy(40,190,"Sr");
outtextxy(40,225,"Ba");
outtextxy(40,260,"Ra");
//-----------------------------d block----------------//

setcolor(4);
outtextxy(75,155,"Sc");
outtextxy(75,190,"Y");
outtextxy(75,225,"La");
outtextxy(75,260,"Ac");
outtextxy(110,155,"Ti");
outtextxy(110,190,"Zr");
outtextxy(110,225,"Hf");
outtextxy(110,260,"Rf");
outtextxy(145,155,"V");
outtextxy(145,190,"Nb");
outtextxy(145,225,"Ta");
outtextxy(145,260,"Db");
outtextxy(180,155,"Cr");
outtextxy(180,190,"Mo");
outtextxy(180,225,"W");
outtextxy(180,260,"Sg");
outtextxy(215,155,"Mn");
outtextxy(215,190,"Tc");
outtextxy(215,225,"Re");
outtextxy(215,260,"Bh");
outtextxy(250,155,"Fe");
outtextxy(250,190,"Ru");
outtextxy(250,225,"Os");
outtextxy(250,260,"Hs");
outtextxy(285,155,"Co");
outtextxy(285,190,"Rh");
outtextxy(285,225,"Ir");
outtextxy(285,260,"Mt");
outtextxy(320,155,"Ni");
outtextxy(320,190,"Pd");
outtextxy(320,225,"Pt");
outtextxy(315,260,"Uun");
outtextxy(355,155,"Cu");
outtextxy(355,190,"Ag");
outtextxy(355,225,"Au");
outtextxy(350,260,"Uuu");
outtextxy(390,155,"Zn");
outtextxy(390,190,"Cd");
outtextxy(390,225,"Hg");
outtextxy(385,260,"Uub");
//--------------------------------p block---------------------//

setcolor(6);
outtextxy(425,155,"Ga");
outtextxy(425,190,"In");
outtextxy(425,225,"Ti");
outtextxy(420,260,"Uut");
outtextxy(425,120,"Al");
outtextxy(460,155,"Ge");
outtextxy(460,190,"Sn");
outtextxy(460,225,"Pb");
outtextxy(455,260,"Uuq");
outtextxy(495,190,"Sb");
outtextxy(495,225,"Bi");
outtextxy(490,260,"Uup");
outtextxy(530,225,"Po");
outtextxy(560,260,"Uus");
outtextxy(525,260,"Uuh");
setcolor(8);
outtextxy(425,85,"B");
outtextxy(460,85,"C");
outtextxy(460,120,"Si");
outtextxy(495,85,"N");
outtextxy(495,120,"P");
outtextxy(495,155,"As");
outtextxy(530,85,"O");
outtextxy(530,120,"S");
outtextxy(530,155,"Se");
outtextxy(530,190,"Te");
outtextxy(565,85,"F");
outtextxy(565,120,"Cl");
outtextxy(565,155,"Br");
outtextxy(565,190,"I");
outtextxy(565,225,"At");
setcolor(9);
outtextxy(600,50,"He");
outtextxy(600,85,"Ne");
outtextxy(600,120,"Ar");
outtextxy(600,155,"Kr");
outtextxy(600,190,"Xe");
outtextxy(600,225,"Rn");
outtextxy(600,260,"Uuo");
setcolor(4);
settextstyle(6,0,4);
outtextxy(120,15,"PERIODIC TABLE");
settextstyle(0,0,0);
//-----------------------f block---------------------//

setcolor(7);
outtextxy(145,375,"Ce");
outtextxy(145,410,"Th");
outtextxy(180,375,"Pr");
outtextxy(180,410,"Pa");
outtextxy(215,375,"Nd");
outtextxy(215,410,"U");
outtextxy(250,375,"Pm");
outtextxy(250,410,"Np");
outtextxy(285,375,"Sm");
outtextxy(285,410,"Pu");
outtextxy(320,375,"Eu");
outtextxy(320,410,"Am");
outtextxy(355,375,"Gd");
outtextxy(355,410,"Cm");
outtextxy(390,375,"Tb");
outtextxy(390,410,"Bk");
outtextxy(425,375,"Dy");
outtextxy(425,410,"Cf");
outtextxy(460,375,"Ho");
outtextxy(460,410,"Es");
outtextxy(495,375,"Er");
outtextxy(495,410,"Fm");
outtextxy(530,375,"Tm");
outtextxy(530,410,"Md");
outtextxy(565,375,"Yb");
outtextxy(565,410,"No");
outtextxy(600,375,"Lu");
outtextxy(600,410,"Lr");
setcolor(30);
outtextxy(20,365,"*Lanthanides--");
outtextxy(20,400,"*Actinides----");
outtextxy(135,330,"|----------------------f-block Elements----------------------|");
outtextxy(65,120,"|-------------d-block Elements-------------|");
outtextxy(412,280,"|-----p-block Elements----|");
outtextxy(0,280,"|-------|");
outtextxy(0,290,"s-blocks Elements");
//-------------------------groups-------------------//

setcolor(50);
outtextxy(0,20,"Gp1");
outtextxy(40,50,"Gp2");
outtextxy(70,100,"Gp3");
outtextxy(105,100,"Gp4");
outtextxy(140,100,"Gp5");
outtextxy(175,100,"Gp6");
outtextxy(210,100,"Gp7");
outtextxy(245,100,"Gp8");
outtextxy(280,100,"Gp9");
outtextxy(310,100,"Gp10");
outtextxy(348,100,"Gp11");
outtextxy(382,100,"Gp12");
outtextxy(415,50,"Gp13");
outtextxy(450,50,"Gp14");
outtextxy(485,50,"Gp15");
outtextxy(520,50,"Gp16");
outtextxy(555,50,"Gp17");
outtextxy(590,20,"Gp18");
//-----------------------------periods-----------------//

outtextxy(620,45," 1");
outtextxy(620,80," 2");
outtextxy(620,115," 3");
outtextxy(620,150," 4");
outtextxy(620,180," 5");
outtextxy(620,215," 6");
outtextxy(620,250," 7");
//------------------------s block---------------------//

setcolor(11);
outtextxy(10,35,"1");
outtextxy(10,70,"3");
outtextxy(10,105,"11");
outtextxy(10,140,"19");
outtextxy(10,175,"37");
outtextxy(10,210,"55");
outtextxy(10,245,"87");
outtextxy(40,70,"4");
outtextxy(40,105,"12");
outtextxy(40,140,"20");
outtextxy(40,175,"38");
outtextxy(40,210,"56");
outtextxy(40,245,"88");
//----------------------------d block--------------------//

setcolor(21);
outtextxy(75,140,"21");
outtextxy(75,175,"39");
outtextxy(75,210,"57*");
outtextxy(75,245,"89*");
outtextxy(110,140,"22");
outtextxy(110,175,"40");
outtextxy(110,210,"72");
outtextxy(110,245,"104");
outtextxy(145,140,"23");
outtextxy(145,175,"41");
outtextxy(145,210,"73");
outtextxy(145,245,"105");
outtextxy(180,140,"24");
outtextxy(180,175,"42");
outtextxy(180,210,"74");
outtextxy(180,245,"106");
outtextxy(215,140,"25");
outtextxy(215,175,"43");
outtextxy(215,210,"75");
outtextxy(215,245,"107");
outtextxy(250,140,"26");
outtextxy(250,175,"44");
outtextxy(250,210,"76");
outtextxy(250,245,"108");
outtextxy(285,140,"27");
outtextxy(285,175,"45");
outtextxy(285,210,"77");
outtextxy(285,245,"109");
outtextxy(320,140,"28");
outtextxy(320,175,"46");
outtextxy(320,210,"78");
outtextxy(315,245,"110");
outtextxy(355,140,"29");
outtextxy(355,175,"47");
outtextxy(355,210,"79");
outtextxy(350,245,"111");
outtextxy(390,140,"30");
outtextxy(390,175,"46");
outtextxy(390,210,"80");
outtextxy(385,245,"112");
//-------------p block-----------------  //

setcolor(15);
outtextxy(425,140,"31");
outtextxy(425,175,"49");
outtextxy(425,210,"81");
outtextxy(420,245,"113");
outtextxy(425,105,"13");
outtextxy(425,70,"5");
outtextxy(460,70,"6");
outtextxy(460,105,"14");
outtextxy(460,140,"32");
outtextxy(460,175,"50");
outtextxy(460,210,"82");
outtextxy(455,245,"114");
outtextxy(495,70,"7");
outtextxy(495,105,"15");
outtextxy(495,140,"33");
outtextxy(495,175,"51");
outtextxy(495,210,"83");
outtextxy(490,245,"115");
outtextxy(530,70,"8");
outtextxy(530,105,"16");
outtextxy(530,140,"34");
outtextxy(530,175,"52");
outtextxy(530,210,"84");
outtextxy(525,245,"116");
outtextxy(565,70,"9");
outtextxy(565,105,"17");
outtextxy(565,140,"35");
outtextxy(565,175,"53");
outtextxy(565,210,"85");
outtextxy(560,245,"117");
outtextxy(600,35,"2");
outtextxy(600,70,"10");
outtextxy(600,105,"18");
outtextxy(600,140,"36");
outtextxy(600,175,"54");
outtextxy(600,210,"86");
outtextxy(600,245,"118");
//-------------------------f block----------------------//

setcolor(10);
outtextxy(145,360,"58");
outtextxy(145,395,"90");
outtextxy(180,360,"59");
outtextxy(180,395,"91");
outtextxy(215,360,"60");
outtextxy(215,395,"92");
outtextxy(250,360,"61");
outtextxy(250,395,"93");
outtextxy(285,360,"62");
outtextxy(285,395,"94");
outtextxy(320,360,"63");
outtextxy(320,395,"95");
outtextxy(355,360,"64");
outtextxy(355,395,"96");
outtextxy(390,360,"65");
outtextxy(390,395,"97");
outtextxy(425,360,"66");
outtextxy(425,395,"98");
outtextxy(460,360,"67");
outtextxy(460,395,"99");
outtextxy(495,360,"68");
outtextxy(495,395,"100");
outtextxy(530,360,"69");
outtextxy(530,395,"101");
outtextxy(565,360,"70");
outtextxy(565,395,"102");
outtextxy(600,360,"71");
outtextxy(600,395,"103");
getch();
closegraph();
}

int displayifright(int countr)
{
  printf("\n\nCorrect!!!");
  getch();
  clrscr();
  return(++countr);
}

int letshavequiz()
{
  int countq=0,countr=0,i=1;
  int r;
  char ans;

  for(i=0;i<5;i++)
       {
		r=rand()%20;
		switch(r)
       {
       case 1:
		printf("\n\nTHE ROWS OF THE PERIODIC TABLE ARE CALLED?");
		printf("\n\nA.CLASSES\tB.PERIODS\n\nC.GROUPS\tD.FAMILIES\n\n");
		countq++;
		ans=getch();
       if (ans=='B'||ans=='b')
		{
			countr=displayifright(countr);
			break;
		}
	else
		{

		printf("\n\nWrong!!! The correct answer is B.PERIODS");
		getch();
		clrscr();
		break;
		}


	case 2:
		printf("\n\n\nWHAT IS THE NAME OF THE ELEMENT WHOSE SYMBOL IS K?");
		printf("\n\nA.SODIUM\tB.ALUMINIUM\n\nC.POTASSIUM\tD.CALCIUM\n\n");
		countq++;
		ans=getch();
	if (ans=='C'||ans=='c')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is C.POTASSIUM");
		getch();
		clrscr();
		break;
		}


	case 3:
		printf("\n\n\nGENERALLY THE VALENCY OF THE NOBLE GAS IS?");
		printf("\n\nA.TWO\tB.THREE\n\nC.ONE\tD.ZERO\n\n");
		countq++;
		ans=getch();
	if (ans=='D'||ans=='d')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is D.ZERO");
		getch();
		clrscr();
		break;
		}


	case 4:
		printf("\n\n\nVARIABLE VALENCY IS GENERALLY EXHIBITED BY?");
		printf("\n\nA.TRANSITION ELEMENTS\tB.METALLIC ELEMENTS\n\nC.NORMAL ELEMENTS\tD.NONE OF THESE\n\n");
		countq++;
		ans=getch();
	if (ans=='A'||ans=='a')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is A.TRANSITION ELEMENTS");
		getch();
		clrscr();
		break;
		}
	case 5:
		printf("\n\n\nWHICH OF THE FOLLOWING ALKALI METALS HAS THE SMALLEST SIZE?");
		printf("\n\nA.Cs\tB.Rb\n\nC.Na\tD.K\n\n");
		countq++;
		ans=getch();
	if (ans=='C'||ans=='c')
		{
		 countr=displayifright(countr);
		break;
		}
	 else
		{
		printf("\n\nWrong!!! The correct answer is C.Na");
		getch();
		clrscr();
		break;
		}
	case 6:
		printf("\n\n\nTHE IONS WHICH ARE ISO-ELECTRONIC HAVE");
		printf("\n\nA.SAME IONISATION ENERGY\tB.SAME ELECTRONIC CONFIGURATION\n\nC.SAME NUCLEAR CHARGE\t\tD.SAME SIZE\n\n");
		countq++;
		ans=getch();
	if (ans=='B'||ans=='b' )
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is B.SAME ELECTRONIC CONFIGURATION");
		getch();
		clrscr();
		break;
		}
	case 7:
		printf("\n\n\nTHE ELEMENT WHICH HAS HIGHEST ELECTRONEGATIVITY IS?");
		printf("\n\nA.F\tB.He\n\nC.Ne\tD.Na\n\n");
		countq++;
		ans=getch();
	if (ans=='A'||ans=='a')
		{
		countr=displayifright(countr);;
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is A.F");
		getch();
		clrscr();
		break;
		}


	case 8:
		printf("\n\n\nTHE ONLY METAL THAT IS LIQUID?");
		printf("\n\nA.Cs\tB.K\n\nC.Co\tD.Hg\n\n");
		countq++;
		ans=getch();
	if (ans=='D'||ans=='d')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is D.Hg");
		getch();
		clrscr();
		break;
		}
	 case 9:
		printf("\n\n\nTHE ELEMENT WHICH HAS GREATER TENDENCY TO LOSE ELECTRON IS?");
		printf("\n\nA.Be\tB.F\n\nC.Fr\t\tD.S\n\n");
		countq++;
		ans=getch();
	 if (ans=='C'||ans=='c')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is C.Fr");
		getch();
		clrscr();
		break;
		}


	 case 10:
		printf("\n\n\nWHICH AMONG THE FOLLOWING IS THE WEAKEST FORCE OF ATTRACTION BETWEEN THE ATOMS");
		printf("\n\nA.DIPOLE-DIPOLE ATTRACTION\tB.VAN-DERWALL ATTRACTION\n\nC.CO-VALENT ATTRACTIONS\t\tD.NONE OF THESE\n\n");
		countq++;
		ans=getch();
	if (ans=='B'||ans=='b')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is B.VAN-DERWALL ATTRACTION");
		getch();
		clrscr();
		break;
		}
	case 11:
		printf("\n\n\nWHICH OF THE FOLLOWING HAS DIAGONAL RELATIONSHIP");
		printf("\n\nA.Al and Mg\tB.K and Mg\n\nC.Na and Mg\tD.Li and Mg\n\n");
		countq++;
		ans=getch();
	if (ans=='D'||ans=='d')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is D.Li and Mg");
		getch();
		clrscr();
		break;
		}
	case 12:
		printf("\n\n\nELEMENTS OF WHICH PERIOD ARE KNOWN AS BRIDGE ELEMENTS?");
		printf("\n\nA.2nd\tB.5th\n\nC.3rd\tD.4th\n\n");
		countq++;
		ans=getch();
	if (ans=='A'||ans=='a')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is A.2nd");
		getch();
		clrscr();
		break;
		}
	case 13:
		 printf("\n\n\nELEMENTS OF WHICH PERIOD ARE CALLED TYPICAL ELEMENTS?");
		 printf("\n\nA.2nd\tB.5th\n\nC.3rd\tD.4th\n\n");
		countq++;
		ans=getch();
	if (ans=='C'||ans=='c')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is C.3rd");
		getch();
		clrscr();
		break;
		}

	case 14:
		printf("\n\nWHICH AMONG THE FOLLOWING IS THE FACTOR NOT AFFECTING ELECTRON AFFINITY\n?");
		printf("\n\nA.ATOMIC SIZE\tB.NUCLEAR CHARGE\n\nC.ATOMIC MASS\tD.STABILITY OF THE ORBITALS\n\n");
		countq++;
		ans=getch();
	if (ans=='C'||ans=='c')
		{
		 countr=displayifright(countr);
		 break;
		 }
	else
		{
		printf("\n\nWrong!!! The correct answer is C.ATOMIC MASS");
		getch();
		clrscr();
		break;
		}

	case 15:
		printf("\n\n\nWHICH AMONG THE FOLLOWING IS THE FACTOR NOT AFFECTING ELECTRONEGETIVITY");
		printf("\n\nA.PERCENTAGE p - CHARACTER\tB.NUCLEAR ATTRACTION\n\nC.PERCENTAGE s - CHARACTER\tD.ATOMIC RADII\n\n");
		countq++;
		 ans=getch();
	if (ans=='A'||ans=='a')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is A.PERCENTAGE p - CHARACTER");
		getch();
		clrscr();
		break;
		}

	case 16:
		printf("\n\nTHE ELEMENT WHICH HAS ZERO ELECTRON AFFINITY IS\n?");
		printf("\n\nA.Ne\tB.F\n\nC.Na\tD.Ca\n\n");
		countq++;
		ans=getch();
	if (ans=='A'||ans=='a')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is A.Ne");
		getch();
		clrscr();
		break;
		}
	case 17:
		printf("\n\n\nCa BELONGS TO WHICH PERIOD?");
		printf("\n\nA.3rd\tB.6th\n\nC.2nd\tD.4th\n\n");
		 countq++;
		 ans=getch();
	if (ans=='D'||ans=='d')
		{
		 countr=displayifright(countr);
		break;
		}
	 else
		{
		printf("\n\nWrong!!! The correct answer is D.4th")
		;getch();
		clrscr();
		break;
		}
	case 18:
		 printf("\n\n\nHOW MANY GROUPS AND PERIODS ARE THERE IN MODERN PERIODIC TABLE");
		 printf("\n\nA.7 GROUP AND 18 PERIODS\tB.20 PERIODS AND 9 GROUPS\n\nC.18 GROUPS AND 7 PERIODS\tD.7 PERIODS AND 12 GROUPS\n\n");
		 countq++;
		ans=getch();
	 if (ans=='C'||ans=='c')
		{
		countr=displayifright(countr);
		break;
		 }
	else
		{
		printf("\n\nWrong!!! The correct answer is C.18 GROUPS AND 7 PERIODS");
		getch();
		clrscr();
		break;
		}
	case 19:
		printf("\n\n\nNAME THE FIRST LANTHENOID ELEMENT?");
		printf("\n\nA.SAMARIUM\tB.LANTHANUM\n\nC.ACTINIUM\tD.CERIUM\n\n");
		countq++;
		ans=getch();
	  if (ans=='B'||ans=='b')
		{
		countr=displayifright(countr);
		break;
		}
	 else
		{
		printf("\n\nWrong!!! The correct answer is B.LANTHANUM");
		getch();
		clrscr();
		break;
		}
	case 20:
		 printf("\n\n\nWHICH AMONG THE FOLLOWING HAS THE MOST STABLE ELECTRONIC CONFIGURATION?");
		 printf("\n\nA.NOBLE GASES\tB.HALOGENS\n\nC.METALS\tD.METALLOIDS\n\n");
		 countq++;
		 ans=getch();
       if (ans=='A'||ans=='a')
		{
		countr=displayifright(countr);
		break;
		}
	else
		{
		printf("\n\nWrong!!! The correct answer is A.NOBLE GASES");
		clrscr();
		getch();
		break;
		}
	 }
  }
 return countr;
}
 int introscreen()
     {
	char pname[30],ch;
	clrscr();
	printf("\n\t\t  PERIODIC TABLE QUIZ \n\n");
	printf("\n\t\t-------------------------------");
	printf("\n\t\t PRESS 'S' or 's' to start QUIZ       ");
	printf("\n\t\t PRESS 'E' or 'e' to exit             ");
	printf("\n\t\t-------------------------------\n\n\t\t  ");
	ch=(getch());


		if ((ch=='e')||(ch=='E'))
			{
				exit(1);
				getch();
			}
		else if((ch=='S')||(ch=='s'))
			{
				clrscr();
				return(letshavequiz());
			 }
			 return(letshavequiz());
		}
void quiz()
{
      int score,countr;
      char pname[30];
      clrscr();
      countr=introscreen();
      score=20*countr;
      printf("\n\n\nYour Score: %d",score);
	  if(score==100)
	       printf("\n\nAWESOME!!! KEEP IT UP");
	 else if(score>=80 && score<100)
		printf("\n\nGREAT!!");
	 else if (score>=60 &&score<80)
		printf("\n\nGOOD!");
	 else if (score>=40 && score<60)
		printf("\n\nAVERAGE... TRY A LITTLE HARDER.");
	 else printf("\n\nNOT GOOD... GIVE SOME EFFORT");
      getch();
 introscreen();
}

void displayinfo(node *temp)
{
	printf("\nThe searched element's information is\n");
	printf("Atomic Number=%d\n",temp->atomic);
	printf("Symbol=%s\n",temp->symbol);
	printf("Name=%s\n",temp->name);
	printf("Atomic Mass=%f\n",temp->mass);
	printf("Group Number=%d\n",temp->group);
	printf("Period Number=%d\n",temp->period);
}

void display_t_info(tnode *temp)
{
	printf("\n\nThe searched element's information is\n");
	printf("Atomic Number=%d\n",temp->atomic);
	printf("Symbol=%s\n",temp->symbol);
	printf("Name=%s\n",temp->name);
	printf("Atomic Mass=%f\n",temp->mass);
	printf("Group Number=%d\n",temp->group);
	printf("Period Number=%d\n",temp->period);
}

void inorder(tnode *root){
if(root!=NULL)
{
	inorder(root->left);
	printf("%s ",root->name);
	inorder(root->right);
}
}

tnode* searchnametree(tnode* root,char info[],int count)
{
    if((root==NULL)||(strcmp(root->name,info)==0))
    {
	printf("Total elements traversed=%d\n",count);
	return root;
    }
    else if(strcmp(info,root->name)<0)
    {
	count++;
	printf("%s ",root->name);
	return searchnametree(root->left,info,count);
    }
    else
    {
	count++;
	printf("%s ",root->name);
	return searchnametree(root->right,info,count);
    }
}

tnode *createtnode(element e){
tnode *temp=(tnode *)malloc(sizeof(tnode));
temp->atomic=e.atomic;
strcpy(temp->symbol,e.symbol);
strcpy(temp->name,e.name);
temp->mass=e.mass;
temp->group=e.group;
temp->period=e.period;
temp->left=NULL;
temp->right=NULL;
return temp;
}

tnode * inserttnode(tnode *root,element e){
if(root==NULL)
{
	tnode *temp=createtnode(e);
	root=temp;
}
else
{
	if(strcmp(root->name,e.name)>0)
	{
		root->left=inserttnode(root->left,e);
	}
	else
	{
		root->right=inserttnode(root->right,e);
	}
}
return root;
}

void linkfloat()
{
	float *a,b=0;
	b=*a;
	a=&b;
}

ll * initll()
{
	ll *l=(ll *)malloc(sizeof(ll));
	l->start=NULL;
	l->count=0;
	return l;
}

node * createnode(element e)
{
	node *temp=(node *)malloc(sizeof(node));
	temp->atomic=e.atomic;
	strcpy(temp->symbol,e.symbol);
	strcpy(temp->name,e.name);
	temp->mass=e.mass;
	temp->group=e.group;
	temp->period=e.period;
	temp->next=NULL;
	temp->down=NULL;
	temp->in=NULL;
	return temp;
}

void insertnode(ll *l,element e)
{
	int i;
	node *temp1,*temp2,*temp;
	temp1=l->start;
	temp2=l->start;
	temp=createnode(e);
	if(l->start==NULL)
	{
		l->start=temp;
	}
	else
	{
		if(temp->period==temp1->period)
		{
			temp1->next=temp;
		}
		else if(temp->group==temp1->group)
		{
			while(temp1->down!=NULL)
			{
				temp1=temp1->down;
			}
			temp1->down=temp;
		}
		else
		{
			while(temp1->period!=temp->period)
			{
				temp1=temp1->down;
			}
			while(temp1->next!=NULL)
			{
				temp1=temp1->next;
			}
			if(((temp->atomic>=58)&&(temp->atomic)<=72)||(temp->atomic>=90)&&(temp->atomic)<=103)
			{
				if((temp->atomic==72)||(temp->atomic==103))
				{
					temp1->next=temp;
				}
				while(temp1->in!=NULL)
				{
					temp1=temp1->in;
				}
				temp1->in=temp;
			}
			else
			{
				temp1->next=temp;
			}
			while(temp2->period!=temp->period-1)
			{
				temp2=temp2->down;
			}
			while(temp2->next!=NULL)
			{
				temp2=temp2->next;
				if(temp2->group==temp->group)
				{
					if((temp->atomic>=58)&&(temp->atomic<=72)||(temp->atomic>=90)&&(temp->atomic<=103))
					break;
					temp2->down=temp;
					break;
				}
			}
		}
	}
(l->count)++;
}

void display_la_series(node *temp1)
{
	while(temp1->in!=NULL)
	{
		printf("%s ",temp1->name);
		temp1=temp1->in;
	}
}

void searchby_gp_pd(ll *l,int group,int period)
{
	node *temp1;
	temp1=l->start;
	while(temp1->period!=period)
	{
		temp1=temp1->down;
		if(temp1==NULL)
		{
			printf("Element not found");
				break;
		}
	}
	while(temp1->group!=group)
	{
		temp1=temp1->next;
		if(temp1==NULL)
		{
				printf("Element not found");
				break;
		}
	}
	if((temp1->group==3)&&(temp1->period==6))
	{
		printf("\nGroup 3 and Period 6 represents the lanthanide series\n\n");
		printf("Elements of lanthanide series are:\n");
		display_la_series(temp1);
	}
	else if((temp1->group==3)&&(temp1->period==7))
	{
		printf("\nGroup 3 and Period 7 represents the actinide series\n\n");
		printf("Elements of actinide series are:\n");
		display_la_series(temp1);
	}
	else
	{
		displayinfo(temp1);
	}
}

void display_gp(ll *l,int group)
{
	int flag=0;
	node *temp,*temp1;
	temp=l->start;
	temp1=l->start;
	while(temp1!=NULL)
	{
		while(temp!=NULL)
		{
			if(temp->group==group)
			{
				while(temp!=NULL)
				{
					printf("%s ",temp->name);
					temp=temp->down;
				}
				flag=1;
				break;
			}
			temp=temp->next;
		}
		if(flag==1)
		break;
		temp1=temp1->down;
		temp=temp1;
	}
}

void display_pd(ll *l,int period)
{
	node *temp;
	temp=l->start;
	while(temp!=NULL)
	{
		if(temp->period==period)
		{
			while(temp!=NULL)
			{
				printf("%s ",temp->name);
				temp=temp->next;
			}
			break;
		}
		temp=temp->down;
	}
}

void searchbyatomic(ll * l,int atomic)
{
	int flag=0,i,count=0;
	node *temp,*temp1;
	temp=l->start;
	temp1=l->start;
	printf("Elements traversed in multi-linked list are:\n");
	while(temp1!=NULL)
	{
		while(temp->next!=NULL)
		{
			count++;
			printf("%s ",temp->name);
			if(temp->next->next==NULL)
			{
				printf("%s ",temp->next->name);
				count++;
			}
			if(temp->atomic==atomic)
			{
				if(((temp->atomic==57)||(temp->atomic==72))||((temp->atomic==89)))
				{
					flag=1;
					break;
				}
				else
				{
					displayinfo(temp);
					flag=1;
					break;
				}
			}
			temp=temp->next;
			if(((temp->period==6)&&(temp->in!=NULL))||(temp->period==7)&&(temp->in!=NULL))
			{
				while(temp->in!=NULL)
				{
					count++;
					printf("%s ",temp->name);
					if(temp->atomic==atomic)
					{
						displayinfo(temp);
						flag=1;
						break;
					}
					temp=temp->in;
					if(temp->in==NULL)
					{
						count++;
						printf("%s ",temp->name);
						if(temp->atomic==atomic)
						{
							displayinfo(temp);
							flag=1;
							break;
						}
						temp=temp->next;
					}
				}
			}
			else if(temp->next==NULL)
			{
				if(temp->atomic==atomic)
				{
					displayinfo(temp);
					flag=1;
					break;
				}
				temp1=temp1->down;
				temp=temp1;
				break;
			}
		}
		if(flag==1)
		break;
	}
	if(temp1==NULL)
	{
		printf("Element not found\n");
	}
printf("\nTotal Number of traversals=%d\n\n",count);
}

void searchbysymbol(ll * l,char symbol[])
{
	int flag=0,count=0;
	node *temp,*temp1;
	temp=l->start;
	temp1=l->start;
	printf("\nElements traversed in multi-linked list are:\n");
	while(temp1!=NULL)
	{
		while(temp->next!=NULL)
		{
			count++;
			printf("%s ",temp->name);
			if(temp->next->next==NULL)
			{
				printf("%s ",temp->next->name);
				count++;
			}
			if(strcmp(temp->symbol,symbol)==0)
			{
				if((temp->atomic==57)||(temp->atomic==72)||((temp->atomic==89)))
				{
					flag=1;
					break;
				}
				else
				{
					displayinfo(temp);
					flag=1;
					break;
				}
			}
			temp=temp->next;
			if(((temp->period==6)&&(temp->in!=NULL))||(temp->period==7)&&(temp->in!=NULL))
			{
				while(temp->in!=NULL)
				{
					count++;
					printf("%s ",temp->name);
					if(temp->next->next==NULL)
					{
						printf("%s ",temp->next->name);
						count++;
					}
					if(strcmp(temp->symbol,symbol)==0)
					{
						displayinfo(temp);
						flag=1;
						break;
					}
					temp=temp->in;
					if(temp->in==NULL)
					{
						count++;
						printf("%s ",temp->name);
						if(strcmp(temp->symbol,symbol)==0)
						{
							displayinfo(temp);
							flag=1;
							break;
						}
					}
				}
			}
			else if(temp->next==NULL)
			{
				if(strcmp(temp->symbol,symbol)==0)
				{
					displayinfo(temp);
					flag=1;
					break;
				}
				temp1=temp1->down;
				temp=temp1;
				break;
			}
		}
		if(flag==1)
		break;
	}
	if(temp1==NULL)
	{
		printf("Element not found\n");
	}
printf("\nTotal Number of traversals=%d\n\n",count);
}

void searchbyname(ll * l,char name[])
{
	int flag=0,count=0;
	node *temp,*temp1;
	temp=l->start;
	temp1=l->start;
	printf("\nElements traversed in multi-linked list are:\n");
	while(temp1!=NULL)
	{
		while(temp->next!=NULL)
		{
			count++;
			printf("%s ",temp->name);
			if(temp->next->next==NULL)
			{
				printf("%s ",temp->next->name);
				count++;
			}
			if(strcmp(temp->name,name)==0)
			{
				if((temp->atomic==57)||(temp->atomic==72)||((temp->atomic==89)))
				{
					flag=1;
					break;
				}
				else
				{
					displayinfo(temp);
					flag=1;
					break;
				}
			}
			temp=temp->next;
			if(((temp->period==6)&&(temp->in!=NULL))||(temp->period==7)&&(temp->in!=NULL))
			{
				while(temp->in!=NULL)
				{
					if(strcmp(temp->name,name)==0)
					{
						displayinfo(temp);
						flag=1;						flag=1;
						break;
					}

					temp=temp->in;
					if(temp->in==NULL)
					{
						if(strcmp(temp->name,name)==0)
						{
							displayinfo(temp);
							flag=1;
							break;
						}
					}
				}
			}
			else if(temp->next==NULL)
			{
				if(strcmp(temp->name,name)==0)
				{
					displayinfo(temp);
					flag=1;
					break;
				}
				temp1=temp1->down;
				temp=temp1;
				break;
			}
		}
		if(flag==1)
		break;
	}
	if(temp1==NULL)
	{
		printf("Element not found\n");
	}
printf("\nTotal Number of traversals=%d\n\n",count);
}

void main()
{
int atomic,group,period,i,ch,ch1,count;
char symbol[4],name[20];
float mass;
element e[113];
FILE *fp,*fp2,*fp3;
node *temp1;
ll *l;
tnode *root,*temp;
clrscr();
l=initll();
root=NULL;
fp=fopen("PELEMENT.txt","r");
fp2=fopen("PLANTHAN.txt","r");
fp3=fopen("PACTI.txt","r");
for(i=0;i<56;i++)
{
	fscanf(fp,"%d%s%s%f%d%d",&e[i].atomic,e[i].symbol,e[i].name,&e[i].mass,&e[i].group,&e[i].period);
	fflush(stdin);
	insertnode(l,e[i]);
	root=inserttnode(root,e[i]);
}
for(i=0;i<15;i++)
{
	fscanf(fp2,"%d%s%s%f%d%d",&e[i].atomic,e[i].symbol,e[i].name,&e[i].mass,&e[i].group,&e[i].period);
	fflush(stdin);
	insertnode(l,e[i]);
	root=inserttnode(root,e[i]);
}
for(i=56;i<=72;i++)
{
	fscanf(fp,"%d%s%s%f%d%d",&e[i].atomic,e[i].symbol,e[i].name,&e[i].mass,&e[i].group,&e[i].period);
	fflush(stdin);
	insertnode(l,e[i]);
	root=inserttnode(root,e[i]);
}
for(i=0;i<15;i++)
{
	fscanf(fp3,"%d%s%s%f%d%d",&e[i].atomic,e[i].symbol,e[i].name,&e[i].mass,&e[i].group,&e[i].period);
	fflush(stdin);
	insertnode(l,e[i]);
	root=inserttnode(root,e[i]);
}
for(i=73;i<=81;i++)
{
	fscanf(fp,"%d%s%s%f%d%d",&e[i].atomic,e[i].symbol,e[i].name,&e[i].mass,&e[i].group,&e[i].period);
	fflush(stdin);
	insertnode(l,e[i]);
	root=inserttnode(root,e[i]);
}
display_table();
do
{
	temp=root;
	printf("Hi User\n");
	printf("Welcome to the periodic table\n");
	printf("What would you like to do?\n\n");
	printf("Press 1 to search element via linked list\n");
	printf("Press 2 to search element via binary search tree\n");
	printf("Press 3 to display elements in alphabetical order\n");
	printf("Press 4 to display periodic table\n");
	printf("Press 5 to take a periodic table quiz\n");
	printf("Press 6 to exit\n");
	scanf("%d",&ch);
	clrscr();
	switch(ch)
	{
		case 1: clrscr();
			printf("Press 1 to search element by atomic number\n");
			printf("Press 2 to search element by symbol\n");
			printf("Press 3 to search element by name\n");
			printf("Press 4 to search element by group and period\n");
			printf("Press 5 to display elements of a group\n");
			printf("Press 6 to display elements of a period\n");
			printf("Press 7 to display lanthanide series\n");
			printf("Press 8 to display actinide series\n");
			printf("Press 9 to exit\n");
			scanf("%d",&ch1);
			switch(ch1)
			{
				case 1:	clrscr();
				printf("Enter the atomic number of element:\n");
				scanf("%d",&atomic);
				searchbyatomic(l,atomic);
				getch();
				clrscr();
				break;

				case 2: clrscr();
				printf("Enter the symbol of element:\n");
				scanf("%s",symbol);
				searchbysymbol(l,symbol);
				getch();
				clrscr();
				break;

				case 3: clrscr();
				printf("Enter the name of element:\n");
				scanf("%s",name);
				strupr(name);
				searchbyname(l,name);
				getch();
				clrscr();
				break;

				case 4: clrscr();
				printf("Enter the group of element:\n");
				scanf("%d",&group);
				printf("Enter the period of element:\n");
				scanf("%d",&period);
				searchby_gp_pd(l,group,period);
				getch();
				clrscr();
				break;

				case 5:clrscr();
				printf("Enter the group number:\n");
				scanf("%d",&group);
				display_gp(l,group);
				getch();
				clrscr();
				break;

				case 6: clrscr();
				printf("Enter the period number:\n");
				scanf("%d",&period);
				display_pd(l,period);
				getch();
				clrscr();
				break;

				case 7: clrscr();
					temp1=l->start;
					while(temp1->period!=6)
					{
						temp1=temp1->down;
					}
					while(temp1->group!=3)
					{
						temp1=temp1->next;
					}
					display_la_series(temp1);
					getch();
					clrscr();
					break;

				case 8: clrscr();
					temp1=l->start;
					while(temp1->period!=7)
					{
						temp1=temp1->down;
					}
					while(temp1->group!=3)
					{
						temp1=temp1->next;
					}
					display_la_series(temp1);
					getch();
					clrscr();
					break;

				case 9: break;

				default:printf("You entered wrong choice\n");
					getch();
					clrscr();
					break;
			}
			break;

		case 2: clrscr();
			count=0;
			printf("Enter the name of element:\n");
			scanf("%s",name);
			fflush(stdin);
			strupr(name);
			temp=searchnametree(temp,name,count);
			if(temp==NULL)
			{
				printf("Element not found\n");
			}
			else
			{
				display_t_info(temp);
			}
			getch();
			clrscr();
			break;

		case 3: clrscr();
			inorder(root);
			getch();
			clrscr();
			break;

		case 4: display_table();
			getch();
			break;


		case 5: quiz();
			getch();
			break;

		case 6: break;

		default: printf("You entered wrong choice\n");
			 getch();
			 clrscr();
			 break;
	}
}while(ch!=6);
fclose(fp);
fclose(fp2);
fclose(fp3);
linkfloat();
getch();
}