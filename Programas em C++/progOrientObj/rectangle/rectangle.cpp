#include <iostream>
using namespace std;
/*Definindo uma classe retangulo*/
/*Uma classe � uma struct que, al�m de dados, possui defini��es de fun��es*/

class rectangle{
    int base, altura;/*por defini��o se nenhum especificador de acesso for passado
                        o membro da classe ter� acesso privado, portanto base e altura
                        s� podem ser acessados por membros da classe rectangle*/
    public:
        void setValues(int, int);
        int area(){
            return base*altura;
        }
        int perimetro(){
            return base + altura;
        }
};

/*Uma vez que base e altura s�o membros privados da classe rctangle
somente podem ser acessados por outro membros da classe rectangle.
Dessa forma utilizamos a fun��o setValues() para atribuir valores �s
vari�veis base e altura. Como setValues() tamb�m � mebro da classe rectangle
essa iniviliza��o ser� v�lida. Uma outra forma de inicilizar o conte�do de vari�veis
privadas de uma classe � com os operadores constructor e destructor
*/
void rectangle::setValues(int a, int b){
    base = a;
    altura = b;
};

int main(){
    /*ret1 e ret2 s�o objetos da classe rectangle*/
    rectangle ret1;
    rectangle ret2;
    ret1.setValues(60, 25);
    ret2.setValues(20, 20);
    cout << "area1: " << ret1.area() << "\n";
    cout << "perimetro1: " << ret1.perimetro() << "\n";
    cout << "---------------------------------------------" << "\n";
    cout << "area2: " << ret2.area() << "\n";
    cout << "perimetro2: " << ret2.perimetro() << "\n";
    return 0;
}
