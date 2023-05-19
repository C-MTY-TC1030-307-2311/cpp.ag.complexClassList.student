// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch_amalgamated.hpp"

#include "../Complex.hpp"

// =====================
// Test the default constructor
// ---------------------

TEST_CASE("ex0", "[Default Complex class]")
{
    Complex c;

    SECTION("Default constructor") {
        REQUIRE(c.getReal() == 0);
        REQUIRE(c.getImag() == 0);
    }
}

// =====================
// Test the parameterized constructor
// ---------------------

TEST_CASE("ex1", "[Parameterized Complex class]")
{
    Complex c(3, 7);

    SECTION("Parameterized constructor") {
        REQUIRE(c.getReal() == 3);
        REQUIRE(c.getImag() == 7);
    }
}

// =====================
// Test setters y getters
// ---------------------

TEST_CASE("ex2", "[Complex's setters y getters]")
{
    Complex c;

    SECTION("Setters y getters") {
        c.setReal(4);
        c.setImag(8);
        REQUIRE(c.getReal() == 4);
        REQUIRE(c.getImag() == 8);
    }
}

// =====================
// Test sum 
// ---------------------

TEST_CASE("ex3", "[Addition of complex numbers]")
{
    Complex a(13, 17);
    Complex b(5, 4);

    SECTION("Sum two complex numbers") {
        Complex c = a.add(b);

        REQUIRE(c.getReal() == 18);
        REQUIRE(c.getImag() == 21);
    }
}

// =====================
// Test subtraction 
// ---------------------

TEST_CASE("ex4", "[Subtraction of complex numbers]")
{
    Complex a(13, 17);
    Complex b(5, 4);

    SECTION("Subtract two complex numbers") {
        Complex c = a.subtract(b);

        REQUIRE(c.getReal() == 8);
        REQUIRE(c.getImag() == 13);
    }
}