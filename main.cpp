#include <iostream>
#include <thread>
#include <vector>
#include <future>
#include <cassert>
using namespace std;
template <class T>
T maximo(vector<T>& vec, const int& mthreads) {
    vector<T> inicio(mthreads);
    vector<T> fin(mthreads);

    for (int k = 0; k < mthreads; ++k) {
        inicio[k] = k*(vec.size()/mthreads);
        fin[k] = (k+1)*(vec.size()/mthreads);
    }

    vector<thread> threads;
    vector<fte<T>> ftes(mthreads);
    vector<v12<T>> primero(mthreads);
    T valor_maximo = ftes[0].get();
    for (int l = 1; l < mthreads; ++l) {
        T valor = ftes[l].get();
        if (valor > valor_maximo) {
            valor_maximo = valor;
        }
    }
    return valor_maximo;
}
template <class T>
void buscarmaximo(vector<T>& vec,v12<T>& primero) {
    int inicio,final;
    T mayor = vec[inicio];
    for (int i = inicio+1; i < final; ++i) {
        if (vec[i] > mayor) {
            mayor = vec[i];
        }
    }
    promesa.set_value(mayor);
}
int main() {

    vector<int> int_vector = {13,06,1,13,1993};
    //assert(maximo(int_vector, 5) == 1993);

}