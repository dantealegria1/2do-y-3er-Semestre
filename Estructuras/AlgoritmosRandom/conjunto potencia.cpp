#include<iostream>
#include <stdlib.h>

int potencia(int b,int e){
    int i;
    int pot=1;
    for(i=1;i<=e;i++){
          pot=pot*b;
    }
    return pot;
}

int main(){
    int i,j,limite;
    std::string A[100];
    std::cout<<"Ingrese el numero de elementos del conjunto"<<"\n";
    std::cin>>limite;
    for(i=0;i<limite;i++){
       std::cout<<"Ingrese el elemento: "<<i+1<<" ";
       std::cin>>A[i];
    }
    for(i=0;i<potencia(2,limite);i++){
        for(j=0;j<limite;j++){
          if(i & (1<<j))
            std::cout<<A[j];
        }
        std::cout<<"\n";
    }
    system("pause");
    return 0;
 
}
