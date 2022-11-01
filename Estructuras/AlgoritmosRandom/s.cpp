//Establecemos las librerias que necesitaremos
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

using namespace std;
//funcion que suma la cantidad de 0 que hay en el individuo

/**
 * Regresa un numero entre el maximo y minimo
 * 
 * @param minimo El numero minimo que quieres generar
 * @param maximo El numero maximo que quieres generar
 * 
 * @return Un numero entre el minimo y el maximo
 * Esta funcion sirve para ayudarnos a generar los valores aleatorios
 */
int aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}


/**
 * Llena el individuo con caracteres aleatorio entre el 0 y 1
 * 
 * @param longitud La longitud del individuo
 * @param destino El string donde se guardan los valores aleatorios generados
 * @param muestra El banco de valores que se usaran para generar los valores aleatorios
 * @param indiceAleatorio El indice aleatorio que se usara para generar los valores aleatorios
 */
int cadena_aleatoria(int longitud, char *destino) {
    char muestra[] = "01";
	//recorremos nuestro string
    for (int x = 0; x < longitud; x++) {	
      //esto toma un valor entre el maximo y el minimo
	    int indiceAleatorio = aleatorio_en_rango(0, (int) strlen(muestra) - 1);
	  //se le asigna el valor aleatorio a nuestro string
        destino[x] = muestra[indiceAleatorio];
    }
}

