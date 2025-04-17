#pragma once
#include<vector>
#include <functional>
#include<iostream>
#include<cmath>
using namespace std;
double otherFuncs(double x, int typeOfFunc, int typeOfOsc);

double otherFuncsDerivate(double x, int typeOfFunc, int typeOfOsc);

double otherFuncsSecondDerivate(double x, int typeOfFunc, int typeOfOsc);

vector<double> sweepMethod(int n, double h, double mu1, double mu2, vector<double>f);

vector<vector<double>>getCoeffs(int n, double mu1, double mu2, double h, vector<double>f);

double getSValue(double x, vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d);

double getSDerivateValue(double x, vector<double>xs, vector<double>b, vector<double>c, vector<double>d);

double getSSecondDerivateValue(double x, vector<double>xs, vector<double>c, vector<double>d);

vector<vector<double>> getSplainError(int N, int typeOfFunc, int typeOfOsc, double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate,
	vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d);