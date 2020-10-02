#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h> 
#include<string.h> 
using namespace std;
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
class quizgame
{
	public:
	int i;
	static int count,score;
    char choice,name[20],choice_entered;
    void show_record();
    void reset_score();
    void edit_score(int score, char plnm[20]);
    void setdata();
    void selection(char);
    void scores();
    void menu();
};
int quizgame::count=0;
int quizgame::score=0;
void quizgame::setdata()
{    mainhome:
     SetConsoleTextAttribute(color, 2);
     cout<<"\n\t\t\t\tC++ PROGRAMME  QUIZ GAME\n";
     SetConsoleTextAttribute(color, 6);
     cout<<"\n\t\t\t ________________________________________";
     SetConsoleTextAttribute(color, 2);
     cout<<"\n\t\t\t\t\tWELCOME ";
     cout<<"\n\t\t\t\t\t  To  ";
     cout<<"\n\t\t\t\t\tTHE GAME "; 
	 SetConsoleTextAttribute(color, 6);
     cout<<"\n\t\t\t ________________________________________";
     cout<<"\n\t\t\t________________________________________";
     SetConsoleTextAttribute(color, 2);
     cout<<"\n\t\t\t > Press S to start the game";
     cout<<"\n\t\t\t > Press V to view the highest score";
     cout<<"\n\t\t\t > press Q to quit";
     SetConsoleTextAttribute(color, 6);
     cout<<"\n\t\t\t______________________________________\n\n";
     SetConsoleTextAttribute(color, 7);
     cin>>choice_entered;
     choice=toupper(choice_entered); // to take it has uppercase
     selection(choice);
}
void quizgame::selection(char choice)
{
	if(choice=='V')
{
	show_record();
    setdata();
}

	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
    system("cls");
    SetConsoleTextAttribute(color, 11);
    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRegister Your Name:";
    cin>>name;  
  	system("cls");
    SetConsoleTextAttribute(color, 4);
    cout<<"\n ------------------  Welcome "<<name<<" to C++ Programme Quiz Game --------------------------",name;
    cout<<"\n\n> Here are some tips you might wanna know before playing:";
    cout<<"\n\n> Total of 6 questions. Each right answer will be awarded 20,000 rupees";
    cout<<"\n\n> You will be given 4 options and you have to press A, B ,C or D for the right option.";
    SetConsoleTextAttribute(color, 2);
    cout<<"\n\n\t!!!!!!!!!!!!! ! ALL THE BEST !!!!!!!!!!!!!!";
    cout<<"\n\n\n Press Y  to start the game!\n";
    cout<<"\n Press any other key to return to the main menu!\n\n";
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
{
    setdata();
    system("cls");
}
    home:
    system("cls");
    count=0;
    for(i=1;i<=7;i++)
    {
    system("cls");
    SetConsoleTextAttribute(color, 6);
    switch(i)
	{
	case 1:
	cout<<"\n\n1.Which of the following is a Armstrong number?";
	cout<<"\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.371\n";
	if (toupper(getch())=='C')
{   SetConsoleTextAttribute(color, 10);
	cout<<"\n\nCorrect Answer !!!\n";
	count++;
	getch();
	break;
	}
		else
{   SetConsoleTextAttribute(color, 4);
	cout<<"\n\nWrong!!! The correct answer is C.23232\n";
	getch();
	break;
}
    case 2:
    SetConsoleTextAttribute(color, 6);
	cout<<"\n\n2.Which language is used to create Web page ";
	cout<<"\n\nA.R language\t\tB.Kotlin\n\nC.HTML\t\t\tD.Fortran\n";
	if(toupper(getch())=='C')
{   SetConsoleTextAttribute(color, 10);
	cout<<"\n\nCorrect Answer!!!";
	count++;
	getch();
	break;
}
	else
{   SetConsoleTextAttribute(color, 4);
	cout<<"\n\nWrong!!! The correct option is C\n";
	getch();
	break;
}
    case 3:
    SetConsoleTextAttribute(color, 6);
	cout<<"\n\n3.How many types of Inheritance in c++\n?";
	cout<<"\n\nA.3\t\tB.5\n\nC.4\t\tD.7";
	if (toupper(getch())=='B')
{   SetConsoleTextAttribute(color, 10);
	cout<<"\n\nCorrect Answer!!!";
	count++;
	getch();
	break;
}
	else
{   SetConsoleTextAttribute(color, 4);
	cout<<"\n\nWrong!!! The correct option is B\n";
	getch();
	break;
}
    case 4:
    SetConsoleTextAttribute(color, 6);
	cout<<"\n\n4.Which one of the following is a programming language\n";
	cout<<"\n\nA.HTTP\t\tB.HTML\n\nC.HPML\t\tD.FTP";
	if (toupper(getch())=='B')
{   SetConsoleTextAttribute(color, 10);
	cout<<"\n\nCorrect Answer!!!";
	count++;
	getch();
	break;
}
    else
{   SetConsoleTextAttribute(color, 4);
	cout<<"\n\nWrong!!! The correct option is B\n";
	getch();
	break;
}
    case 5:
    SetConsoleTextAttribute(color, 6);
    cout<<"\n\n\n5.What is extension type of c++ file?";
    cout<<"\n\nA.(.Cpp)\t\tB.(.cpp)\n\nC.(.cpc)\t\tD.(.ccp)\n";
    if (toupper(getch())=='B')
{   SetConsoleTextAttribute(color, 10);
	cout<<"\n\nCorrect Answer!!!";
	getch();
	count++;
    break;
}
    else
{   SetConsoleTextAttribute(color, 4);
	cout<<"\n\nWrong!!! The correct option  is B\n";
	getch();
	break;
}
case 6:
    SetConsoleTextAttribute(color, 6);
    cout<<"\n\n\n5.A file containing relatively permanent data is";
    cout<<"\n\nA.Random file\t\tB.Transaction file\n\nC.Master file\t\tD.Sequential file\n";
    if (toupper(getch())=='C')
{   SetConsoleTextAttribute(color, 10);
	cout<<"\n\nCorrect Answer!!!";
	getch();
	count++;
    break;
}
    else
{   SetConsoleTextAttribute(color, 4);
	cout<<"\n\nWrong!!! The correct option  is B\n";
	getch();
	break;
}
	case 7:
	SetConsoleTextAttribute(color, 6);
	cout<<"\n\n6.Choose the Object oriented programming language from below.";
	cout<<"\n\nA.C++\t\tB.Small talk\n\nC.Simula\t\D.All the above.\n";
	if (toupper(getch())=='D')
{   SetConsoleTextAttribute(color, 10);
	cout<<"\n\nCorrect Answer !!!";
	getch();
	count++;
	scores();
	break;
}
	else
{   SetConsoleTextAttribute(color, 4);
	cout<<"\n\nWrong!!! The correct option is D \n";
	getch();
	scores();
	break;
}}}}
else
{  system("cls");
   SetConsoleTextAttribute(color, 4);
   cout<<"\n\t\t\t\tINVALID INPUT !!!\n\n";
   cout<<"\n\t\t\t\tPlease Enter Valid Input\n\n";
   setdata();
}
}
void quizgame::scores()
{
    system("cls");
	score=count*20000;
	if(score==120000)
{  
	cout<<"\n\n\n \t\t**************** CONGRATULATION ****************";
	cout<<"\n\t\t\t\t !!!!!!!!YOU ARE A MILLIONAIRE!!!!!!!!!\n";
	SetConsoleTextAttribute(color, 2);
	cout<<"\n\t\t You won \t"<<score;
	cout<<"\t\t Thank You!!";
	getch();
	edit_score(score,name);

}
	else if(score>0 && score<120000)
{
	cout<<"\n\n\t\t**************** CONGRATULATION *****************";
	cout<<"\n\t You won\t"<<score;
	getch();
	edit_score(score,name);
	menu();
}
	else
{
	cout<<"\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********\n";
	cout<<"\n\t\t Thanks for your participation";
	cout<<"\n\t\t TRY AGAIN";
	getch();
	menu();
}
}
void quizgame::menu()
{
	cout<<"\n\n Press X to exit the game\n";
	cout<<"\n Press any key if you want to go main menu";
	getch();
	if (toupper(getch())=='X')
		exit(1);
	else
	{
		edit_score(score,name);
		setdata();
}
}
void quizgame::show_record()
{
	system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************\n");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************\n");
	fclose(f);
	
}

void quizgame::edit_score(int score, char plnm[20])
{ 
system("cls");
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
{   sc=score;
	fclose(f);
	f=fopen("score.txt","w");
	fprintf(f,"%s\n%d",plnm,sc);
	fclose(f);
}
}
main()
{
	quizgame obj;
	obj.setdata();
}

