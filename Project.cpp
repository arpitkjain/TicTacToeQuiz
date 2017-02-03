
#include<fstream>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#define max 100
using namespace std;
int draw=0,winner=0;
int score[3]={0,0,0};
class tic
  {
    private : char a[max],a1[max],a2[max],a3[max],b[max],b1[max],b2[max],
	      b3[max],c[max],c1[max],c2[max],c3[max],d[max],d1[max],d2[max],
	      d3[max],e[max],e1[max],e2[max],e3[max],f[max],f1[max],f2[max],
	      f3[max],g[max],g1[max],g2[max],g3[max],h[max],h1[max],h2[max],
	      h3[max],i[max],i1[max],i2[max],i3[max],j[max],j1[max],j2[max],
	      j3[max],k[max],k1[max],k2[max],k3[max],l[max],l1[max],l2[max],
	      l3[max],m[max],m1[max],m2[max],m3[max],n[max],n1[max],n2[max],
	      n3[max],x[max],x1[max],x2[max],x3[max],y[max],y1[max],y2[max],
	      y3[max],z[max],z1[max],z2[max],z3[max],za[max],za1[max],
	      za2[max],za3[max],az[max];
	      int o,p,q,r,s,t,u,v,w,o1,p1,q1,r1,s1,t1,u1,v1,w1;
	      char xa[3][3];
	      int player,row,col,count;
    public : tic();
	     void introduction();
	     void position();
	     void question(int, int, int);
	     void game();
	     void sorry();
	     void check();
	     void insertrecord(int);
    };
class record {
             char name[25];
             int Rscore;

         public:
            void getdata(int x)
            {
                Rscore=x;
                cout<<"\n\nYour score is: "<<Rscore<<endl;
                cout<<"\nEnter your name: ";
                cin>>name;
            }
             void putdata()
             {
                 cout<<"\tName:"<<name<<"\tScore:"<<Rscore;
             }
             int getscore()
             {
                 return Rscore;
             }
             };
             record sx,stud;
