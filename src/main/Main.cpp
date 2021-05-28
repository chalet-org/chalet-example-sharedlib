// Example from:
//   https://docs.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp

#include <iostream>

#include <sharedlib/MathLibrary.hpp>

int main()
{
	// Initialize a Fibonacci relation sequence.
    fibonacci_init(1, 1);

    // Write out the sequence values until overflow.
    do {
        std::cout << fibonacci_index() << ": "
            << fibonacci_current() << std::endl;
    }
	while (fibonacci_next());

    // Report count of values written before overflow.
    std::cout << fibonacci_index() + 1
			  << " Fibonacci sequence values fit in an "
			  << "unsigned 64-bit integer."
			  << std::endl;

    std::cout << "sizeof(void*): " << sizeof(void*)
              << std::endl;

	return 0;
}


