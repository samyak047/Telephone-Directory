//****************************************TELEPHONE DIRECTORY***************
// SAMYAK JAIN
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>


  struct tele
  {

  char  mob[15],fname[20],lname[20],age[2], sno[2],city[25];

  };
//**********************************************************************************

void design(void);
void star(void);

void main()
{
    int gd,gm,m;
    char ch,ch2,ch3,ch4,ch5;
    gd=DETECT;
    initgraph(&gd,&gm," ");
    tele T[50];
    int x,i=0,n,p;
//*****************************************LOADING**********************
design();
setbkcolor(MAGENTA);
setcolor(WHITE);
settextstyle(4,0,4);
outtextxy(200,180,"LOADING....");
delay(1000);

//***************************WELCOME**********************

clrscr();
  for(x=0;x<=200;x++)
  {
   setcolor(BLUE);
   circle(320,240,x);
   circle(320,240,x+250);
   delay(15);

  }
  for(x=200;x>100;x--)
  {
   circle(320,240,x);
   setcolor(MAGENTA);
   delay(10);
  }
  for(x=100;x<=200;x++)
  {
   setcolor(BLUE);
   circle(320,240,x);
   delay(10);
  }
  for(x=200;x>0;x--)
  {
   circle(320,240,x);
   setcolor(MAGENTA);
   delay(10);
  }
settextstyle(4,0,6);
setcolor(BLUE);
outtextxy(200,200,"WELCOME");
getch();
clrscr();

//******************************************************************

main_menu :


setbkcolor(MAGENTA);
setcolor(WHITE);
for(int j=1;j<=2400;j++)
{
cout<<"*";
}
for(x=80;x<=400;x++)
{
rectangle(80,80,560,x);
delay(5);
setcolor(RED);
}
setcolor(BLACK);
settextstyle(0,1,4);
outtextxy(120,100,"MAIN MENU");
settextstyle(9,0,2);
setcolor(WHITE);
outtextxy(190,100,"1. ADD RECORD");
outtextxy(190,150,"2. VIEW RECORD");
outtextxy(190,200,"3. MODIFY RECORD");
outtextxy(190,250,"4. SEARCH RECORD");
outtextxy(190,300,"5. EXIT");
settextstyle(6,0,2);
setcolor(BLUE);
outtextxy(190,350,"CHOICE PLEASE.........  ");
ch=getch();



switch (ch)
 {
  case '1' :   //************ ADD RECORD *********************
	 {
	   settextstyle(9,0,2);
	   setcolor(BLACK);
	   outtextxy(190,100,"1. ADD RECORD");
	   //settextstyle(9,0,2);
	   //outtextxy(180,100,"*");
	   delay(2000);
	   setbkcolor(MAGENTA);
	   setcolor(RED);
	   for(x=80;x<=400;x++)
	   {
	    rectangle(80,80,560,x);
	    delay(5);
	   }
	   star();
	   add_record :
	   clrscr();
	   design();

	   delay(50);
	   gotoxy(28,6);
	   cout<<"*******ADD RECORD*******";

	   gotoxy(18,10);
	   cout<<"\nSERIAL NO.           :\t";
	   cout<<i+1;

	   gotoxy(18,12);
	   cout<<"\nENTER FIRST NAME     :\t";
	   cin>>T[i].fname;

	   gotoxy(18,14);
	   cout<<"\nENTER LAST NAME      :\t";
	   cin>>T[i].lname;

	   gotoxy(18,16);
	   cout<<"\nMOBOILE NUMBER       :\t";
	   cin>>T[i].mob;

	   gotoxy(18,18);
	   cout<<"\nENTER AGE            :\t";
	   cin>>T[i].age;


	   gotoxy(18,20);
	   cout<<"\nENTER CITY           :\t";
	   cin>>T[i].city;



	   clrscr();
	   settextstyle(1,0,3);
	   setcolor(RED);
	   outtextxy(60,150,"YOUR RECORD HAS BEEN SUCESSFULLY SAVED");

	   i=i+1;

	   getch();
	   choices :
	   for(int j=1;j<=2400;j++)
	   {
	    cout<<"*";
	    }
	   for(x=80;x<=400;x++)
	   {
	    rectangle(80,80,560,x);
	    delay(10);
	    setcolor(RED);
	    }
	  setcolor(BLACK);
	  settextstyle(0,1,3);
	  outtextxy(120,100,"ENTER CHOICE");
	  settextstyle(9,0,2);
	  setcolor(WHITE);
	  outtextxy(190,100,"1. MAIN MENU");
	  outtextxy(190,150,"2. NEXT ENTRY");
	  outtextxy(190,200,"3. EXIT");
	  settextstyle(6,0,2);
	  setcolor(BLUE);
	  outtextxy(190,300,"CHOICE PLEASE.........  ");
	  ch2=getch();

	    switch(ch2)
	    {
	    case '1'  :
		      {
			  settextstyle(9,0,2);
			setcolor(BLACK);
			outtextxy(190,100,"1. MAIN MENU");

		       //	settextstyle(9,0,2);
		       //	outtextxy(180,100,"*");
			delay(1500);
			star();
			goto main_menu;

		       }
	    case '2'  :
		       {
			  settextstyle(9,0,2);
			setcolor(BLACK);

		       outtextxy(190,150,"2. NEXT ENTRY");
		       //	settextstyle(9,0,2);
		       //	outtextxy(180,150,"*");
			delay(1500);
			star();
			goto add_record;

		       }
	    case '3'  :
		       {
			  settextstyle(9,0,2);
		   setcolor(BLACK);

		   outtextxy(190,200,"3. EXIT");
		      //	settextstyle(9,0,2);
		      //	outtextxy(180,200,"*");
			delay(1500);
			star();
			goto end;


		       }
	    default   :
		       {
			clrscr();
			settextstyle(1,0,3);
			setcolor(RED);
			star();
			outtextxy(180,120,"WRONG ENTRY");
			outtextxy(160,160,"Please try again.");
			delay(3000);
			goto choices;
			}
		  }



	   }
 case '2' :      //**********************
	  {
	   settextstyle(9,0,2);
	   setcolor(BLACK);
	   outtextxy(190,150,"2. VIEW RECORD");
	  // settextstyle(9,0,2);
	   //outtextxy(180,150,"*");
	   delay(2000);
	  for(x=80;x<=400;x++)
	   {
	    rectangle(80,80,560,x);
	    delay(5);
	    setcolor(RED);

	    }
	    star();

	   clrscr();
	   design();

	   settextstyle(1,0,1);
	   setbkcolor(BLACK);
	   clrscr();
	   setcolor(WHITE);
	   line(10,10,630,10);
	   line(10,35,630,35);
	   line(10,10,10,460);
	      outtextxy(15,12,"S.No.");
	   line(60,10,60,460);
	      outtextxy(70,12,"NAME");
	   line(270,10,270,460);
	      outtextxy(285,12,"AGE");
	   line(340,10,340,460);
	      outtextxy(345,12,"MOBILE NO.");
	   line(460,10,460,460);
	      outtextxy(465,12,"CITY");
	   line(630,10,630,460);

 int j=0,flag=0,b=0;
	   for(int y=1;y<=i;y++)
	     {
	      settextstyle(0,0,0);

	       outtextxy(70,45+flag,T[j].fname);

	       outtextxy(170,45+flag,T[j].lname);


	       outtextxy(347,45+flag,"+91");
	       outtextxy(370,45+flag,T[j].mob);

	       outtextxy(280,45+flag,T[j].age);
	       outtextxy(300,45+flag,"Years");

	       outtextxy(465,45+flag,T[j].city);

	       gotoxy(5,4+b);
	       cout<<y;

	       line(10,70+flag,630,70+flag);


	      b+=2;
	      flag+=30;
	      j++;
	     }
	     getch();
	     design();
	   goto main_menu;

	   }
 case '3' :           //******************* MODIFY RECORD******************
	 {
	   settextstyle(9,0,2);
	   setcolor(BLACK);
	   outtextxy(190,200,"3. MODIFY RECORD");
	   //settextstyle(9,0,2);
	   //outtextxy(180,200,"*");
	   delay(2000);

	   setbkcolor(MAGENTA);
	   setcolor(RED);
	   for(x=80;x<=400;x++)
	     {
	      rectangle(80,80,560,x);
	      delay(5);
	     }
	   star();
	   modify_record :

	   clrscr();
	   design();

	   delay(20);
	   gotoxy(28,6);
	   cout<<"******MODIFY RECORD******";

	   gotoxy(18,10);
	   cout<<"\nENTER SERIAL NO.           :\t";
	   cin>>n;

	   if(n>i)
	     {
	     gotoxy(18,16);
	     cout<<"NO ENTRY HAVING THIS SERIAL NO.";
	     gotoxy(28,20);
	     cout<<"TRY AGAIN";
	     getch();
	     goto modify_default;
	     }
	   else
	     {
	      p=i;
	      p=n-1;
	      gotoxy(1,14);
	      cout<<"NAME               :\t";
	      cout<<T[p].fname<<" "<<T[p].lname;

	      gotoxy(1,16);
	      cout<<"\nMOBOILE NUMBER   :\t";
	      cout<<T[p].mob;

	      gotoxy(1,18);
	      cout<<"\nAGE              :\t";
	      cout<<T[p].age<<" Years";

	      gotoxy(1,20);
	      cout<<"\nCITY	        :\t";
	      cout<<T[p].city;

	      delay(3000);
	       clrscr();
	       gotoxy(18,22);
	      permission_default :
	      cout<<"ARE YOU SURE TO MODIFY THIS ACCOUNT ???   (Y/N) ";
	      cin>>ch3;
	      design();
		     switch(ch3)
		     {
			case 'Y':{
			     clrscr();
				   delay(50);
				   gotoxy(28,6);
				   cout<<"*******MODIFY RECORD*******";

				   gotoxy(18,10);
				   cout<<"\nSERIAL NO.           :\t";
				   cout<<n;

				   gotoxy(18,12);
				   cout<<"\nENTER FIRST NAME     :\t";
				   cin>>T[p].fname;

				   gotoxy(18,14);
				   cout<<"\nENTER LAST NAME      :\t";
				   cin>>T[p].lname;

				   gotoxy(18,16);
				   cout<<"\nMOBOILE NUMBER       :\t";
				   cin>>T[p].mob;

				   gotoxy(18,18);
				   cout<<"\nENTER AGE            :\t";
				   cin>>T[p].age;


				   gotoxy(18,20);
				   cout<<"\nENTER CITY           :\t";
				   cin>>T[p].city;
				   clrscr();
				   settextstyle(1,0,3);
				   setcolor(RED);
				   outtextxy(60,150,"YOUR RECORD HAS BEEN SUCESSFULLY MODIFIED");
				   getch();
				   goto modify_default;

				 }
		       case 'N' :
			 {
			   modify_default :
			   clrscr();
			   for(int j=1;j<=2400;j++)
			   {
			    cout<<"*";
			    }
			   for(x=80;x<=400;x++)
			   {
			   rectangle(80,80,560,x);
			   delay(10);
			   setcolor(RED);
			    }
			   setcolor(BLACK);
			   settextstyle(0,1,3);
			   outtextxy(120,100,"ENTER CHOICE");
			   settextstyle(9,0,2);
			   setcolor(WHITE);
			   outtextxy(190,100,"1. MAIN MENU");
			   outtextxy(190,150,"2. MOFDIFY ANOTHER");
			   outtextxy(230,200,"RECORD");
			   outtextxy(190,250,"3. EXIT");
			   settextstyle(6,0,2);
			   setcolor(BLUE);
			   outtextxy(190,300,"CHOICE PLEASE.........  ");
			   ch4=getch();

				switch(ch4)
				 {
					  case '1'  :
						     {
							settextstyle(9,0,2);
							setcolor(BLACK);
							outtextxy(190,100,"1. MAIN MENU");

							//settextstyle(9,0,2);
							//outtextxy(180,100,"*");
							delay(1500);
							star();
							goto main_menu;

						     }
					  case '2'  :
						     {
										   settextstyle(9,0,2);
						       setcolor(BLACK);

						       outtextxy(190,150,"2. MOFDIFY ANOTHER");
						       outtextxy(230,200,"RECORD");
						       //	settextstyle(9,0,2);
						       //	outtextxy(180,150,"*");
							delay(1500);
							star();
							goto modify_record;

						     }
					  case '3'  :
						     {
									   settextstyle(9,0,2);
							 setcolor(BLACK);
							 outtextxy(190,250,"3. EXIT");
						       //	settextstyle(9,0,2);
						       //	outtextxy(180,200,"*");
							delay(1000);
							star();
							goto end;

						      }
					default   :
						     {
							clrscr();
							settextstyle(1,0,3);
							setcolor(RED);
							outtextxy(180,120,"WRONG ENTRY");
							outtextxy(160,160,"Please try again.");
							delay(3000);
							goto modify_default;
						    }
			  }
		      default:
			     {

					clrscr();
					settextstyle(1,0,3);
					setcolor(RED);
					star();
					outtextxy(180,120,"WRONG ENTRY");
					outtextxy(160,160,"Please try again.");
					delay(3000);
					goto permission_default;

			     }
	   }	      }
  }



 case '4' :    //*******************SERARCH RECORD**************
	  {
		  settextstyle(9,0,2);
		  setcolor(BLACK);
		  outtextxy(190,250,"4. SEARCH RECORD");
		    //  settextstyle(9,0,2);
		     // outtextxy(180,250,"*");
		      delay(1000);
		      setbkcolor(MAGENTA);
		      setcolor(RED);
		      for(x=80;x<=400;x++)
			     {
				      rectangle(80,80,560,x);
				      delay(5);
			     }
			 star();
		      search_record :
			 clrscr();
			 design();
			 delay(50);
			 gotoxy(28,6);
			 cout<<"******SEARCH RECORD******";

			 gotoxy(18,10);
			 cout<<"\nENTER SERIAL NO.           :\t";
			 cin>>m;

	   if(m>i)
	     {
	     gotoxy(18,16);
	     cout<<"NO ENTRY HAVING THIS SERIAL NO.";
	     gotoxy(28,20);
	     cout<<"TRY AGAIN";
	     getch();
	     goto search_default;
	     }
	   else
	     {
	      p=m-1;         //array no.= serial no.+1

	      gotoxy(18,14);
	      cout<<"NAME               :\t";
	      cout<<T[p].fname<<" "<<T[p].lname;

	      gotoxy(18,16);
	      cout<<"\nMOBOILE NUMBER   :\t";
	      cout<<T[p].mob;

	      gotoxy(18,18);
	      cout<<"\nAGE              :\t";
	      cout<<T[p].age<<" Years";

	      gotoxy(18,20);
	      cout<<"\nCITY             :\t";
	      cout<<T[p].city;

	      gotoxy(20,24);
	      cout<<"****PRESS ANY KEY TO CONTINUE****";
	      getch();
	      delay(2000);

	      goto search_default;
	     }
		       search_default :
			   clrscr();
			   for(int j=1;j<=2400;j++)
			   {
			    cout<<"*";
			    }
			   for(x=80;x<=400;x++)
			   {
			   rectangle(80,80,560,x);
			   delay(15);
			   setcolor(RED);
			    }
			   setcolor(BLACK);
			   settextstyle(0,1,3);
			   outtextxy(120,100,"ENTER CHOICE");
			   settextstyle(9,0,2);
			   setcolor(WHITE);
			   outtextxy(190,100,"1. MAIN MENU");
			   outtextxy(190,150,"2. SEARCH ANOTHER");
			   outtextxy(250,200,"RECORD");
			   outtextxy(190,250,"3. EXIT");

			   settextstyle(6,0,2);
			   setcolor(BLUE);
			   outtextxy(190,300,"CHOICE PLEASE.........  ");
			   ch4=getch();

				switch(ch4)
				 {
					  case '1'  :
						     {
						      settextstyle(9,0,2);
						      setcolor(BLACK);
						      outtextxy(190,100,"1. MAIN MENU");
						      //	settextstyle(9,0,2);
						     // 	outtextxy(180,100,"*");
							delay(1500);
							star();
							goto main_menu;

						     }
					  case '2'  :
						     {
						   settextstyle(9,0,2);
						   setcolor(BLACK);


						    outtextxy(190,150,"2. SEARCH ANOTHER");
						    outtextxy(250,200,"RECORD");
						     // 	settextstyle(9,0,2);
						      //	outtextxy(180,150,"*");
							delay(1500);
							star();
							goto search_record;

						     }
					  case '3'  :
						     {
							   settextstyle(9,0,2);
							   setcolor(BLACK);

						      outtextxy(190,250,"3. EXIT");
						      //	settextstyle(9,0,2);
						      //	outtextxy(180,200,"*");
							delay(1500);
							star();
							goto end;

						      }
					default   :
						     {
							clrscr();
							settextstyle(1,0,3);
							setcolor(RED);
							star();
							outtextxy(180,120,"WRONG ENTRY");
							outtextxy(160,160,"Please try again.");
							delay(3000);
							goto modify_default;
						    }
			  }

	 }

 case '5' :     //******************** EXIT ***************************
	 {
	   settextstyle(9,0,2);
	   setcolor(BLACK);
	   outtextxy(190,300,"5. EXIT");
	//	   settextstyle(9,0,2);
       //	   outtextxy(180,300,"*");
	   delay(2000);
	   for(x=80;x<=400;x++)
	   {
	    rectangle(80,80,560,x);
	    delay(5);
	    setcolor(RED);
	    }

	   goto end;

	  }
 default :
	  {

	     setcolor(RED);
	     for(x=80;x<=400;x++)
	      {
		rectangle(80,80,560,x);
		delay(5);
	      }
	     star();
	     setcolor(BLACK);
	     settextstyle(9,0,2);
	     outtextxy(100,100,"WRONG INPUT");
	     delay(50);
	     outtextxy(100,150,"TRY AGAIN");
	     getch();
	     goto main_menu;
	  }


}
end :
	    star();
	   clrscr();
	   design();
	   settextstyle(0,0,4);
	   outtextxy(160,240,"THANK You");
	   getch();
{
}

}}


  void design(void)
     {

	clrscr();
	  int x1=320,y1=480,x2=240,y2=0;
	    while(y1>0)
	    {
	      if(y1%10==0)
		   line(100,y1,540,y2);

	      delay(5);
	      y2++;


	      y1--;
	  }


      x1=100,x2=540;
	    while(x2>100)
	    {
		if(x1%10==0)
		   line(x1,y1,x2,y2);
	    delay(3);
	    x1++;
	    x2--;
	    }

    clrscr();
    }

  void star(void)
  {
  for(int x=0;x<=2800;x++)
  {
    cout<<"*";
    delay(1);
    }
  clrscr();
  }
//exit