//************************************************
// THE CONSTRUCTOR TO INITIALISE THE VALUES
//************************************************
tic::tic()
  {
  count=0;
    strcpy(a,"What is the capital of Italy?");
    strcpy(a1,"ROME");
    strcpy(a2,"PARIS");
    strcpy(a3,"LONDON");
    strcpy(b,"Which element has the symbol K?");
    strcpy(b1,"POTASSIUM");
    strcpy(b2,"KRYPTON");
    strcpy(b3,"CALCIUM");
    strcpy(c,"Which of the following structures does not exist anymore?");
    strcpy(c1,"QUTUB MINAR");
    strcpy(c2,"TWIN TOWERS, New York");
    strcpy(c3,"CHINA GATE");
    strcpy(d,"Who is the highest Indian test wicket-taker?");
    strcpy(d1,"JAVAGAL SRINATH");
    strcpy(d2,"KAPIL DEV");
    strcpy(d3,"ANIL KUMBLE");
    strcpy(e,"Which of the following countries spreads across two continents?");
    strcpy(e1,"FRANCE");
    strcpy(e2,"BRAZIL");
    strcpy(e3,"TURKEY");
    strcpy(f,"What is the female goat called?");
    strcpy(f1,"NANNY GOAT");
    strcpy(f2,"PANNY GOAT");
    strcpy(f3,"TANNY GOAT");
    strcpy(g,"Who is considered the father of Modern Astronomy?");
    strcpy(g1,"GALILEO");
    strcpy(g2,"COPERNICUS");
    strcpy(g3,"ABRAHAM LINCOLN");
    strcpy(h,"Name the only bird known to have nostrils on the tip of its bill.");
    strcpy(h1,"THE KINGFISHER");
    strcpy(h2,"THE SPARROW");
    strcpy(h3,"THE KIWI");
    strcpy(i,"Which is the largest mammal in the world?");
    strcpy(i1,"BLUE WHALE");
    strcpy(i2,"ELEPHANT");
    strcpy(i3,"GIRAFFE");
    strcpy(j,"Where is Golden Gate situated?");
    strcpy(j1,"UK");
    strcpy(j2,"USA");
    strcpy(j3,"CHINA");
    strcpy(k,"Through which of these medium can sound not travel?");
    strcpy(k1,"AIR");
    strcpy(k2,"WATER");
    strcpy(k3,"VACUUM");
    strcpy(l,"Who played the jailer in the film SHOLAY");
    strcpy(l1,"ASRANI");
    strcpy(l2,"KESTO MUKHERJEE");
    strcpy(l3,"JAGDEEP");
    strcpy(m,"In which state is Kanyakumari?");
    strcpy(m1,"KERELA");
    strcpy(m2,"TAMIL NADU");
    strcpy(m3,"KARNATAKA");
    strcpy(n,"What language did the Buddha preach in?");
    strcpy(n1,"PRAKRIT");
    strcpy(n2,"SANSKRIT");
    strcpy(n3,"PALI");
    strcpy(x,"Which of these tourists spots is not in Delhi?");
    strcpy(x1,"CHARMINAR");
    strcpy(x2,"RED FORT");
    strcpy(x3,"INDIA GATE");
    strcpy(y,"Which of these is not a state?");
    strcpy(y1,"MIZORAM");
    strcpy(y2,"CHANDIGARH");
    strcpy(y3,"NAGALAND");
    strcpy(z,"In which language was the film ROJA originally made?");
    strcpy(z1,"HINDI");
    strcpy(z2,"MALAYALAM");
    strcpy(z3,"TAMIL");
    strcpy(za,"Which was the first country to send a craft into outer space?");
    strcpy(za1,"USSR");
    strcpy(za2,"USA");
    strcpy(za3,"UK");
    xa[0][0]=' ';
    xa[0][1]=' ';
    xa[0][2]=' ';
    xa[1][0]=' ';
    xa[1][1]=' ';
    xa[1][2]=' ';
    xa[2][0]=' ';
    xa[2][1]=' ';
    xa[2][2]=' ';
  }
//************************************************
//FUNCTION TO INTRODUCE THE GAME
//************************************************
void tic::introduction()
  { system("cls");
    cout<<"\n\n     ****** TIC-TAC-TOE ******               "<<endl;
    cout<<" [1] THIS GAME IS SIMILAR TO THAT OF\n";
    cout<<"     THE CRIS-CROSS"<<endl<<endl;
    cout<<" [2] TWO AND ONLY TWO PLAYERS CAN\n";
    cout<<"     PLAY THIS GAME   "<<endl<<endl;
    cout<<" [3] A PLAYER  MISSES THE CHANCE IF\n";
    cout<<"     THE ANSWER IS WRONG"<<endl<<endl;
    cout<<" [4] A PLAYER WINS THE GAME IF HE\n";
    cout<<"     OCCUPIES A SINGLE ROW,A SINGLE\n";
    cout<<"     COLUMN OR A SINGLE DIAGONAL"<<endl<<endl;
    cout<<" [5] THE GAME IS DRAWN IF NONE OF\n";
    cout<<"     THE PLAYERS ARE ABLE TO OCCUPY A\n";
    cout<<"     SINGLE ROW ,A SINGLE COLUMN OR A\n";
    cout<<"     SINGLE DIAGONAL"<<endl;
  }
//************************************************
// THE FUNCTION WHICH DISPLAYS THE GRAPH
//************************************************
  void tic::position()
  {
  system("cls");
	 cout<<endl<<endl<<"\t"<<xa[0][0]<<" | "<<xa[0][1]<<" | "<<xa[0][2]
	 <<"\n"<<"\t----------\n"
	 <<"\t"<<xa[1][0]<<" | "<<xa[1][1]<<" | "<<xa[1][2]
	 <<"\n"<<"\t----------\n"
	 <<"\t"<<xa[2][0]<<" | "<<xa[2][1]<<" | "<<xa[2][2]<<endl<<endl;
  }
