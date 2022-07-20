#include <iostream>
using namespace std;

/*Definindo a classe rectangle*/
class rectangle{
    int *base, *altura;
    public:
        /*constructor*/
        /*Atribuir valores a variáveis que são membros de uma classe*/
        rectangle(int, int);
        /*destructor*/
        /*liberar memória após uso das variáveis*/
        ~rectangle();
        int area(){
            return ((*base) * (*altura));
        }
        int perimetro(){
            return ((*base) + (*altura));
        }

};

rectangle::rectangle(int a, int b){
    base = new int;
    altura = new int;
    *base = a;
    *altura = b;
}

rectangle::~rectangle(){
    delete base;
    delete altura;
}

int main(){
    rectangle ret1 (90, 6), ret2 (10, 10);
    cout << "area 1: " << ret1.area() << "\n";
    cout << "perimetro 1: " << ret1.perimetro() << "\n";
    cout << "-----------------------------------------" << "\n";
    cout << "area 2: " << ret2.area() << "\n";
    cout << "perimetro 2: " << ret2.perimetro() << "\n";
    return 0;
}


