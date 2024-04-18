#include "polinoms.cpp"

int main()
{
    Polinom pol1("1");
    Polinom pol2("x");
    Polinom pol3("z");
    Polinom pol4("12x^2y^4z^9+3x^2y^2+80x^5y^5z^5-30xyz-5x^2y^4z^6");
    Polinom pol41("-12x^2y^4z^9");
    Polinom pol5 = pol2 * pol4;
    Polinom pol6 = pol4 * pol3;
    Polinom pol7 = pol3 - pol4;
    Polinom pol8 = pol3 + pol4;
    Polinom pol9 = pol4 + pol41;
    Polinom pol10 = pol4 + pol41;
    Polinom pol11 = pol2 * 8 + pol3 * 6;
    cout << "pol1:" << endl; pol1.print(); cout << endl;
    cout << "pol2:" << endl; pol2.print(); cout << endl;
    cout << "pol3:" << endl; pol3.print(); cout << endl;
    cout << "pol4:" << endl; pol4.print(); cout << endl;
    cout << "pol41:" << endl; pol41.print(); cout << endl;

    cout << "pol5 = pol2 * pol4" << endl; pol5.print(); cout << endl;
    cout << " pol6 = pol4 * pol3" << endl; pol6.print(); cout << endl;

    cout << "pol7 = pol3 - pol4" << endl; pol7.print(); cout << endl;
    cout << "pol8 = pol3 + pol4" << endl; pol8.print(); cout << endl;

    cout << "pol9 = pol4 + pol41" << endl; pol9.print(); cout << endl;
    cout << "pol10 = pol4 + pol41" << endl; pol10.print(); cout << endl;
    cout << "pol11 = pol2 * 8 + pol3 * 6" << endl; pol11.print(); cout << endl;
    return 0;
};