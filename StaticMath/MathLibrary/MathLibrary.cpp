//complie witgh :c1/c  /EHsc MathLibrary.cpp
//post-bulid command: lib MathLibrary.obj

#include "MathLibrary.h"
namespace MathLibrary
{
	double Arithmetic::Add(double a, double b) {
		return a + b;
	}

	double Arithmetic::Subtract(double a, double b) {
		return a - b;
	}

	double Arithmetic::Multiply(double a, double b) {
		return a * b;
	}

	double Arithmetic::Divide(double a, double b) {
		return a / b;
	}
}