//***************************************************
//IN THIS FUNCTION WHERE THE USER ENTERS THE ROW &
//COLUMN NO.
//***************************************************
  void tic::game()
   {
   int f=0;
   player=(count%2)+1;
	      do
	      {
	      cout<<"\n\nPlayer "<<player<<" enter row number: ";
	      cin>>row;
	      }while(row<1||row>3);
	      row=row-1;
	      do
	      {
	      cout<<"\n\nPlayer "<<player<<" enter column number: ";
	      cin>>col;
	      }while(col<1||col>3);
	      col=col-1;
	      if(xa[row][col]=='A'||xa[row][col]=='B')
		{
		f=1;
		cout<<"\nThis space is already occupied";
		getch();
		}
	      else
		question(player,row,col);
if(f==0)
    count++;
      }
int ch=0;
//***********************************************
//THIS FUNCTION CHECKS FOR THE WINNER.
//***********************************************
void tic::check()
  {
    for(int line=0;line<3;line++)
     {
     if(xa[line][0]=='A' && xa[line][1]=='A' && xa[line][2]=='A')
	 {
	 winner=player;
	 }
     else if(xa[line][0]=='B' && xa[line][1]=='B' && xa[line][2]=='B')
	 {
	 winner=player;
	 }
     else if(xa[0][line]=='A' && xa[1][line]=='A' && xa[2][line]=='A')
	 {
	 winner=player;
	 }
     else if(xa[0][line]=='B' && xa[1][line]=='B' && xa[2][line]=='B')
	 {
	 winner=player;
	 }
     }
     if(xa[0][0]=='A' && xa[1][1]=='A' && xa[2][2]=='A')
	 {
	 winner=player;
	 }
  else if(xa[0][0]=='B' && xa[1][1]=='B' && xa[2][2]=='B')
	 {
	 winner=player;
	 }
  else if(xa[0][2]=='A' && xa[1][1]=='A' && xa[2][0]=='A')
	 {
	 winner=player;
	 }
  else if(xa[0][2]=='B' && xa[1][1]=='B' && xa[2][0]=='B')
	 {
	 winner=player;
	 }
  if(winner==1)
      {
      cout<<"\n\nPlayer A IS THE WINNER";
      insertrecord(score[player]);
      }
  if(winner==2)
      {
      cout<<"\n\nPlayer B IS THE WINNER";
      insertrecord(score[player]);
      }
  }
//*********************************************
//
//*********************************************
  void tic::sorry()
   {
   cout<<"\n\nSORRY YOUR ANSWER IS WRONG";
   cout<<"\n\nHENCE NO SPACE OCCUPIED";
   getch();
   }
