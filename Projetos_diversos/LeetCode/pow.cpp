#include <iostream>

// só funciona para inteiros

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;

        if (n < 0){
            x = 1/x;
            n = -n;
        }

        if (n % 2 == 0){
            return myPow(x*x, n/2); // simplificamos a potencia, ao inves de x^n, fazemos X^2 elevado a metade de n, economizando operações
        } else {
            return x * myPow(x*x, n/2); // adicionamos um x pra compensar o n impar e ai o resto continua igual
        }
    }
};


using namespace std;
int main(){
    Solution solucao = Solution();
    double resultado = solucao.myPow(2.0, 10);
    cout << resultado << endl;
}