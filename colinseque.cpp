//checar que no haya ñs




#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way:)
#include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <MATH.h>
# include <String.h>
#include <fstream>


using namespace std;
char mat[5], nom[21], app[21], apm[21], car[5], cor[31], clcar[5], car[31];
int dn[3], mn[3], an;
float prom;
bool digit
void pide ()
{
	int q=1, w=0;
	while((q!=0)&&(w!=4)&&(digit==true))
	{
		printf("Indica la matr%ccula del alumno",161); scanf("%s",mat);
		y=strlen(mat)
		x=strcmp(mat,"A",1);
		for(int i=1,i<5,i++)
		{
			if (isdigit(mat[i])) digit== true;
			else {printf("Error solo digitos después de la "A""); digit== false}
		}
		if (y!=4) printf ("Error la matr%ccula tiene que tener 4 caracteres una "A" y 3 d%cgitos");
		if (x!=0) printf ("Error la matricula tiene que iniciar con "A"");
	
		int z=0;
		while((z<1)||(z>20))
		{
			printf("Indica el nombre del alumno");
			gets(nom);
			z=strlen(nom);
			if((z<1)||(z>20)) printf("Error el nombre debe de tener entre 1 y 20 caracteres");
			for(int i=0;i<20;i++)
			{
				if(nom[i]==" ") {nom[i]="_";}
			}
		}
		int f=0;
		while((f<2)||(f>20))
		{
			printf("Indica el apellido paterno del alumno");
			gets(app);
			f=strlen(app);
			if((f<1)||(f>20)) {printf("Error el nombre debe de tener entre 1 y 20 caracteres"); system("cls")}
			for(int i=0;i<20;i++)
			{
				if(app[i]==" ") {app[i]="_";}
			}
		}
		int a=0;
		while((a<2)||(a>20))
		{
			printf("Indica el apellido materno del alumno");
			gets(apm);
			a=strlen(apm);
			if((a<1)||(a>20)) {printf("Error el nombre debe de tener entre 1 y 20 caracteres"); system("cls");}
			for(int i=0;i<20;i++)
			{
				if(apm[i]==" ") {apm[i]="_";}
			}
		}
		dn=0;
		while((dn<1)||(dn>31))
		{
			printf("indica el día de nacimiento del alumno");
			scanf("%d",&dn);
			if((dn<1)||(dn>31)) {printf("Error el dia tiene que estar entre 1 y 31");
			system("cls")}
			if(dn<9) {dn=dn[1]; dn[0]=0;}
		}
		mn=0;
		while((mn<1)||(mn>12))
		{
			printf("indica el mes de nacimiento del alumno");
			scanf("%d",&mn);
			if((mn<1)||(mn>31)) {printf("Error el mes tiene que estar entre 1 y 12");
			system("cls")}
			if(mn<9) {mn=mn[1]; mn[0]=0;}
		}
		an=0
		while(an<1900)
		{
			printf("indica el año de nacimiento del alumno");
			scanf("%d",&an);
			if(an<1900) {printf("Error el año tiene que ser superior a 1900");
			system("cls")}
		}
		prom=-1
		while((prom<0)||(prom>100))
		{
			printf("indica el promedio del alumno");
			scanf("%d",&prom);
			if((prom<0)||(prom>100)) {printf("Error el promedio tiene que ser entre 0 y 100 ");
			system("cls")}
		}
		car
		{
			
		}
		cor
		{
			
		}
	}
}
//grabar alumnos
void grabardatos()
{
	ofsretam arch;
	arch.open("alumnos.txt",ios::app);
	arch <<mat" " <<nom" " <<app" " <<apm" " <<dn" " <<mn" " <<an" " <<prom" " <<car" " << "/n";
	arch.close
}
void correo()
{
	char mat[5], nom[21], app[21], apm[21], car[5], cor,primera;
	int dn;
	int mn;
	int an_aux;
	int prom;
	strlwr(nom); 
	strlwr(app);
	strlwr(apm);
	for (int i=0;i<26;i++)
	{
		if((nom[i]==char(160))||(nom[i]==char(181))) nom[i]='a';
		if((nom[i]==char(130))||(nom[i]==char(144))) nom[i]='e';
		if((nom[i]==char(161))||(nom[i]==char(214))) nom[i]='i';
		if((nom[i]==char(162))||(nom[i]==char(224))) nom[i]='o';
		if((nom[i]==char(163))||(nom[i]==char(233))) nom[i]='u';
		if((nom[i]==char(164))||(nom[i]==char(165))) nom[i]='n';
		if((nom[i]==char(32)))                       nom[i]='_';
    }
    for (int i=0;i<26;i++)
	{
		if((app[i]==char(160))||(app[i]==char(181))) app[i]='a';
		if((app[i]==char(130))||(app[i]==char(144))) app[i]='e';
		if((app[i]==char(161))||(app[i]==char(214))) app[i]='i';
		if((app[i]==char(162))||(app[i]==char(224))) app[i]='o';
		if((app[i]==char(163))||(app[i]==char(233))) app[i]='u';
		if((app[i]==char(164))||(app[i]==char(165))) app[i]='n';
		if((app[i]==char(32)))                       app[i]='_';
	}
	 for (int i=0;i<26;i++)
	{
		if((apm[i]==char(160))||(apm[i]==char(181))) apm[i]='a';
		if((apm[i]==char(130))||(apm[i]==char(144))) apm[i]='e';
		if((apm[i]==char(161))||(apm[i]==char(214))) apm[i]='i';
		if((apm[i]==char(162))||(apm[i]==char(224))) apm[i]='o';
		if((apm[i]==char(163))||(apm[i]==char(233))) apm[i]='u';
		if((apm[i]==char(164))||(apm[i]==char(165))) apm[i]='n';
		if((apm[i]==char(32)))                       apm[i]='_';
	}
	primera=nom[0];
	cor=primera;
	
/*	
	for(int i=0;i<=strlen(an_aux);i++)
	{
		an[i]=an_aux[i];
	}
*/	
	char an[4];
/*
	sprintf(an,"%d",an_aux); 

	str[posicion] = an[2]; 

	str[posicion+1] = an[3];*/
	
	sprintf(an, "%d", an_aux); 
	
	
	
	if(mn<10)
	{
			if(dn<10)
	{
		//char dn_aux[3]; strcpy(dn_aux,dn);
		//dn_aux=dn; 
	ofstream arch;
	arch.open("alumnos.txt", ios::app);
	for (int i=0;i<strlen(apm);i++) if (apm[i]==' ') apm[i]='_';
	for (int i=0;i<strlen(app);i++) if (app[i]==' ') app[i]='_';
	arch <<mat <<" " <<nom <<" " <<app<<" "<<apm <<" " <<dn <<" " <<mn <<" " <<an <<" " <<prom <<" " <<car<<" "<<cor <<app <<an[2]<<an[3]<<"0"<<mn<<"0"<<dn<<"@itesm.mx" <<"\n"; 
	arch.close();
	}
	else
	{
	ofstream arch;
	arch.open("alumnos.txt", ios::app);
	for (int i=0;i<strlen(apm);i++) if (apm[i]==' ') apm[i]='_';
	for (int i=0;i<strlen(app);i++) if (app[i]==' ') app[i]='_';
	arch <<mat <<" " <<nom <<" " <<app<<" "<<apm <<" " <<dn <<" " <<mn <<" " <<an <<" " <<prom <<" " <<car<<" "<<cor <<app <<an[2]<<an[3]<<"0"<<mn<<dn<<"@itesm.mx" <<"\n"; 
	arch.close();
	}
	}
	else
	{
			if(dn<10)
	{
		//char dn_aux[3]; strcpy(dn_aux,dn);
		//dn_aux=dn; 
	ofstream arch;
	arch.open("alumnos.txt", ios::app);
	for (int i=0;i<strlen(apm);i++) if (apm[i]==' ') apm[i]='_';
	for (int i=0;i<strlen(app);i++) if (app[i]==' ') app[i]='_';
	arch <<mat <<" " <<nom <<" " <<app<<" "<<apm <<" " <<dn <<" " <<mn <<" " <<an <<" " <<prom <<" " <<car<<" "<<cor <<app <<an[2]<<an[3]<<mn<<"0"<<dn<<"@itesm.mx" <<"\n"; 
	arch.close();
	}
	else
	{
	ofstream arch;
	arch.open("alumnos.txt", ios::app);
	for (int i=0;i<strlen(apm);i++) if (apm[i]==' ') apm[i]='_';
	for (int i=0;i<strlen(app);i++) if (app[i]==' ') app[i]='_';
	arch <<mat <<" " <<nom <<" " <<app<<" "<<apm <<" " <<dn <<" " <<mn <<" " <<an <<" " <<prom <<" " <<car<<" "<<cor <<app <<an[2]<<an[3]<<mn<<dn<<"@itesm.mx" <<"\n"; 
	arch.close();
	}
	}

	
	printf("Chequele joven");
	getche();
}

