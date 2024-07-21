 /*Hospital Managment System*/
#include<stdio.h>
#include<conio.h>
#include<string.h>/*for string function*/
#include<dos.h>/*For delay function*/
#include<stdlib.h>/*For delay function*/


/*global declaration of variable*/
int i,x,y;

int Registrationno,P_no;
  char name[20],dr_Time[20],Speciality[20],dis[20],P_Name[20],P_Dr[20];

/*Global declaration of function*/
void Border(int,int);
void processBar(int,int,int,int);

void manu(int,int,int);
void Hospital(int,int,int);
//void addNewRecordDR(int,int);
void InputNewRecordDR(int,int);
void addNewRecordPatient(int,int);
void deleteRecord(int,int);
void update(int,int);
void ShowDoctorrecord(int,int);

void box(int,int,int); /*binding for Hospital name*/
void bind(int,int,int); /*binding for title */
void table(int,int,int); /*binding for update &addnew record*/
void window_print(int,int,int);/*binding for delate & ShowDoctorrecord*/

/*----------------window_print--------------*/
void window_print(int x,int y,int c)
{
	textcolor(c);
	/*Line Upper Left To Right*/
	gotoxy(x,y);
	for(i=1;i<=33;i++)
	{
		gotoxy(x,y);
		cprintf("%c",223);
		x++;
	}
	/*Line Left Up To Down*/
	for(i=1;i<=19;i++)
	{
		gotoxy(x,y);
		cprintf("%c",219);
		y++;
	}
	/*Line Lower Left To Right*/
	for(i=1;i<=34;i++)
	{
		gotoxy(x,y);
		cprintf("%c",223);
		x--;
	}
	y=y-1;
	x=x+1;
	/*Line Right Up To Down*/
	for(i=1;i<=19;i++)
	{
		gotoxy(x,y);
		cprintf("%c",219);
		y--;
	}
}
/*--------------table----------------*/
void table(int x,int y,int c)
{
	textcolor(c);
	/*Line Upper Left To Right*/
	gotoxy(x,y);
	for(i=1;i<=36;i++)
	{
		gotoxy(x,y);
		cprintf("%c",223);
		x++;
	}
	/*Line Left Up To Down*/
	for(i=1;i<=15;i++)
	{
		gotoxy(x,y);
		cprintf("%c",219);
		y++;
	}
	/*Line Lower Left To Right*/
	for(i=1;i<=37;i++)
	{
		gotoxy(x,y);
		cprintf("%c",223);
		x--;
	}
	y=y-1;
	x=x+1;
	/*Line Right Up To Down*/
	for(i=1;i<=15;i++)
	{
		gotoxy(x,y);
		cprintf("%c",219);
		y--;
	}
}
/*=========================================*/
void bind(int x,int y,int c)
{
	textcolor(c);
	/*Line Upper Left To Right*/
	gotoxy(x+=1,y+=1);
	for(i=1;i<=19;i++)
	{
		gotoxy(x,y);
		cprintf("%c",223);
		x++;
	}
	/*Line Left Up To Down*/
	for(i=1;i<=2;i++)
	{
		gotoxy(x,y);
		cprintf("%c",219);
		y++;
	}
	/*Line Lower Left To Right*/
	for(i=1;i<=20;i++)
	{
		gotoxy(x,y);
		cprintf("%c",223);
		x--;
	}
	/*Line Right Up To Down*/
	y=y-1;
	x=x+1;
	for(i=1;i<=2;i++)
	{
		gotoxy(x,y);
		cprintf("%c",219);
		y--;
	}
}
/*-------------box------------------------*/
void box(int x,int y,int c)
{
	  textcolor(c);
	/*Line Upper Left To Right*/
	for(i=1;i<=27;i++)
	{
		gotoxy(x,y);
		cprintf("%c",177);
		x++;
	}
	/*Line Left Up To Down*/
	for(i=1;i<=3;i++)
	{
		gotoxy(x,y);
		cprintf("%c",177);
		y++;
	}
	/*Line Lower Left To Right*/
	for(i=1;i<=27;i++)
	{
		gotoxy(x,y);
		cprintf("%c",177);
		x--;
	}
	/*Line Right Up To Down*/
	for(i=1;i<=3;i++)
	{
		gotoxy(x,y);
		cprintf("%c",177);
		y--;
	}
}
/*-----------------Hospital name------------------*/
void Hospital(int x,int y,int c)
{
	textcolor(c);
	gotoxy(x,y);
	cprintf("\"Multicare ");
	gotoxy(x+=1,y+=1);
	cprintf("Hospital BHOPAL\"");
 }
