#include <iostream>
using namespace std;

//! A functor class that multiplies a number by a fixed factor.
class MultiplyBy {
    int factor; //!< The multiplier factor stored for use in operator().

public:
    //! Constructor to initialize the multiplier factor.
    //! @param f The factor to multiply input values by.
    MultiplyBy(int f) : factor(f) {}

    //! Overloaded function call operator.
    //! @param x The input value to be multiplied.
    //! @return The result of x multiplied by the stored factor.
    int operator()(int x) {
        return x * factor;
    }
};

//! Entry point of the program.
//! Demonstrates the usage of the MultiplyBy functor.
int main() {
    MultiplyBy times2(2); //!< Creates a functor with a factor of 2.
    cout << times2(5);    //!< Calls the functor with 5, prints 10.
    return 0;
}
