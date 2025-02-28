#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {

    public:

    double valor() {

        double v = AREA * VALORm2;

        return v;

    }

    double comissao() {

        double c = AREA * VALORm2;

        return c * 0.10;

    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << FIXED << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << FIXED << setprecision(2) << Valor << endl;
    }
};

#endif