/*Draw A Border Function*/
void Border(int c,int d)
{
	clrscr();
	textcolor(c);

	/*Line Upper Left To Right*/
	x=1;
	y=2;
	for(i=1;i<=80;i++)
	{
		gotoxy(x,y);
		cprintf("%c",d);
		x++;
	}

	/*Line Lower Left To Right*/
	x=1;
	y=25;
	for(i=1;i<=80;i++)
	{
		gotoxy(x,y);
		cprintf("%c",d);
		x++;
	}

	/*Line Left Up To Down*/
	x=1;
	y=2;
	for(i=1;i<=23;i++)
	{
		gotoxy(x,y);
		cprintf("%c",d);
		y++;
	}

	/*Line Right Up To Down*/
	x=80;
	y=2;
	for(i=1;i<=23;i++)
	{
		gotoxy(x,y);
		cprintf("%c",d);
		y++;
	}
}
void processBar(int x,int y,int d,int c)
{
	textcolor(c);
	for(i=0;i<=50;i++)
	{
		gotoxy(x,y);
		cprintf("%c",d);
		gotoxy(12,16);
		cprintf("%d%",2*i);
		delay(100);
		x++;
	}
}
 void manu(int x,int y,int c)
{

		gotoxy(x,y);
		textcolor(c);
		cprintf("\"WELCOME\"");
		gotoxy(x,y+=2);
		cprintf("1.ADD Doctor'S RECORD");

		gotoxy(x,y+=2);
		cprintf("2.Show Doctor'S Record");

		gotoxy(x,y+=2);
		cprintf("3.ADD Patient'S RECORD");


		gotoxy(x,y+=2);
		cprintf("4.Show Patient'S Record");

		gotoxy(x,y+=2);
		cprintf("5.EXIT");

		gotoxy(x,y+=2);
		cprintf("SELECT ANY ONE OPTION:___");

		textcolor(6);

		gotoxy(x-=2,y-=11);

		for(i=1;i<=30;i++)
		{
				gotoxy(x,y);
				cprintf("%c",95);
				x++;
		}
		gotoxy(x,y+=2);
		for(i=1;i<=30;i++)
		{
				gotoxy(x,y);
				cprintf("%c",95);
				x--;
		}

		gotoxy(x,y+=2);
		  for(i=1;i<=30;i++)
		{
				gotoxy(x,y);
				cprintf("%c",95);
				x++;
		}
		gotoxy(x,y+=2);
		for(i=1;i<=30;i++)
		{
				gotoxy(x,y);
				cprintf("%c",95);
				x--;
		}
		gotoxy(x,y+=2);
		for(i=1;i<=30;i++)
		{
				gotoxy(x,y);
				cprintf("%c",95);
				x++;
		}
			gotoxy(x,y+=2);
		for(i=1;i<=30;i++)
		{
				gotoxy(x,y);
				cprintf("%c",95);
				x--;
		}
			gotoxy(x,y+=4);
       for(i=1;i<=30;i++)
		{
				gotoxy(x,y);
				cprintf("%c",95);
				x++;
		}

				gotoxy(x,y-=13);
				for(i=1;i<=14;i++)
		{
				gotoxy(x,y);
				cprintf("%c",178);
				y++;
		}
			gotoxy(x-=30,y-=14);
			for(i=1;i<=14;i++)
		{
				gotoxy(x,y);
				cprintf("%c",178);
				y++;
		}
}
/*-------------------addDoctorrecord new record--------------*/
// void addNewRecordDR(int x,int y)
// {
	// textcolor(9);
	// gotoxy(x,y);
	// cprintf("ADD DOCTOR");

	// textcolor(5);
	// gotoxy(x+=24,y);
	// cprintf("Enter Registration No:____");
	// scanf("%s ",Registrationno);

	// gotoxy(x,y+=2);
	// cprintf("Doctor Name:_____");
	// scanf("%s ",name);

	// textcolor(13);
	// gotoxy(x,y+=2);
	// cprintf("-----dr_Time AND Speciality------");

	// gotoxy(x,y+=2);
	// cprintf("dr_Time");
	// gotoxy(x+=10,y);
	// scanf("%s ",dr_Time);


	// gotoxy(x-=3,y+=2);
	// cprintf("Speciality");
	// gotoxy(x+=25,y);
	// scanf("%s ",Speciality);

	// gotoxy(x-=7,y+=2);
	// cprintf("sucessfully Add.....!");

// }

/*------------------ShowDoctorrecord------------------------*/
// void ShowDoctorrecord(int x,int y)
// {

	// textcolor(10);
	// gotoxy(x,y);
	// cprintf("Show Doctor record");

	// gotoxy(x+=30,y);
	// textcolor(12);
	// cprintf("Registration Number :_______");
	// gotoxy(x+=22,y);
	// cprintf("%d",Registrationno);

	// textcolor(14);
	// gotoxy(x-=20,y+=2);
	// cprintf("____DR. Details____");

	// gotoxy(x,y+=2);
	// cprintf("Doctor Name : ");
	// gotoxy(x+=13,y-=14);
	// puts(name);


	// gotoxy(x-=13,y+=2);
	// cprintf("Timing");
	// gotoxy(x+=9,y+=4);
	// puts(dr_Time);

	// gotoxy(x-=9,y+=2);
	// cprintf("Speciality");
	// gotoxy(x+=15,y+=2);
	// puts(Speciality);



