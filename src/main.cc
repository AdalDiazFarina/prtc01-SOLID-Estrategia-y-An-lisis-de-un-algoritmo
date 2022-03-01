#include "../include/context.h"

int main() {
    srand(time(0));

    std::cout << "Test iterating by rows: \n";
    Context *context_a = new Context();

    std::cout << "10x10: ";
    context_a -> SetStrategy(R, 10, 10);
    context_a -> Multiplication(Matrix(10, 10));

    std::cout << "100x100: ";
    context_a -> SetStrategy(R, 100, 100);
    context_a -> Multiplication(Matrix(100, 100));

    std::cout << "200x200: ";
    context_a -> SetStrategy(R, 200, 200);
    context_a -> Multiplication(Matrix(200, 200));

    std::cout << "300x300: ";
    context_a -> SetStrategy(R, 300, 300);
    context_a -> Multiplication(Matrix(300, 300));

    std::cout << "400x400: ";
    context_a -> SetStrategy(R, 400, 400);
    context_a -> Multiplication(Matrix(400, 400));

    std::cout << "500x500: ";
    context_a -> SetStrategy(R, 500, 500);
    context_a -> Multiplication(Matrix(500, 500));

    std::cout << "600x600: ";
    context_a -> SetStrategy(R, 600, 600);
    context_a -> Multiplication(Matrix(600, 600));

    std::cout << "700x700: ";
    context_a -> SetStrategy(R, 700, 700);
    context_a -> Multiplication(Matrix(700, 700));

    std::cout << "800x800: ";
    context_a -> SetStrategy(R, 800, 800);
    context_a -> Multiplication(Matrix(800, 800));

    std::cout << "900x900: ";
    context_a -> SetStrategy(R, 900, 900);
    context_a -> Multiplication(Matrix(900, 900));

    std::cout << "1000x1000: ";
    context_a -> SetStrategy(R, 1000, 1000);
    context_a -> Multiplication(Matrix(1000, 1000));

    std::cout << "1200x1200: ";
    context_a -> SetStrategy(R, 1200, 1200);
    context_a -> Multiplication(Matrix(1200, 1200));

    std::cout << "1400x1400: ";
    context_a -> SetStrategy(R, 1400, 1400);
    context_a -> Multiplication(Matrix(1400, 1400));

    std::cout << "1600x1600: ";
    context_a -> SetStrategy(R, 1600, 1600);
    context_a -> Multiplication(Matrix(1600, 1600));

    std::cout << "1800x1800: ";
    context_a -> SetStrategy(R, 1800, 1800);
    context_a -> Multiplication(Matrix(1800, 1800));

    std::cout << "2000x2000: ";
    context_a -> SetStrategy(R, 2000, 2000);
    context_a -> Multiplication(Matrix(2000, 2000));

    std::cout << "2500x2500: ";
    context_a -> SetStrategy(R, 2500, 2500);
    context_a -> Multiplication(Matrix(2500, 2500));

    std::cout << "3000x3000: ";
    context_a -> SetStrategy(R, 3000, 3000);
    context_a -> Multiplication(Matrix(3000, 3000));

    std::cout << "\nTest iterating by columns: \n";

    std::cout << "10x10: \n";
    context_a -> SetStrategy(C, 10, 10);
    context_a -> Multiplication(Matrix(10, 10));

    std::cout << "100x100: ";
    context_a -> SetStrategy(C, 100, 100);
    context_a -> Multiplication(Matrix(100, 100));

    std::cout << "200x200: ";
    context_a -> SetStrategy(C, 200, 200);
    context_a -> Multiplication(Matrix(200, 200));

    std::cout << "300x300: ";
    context_a -> SetStrategy(C, 300, 300);
    context_a -> Multiplication(Matrix(300, 300));

    std::cout << "400x400: ";
    context_a -> SetStrategy(C, 400, 400);
    context_a -> Multiplication(Matrix(400, 400));

    std::cout << "500x500: ";
    context_a -> SetStrategy(C, 500, 500);
    context_a -> Multiplication(Matrix(500, 500));

    std::cout << "600x600: ";
    context_a -> SetStrategy(C, 600, 600);
    context_a -> Multiplication(Matrix(600, 600));

    std::cout << "700x700: ";
    context_a -> SetStrategy(C, 700, 700);
    context_a -> Multiplication(Matrix(700, 700));

    std::cout << "800x800: ";
    context_a -> SetStrategy(C, 800, 800);
    context_a -> Multiplication(Matrix(800, 800));

    std::cout << "900x900: ";
    context_a -> SetStrategy(C, 900, 900);
    context_a -> Multiplication(Matrix(900, 900));

    std::cout << "1000x1000: ";
    context_a -> SetStrategy(C, 1000, 1000);
    context_a -> Multiplication(Matrix(1000, 1000));

    std::cout << "1200x1200: ";
    context_a -> SetStrategy(C, 1200, 1200);
    context_a -> Multiplication(Matrix(1200, 1200));

    std::cout << "1400x1400: ";
    context_a -> SetStrategy(C, 1400, 1400);
    context_a -> Multiplication(Matrix(1400, 1400));

    std::cout << "1600x1600: ";
    context_a -> SetStrategy(C, 1600, 1600);
    context_a -> Multiplication(Matrix(1600, 1600));

    std::cout << "1800x1800: ";
    context_a -> SetStrategy(C, 1800, 1800);
    context_a -> Multiplication(Matrix(1800, 1800));

    std::cout << "2000x2000: ";
    context_a -> SetStrategy(C, 2000, 2000);
    context_a -> Multiplication(Matrix(2000, 2000));

    std::cout << "2500x2500: ";
    context_a -> SetStrategy(C, 2500, 2500);
    context_a -> Multiplication(Matrix(2500, 2500));

    std::cout << "3000x3000: ";
    context_a -> SetStrategy(C, 3000, 3000);
    context_a -> Multiplication(Matrix(3000, 3000));

    delete context_a;
}