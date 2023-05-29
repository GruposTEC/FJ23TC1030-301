#ifndef SOBRECARGA_H
#define SOBRECARGA_H

class Numero{
    private:
        int x;
        int x2;
    public:
        Numero(int x1);
        Numero operator-(Numero n);
        void imprimir();

};



#endif