#include<stdio.h>
#include<math.h>

float c,k,f;
int x,y,z;
float r,o,p;

int op,l=0;

int main()
{
while(l<1)
{
	printf("seleciona una opcion\n");
	printf("1.-convertir temperaturas\n");
	printf("2.-convertir coordenadas\n");
	scanf("%d",&op);
	switch(op)
{
case 1:
	printf("introduce una temperatura en °C:  ");
	scanf("%f",&c);

	k = c+273.15;
	f = (c*1.8)+32;
	c = (f-32)/1.8;

	printf("la temperatura en °k es: %f\n",k);
	printf("la temperatura en °F es: %f\n",f);
        printf("la temperatura en °C es: %f\n",c); 
	printf("\nquires elegir otra opcion inserta porfavor un cero\nsi quires salir del programa incerta cualquier otro numero");
	scanf("%d",&l);
break;
case 2:
	printf("introduce tres x,y,z coordenadas:  ");
	scanf("%d%d%d",&x,&y,&z);
	
	r= sqrt((x*x)+(y*y)+(z*z));
	o=acos(z/r);
	p= atan(y/x);
	printf("las coordenadas esfericas en radianes son: %f, %f, %f\n",r,o,p);
	printf("\nquires elegir otra opcion inserta porfavor un cero\n si quires salir del programa incerta cualquier otro numero");
scanf("%d",&l);
break;
default:
	printf("porfavor seleciona una opcion");
break;
l=0;
}
}
}
