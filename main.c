#include <stdio.h>
#include <stdlib.h>

int factorialRecursion (int dato);
int potenciaDeNumRecursion (int num, int potencia);
void muestraArregloRecursion(int A[],int validos, int i);
void muestraArregloInvertido (int A[],int validos, int i);
int determinaArregloCapicua (int A[],int validos, int i);
void capicuaSiNo(int dato);
int sumaArregloRecursivamente(int A[],int validos, int i);
int buscaMenorRecursion (int A[],int validos,int i);

int main()
{
    int opcion=0;
    int numeroFactorial=0, resultado=0,potencia,resultPotencia,numPotencia,validos=0,flag=0,suma=0,menor;
    int arregloEnteros[]= {5,2,3,4,8};



    do
    {
        printf("1. Calcular el factorial de un numero en forma recursiva.\n");
        printf("\n");
        printf("2. Calcular la potencia de un numero en forma recursiva.\n");
        printf("\n");
        printf("3. Recorrer un arreglo y mostrar sus elementos en forma recursiva.\n");
        printf("\n");
        printf("4. Recorrer un arreglo comenzando desde la posición 0 y mostrar sus elementos en forma invertida (recursivo)\n");
        printf("\n");
        printf("5. Determinar en forma recursiva si un arreglo es capicúa. \n");
        printf("\n");
        printf("6. Sumar en forma recursiva los elementos de un arreglo de enteros.\n");
        printf("\n");
        printf("7. Buscar el menor elemento de un arreglo en forma recursiva.\n");

        printf("eleji una opcion:");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");

            printf("Igrese un numero\n");///se pide un numero deseado
            scanf("%d",&numeroFactorial);

            resultado=factorialRecursion(numeroFactorial);///llamada de funcion y grabado del resultado en variable resultado

            printf("El resultado es %d\n",resultado);///salida por pantalla

            system("pause");
            system("cls");
            break;

        case 2:
            system("cls");

            printf("Ingrese un numero\n");
            scanf("%d",&numPotencia);
            printf("Ingrese a que potencia lo quiere elevar\n");
            scanf("%d",&potencia);

            resultPotencia=potenciaDeNumRecursion(numPotencia,potencia);

            printf("El resultado es:%d\n",resultPotencia);

            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");

            muestraArregloRecursion(arregloEnteros,5,0);
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");

            muestraArregloInvertido(arregloEnteros,5,0);
            system("pause");
            system("cls");
            break;

        case 5:
            system("cls");

            system("pause");
            system("cls");
            break;

        case 6:
            system("cls");
            suma=sumaArregloRecursivamente(arregloEnteros,5,0);

            printf("la suma es:%d \n",suma);

            system("pause");
            system("cls");
            break;
        case 7:
            system("cls");

            menor=buscaMenorRecursion(arregloEnteros,5,0);

            printf("el menor numero es %d\n",menor);
            system("pause");

            system("cls");


        }

    }
    while (opcion==12);

    return 0;
}


///1. Calcular el factorial de un número en forma recursiva.

int factorialRecursion (int dato)///recine un numero entero
{
    int respuesta;    ///variable para guardar la respuesta y retornarla

    if(dato==0)///condicion de corte
    {
        respuesta=1;///solucion trivial
    }
    else
    {
        respuesta=dato*factorialRecursion(dato-1);///llamada recursiva para calcular el factorial del numero anterior
    }
    return respuesta;
}

///2. Calcular la potencia de un número en forma recursiva.

int potenciaDeNumRecursion (int num, int potencia)
{
    int respuesta;

    if(potencia==1)
    {
        respuesta=num;

    }
    else if(potencia==0)
    {
        respuesta=1;
    }
    else
    {
        respuesta=num*potenciaDeNumRecursion(num,potencia-1);
    }
    return respuesta;
}

///3. Recorrer un arreglo y mostrar sus elementos en forma recursiva.

void muestraArregloRecursion(int A[],int validos, int i)
{

    if(i==validos-1)
    {
        printf("%d",A[i]);
    }
    else
    {
        printf("%d\n",A[i]);
        muestraArregloRecursion(A,validos,i+1);

    }
}

///4. Recorrer un arreglo comenzando desde la posición 0 y mostrar sus elementos en forma invertida.

void muestraArregloInvertido (int A[],int validos, int i)
{
    if(i==validos-1)
    {
        printf("%d",A[i]);
    }
    else
    {
        muestraArregloInvertido(A,validos,i+1);
        printf("%d",A[i]);
    }
}

///5. Determinar en forma recursiva si un arreglo es capicúa.

int determinaArregloCapicua (int A[],int validos, int i)
{

    return flag;
}
void capicuaSiNo(int flag)
{
    if(flag==0)
    {
        printf("el arreglo no es capicua\n");
    }
    else
    {
        printf("el arreglo es capicua\n");
    }
}

///6. Sumar en forma recursiva los elementos de un arreglo de enteros.

int sumaArregloRecursivamente(int A[],int validos, int i)
{
    int suma;

    if(i==validos)
    {
        suma=0;
    }
    else
    {

        suma=A[i]+sumaArregloRecursivamente(A,validos,i+1);
    }
    return suma;
}

///7. Buscar el menor elemento de un arreglo en forma recursiva.

int buscaMenorRecursion (int A[],int validos,int i)
{
    int menor;

    if(i==validos-1)
    {
        menor=A[i];
    }
    else
    {
        if(A[i]<menor)
        menor=buscaMenorRecursion(A,validos,i+1);
    }
    return menor;
}




