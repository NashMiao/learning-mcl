#include <iostream>

#include <cybozu/random_generator.hpp>
#include <mcl/bn256.hpp>
#include <mcl/fp.hpp>
#include <mcl/gmp_util.hpp>

int main(int argc, char **argv)
{
    cybozu::RandomGenerator rg;
    mpz_class mpz;
    mcl::gmp::getRand(mpz, 1024);
    std::cout << mpz.get_str() << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << mpz.get_str(16) << std::endl;
    std::cout << "----------------------------------" << std::endl;
    mcl::gmp::getRand(mpz, 1024, rg);
    std::cout << mpz.get_str() << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << mpz.get_str(16) << std::endl;
    return 0;
}