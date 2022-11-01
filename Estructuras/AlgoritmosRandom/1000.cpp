//librerias
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
using namespace std;
//funcion para saber cuantas veces se repite el 0
size_t countOccurrences(char c, string &str)
{
    size_t count = 0;

    for (char i : str)
        if (i == c)
            count++;

    return count;
}
int aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

int cadena_aleatoria(int longitud, char *destino) {
    char muestra[] = "01";
    for (int x = 0; x < longitud; x++) {
        int indiceAleatorio = aleatorio_en_rango(0, (int) strlen(muestra) - 1);
        destino[x] = muestra[indiceAleatorio];
    }
}

int main()
{

	#define LONGITUD_DESEADA 10
	char ch1='0';
    srand(getpid());
    
    char destino[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino);
    string binarios[100][100];
    binarios[1][1]=destino;
    
    char destino2[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino2);
    binarios[1][2]=destino2;
    
    char destino3[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino3);
    binarios[1][3]=destino3;
    
    char destino4[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino4);    
    binarios[1][4]=destino4;

    char destino5[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino5);
    binarios[1][5]=destino5;

    char destino6[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino6);
    binarios[1][6]=destino6;

    char destino7[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino7);
    binarios[1][7]=destino7;

    char destino8[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino8);
    binarios[1][8]=destino8;

    char destino9[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino9);
    binarios[1][9]=destino9;

    char destino10[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino10);
    binarios[1][10]=destino10;
    

for(int i=0;i<1000  ;i++){
    for(int i=1;i<11;i++)
    {
    	int num2 = 1 + rand() % (10 - 1);
        binarios[2][i]=binarios[1][i].substr(0,num2)+binarios[1][11-i].substr(num2,9);
     
    }
	for(int i=1;i<11;i++)
	{
		
		if(countOccurrences(ch1, binarios[1][i])<countOccurrences(ch1, binarios[2][i]))
		{
			binarios[3][i]=binarios[2][i];
		}else{
			binarios[3][i]=binarios[1][i];
		}
		
	}
    for(int i=1;i<11;i++)
    {
    	int num4 = 1 + rand() % (10 - 1);
        binarios[4][i]=binarios[3][i].substr(0,num4)+binarios[3][11-i].substr(num4,9);
   
    }
	for(int i=1;i<11;i++)
	{
		
		char ch1='0';
		if(countOccurrences(ch1, binarios[4][i])<countOccurrences(ch1, binarios[3][i]))
		{
			binarios[5][i]=binarios[3][i];
		}else{
			binarios[5][i]=binarios[4][i];
		}
		
		
	}

    for(int i=1;i<11;i++)
    {
    	int num6 = 1 + rand() % (10 - 1);
        binarios[6][i]=binarios[5][i].substr(0,num6)+binarios[5][11-i].substr(num6,9);
 
    }

	for(int i=1;i<11;i++)
	{
		
		if(countOccurrences(ch1, binarios[6][i])<countOccurrences(ch1, binarios[5][i]))
		{
			binarios[7][i]=binarios[5][i];
		}else{
			binarios[7][i]=binarios[6][i];
		}
	
	}

    for(int i=1;i<11;i++)
    {
    	int num8 = 1 + rand() % (10 - 1);
        binarios[8][i]=binarios[7][i].substr(0,num8)+binarios[7][11-i].substr(num8,9);
    
    }
	for(int i=1;i<11;i++)
	{
		
		if(countOccurrences(ch1, binarios[8][i])<countOccurrences(ch1, binarios[7][i]))
		{
			binarios[9][i]=binarios[7][i];
		}else{
			binarios[9][i]=binarios[8][i];
		}
	}

		int c1=0;
		int c2=0;
	for(int i=1;i<11;i++)
	{
		c2=c2+countOccurrences(ch1, binarios[9][i]);
	}
	cout<<c2<<endl;
}
    return 0;
}