//***********************************************
//
//***********************************************
void tic::question(int player,int row,int col)
  {
  char play;
  if(player==1)
     play='A';
  if(player==2)
      play='B';
  ch++;
    switch(ch)
      {
	case 1:cout<<a<<endl;
	       cout<<"(1)"<<a1<<endl;
	       cout<<"(2)"<<a2<<endl;
	       cout<<"(3)"<<a3<<endl;
	       cout<<"Enter your choice   ";
	       cin>>o;
	       if(o==1)
		  {
		  xa[row][col]=play;
		  draw=draw+1;
         score[player]=score[player]+2;
		   }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
		break;
	case 2:cout<<b<<endl;
	       cout<<"(1)"<<b1<<endl;
	       cout<<"(2)"<<b2<<endl;
	       cout<<"(3)"<<b3<<endl;
	       cout<<"Enter your choice   ";
	       cin>>p;
	       if(p==1)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	break;
	case 3:cout<<c<<endl;
	       cout<<"(1)"<<c1<<endl;
	       cout<<"(2)"<<c2<<endl;
	       cout<<"(3)"<<c3<<endl;
	       cout<<"Enter your choice  ";
	       cin>>q;
	       if(q==2)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	break;
	case 4:cout<<d<<endl;
	       cout<<"(1)"<<d1<<endl;
	       cout<<"(2)"<<d2<<endl;
	       cout<<"(3)"<<d3<<endl;
	       cout<<"Enter your choice  ";
	       cin>>r;
	       if(r==3)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	break;
	case 5:cout<<e<<endl;
	       cout<<"(1)"<<e1<<endl;
	       cout<<"(2)"<<e2<<endl;
	       cout<<"(3)"<<e3<<endl;
	       cout<<"Enter your choice   ";
	       cin>>s;
	       if(s==3)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	break;
	case 6:cout<<f<<endl;
	       cout<<"(1)"<<f1<<endl;
	       cout<<"(2)"<<f2<<endl;
	       cout<<"(3)"<<f3<<endl;
	       cout<<"Enter your choice  ";
	       cin>>t;
	       if(t==1)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	break;
	case 7:cout<<g<<endl;
	       cout<<"(1)"<<g1<<endl;
	       cout<<"(2)"<<g2<<endl;
	       cout<<"(3)"<<g3<<endl;
	       cout<<"Enter your choice  ";
	       cin>>u;
	       if(u==2)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	break;
	case 8:cout<<h<<endl;
	       cout<<"(1)"<<h1<<endl;
	       cout<<"(2)"<<h2<<endl;
	       cout<<"(3)"<<h3<<endl;
	       cout<<"Enter your choice  ";
	       cin>>v;
	       if(v==3)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	break;
	case 9:cout<<i<<endl;
	       cout<<"(1)"<<i1<<endl;
	       cout<<"(2)"<<i2<<endl;
	       cout<<"(3)"<<i3<<endl;
	       cout<<"Enter your choice  ";
	       cin>>w;
	       if(w==1)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	 break;
	 case 10:cout<<j<<endl;
	       cout<<"(1)"<<j1<<endl;
	       cout<<"(2)"<<j2<<endl;
	       cout<<"(3)"<<j3<<endl;
	       cout<<"Enter your choice  ";
	       cin>>o1;
	       if(o1==2)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	 break;
	 case 11:cout<<k<<endl;
	       cout<<"[1]"<<k1<<endl;
	       cout<<"[2]"<<k2<<endl;
	       cout<<"[3]"<<k3<<endl;
	       cout<<"Enter your choice : ";
	       cin>>p1;
	       if(p1==3)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	 break;
	 case 12:cout<<l<<endl;
	       cout<<"[1]"<<l1<<endl;
	       cout<<"[2]"<<l2<<endl;
	       cout<<"[3]"<<l3<<endl;
	       cout<<"Enter your choice : ";
	       cin>>q1;
	       if(q1==1)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
	       else
		  {
		      sorry();
		      score[player]--;
		  }
	 break;
	 case 13:cout<<m<<endl;
		 cout<<"[1] "<<m1<<endl;
		 cout<<"[2] "<<m2<<endl;
		 cout<<"[3] "<<m3<<endl;
		 cout<<"Enter your choice : ";
		 cin>>r1;
		 if(r1==2)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
		 else
		  {
		      sorry();
		      score[player]--;
		  }
	 break;
	 case 14:cout<<n<<endl;
		 cout<<"[1] "<<n1<<endl;
		 cout<<"[2] "<<n2<<endl;
		 cout<<"[3] "<<n3<<endl;
		 cout<<"Enter your choice : ";
		 cin>>s1;
		 if(s1==3)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
		 else
		  {
		      sorry();
		      score[player]--;
		  }
	 break;
	 case 15:cout<<x<<endl;
		 cout<<"[1] "<<x1<<endl;
		 cout<<"[2] "<<x2<<endl;
		 cout<<"[3] "<<x3<<endl;
		 cout<<"Enter your choice : ";
		 cin>>t1;
		 if(t1==1)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
		 else
		  {
		      sorry();
		      score[player]--;
		  }
	 break;
	 case 16:cout<<y<<endl;
		 cout<<"[1] "<<y1<<endl;
		 cout<<"[2] "<<y2<<endl;
		 cout<<"[3] "<<y3<<endl;
		 cout<<"Enter your choice : ";
		 cin>>u1;
		 if(u1==2)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
		 else
		  {
		      sorry();
		      score[player]--;
		  }
	 break;
	 case 17:cout<<z<<endl;
		 cout<<"[1] "<<z1<<endl;
		 cout<<"[2] "<<z2<<endl;
		 cout<<"[3] "<<z3<<endl;
		 cout<<"Enter your choice : ";
		 cin>>v1;
		 if(v1==3)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
		 else
		  {
		      sorry();
		      score[player]--;
		  }
	 break;
	 case 18:cout<<za<<endl;
		 cout<<"[1] "<<za1<<endl;
		 cout<<"[2] "<<za2<<endl;
		 cout<<"[3] "<<za3<<endl;
		 cout<<"Enter your choice : ";
		 cin>>w1;
		 if(w1==1)
		 {
		 xa[row][col]=play;
		 draw=draw+1;
         score[player]=score[player]+2;
		 }
		 else
		  {
		      sorry();
		      score[player]--;
		  }
      }
    }
