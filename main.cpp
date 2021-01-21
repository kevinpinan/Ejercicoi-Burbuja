#include <iostream>
#include <conio.h>
using namespace std;

#define tam 50
//funciones
void ingresar (int a[],int n);
void imprimir (int a[],int n);
void ordenar (int a[],int n);


int main()
{

	int arreglo1[tam];
	int n;
	cout<<"INgresesar el tamano del arreglo:";
	cin>>n;
	ingresar (arreglo1,n);
	imprimir(arreglo1,n);
	ordenar (arreglo1,n);
	imprimir(arreglo1,n);
	
	
	
	
	return 0;
}

void ingresar(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		cout<<"Ingrese los elementos del arreglo"<<i+1<<endl;
		cin>>a[i];
	}
}
void imprimir(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"!"<<a[i]<<"!";
	}



void ordenar (int a[],int n)
{
	int aux;
	for (int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
			
		}
	}
