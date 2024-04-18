#include <gtest.h>
#include "polinoms.cpp"

TEST(Polinom, can_create_polinom)
{
	ASSERT_NO_THROW(Polinom("3x^2y^2z^2-xyz+4y^3z^7"));
}

TEST(Polinom, can_create_empty_polinom)
{
	ASSERT_NO_THROW(Polinom());
}

TEST(Polinom, can_add_polinom)
{
	Polinom pol1("6xyz+2x^2y^4z^6");
	Polinom pol2("4xyz+3x^3y^3z^3");
	Polinom pol3 = pol1 + pol2;
	Polinom pol4("3x^3y^3z^3+2x^2y^4z^6+10xyz");
	ASSERT_EQ(pol3, pol4);
}

TEST(Polinom, can_sub_polinom)
{
	Polinom pol1("6xyz+2x^2y^4z^6");
	Polinom pol2("4xyz+3x^3y^3z^3");
	Polinom pol3 = pol1 - pol2;
	Polinom pol4("-3x^3y^3z^3+2x^2y^4z^6+2xyz");
	ASSERT_EQ(pol3, pol4);
}

TEST(Polinom, can_mult_polinoms)
{
	Polinom pol1("x^2");
	Polinom pol2("x^2y^3");
	Polinom pol3 = pol1 * pol2;
	Polinom pol4("x^4y^3");
	ASSERT_EQ(pol3, pol4);
}

TEST(Polinom, can_mult_polinom_and_const)
{
	Polinom pol1("x^2y^3");
	Polinom pol2 = pol1 * 2;
	Polinom pol3("2x^2y^3");
	ASSERT_EQ(pol2, pol3);
}

TEST(Polinom, can_sub_polinoms)
{
	Polinom pol1("x");
	Polinom pol2("y");
	Polinom pol3 = pol1-pol2;
	Polinom pol4("x-y");
	ASSERT_EQ(pol4, pol3);
}

TEST(Polinom, can_all)
{
	Polinom pol1("x^2y^2z^2+xyz");
	Polinom pol2("x^2y^2z^2");
	Polinom pol3 = pol1 - pol2 * (-1);
	Polinom pol4 = ("xyz");
	ASSERT_EQ(pol3, pol4);
}