//*********************************************
//
//*********************************************
  void tic::insertrecord(int PScore)
   {
    ifstream fi;
    fi.open("highscore.txt",ios::in);
    ofstream fo ("temp.txt",ios::out);
    char last='y';
    sx.getdata(PScore);
    while(fi.read((char*)&stud,sizeof(stud)))
    {
        if(sx.getscore()>stud.getscore())
        {
            fo.write((char*)&sx,sizeof(sx));
            last='n';
            break;
        }
        else
            fo.write((char*)&stud,sizeof(stud));
    }
    if(last=='y')
        fo.write((char*)&sx,sizeof(sx));
    else
    {
        fo.write((char*)&stud,sizeof(stud));
        while(fi.read((char*)&stud,sizeof(stud)))
        {
            fo.write((char*)&stud,sizeof(stud));

        }
    }
    fi.close();
    fo.close();
    remove("highscore.txt");
    rename("temp.txt","highscore.txt");

   }
////**********************************************
////THE MAIN FUNCTION
//************************************************
int main()
  {
    tic tac;
    int choice=0,i=1;
    do
    {
    system("cls");
//************************************************
//A FUNCTION FOR THE WELCOME TO THE GAME
//************************************************

    system("cls");
    cout<<"\n\n\n   WELCOME TO THE GAME OF TIC-TAC-TOE"<<endl;
    cout<<"\n\n\n";
    cout<<"        ****** MAIN MENU ******"<<endl<<endl<<endl;
    cout<<"       [1] TO INTRODUCE THE GAME"<<endl<<endl;
    cout<<"       [2] TO PLAY THE GAME"<<endl<<endl;
    cout<<"       [3] SHOW HIGHSCORES"<<endl<<endl;
    cout<<"       [4] QUIT THE GAME"<<endl<<endl;
    cout<<"\n";
    cout<<"       Enter your choice : ";
    cin>>choice;
    if(choice==1)
      {
	tac.introduction();
	getch();
      }
    if(choice==2)
      {
while((i<=18)&&(draw<9))
	  {
	    tac.position();
	    tac.check();
	    if(winner==0)
	      {
		tac.game();
	      }
	    else
	    break;
	    i++;
	  }
	tac.position();
	if(winner==0)
	cout<<"\n\n THE GAME IS A DRAW ";
	getch();
      }
    if(choice==3)
    {
    int Rank=1;
    system("cls");
    ifstream fi;
    fi.open("highscore.txt",ios::in);
    cout<<"\nThe High scores are:\n";
    while(fi.read((char*)&stud,sizeof(stud)))
    {
        cout<<"Rank:"<<Rank<<"\t";
        stud.putdata();
        cout<<endl;
        Rank++;
    }
    fi.close();
    getch();

    }
    if(choice==4)
      {
	exit(0);
      }
    }while(choice<4);
    getch();
  }

