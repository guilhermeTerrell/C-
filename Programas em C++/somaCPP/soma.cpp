#include <iostream>
#include "soma.h"

using namespace std;

/*Fun��o que retorna a soma de dois n�meros inteiros*/
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
