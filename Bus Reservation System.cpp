#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
#include <string.h>
char a[20], c[20];
char b[20], d[20];
char l[4];
int y;
struct pass
{
	char bn;
	char date[15];
	char n[20];
	char id[15];
	int sn;
	char f[20];
	char to[20];
	
	
}j, x;
void busavail ();
void reservedseat ();
void reservation ();
void ticket ();
void showall();
void search();
void intro ();
using namespace std;

int main ()
{
	
		
	
	intro ();
	if(y==1)
	{
	
    	up:
	char a, f;
	system("cls");
	cout<<"\t\t\t==================================================\n";
	cout<<"\t\t\t   ................Main Manue...................\n";
	cout<<"\t\t\t         A: Check Bus Availability\n";
	cout<<"\t\t\t         B: Check Reserved Seat\n";
	cout<<"\t\t\t         C: Seat Reservation\n";
	cout<<"\t\t\t         D: Check Your Ticket\n";
	cout<<"\t\t\t         E: If You Want To Leave Our Main Menu\n";
	cout<<"\n\t\t\t         Enter Your Choice From The Menue (A to E)......\n";
	cout<<"\t\t\t===================================================\n";
    cout<<"\t\tChoice:  ";
	cin>>a;
    if (a>='a' && a<='e')
    {
    	
    	cout<<"          Choice Of Menue Shoould Be Capital like (A, B, C, ....)  ";
    	
	}
	else
	{
		switch (a)
		{
			case 'A':
				{
					busavail();
					goto dn;
					break;
				}
			case 'B':
			    {
			    	reservedseat();
			    	goto dn;
			    	break;
				}
			case 'C':
			    {
			    	reservation();
			    	goto dn;
			    	break;
				}
			case 'D':
			    {
			    	ticket();
			    	goto dn;
			    	break;
				}
			case 'E':
			    {
			    	goto to;
				}   
			default:
			{
				cout<<"\t\t           Your Choice Is Invalid\n";
				goto dn;
				break;
		   }   
	}
	dn:
		cout<<"\t\t           Dear Passenger! Would You like To Visit Our Main Menu Again \n  ";
		cout<<"         (Y, y)/(N, n):  ";
		cin>>f;
		if ((f=='Y') || (f=='y'))
		{
			goto up;
		}
}
to:
	cout<<"\t\t\t\t Thank You For Using Our Service\n";
}

else if (y==2)
{




    

	uep:
	char a, f;
	system("cls");
	cout<<"\t\t\t==================================================\n";
	cout<<"\t\t\t   ................Main Manue...................\n";
	cout<<"\t\t\t         A: Check Bus Availability\n";
	cout<<"\t\t\t         B: Check Reserved Seat\n";
	cout<<"\t\t\t         C: Seat Reservation\n";
	cout<<"\t\t\t         D: Check Your Ticket\n";
	cout<<"\t\t\t         E: Access All The Records\n";
	cout<<"\t\t\t         F: Search The Existing Records\n";
	cout<<"\t\t\t         G: If You Want To Leave Our Main Menu\n";
	cout<<"\n\t\t\t         Enter Your Choice From The Menue (A to G)......\n";
	cout<<"\t\t\t===================================================\n";
    cout<<"\t\tChoice:  ";
	cin>>a;
    if (a>='a' && a<='g')
    {
    	
    	cout<<"          Choice Of Menue Shoould Be Capital like (A, B, C, ....)  ";
    	
	}
	else
	{
		switch (a)
		{
			case 'A':
				{
					busavail();
					goto den;
					break;
				}
			case 'B':
			    {
			    	reservedseat();
			    	goto den;
			    	break;
				}
			case 'C':
			    {
			    	reservation();
			    	goto den;
			    	break;
				}
			case 'D':
			    {
			    	ticket();
			    	goto den;
			    	break;
				}
			case 'E':
			    {
			    	showall();
			    	goto den;
			    		break;
				} 				
		   case 'F':
			   {
			   	 search();
			   	 goto den;
			   	 break;
			   }
			case 'G':
			    {
			    	goto t;
				}   
			default:
			{
				cout<<"\t\t           Your Choice Is Invalid\n";
				goto dn;
				break;
		   }   
	}
	den:
		cout<<"\t\t           Dear User! Would You like To Visit Our Main Menu Again \n  ";
		cout<<"         (Y, y)/(N, n):  ";
		cin>>f;
		if ((f=='Y') || (f=='y'))
		{
			goto uep;
		}
}

}
t:
	
getch ();
}
void busavail ()
{
	int t, y;
	char n[20];
	
	
	system ("cls");
	cout<<"\t\t\t\t....................Buses Availability............................\n";
	 cout<<"\n\t\t\t\tEnter The Passanger's Arrival Time  \n";
	 cout<<"\t\t\t\tTime Is Round About : ";
	 cin>>t;
	  cout<<"\t\t\t\t1: am\n";
	 cout<<"\t\t\t\t2: pm\n";
	 	 cout<<"\t\t\tEnter Your Choice 1 or 2\n";
	 	 cout<<"\t\t\t Choice: ";
	 	 cin>>y;
	 cout<<"\n\t\t\t\tDate (dd/mm/yy):  ";
	 cin>>n;
	

	 
	
	 


	if (t<10)
	{
		if (y==1)
	
	{
       	cout<<"\t\t\t\t..............Available Buses.................\n\n\n";		
		cout<<"\t\t\t      .................................................\n";
		cout<<"\t\t\t\t         Bus No. 1 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Amir\n";
		cout<<"\t\t\t\t         Departure Time: 10:00am\n";
		cout<<"\t\t\t\t         Date: "<<n<<endl;
		cout<<"\t\t\t\t   Route : Islamabad, Peshawar, DG Khan, Sukkur, Karachi\n" ;
		
		cout<<"\t\t\t     .................................................\n";
        cout<<"\t\t\t\t         Bus No. 2 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Khalil\n";
		cout<<"\t\t\t\t         Departure Time: 1:00pm\n";
		cout<<"\t\t\t\t         Date: "<<n<<endl;
		cout<<"\t\t\t\t   Route : Islamabad, Lahore, Lodhran, Sukkur, Karachi\n" ;
		
		cout<<"\t\t\t     .................................................\n";
		
		cout<<"\t\t\t\t         Bus No. 3 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Zakir\n";
		cout<<"\t\t\t\t         Departure Time: 4:00pam\n";
		cout<<"\t\t\t\t         Date: "<<n<<endl;
		cout<<"\t\t\t\t   Route : Islamabad, Peshawar, Rajan Pur, Sukkur, Karachi\n" ;
		
		cout<<"\t\t\t     .................................................\n";
	
		cout<<"\t\t\t\t         Bus No. 4 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Umair\n";
		cout<<"\t\t\t\t         Departure Time: 9:00pm\n";
		cout<<"\t\t\t\t         Date: "<<n<<endl;
		cout<<"\t\t\t\t   Route : Islamabad, Lahore, Rahim Yar Khan, Sukkur, Karachi\n" ;
		cout<<"\t\t\t     .................................................\n";
		
	}
	
     }
      if (y==1 )
     {
     	if (t>=10 && t<12) 
     	 { 
     	 cout<<"\t\t\t\t..............Available Buses.................\n\n\n";
     		cout<<"\t\t\t     .................................................\n";
        cout<<"\t\t\t\t         Bus No. 2 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Khalil\n";
		cout<<"\t\t\t\t         Departure Time: 1:00pm\n";
		cout<<"\t\t\t\t   Route : Islamabad, Lahore, Lodhran, Sukkur, Karachi\n" ;
		
		cout<<"\t\t\t     .................................................\n";
		
		cout<<"\t\t\t\t         Bus No. 3 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Zakir\n";
		cout<<"\t\t\t\t         Departure Time: 4:00pam\n";
		cout<<"\t\t\t\t   Route : Islamabad, Peshawar, Rajan Pur, Sukkur, Karachi\n" ;
		
		cout<<"\t\t\t     .................................................\n";
	
		cout<<"\t\t\t\t         Bus No. 4 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Umair\n";
		cout<<"\t\t\t\t         Departure Time: 9:00pm\n";
		cout<<"\t\t\t\t   Route : Islamabad, Lahore, Rahim Yar Khan, Sukkur, Karachi\n" ;
		cout<<"\t\t\t     .................................................\n";
		 }
	 }
	  if (y==2)
	 {
	 	if (t==12)
	 	{
	 		cout<<"\t\t\t\t..............Available Buses.................\n\n\n";
     		cout<<"\t\t\t     .................................................\n";
        cout<<"\t\t\t\t         Bus No. 2 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Khalil\n";
		cout<<"\t\t\t\t         Departure Time: 1:00pm\n";
		cout<<"\t\t\t\t   Route : Islamabad, Lahore, Lodhran, Sukkur, Karachi\n" ;
		
		cout<<"\t\t\t     .................................................\n";
		
		cout<<"\t\t\t\t         Bus No. 3 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Zakir\n";
		cout<<"\t\t\t\t         Departure Time: 4:00pam\n";
		cout<<"\t\t\t\t   Route : Islamabad, Peshawar, Rajan Pur, Sukkur, Karachi\n" ;
		
		cout<<"\t\t\t     .................................................\n";
	
		cout<<"\t\t\t\t         Bus No. 4 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Umair\n";
		cout<<"\t\t\t\t         Departure Time: 9:00pm\n";
		cout<<"\t\t\t\t   Route : Islamabad, Lahore, Rahim Yar Khan, Sukkur, Karachi\n" ;
		cout<<"\t\t\t     .................................................\n";

	 		
		 }
	 }
	  if (y==2)
	 {
	 	if (t>=1 && t<4)
	 	{
	 		cout<<"\t\t\t\t..............Available Buses.................\n\n\n";
	 		
		cout<<"\t\t\t     .................................................\n";
		
		cout<<"\t\t\t\t         Bus No. 3 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Zakir\n";
		cout<<"\t\t\t\t         Departure Time: 4:00pam\n";
		cout<<"\t\t\t\t   Route : Islamabad, Peshawer, Rajan Pur, Sukkur, Karachi\n" ;
		
		cout<<"\t\t\t     .................................................\n";
	
		cout<<"\t\t\t\t         Bus No. 4 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Umair\n";
		cout<<"\t\t\t\t         Departure Time: 9:00pm\n";
		cout<<"\t\t\t\t   Route : Islamabad, Lahore, Rahim Yar Khan, Sukkur, Karachi\n" ;
		cout<<"\t\t\t     .................................................\n";

	 		
		 }
	 }
	  if (t>=4 && t<9)
	 {
	 	if (y==2)
	 	{
	 		cout<<"\t\t\t\t..............Available Buses.................\n\n\n";
	 			cout<<"\t\t\t\t         Bus No. 4 is Available\n";
		cout<<"\t\t\t\t         Driver Name: Umair\n";
		cout<<"\t\t\t\t         Departure Time: 9:00pm\n";
		cout<<"\t\t\t\t   Route : Islamabad, Lahore, Rahim Yar Khan, Sukkur, Karachi\n" ;
		cout<<"\t\t\t     .................................................\n";
		 }
	 }
	 else if ((t>=9) && (t<=11))
	   {
	      if (y==2)
	      {
	      	cout<<"\t\t\t\t   All Buses has been Departured\n";
		  }
	  }
	 
	 	
	
}
void reservedseat ()
{
	
	system ("cls");
	int o;
	ifstream file;
	file.open("Files\\reservation.txt",ios::in);
	if (!file)
	{
		cout<<"\t\t\t\t Server Not Working\n";
		exit(1);
	}
	cout<<"\t\t\t Sreach The Reserved Seats By\n ";
	cout<<"\t\t\t 1: Bus No.\n";
	cout<<"\t\t\t 2: Date (dd/mm/yy)\n";
	cout<<"\t\t\t Choice :  ";
	cin>>o;
	cout<"\t\t................................Check Reserved Seat Of Busses...................................\n";
	if (o==1)
	{
		char e;
		bus:
		cout<<"\t\t\tEnter Bus No : ";
		cin>>j.bn;
		if(j.bn>'4')
		{
			cout<<"\t\t\t Falcons Flying Service Has Only 4 Buses\n";
			cout<<"\t\t\t You Want to Enter Bus No. Again\n";
			cout<<"\t\t\t press 'y' or 'Y' : ";
			cin>>e;
			if ((e=='y') || (e=='Y'))
			{
				goto bus;
			}
		}
		file>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
		cout<<"\t\t\t   Bus No\t\t   Seat No\n";
		while (!file.eof())
		{
			if (j.bn==x.bn)
			{
				cout<<"\t\t\t\t"<<j.bn<<"\t\t\t"<<x.sn<<"\n";
			}
		
			file>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
		}

		file.close();
	}
	
	else if(o==2)
	{
		cout<<"\t\t\tEnter The Date (dd/mm/yy) : ";
		cin>>j.date;
		file>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
		cout<<"\t\t\t     Bus No\t  Date\t   Seat No\n";
		while (!file.eof())
		{
			if (strcmp(x.date, j.date)==0)
			{
				cout<<"\t\t\t\t"<<x.bn<<"\t"<<x.date<<"\t"<<x.sn<<"\n\n";
			}
	      file>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
		}
		file.close();
	}
}
void reservation ()
{
	system ("cls");
	char w;
	 cout<<"\t\t\t\tA: Bus No 1 (10:00AM)\n";
	  cout<<"\t\t\t\tB: Bus No 2 (1:00PM)\n";
	   cout<<"\t\t\t\tC: Bus No 3 (4:00PM)\n";
	   cout<<"\t\t\t\tD: Bus No 4 (9:00PM)\n";
	    cout<<"\t\t\t\tChoose Your Choice:  ";
	    cin>>w;
	 
	 
	  if (w=='A')
	  {
	uper:
	int b;
	char a;
	ofstream f;
	ifstream fin;
	ifstream fi;
	f.open("Files\\reservation.txt",ios::app);
	if (!f)
	{
		cout<<"Server Not Working\n";
		exit(1);
	}
	
	system("cls");
	cout<<"\t\t    ....................Reservation Portal........................\n";
	cout<<"\t\t\t\t Bus No.1 (10:00AM)\n";
	cout<<"\n\t\t Route : Islamabad, Peshawar, DG Khan, Sukkur, Karachi\n ";
	j.bn='1';
    
	cout<<"\t\t\t\t Enter date (dd/mm/yy):  ";
	cin>>j.date;
	cout<<"\t\t\t\t Enter The Passenger Name\n";
	cout<<"\t\t\t\t Name: ";
	cin>>j.n;
	fin.open("Files\\reservation.txt",ios::in);
	if (!fin)
	{
		cout<<"Server Not Working\n";
		exit(1);
	}
	up:
	cout<<"\t\t\t\t Enter CNIC (XXXXXXXXXXXXX)\n";
	cout<<"\t\t\t\t CNIC: ";
	cin>>j.id;
	fin>>x.bn>>x.date>>x.n>>x.id>>x.sn;
	while (!fin.eof())
	{
		
	
		if (strcmp(j.id, x.id)==0 && strcmp(j.n, x.n)==0)
		{
			goto fr;
		}
		else if (strcmp(j.id, x.id)==0 && strcmp(j.n, x.n) !=0)
		{
			cout<<"\t\t\t\t Invalid CNIC\n";
			goto up;
		}
		fin>>x.bn>>x.date>>x.n>>x.id>>x.sn;
		}
	fr:
	
	b=strlen(j.id);
	if ((b !=13))
	{
		cout<<"\t\t\t\t Invalid CNIC\n";
		goto up;
	}
	
fin.close();
    fi.open("Files\\reservation.txt",ios::in);
	if (fi==NULL)
	{
		cout<<"\t\t\t\t Server Not Working\n";
		exit(1);
	}
	
	ji:
	cout<<"\t\t\t\t Enter Passenger Seat\n";
	cout<<"\t\t\t\t Seat No.: ";
	cin>>j.sn;
	if(j.sn==1)
	{
		char w;
		cout<<"\t\t\t Company Has Been Reserved This Seat For Hostess\n";
		cout<<"\t\t\t Enter Seat No. Again\n";
		cout<<"\t\t\t Press 'y' or 'Y' ";
		cin>>w;
		if ((w=='y') || (w=='Y'))
		{
			goto ji;
		}
		else
		{
			exit(1);
		}
	}
	else if (j.sn>30)
	{
		cout<<"\t\t\t Bus Only Has 30 Seats\n";
		char w;

		cout<<"\t\t\t Enter Seat No. Again\n";
		cout<<"\t\t\t Press 'y' or 'Y' ";
		cin>>w;
		if ((w=='y') || (w=='Y'))
		{
			goto ji;
		}
		else
		{
			exit(1);
		}
	}
	fi>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
	while (!fi.eof())
	{
		if(j.bn==x.bn)
		{
		
		if ((j.sn==x.sn) && (strcmp(j.date, x.date)==0))
		{
			cout<<"\t\t\t\t This Seat Has Been Reserved\n";
			fi.close();
			cout<<"\n\t\t\t\t Enetr Passenger's Data Again\n";
			cout<<"\t\t\t Press 'Y' or 'y' : ";
			cin>>a;
			if((a=='y') ||(a=='Y'))
			{
			goto uper;
		}
		else
		{
		  exit(1);
		}
		}
	}
	fi>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;	
	}

   	fi.close();
    cout<<"\t\t\t\t From:  ";
	cin>>j.f;
	if ((strcmp(j.f, "Islamabad") !=0) && (strcmp(j.f, "Peshawar") !=0)&&(strcmp(j.f, "DG Khan") !=0)&&(strcmp(j.f, "Sukkur")!=0) && strcmp(j.f, "Karachi") !=0)
	{
		cout<<"\t\t\t\t This Bus Is Not for This City check another Bus\n";
		goto we;
		
	}
	
	cout<<"\t\t\t\t To:  ";
	cin>>j.to;
	if ((strcmp(j.to, "Karachi") !=0) && (strcmp(j.to, "Peshawar") !=0)&&(strcmp(j.to, "DG Khan") !=0)&&(strcmp(j.to, "Sukkur")!=0)&& (strcmp(j.to, "Islamabad")!=0))
	{
		cout<<"\t\t\t\t This Bus Is Not for This City check another Bus\n";
		goto we;
	}
	f<<j.bn<<"\t"<<j.date<<"\t"<<j.n<<"\t"<<j.id<<"\t"<<j.sn<<"\t"<<j.f<<"\t"<<j.to;
	f<<"\n";
	cout<<"\n\t\t\t\t Seat Reserved Successfully \n";
	we:
	f.close();
	return ;
}
else if (w=='B')
{
	yu:
	int b;
	char a;
    ofstream out;
    ifstream in;
    ifstream ins;
	out.open("Files\\reservation.txt",ios::app);
	if (!out)
	{
		cout<<"Server Not Working\n";
		exit(1);
	}
	
	system("cls");
	cout<<"\t\t    ....................Reservation Portal........................\n";
	cout<<"\t\t\t\t Bus No.2 (1:00PM)\n";
	cout<<"\n\t\t   Route : Islamabad, Lahore, Lodhran, Sukkur, Karachi\n" ;
	j.bn='2';
	 
	
	cout<<"\t\t\t\t Enter date (dd/mm/yy):  ";
	cin>>j.date;
	cout<<"\t\t\t\t Enter The Passenger Name\n";
	cout<<"\t\t\t\t Name: ";
	cin>>j.n;
	in.open("Files\\reservation.txt",ios::in);
	if (!in)
	{
		cout<<"Server Not Working\n";
		exit(1);
	}
	op:
	cout<<"\t\t\t\t Enter CNIC (XXXXXXXXXXXXX)\n";
	cout<<"\t\t\t\t CNIC: ";
	cin>>j.id;
	in>>x.bn>>x.date>>x.n>>x.id>>x.sn;
	while (!in.eof())
	{
		if (strcmp(j.id, x.id)==0 && strcmp(j.n, x.n)==0)
		{
			goto fd;
		}
		 
		else if (strcmp(j.id, x.id)==0 && strcmp(j.n, x.n) !=0)
		{
			cout<<"\t\t\t\t Invalid CNIC\n";
			goto op;
		}
		in>>x.bn>>x.date>>x.n>>x.id>>x.sn;
		}
	fd:
	
	b=strlen(j.id);
	if ((b !=13))
	{
		cout<<"\t\t\t\t Invalid CNIC\n";
		goto op;
	}
in.close();
    ins.open("Files\\reservation.txt",ios::in);
	if (ins==NULL)
	{
		cout<<"\t\t\t\t Server Not Working\n";
		exit(1);
	}
	
	jf:
	cout<<"\t\t\t\t Enter Passenger Seat\n";
	cout<<"\t\t\t\t Seat No.: ";
	cin>>j.sn;
		if(j.sn==1)
	{
		char w;
		cout<<"\t\t\t Company Has Been Reserved This Seat For Hostess\n";
		cout<<"\t\t\t Enter Seat No. Again\n";
		cout<<"\t\t\t Press 'y' or 'Y' ";
		cin>>w;
		if ((w=='y') || (w=='Y'))
		{
			goto jf;
		}
		else
		{
			exit(1);
		}
	}
	else if (j.sn>30)
	{
		cout<<"\t\t\t Bus Only Has 30 Seats\n";
		char w;
		
		cout<<"\t\t\t Enter Seat No. Again\n";
		cout<<"\t\t\t Press 'y' or 'Y' ";
		cin>>w;
		if ((w=='y') || (w=='Y'))
		{
			goto jf;
		}
		else
		{
			exit(1);
		}
	}
	ins>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
	while(!ins.eof())
	{
		if(j.bn==x.bn)
		{
		
		if((strcmp(j.date, x.date)==0) && (j.sn==x.sn))
		{
			cout<<"\t\t\t\t This Seat Has Been Reserved\n";
			cout<<"\t\t\t\tPlease Enter Passengre's Data Again\n";
			cout<<"Press 'y' or 'Y' : ";
			cin>>a;
			if ((a=='y') || (a=='Y'))
			{
				goto yu;
			}
			else
			{
				exit(1);
			}
		}
	}
	    ins>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
	}
   ins.close();
    cout<<"\t\t\t\t From:  ";
	cin>>j.f;
	if ((strcmp(j.f, "Islamabad") !=0) && (strcmp(j.f, "Lahore") !=0)&&(strcmp(j.f, "Lodhran") !=0)&&(strcmp(j.f, "Sukkur")!=0) && (strcmp(j.f, "Karachi")!=0))
	{
		cout<<"\t\t\t\t This Bus Is Not for This City check another Bus\n";
             goto wr;		
	}
	
	cout<<"\t\t\t\t To:  ";
	cin>>j.to;
	if (strcmp(j.to, "Islambabd")&&(strcmp(j.to, "Karachi") !=0) && (strcmp(j.to, "Lahore") !=0)&&(strcmp(j.to, "Lodhran") !=0)&&(strcmp(j.to, "Sukkur")!=0))
	{
		cout<<"\t\t\t\t This Bus Is Not for This City check another Bus\n";
		goto wr;
	}
	out<<j.bn<<"\t"<<j.date<<"\t"<<j.n<<"\t"<<j.id<<"\t"<<j.sn<<"\t"<<j.f<<"\t"<<j.to;
	out<<"\n";
	cout<<"\n\t\t\t\t Seat Reserved Successfully\n";
	wr:
	out.close();
	return ;
}
else if(w=='C')
{
	er:
	int b;
	char a;
	ofstream f;
	ifstream fin;
	ifstream fi;
	f.open("Files\\reservation.txt",ios::app);
	if (!f)
	{
		cout<<"Server Not Working\n";
		exit(1);
	}
	
	system("cls");
	cout<<"\t\t    ....................Reservation Portal........................\n";
	
	cout<<"\t\t\t\t Bus No.3 (4:00PM) \n";
	cout<<"\n\t\t   Route : Islamabad, Peshawer, Rajan Pur, Sukkur, Karachi\n" ;
	j.bn='3';
	 
	
	cout<<"\t\t\t\t Enter date (dd/mm/yy):  ";
	cin>>j.date;
	cout<<"\t\t\t\t Enter The Passenger Name\n";
	cout<<"\t\t\t\t Name: ";
	cin>>j.n;
	fin.open("Files\\reservation.txt",ios::in);
	if (!fin)
	{
		cout<<"Server Not Working\n";
		exit(1);
	}
	pu:
	cout<<"\t\t\t\t Enter CNIC (XXXXXXXXXXXXX)\n";
	cout<<"\t\t\t\t CNIC: ";
	cin>>j.id;
	fin>>x.bn>>x.date>>x.n>>x.id>>x.sn;
	while (!fin.eof())
	{
	
		if (strcmp(j.id, x.id)==0 && strcmp(j.n, x.n)==0)
		{
			goto ref;
		}
		 
		if (strcmp(j.id, x.id)==0 && strcmp(j.n, x.n) !=0)
		{
			cout<<"\t\t\t\t Invalid CNIC\n";
			goto pu;
		}
		fin>>x.bn>>x.date>>x.n>>x.id>>x.sn;
		}
	ref:
	
	b=strlen(j.id);
	if ((b !=13))
	{
		cout<<"\t\t\t\t Invalid CNIC\n";
		goto pu;
	}
fin.close();
    fi.open("Files\\reservation.txt",ios::in);
	if (fi==NULL)
	{
		cout<<"\t\t\t\t Server Not Working\n";
		exit(1);
	}
	
	jk:
	cout<<"\t\t\t\t Enter Passenger Seat\n";
	cout<<"\t\t\t\t Seat No.: ";
	cin>>j.sn;
			if(j.sn==1)
	{
		char w;
		cout<<"\n\t\t\t Company Has Been Reserved This Seat For Hostess\n";
		cout<<"\t\t\t Enter Seat No. Again\n";
		cout<<"\t\t\t Press 'y' or 'Y' ";
		cin>>w;
		if ((w=='y') || (w=='Y'))
		{
			goto jk;
		}
		else
		{
			exit(1);
		}
	}
	else if (j.sn>30)
	{
		cout<<"\t\t\t Bus Only Has 30 Seats\n";
		char w;
		
		cout<<"\t\t\t Enter Seat No. Again\n";
		cout<<"\t\t\t Press 'y' or 'Y' ";
		cin>>w;
		if ((w=='y') || (w=='Y'))
		{
			goto jk;
		}
		else
		{
			exit(1);
		}
	}
	fi>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
	while (!fi.eof())
	{
		if (j.bn==x.bn)
		{
		
		if((strcmp(j.date, x.date)==0) && (x.sn==j.sn))
		{
			cout<<"\t\t\t\t This Seat Has Been Reserved\n";
			cout<<"\t\t\t\t Enter The Passenger's Data Again\n";
			cout<<"\t\t\t\t press 'y' or 'Y' :  ";
			cin>>a;
			if((a=='y') || (a=='Y'))
			{
				goto er;
			}
			else
			{
				exit(1);
			}
		}
	}
	fi>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
	}
	fi.close();	
    cout<<"\t\t\t\t From:  ";
	cin>>j.f;
	if ((strcmp(j.f, "Islamabad") !=0) && (strcmp(j.f, "Peshawer") !=0)&&(strcmp(j.f, "Rajan Pur") !=0)&&(strcmp(j.f, "Sukkur")!=0) && (strcmp(j.f, "Karachi") !=0))
	{
		cout<<"\t\t\t\t This Bus Is Not for This City check another Bus\n";
		goto wt;
		
	}
	
	cout<<"\t\t\t\t To:  ";
	cin>>j.to;
	if ((strcmp(j.to, "Karachi") !=0) && (strcmp(j.to, "Peshawer") !=0)&&(strcmp(j.to, "Rajan Pur") !=0)&&(strcmp(j.to, "Sukkur")!=0) && (strcmp(j.to, "Islamabad")!=0))
	{
		cout<<"\t\t\t\t This Bus Is Not for This City check another Bus\n";
		goto wt;
	}
	f<<j.bn<<"\t"<<j.date<<"\t"<<j.n<<"\t"<<j.id<<"\t"<<j.sn<<"\t"<<j.f<<"\t"<<j.to;
	f<<"\n";
	wt:
	cout<<"\n\t\t\t\t Seat Reserved Successfully\n";
	f.close();
	return ;
}
else if (w=='D')
{
	re:
	int b;
	char a;
	ofstream f;
	ifstream fin;
	ifstream fi;
	f.open("Files\\reservation.txt",ios::app);
	if (!f)
	{
		cout<<"Server Not Working\n";
		exit(1);
	}
	
	system("cls");
	cout<<"\t\t    ....................Reservation Portal........................\n";
	cout<<"\t\t\t\t Bus No. 4  (9:00PM) \n";
	cout<<"\n\t\t  Route : Islamabad, Lahore, Rahim Yar Khan, Sukkur, Karachi\n" ;
	j.bn='4';
    
	cout<<"\t\t\t\t Enter date (dd/mm/yy):  ";
	cin>>j.date;
	cout<<"\t\t\t\t Enter The Passenger Name\n";
	cout<<"\t\t\t\t Name: ";
	cin>>j.n;
	fin.open("Files\\reservation.txt",ios::in);
	if (!fin)
	{
		cout<<"Server Not Working\n";
		exit(1);
	}
	po:
	cout<<"\t\t\t\t Enter CNIC (XXXXXXXXXXXXX)\n";
	cout<<"\t\t\t\t CNIC: ";
	cin>>j.id;
	fin>>x.bn>>x.date>>x.n>>x.id>>x.sn;
	while (!fin.eof())
	{
		
	
		if (strcmp(j.id, x.id)==0 && strcmp(j.n, x.n)==0)
		{
			goto rf;
		}
		if (strcmp(j.id, x.id)==0 && strcmp(j.n, x.n) !=0)
		{
			cout<<"\t\t\t\t Invalid CNIC\n";
			goto po;
		}
		fin>>x.bn>>x.date>>x.n>>x.id>>x.sn;
		}
	rf:
	
	b=strlen(j.id);
	if ((b !=13))
	{
		cout<<"\t\t\t\t Invalid CNIC\n";
		goto po;
	}
fin.close();
    fi.open("Files\\reservation.txt",ios::in);
	if (fi==NULL)
	{
		cout<<"\t\t\t\t Server Not Working\n";
		exit(1);
	}
	
	jl:
	cout<<"\t\t\t\t Enter Passenger Seat\n";
	cout<<"\t\t\t\t Seat No.: ";
	cin>>j.sn;
				if(j.sn==1)
	{
		char w;
		cout<<"\n\t\t\t Company Has Been Reserved This Seat For Hostess\n";
		cout<<"\t\t\t Enter Seat No. Again\n";
		cout<<"\t\t\t Press 'y' or 'Y' ";
		cin>>w;
		if ((w=='y') || (w=='Y'))
		{
			goto jl;
		}
		else
		{
			exit(1);
		}
	}
	else if (j.sn>30)
	{
		cout<<"\t\t\t Bus Only Has 30 Seats\n";
		char w;
		cout<<"\t\t\t Enter Seat No. Again\n";
		cout<<"\t\t\t Press 'y' or 'Y' ";
		cin>>w;
		if ((w=='y') || (w=='Y'))
		{
			goto jl;
		}
		else
		{
			exit(1);
		}
	}
		fi>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
	while (!fi.eof())
	{
		if (j.bn==x.bn)
		{
		
		if((strcmp(j.date, x.date)==0) && (x.sn==j.sn))
		{
			cout<<"\t\t\t\t This Seat Has Been Reserved\n";
			cout<<"\t\t\t\t Enter The Passenger's Data Again\n";
			cout<<"\t\t\t\t press 'y' or 'Y' :  ";
			cin>>a;
			if((a=='y') || (a=='Y'))
			{
				goto re;
			}
			else
			{
				exit(1);
			}
		}
	}
	fi>>x.bn>>x.date>>x.n>>x.id>>x.sn>>x.f>>x.to;
	}
fi.close();
	
    
    	
    cout<<"\t\t\t\t From:  ";
	cin>>j.f;
	if ((strcmp(j.f, "Islamabad") !=0) && (strcmp(j.f, "Lahore") !=0)&&(strcmp(j.f, "Rahim Yar Khan") !=0)&&(strcmp(j.f, "Sukkur")!=0) && (strcmp(j.f, "Karachi") !=0))
	{
		cout<<"\t\t\t\t This Bus Is Not for This City check another Bus\n";
		goto wy;
	}
	
	cout<<"\t\t\t\t To:  ";
	cin>>j.to;
	if ((strcmp(j.to, "Karachi") !=0) && (strcmp(j.to, "Lahore") !=0)&&(strcmp(j.to, "Rahim Yar Khan") !=0)&&(strcmp(j.to, "Sukkur")!=0) && (strcmp(j.to, "Islambabd") !=0))
	{
		cout<<"\t\t\t\t This Bus Is Not for This City check another Bus\n";
		goto wy;
	}
	f<<j.bn<<"\t"<<j.date<<"\t"<<j.n<<"\t"<<j.id<<"\t"<<j.sn<<"\t"<<j.f<<"\t"<<j.to;
	f<<"\n";
	cout<<"\n\t\t\t\t Seat Reserved Successfully\n";
	wy:
	f.close();
	return ;
}
}
void ticket ()
{
	char a[15];
	system ("cls");
	ifstream fn;
	fn.open("Files\\reservation.txt",ios::in);
	if (!fn)
	{
		cout<<"Server is Loading......!";
	}
	cout<<"\t\t\t\t Enter The CNIC No Of Passenger\n";
	cout<<"\t\t\t\t CNIC:  ";
	cin>>a;
	fn>>j.bn>>j.date>>j.n>>j.id>>j.sn>>j.f>>j.to;
	cout<<"\t\t\t.......................SIBA E-Ticket Portal........................\n\n";
	while (!fn.eof())
	{
		
		if (strcmp(a,j.id)==0)
		{
			cout<<"\t\t\t================================================================\n";
			cout<<"\t\t\t|"<<"Name: "<<j.n<<"\t\t"<<"CNIC: "<<j.id<<"\t"<<"Bus No: "<<j.bn<<"       |\n";
			cout<<"\t\t\t|"<<"From: "<<j.f<<"\t\t"<<"To: "<<j.to<<"       \t               |\n";
			cout<<"\t\t\t|"<<"Seat No: "<<j.sn<<"\t\t\t"<<"Departure Date: "<<j.date<<"      |\n";
			cout<<"\t\t\t================================================================\n";
			cout<<"\n";
		}
		fn>>j.bn>>j.date>>j.n>>j.id>>j.sn>>j.f>>j.to;
	
	}
	fn.close();
	
}
void showall()
{
	system("cls");
	cout<<"\t\t\t..................Check All Data......................\n\n";
	ifstream fr;
	fr.open("Files\\reservation.txt",ios::in);
	if (!fr)
	{
		cout<<"\t\t\tServer is Loading......!";
	}
	fr>>j.bn>>j.date>>j.n>>j.id>>j.sn>>j.f>>j.to;
	cout<<"\t\t    Bus No.\t   Date\t          Name\t     CNIC     Seat No.    From\t          To\n";
	while (!fr.eof())
	{
		
		cout<<"\t\t\t"<<j.bn<<"\t"<<j.date<<"\t"<<j.n<<"\t"<<j.id<<"\t"<<j.sn<<"\t"<<j.f<<"\t"<<j.to<<"\n";
		fr>>j.bn>>j.date>>j.n>>j.id>>j.sn>>j.f>>j.to;
	}
	cout<<"\n";
	fr.close();
}
void search()
{
	char a, d;
	char r[15], t[15];
	system("cls");
	cout<<"\t\t\t.................SIBA Server Searching....................\n";
	ifstream fd;
		fd.open("Files\\reservation.txt",ios::in);
	if (!fd)
	{
		cout<<"\t\t\tServer is Loading......!";
		exit(1);
	}
	cout<<"\t\t\tSreach The Record by:\n";
	cout<<"\t\t\tA: Bus No\n\t\t\tB: CINIC\n";
	cout<<"\t\t\tChoice: ";
	cin>>a;
	if (a=='A')
	{
	  cout<<"\t\t\t Enter The Bus No: ";
	  cin>>d;
	  fd>>j.bn>>j.date>>j.n>>j.id>>j.sn>>j.f>>j.to;
	  cout<<"\t\t    Bus No.\t   Date\t          Name\t    CNIC     Seat No.    From\tTo\n";
	while(!fd.eof())
	{
		
		if(j.bn==d)
		{
	   cout<<"\t\t\t"<<j.bn<<"\t"<<j.date<<"\t"<<j.n<<"\t"<<j.id<<"\t"<<j.sn<<"\t"<<j.f<<"\t"<<j.to<<"\n";
        
}
       fd>>j.bn>>j.date>>j.n>>j.id>>j.sn>>j.f>>j.to;
	}
 }
  else if (a=='B')
	{
	  cout<<"\t\t\t Enter CNIC : ";
	  cin>>r;
	  fd>>j.bn>>j.date>>j.n>>j.id>>j.sn>>j.f>>j.to;
	  cout<<"\t\t    Bus No.\t   Date\t         Name\t     CNIC     Seat No.    From\tTo\n";
	while(!fd.eof())
	{
		
		if(strcmp(j.id,r)==0)
		{
	   cout<<"\t\t\t"<<j.bn<<"\t"<<j.date<<"\t"<<j.n<<"\t"<<j.id<<"\t"<<j.sn<<"\t"<<j.f<<"\t"<<j.to<<"\n";
      }
      fd>>j.bn>>j.date>>j.n>>j.id>>j.sn>>j.f>>j.to;
	}
 }
	cout<<"\n";
	fd.close();
}
void intro ()
{
	
	 
	
	system ("cls");
	
	cout<<"\n\n\n\n";
   	 cout<<"\t\t\t\t===================================================\n";
	 cout<<"\t\t\t\t||         Falcons Flying Bus Service             ||\n";
	 cout<<"\t\t\t\t====================================================\n";
	 cout<<"\t\t\t\t\t\t          copyright @ : Team Falcons\n";
	 cout<<"\n\n\n\t\t\t\t\t    1: Passenger Portal\n";
	 cout<<"\t\t\t\t\t    2: Login As Reservation Master\n";
	 cout<<"\t\t\t\t\t    Choice:  ";
	 cin>>y;
	  
	 
	 if(y==1)
	 {
	 	goto neech;
	  }
	   
	  else if (y==2)
	  {
	 
	 int x, i;
	char h;
	system ("cls");
	cout<<"\t\t\t.........................Reservation Master Access.................................\n";
	cout<<"\n\t\t\t\t Enter Your Cohice\n";
	cout<<"\t\t\t\t 1: Sign Up\n";
	cout<<"\t\t\t \t 2: Sign in\n";
	cout<<"\t\t\t\t Choice: ";
	cin>>x;
	if (x==1)
	{
		uy:
		char z, b[20];
	system("cls");
	cout<<"\n\t\t\t.....................Sign Up..........................\n";
	ofstream of;
	ifstream ifs;
	ofstream pa;
	
	of.open("Files\\user.txt", ios::app);
	if (!of)
	{
		cout<<"\n\t\t\t Server Not Working\n";
		exit(1);
	}
    ifs.open("Files\\user.txt", ios::app);
	if (!ifs)
	{
		cout<<"\n\t\t\t Server Not Working\n";
		exit(1);
	}
    pa.open("Files\\pass.txt", ios::app);
	if (!pa)
	{
		cout<<"\n\t\t\t Server Not Working\n";
		exit(1);
	}
	
	cout<<"\t\t\tCreate User Name:  ";
	cin>>a;
	ifs>>c;
	while (!ifs.eof())
	{
	if (strcmp(a, c)==0)
	{
		cout<<"\t\t\t This Username Alraedy Exist\n";
		goto uy;
	}
	ifs>>c;
    }
	ifs.close();
	cout<<"\t\t\tCreate Your Password:  ";
	cin>>b;
	 oper:
	 cout<<"\n\t\t\tVerify Your Authorization: Enter 4 Digit Pin Code Of This Company \n";
	 cout<<"\t\t\t Code:  ";
	 cin>>l;
	 if (strcmp(l,"7738")==0)
	 {
	 	cout<<"\t\t\t Your Account Has been Created\n\n";
	 
	 }
	 else
	 {
	 	cout<<"\t\t\t Sorry, Owner Do Not Want To Give Access \n\n";
	 	cout<<"\t\t\t You Want Try Again\n";
	 	cout<<"\t\t\t Press 'y' or 'Y':  ";
	 	cin>>z;
	 	if ((z=='y') || (z=='Y'))
	 	{
	 		goto uy;
		 }
	 	
	 	
	 }
	
	of<<a<<"\n";
	of.close();
	pa<<b;
	pa<<"\n";
	
	pa.close();
	
		cout<<"\t\t\tYou want to Sign In Now.....?\n";
	 	cout<<"\t\t\tPress 'y' or 'Y': ";
	 	cin>>z;
	 	if ((z=='y')||(z=='Y'))
	 	{
		 goto cool;
     	}
     	else
     	{
     		exit(1);
		 }
    

  }
  else if (x==2)
  {
  	cool:
  		ert:
  		system("cls");
  		char d[20], u[20], t[20], r[20];
     
  cout<<"\n\t\t\t.....................Sign In..........................\n";
    y=2;  
  cout<<"\t\t\tUsername :  ";
  cin>>d;
  cout<<"\t\t\tPassword :  ";
  cin>>u;
   ifstream user;
   ifstream pass;
   user.open("Files\\user.txt",ios::in);
   if(!user)
   {
   	cout<<"\t\t\t Server Not Workng\n";
   	exit(1);
   	
   }
   pass.open("Files\\pass.txt",ios::in);
   if (!pass)
   {
   	cout<<"\t\t\t Server Not Working\n";
   	exit(1);
   }
   user>>t;
   pass>>r;
   while ((!user.eof()) && (!pass.eof()))
   {
   	    if ((strcmp(d, t)==0) && (strcmp(u, r)==0))
   	    {
   	    	goto main;
		   }
		
		   user>>t;
		   pass>>r;
   }
   char i;
   cout<<"\t\t\t Username Or Password is Incorrect\n";
	 cout<<"\t\t\t Enter Username And Password Again\n\t\t\tPress 'Y' or 'y' :";
	 cin>>i;
	 if ((i=='y') || (i=='Y'))
	 {
	 	goto ert;
	 }
	 
  }
  else if (x>2)
{
	exit(0);
	return;
}
}
  main:
  	return;
  	neech:
  	return ;
}




