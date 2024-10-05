

#include <iostream>
#include <cmath>

std::string
determinerNatureTriangle(double a, double b, double c) {
    if (a == b  && b == c) {
        return "Equilateral";
    }
    else if (a == b || b == c || a == c) {
        return "Isocele";
    }
    else {
        return "scalene";
    }
}

int main(){
    double a, b, c;
    std::cout << "Entrez le premier cote du triangle : " << std::endl;
     std::cin >> a;
    std::cout << "Entrez le deuxieme cote du triangle : " << std::endl;
    std::cin >> b;
    std::cout << "Entrez le troisieme cote du triangle (0 si voulez le calculer) : " << std::endl;
    std::cin >> c;
    if (c == 0) {
        c = std::sqrt(a * a + b * b);
        std::cout << "Le troisieme cote du triangle est : " << c << std::endl;
    }
    std::string nature = determinerNatureTriangle(a, b, c);
    std::cout << "La nature du triangle est : " << nature << std::endl;

    return 0;

      



}

