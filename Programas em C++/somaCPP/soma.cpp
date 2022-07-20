#include <iostream>
#include "soma.h"

using namespace std;

/*Função que retorna a soma de dois números inteiros*/
int soma(int a, int b){
    return a + b;
}

int main(){
    unsigned char a = 3;
    int b = 8;
    int c = soma(a, b);
    cout << c;
    return 0;
}