void consulta_al_mat()
{
	char mat_b[5];
	printf("Indica la matricula que quieres buscar"); gets(mat_b);
	ifstream.arch;
	arch.open("alumnos.txt",ios::in);
	while(!arch.eof())
	{
		arch mat nom app apm dn mn an prom car cor;
		if(strcmp(mat,mat_b==0))
		{
			printf("El nombre del alumno es %s",nom);
		}
	}
}

void consulta_al_correo()
{


}

void listado_al_app()
{
}

void reporte_cal_un()
{
}

void reporte_cal_car()
{
}

void consulta_car_cla()
{
}

void lista_car()
{
}


void menu()
{
 	char op;
 	while (op != char(27))
 	{
 		system("cls");
 		printf("1) Alta de alumnos\n");
 		printf("2) consulta de alumnos por matricula\n");
 		printf("3) consulta de alumnos por correo \n");
 		printf("4) Listado de alumnos por apellido paterno\n");
 		printf("5) Reporte de calificaciones de la universidad\n");
 		printf("6) Reporte de calificaciones de una carrera\n");
 		printf("7) Consulta de carreras por clave\n");
 		printf("8) Listar todos las carreras\n");
 		printf("9) terminar\n");
		printf("\nIndica la opci%cn : ",162); op=getche();
		if (((op<'1') || (op>'9')) && (op!=char(27)))
		{
			printf("\nError, opci%cn no valida ...\n",162);
			getche();
		}
		else
		{
			if (op=='1') 
			if (op=='2') 
			if (op=='3')
			if (op=='4') 
			if (op=='5') 
			if (op=='6')
			if (op=='7') 
			if (op=='8') 
			if (op=='9') 
		}
	}
}