// }
/*-------------------add Patient record new record--------------*/

// void addNewRecordPatient(int x,int y)
// {


	// textcolor(9);
	// gotoxy(x,y);
	// cprintf("ADD PATIENT");

	// textcolor(13);
	// gotoxy(x,y+=2);
	// cprintf("-------Fill Patient Details--------");


	// textcolor(5);
	// gotoxy(x+=24,y);
	// cprintf("Registration No:__________");
	// scanf("%s ",P_no);
	// gotoxy(x,y+=2);
	// cprintf("PATIENT Name:________________");
	// scanf("%s ",P_Name);



	// gotoxy(x,y+=2);
	// cprintf("Disease");
	// gotoxy(x+=7,y);
	// scanf("%s ",dis);


	// gotoxy(x-=7,y+=2);
	// cprintf("Patient's Doctor");
	// gotoxy(x+=7,y);
	// scanf("%s ",P_Dr);

	// gotoxy(x-=7,y+=2);
	// cprintf("sucessfully Added.....!");

// }

/*------------------ShowDoctorrecord------------------------*/
// void ShowPatientrecord(int x,int y)
// {

	// textcolor(10);
	// gotoxy(x,y);
	// cprintf("Show Patient record");
	// gotoxy(x+=29,y);
	// textcolor(12);
	// cprintf("Number :_______");

	// gotoxy(x+=20,y);
	// scanf("%d",&P_no);
// textcolor(14);
	// gotoxy(x,y+=2);
	// cprintf("_________Patient Details________");


	// gotoxy(x-=20,y+=2);
	// cprintf("Patient Name : ");
// gotoxy(x+=15,y-=14);
	// puts(P_Name);


	// gotoxy(x,y+=2);
	// cprintf("Disease");
// gotoxy(x-=6,y+=4);
	// puts(dis);

	// gotoxy(x,y+=2);
	// cprintf("Incharge DR.");

	// gotoxy(x,y+=2);
	// puts(P_Dr);

// }

/*-------------------inputs Doctorrecord new record--------------*/

 void InputNewRecordDR(int x,int y)
 {
  textcolor(9);
	 gotoxy(x,y);
	 cprintf("ADD DOCTOR");
 
 
 }
 
 
 
 
 
 

/*main function*/
int main ()
{
		int option;
		clrscr();
		Border(12,219);/*color,for design*/
		box(4,3,9); /*x,y,color*/
		Hospital(5,4,9);/*x,y,color*/
	       //	processBar(15,15,223,1);
		clrscr();

		Border(14,219);
		manu(18,3,14);
		box(49,19,10);
		Hospital(50,20,2);

/*To Input Option*/
	homepage:
	gotoxy(41,15);
	scanf("%d",&option);
	switch(option)
	{
		case 1:
		{
			Border(1,219);
			bind(4,3,1);
			table(30,4,9);
			InputNewRecordDR(8,5);/*x,y*/
			getch();
			Border(14,219);
			manu(18,3,14);
			box(49,19,10);
			Hospital(50,20,2);
			goto homepage;
		}
		case 2:
		{
			Border(2,219);
			bind(3,2,12);
			window_print(33,3,10);
			ShowDoctorrecord(5,4);/*x,y*/
			getch();
			Border(14,219);
			box(49,19,10);
			Hospital(50,20,2);
			manu(18,3,14);
			goto homepage;

		}
		case 3:
		{
			Border(5,219);
			bind(3,3,12);
			window_print(30,4,13);
			addNewRecordPatient(5,5);  /*x,y*/
		       /*	box(50,19,12);
			Hospital(51,20,14); */
			getch();
			Border(14,219);
			manu(18,3,14);
			box(49,19,10);
			Hospital(50,20,2);
			goto homepage;

		}
		
		case 4:
		{
			Border(14,219);
			bind(26,2,6);
			table(3,7,6);
			table(42,7,6);
			ShowPatientrecord(30,4);  /*x,y*/
		       /*	box(19,19,10);
			Hospital(20,20,6); */
			getch();
			Border(14,219);
			manu(18,3,14);
			box(49,19,10);
			Hospital(50,20,2);
			goto homepage;

		}
		
		case 5:
		{
			exit(0);
		}
		default:
		{
			gotoxy(18,17);
			textcolor(4+128);
			cprintf("Invalid,Please Try Again..!");
			getch();
			clrscr();
			Border(14,219);
			box(49,19,10);
			Hospital(50,20,2);
			manu(18,3,14);
			goto homepage;
		}
	 }

}

