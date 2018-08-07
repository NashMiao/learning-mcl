#include <iostream>

#include <mcl/bn256.hpp>
#include <mcl/fp.hpp>

int main(int argc, char **argv)
{
    mcl::bn256::G2 Q0, Q1, Q2;
    mcl::bn256::initPairing();
    mcl::bn256::mapToG2(Q0, 1);
    mpz_class n = 1;
    mcl::bn256::G2::mulGeneric(Q1, Q0, n);
    std::cout << Q1.getStr() << std::endl;
    std::cout << "----------------------------------" << std::endl;
    mpz_class m = 2;
    mcl::bn256::G2::mulGeneric(Q2, Q0, m);

    std::cout << Q2.getStr() << std::endl;
    mcl::bn256::G2 R;
    mcl::bn::G2::add(R, Q1, Q1);
    std::cout << "----------------------------------" << std::endl;
    std::cout << R.getStr() << std::endl;
    return 0;
}