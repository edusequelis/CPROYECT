hola monudo

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
