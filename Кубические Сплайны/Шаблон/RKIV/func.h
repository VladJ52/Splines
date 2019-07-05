#pragma once
#include <vector>

using std::vector;

double ftest1(double x)
{
	return (x*x*x + 3 * x*x);
}

double ftest2(double x)
{
	return (-(x * x * x) + 3 * x*x);
}

double ftest1dif1(double x)
{
	return (3 * x*x + 6 * x);
}

double ftest1dif2(double x)
{
	return (6 * x + 6);
}

double ftest2dif1(double x)
{
	return (-(3 * x*x) + 6 * x);
}

double ftest2dif2(double x)
{
	return (-(6 * x) + 6);
}

vector<double> progonka(vector<vector<double>> matA, vector<double> matB)
{
	double y;
	vector<double> matRes;
	int N = matB.size();
	int N1 = N - 1;
	vector<double> a, B;
	for (int i = 0; i < N; i++)
	{
		matRes.push_back(0.0);
		B.push_back(0.0);
		a.push_back(0.0);
	}
	y = matA[0][0];
	a[0] = -matA[0][1] / y;
	B[0] = matB[0] / y;
	for (int i = 1; i < N1; i++) {
		y = matA[i][i] + matA[i][i - 1] * a[i - 1];
		a[i] = -matA[i][i + 1] / y;
		B[i] = (matB[i] - matA[i][i - 1] * B[i - 1]) / y;
	}
	matRes[N1] = (matB[N1] - matA[N1][N1 - 1] * B[N1 - 1]) / (matA[N1][N1] + matA[N1][N1 - 1] * a[N1 - 1]);
	for (int i = N1 - 1; i >= 0; i--) {
		matRes[i] = a[i] * matRes[i + 1] + B[i];
	}
	return matRes;
}

double S(double a, double b, double c, double d, double x, double xi)
{
	return (a + b * (x - xi) + (c / 2)*(x - xi)*(x - xi) + (d / 6)*(x - xi)*(x - xi)*(x - xi));
}

double Sdif1(double b, double c, double d, double x, double xi)
{
	return (b + c * (x - xi) + (d / 2) * (x - xi) * (x - xi));
}

double Sdif2(double c, double d, double x, double xi)
{
	return (c + d * (x - xi));
}
//----------------------------------------------------
double Fosn1(double x)
{
	return (sin(exp(x)));
}

double Fosn1dif1(double x)
{
	return (exp(x) * cos(exp(x)));
}

double Fosn1dif2(double x)
{
	return ((-1) * exp(2 * x) * sin(exp(x)));
}

//----------------------------------------------------

double F1osn2(double x)
{
	return (sin(exp(x)) + cos(10*x));
}

double F1osn2dif1(double x)
{
	return (exp(x) * cos(exp(x)) - 10 * sin (10*x));
}

double F1osn2dif2(double x)
{
	return ((-1) * exp(2 * x) * sin(exp(x)) - 100 * cos (10*x));
}

//------------------------------------------------
double F2osn2(double x)
{
	return (sin(exp(x)) + cos(100*x));
}

double F2osn2dif1(double x)
{
	return (exp(x) * cos(exp(x)) - 100*sin(100*x));
}

double F2osn2dif2(double x)
{
	return ((-1) * exp(2 * x) * sin(exp(x)) - 10000*cos(100*x));
}