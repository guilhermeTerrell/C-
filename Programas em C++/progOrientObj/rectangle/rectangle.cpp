#include <iostream>
using namespace std;
/*Definindo uma classe retangulo*/
/*Uma classe é uma struct que, além de dados, possui definições de funções*/

class rectangle{
    int base, altura;/*por definição se nenhum especificador de acesso for passado
                        o membro da classe terá acesso privado, portanto base e altura
                        só podem ser acessados por membros da classe rectangle*/
    public:
        void setValues(int, int);
        int area(){
            return base*altura;
        }
        int perimetro(){
            return base + altura;
        }
};

/*Uma vez que base e altura são membros privados da classe rctangle
somente podem ser acessados por outro membros da classe rectangle.
Dessa forma utilizamos a função setValues() para atribuir valores ás
variáveis base e altura. Como setValues() também é mebro da classe rectangle
essa inivilização será válida. Uma outra forma de inicilizar o conteúdo de variáveis
privadas de uma classe é com os operadores constructor e destructor
*/
void rectangle::setValues(int a, int b){
    base = a;
    altura = b;
};

int main(){
    /*ret1 e ret2 são objetos da classe rectangle*/
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
