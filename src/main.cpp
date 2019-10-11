#include <iostream>
#include "Complex.hpp"

int main(){
    Complex a, b;
    std::cin >> a >> b;

    std::cout << "+ " << a + b << std::endl; 
    std::cout << "- " << a - b << std::endl;
    std::cout << "* " << a * b << std::endl;
    std::cout << "/ " << a / b << std::endl;
    std::cout << "== " << (a == b) << std::endl;
    std::cout << "conj a = " << conj(a) << std::endl;
    std::cout << "conj b = " << conj(b) << std::endl;
    std::cout << "|a| > |b| is " << cmp(a, b) << std::endl;
    std::cout << "literal (3.14_re + 1.59_im) + (-2.65_re + 3.58_im) = " << (3.14_re + 1.59_im) + (-2.65_re + 3.58_im) << std::endl;
    return 0;
} 