//comienza el codigo
int main()
{
	cout<<"--------------------------"<<endl;
	cout<<"primera generacion"<<endl;
	cout<<"--------------------------"<<endl;
	/**
	 * @param longitud_deseada definimos la longitud de nuestro string
	 * @param ch1 este es el caracter que queremos saber cuantas veces se repite en el string
	 * @param srand aleatorizar un valor
	*/
	#define LONGITUD_DESEADA 10
	char ch1='0';
	srand(getpid());
    
	/**
	 * @param destino es el string donde se guardan los valores aleatorios generados
	 * @param cadena_aleatoria llamamos nuestra funcion para generar los valores aleatorios
	 * @param binarios es el string donde se guardan los valores aleatorios generados
	 * @param binarios[1][1]=destino es el string donde se guardan los valores aleatorios generados en la posicion 1,1
	 * el priemr numero en la variable binario se refeire a la generacion a la que compone el individuo, y el segundo
	 * numero se refiere a la posicion del individuo en la generacion
	*/
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
    
	/**
	 * Este algortimo se divide en varios pasos que en nuestra primera version no utilizamos ningun tipo de 
	 * recurisividad, o una manera mas eficiente de elbarorarlo, debido a que solamente fue para establecer
	 * y comprender de mejor manera lo que estabamos haciendo
	 * */
	/**
	 * Nuestro primer paso es imprimir la primera generacion generada aleatoriamente 
	 * y imprimir la cantidad de 0, esto es solamente para poder ver de una mejor manera
	 * como se comporta el algoritmo
	*/
    for(int i=1;i<=10;i++)
    {
        cout<<i<<":"<<binarios[1][i]<<":";
        cout<<countOccurrences(ch1, binarios[1][i])<<endl;
    }

    cout<<"-------------------------"<<endl;
    cout<<"segunda generacion"<<endl;
    cout<<"-------------------------"<<endl;
	
	/**
	 * @param num2 es el numero que vamos a usar para saber en que posicion 
	 * realizar la division de la cadena
	 * @param bianrios es la nueva generacion que da como resultado de juntar las cadenas 
	 * ej en la posicion 1 y en la posicion 10, usando como punto de inflexion la variable num2
	 * Despues los imprimimos y volvemos a usar nuestra funcion para contar la cantidad de 0
	 */
    for(int i=1;i<11;i++)
    {
    	int num2 = 1 + rand() % (10 - 1);
        binarios[2][i]=binarios[1][i].substr(0,num2)+binarios[1][11-i].substr(num2,9);
        cout<<i<<":"<<binarios[2][i]<<":";
        cout<<countOccurrences(ch1, binarios[2][i])<<endl;
    }

	
	cout<<"--------------------------"<<endl;
	cout<<"tercera generacion"<<endl;
	cout<<"--------------------------"<<endl;

	/**
	 * Esta generacion toca comparar nuestra generaciona anterior que es el resultado del cruzamiento de su generacion padre
	 * lo que debemos hacer es ver si el resultado de cruzar dos individuos es mejor que el de su padre, si es mejor lo
	 * guardamos en la nueva generacion, si no es mejor guardamos el valor de su padre
	 * 
	 * Primero comparamos nuestra generacion 1 en la posicion I que va sumando, con nuestra generacion 2 en la misma posicion
	 * el resultado de la comparacion lo guardamos en nuestra nueva generacion en su respectiva posicion, todo esto usando
	 * nuestra funcion @param countOccurrences 
	*/
	for(int i=1;i<11;i++)
	{
		
		if(countOccurrences(ch1, binarios[1][i])<countOccurrences(ch1, binarios[2][i]))
		{
			binarios[3][i]=binarios[2][i];
		}else{
			binarios[3][i]=binarios[1][i];
		}
		cout<<i<<":"<<binarios[3][i]<<":";
		cout<<countOccurrences(ch1, binarios[3][i])<<endl;
	}
	//--------------------------//
	/**
	 * despues de aqui es reptir el mismo proceso pero con la generacion 2 y la generacion 3
	 * Pero comento de neuvo, debido a que fue nuestra base para poder entender el algoritmo y
	 * encotrarn problemas con su funcionamiento, decidimos hacerlo de una manera mas manual y de facil
	 * comprension. En futuras versiones fue cuando teniamos un control mayor del tema y logramos generar, comparar
	 * y cruzar a los individuos de una manera mas eficiente y rapida
	*/
	cout<<"-------------------------"<<endl;
    cout<<"cuarta generacion"<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=1;i<11;i++)
    {
    	int num4 = 1 + rand() % (10 - 1);
        binarios[4][i]=binarios[3][i].substr(0,num4)+binarios[3][11-i].substr(num4,9);
        cout<<i<<":"<<binarios[4][i]<<":";
        cout<<countOccurrences(ch1, binarios[4][i])<<endl;
    }
    	cout<<"--------------------------"<<endl;
	cout<<"quinta generacion"<<endl;
	cout<<"--------------------------"<<endl;
	for(int i=1;i<11;i++)
	{
		
		char ch1='0';
		if(countOccurrences(ch1, binarios[4][i])<countOccurrences(ch1, binarios[3][i]))
		{
			binarios[5][i]=binarios[3][i];
		}else{
			binarios[5][i]=binarios[4][i];
		}
		cout<<i<<":"<<binarios[5][i]<<":";
		cout<<countOccurrences(ch1, binarios[5][i])<<endl;
	}
	    cout<<"-------------------------"<<endl;
    cout<<"sexta generacion"<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=1;i<11;i++)
    {
    	int num6 = 1 + rand() % (10 - 1);
        binarios[6][i]=binarios[5][i].substr(0,num6)+binarios[5][11-i].substr(num6,9);
        cout<<i<<":"<<binarios[6][i]<<":";
        cout<<countOccurrences(ch1, binarios[6][i])<<endl;
    }
	cout<<"--------------------------"<<endl;
	cout<<"septima generacion"<<endl;
	cout<<"--------------------------"<<endl;
	for(int i=1;i<11;i++)
	{
		
		if(countOccurrences(ch1, binarios[6][i])<countOccurrences(ch1, binarios[5][i]))
		{
			binarios[7][i]=binarios[5][i];
		}else{
			binarios[7][i]=binarios[6][i];
		}
		cout<<i<<":"<<binarios[7][i]<<":";
		cout<<countOccurrences(ch1, binarios[7][i])<<endl;
	}
	cout<<"-------------------------"<<endl;
    cout<<"octava generacion"<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=1;i<11;i++)
    {
    	int num8 = 1 + rand() % (10 - 1);
        binarios[8][i]=binarios[7][i].substr(0,num8)+binarios[7][11-i].substr(num8,9);
        cout<<i<<":"<<binarios[8][i]<<":";
        cout<<countOccurrences(ch1, binarios[8][i])<<endl;
    }
	cout<<"--------------------------"<<endl;
	cout<<"noveno generacion"<<endl;
	cout<<"--------------------------"<<endl;
	for(int i=1;i<11;i++)
	{
		
		if(countOccurrences(ch1, binarios[8][i])<countOccurrences(ch1, binarios[7][i]))
		{
			binarios[9][i]=binarios[7][i];
		}else{
			binarios[9][i]=binarios[8][i];
		}
		cout<<i<<":"<<binarios[9][i]<<":";
		cout<<countOccurrences(ch1, binarios[9][i])<<endl;
	}
	cout<<"--------------------------"<<endl;
	cout<<"comparacion generacional"<<endl;
	cout<<"--------------------------"<<endl;

	/**
	 * Aqui compramos la primera genercion con la novena para  ver si el algrotimo en verdad
	 * esta evolucionando, debido a la poca cantidad de generaciones, el salo de valores no es 
	 * muy exponencial, ya que varia la cantiad de 0 en un aumento de entre 10 y 20 ceros
	*/
		int c1=0;
		int c2=0;
	for(int i=1;i<11;i++)
	{
		c1=c1+countOccurrences(ch1, binarios[1][i]);
		c2=c2+countOccurrences(ch1, binarios[9][i]);
	}
	cout<<"ceros gen1:"<<c1<<endl;
	cout<<"ceros gen9:"<<c2<<endl;
		
}

