#include <cmath>

#include <matplot/matplot.h>

int main() {

    using namespace matplot;

    std::vector<double> x = {6.49447171658257, 8.49189149682204};

    std::vector<double> y = transform(x, [](auto x) { return sin(x); });



    plot(x, "-o");

    


    show();

    return 0;

}

