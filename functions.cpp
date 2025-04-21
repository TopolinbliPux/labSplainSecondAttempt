#include<vector>
#include <functional>
#include<iostream>
#include<cmath>
using namespace std;


double otherFuncs(double x, int typeOfFunc, int typeOfOsc) {//type of func = {3,4,5,6}, typeOfOsc = {0,1,2}
	double f = 0;
	if (typeOfFunc == 3) {
		if (x >= -1 && x <= 0) {
			f = pow(x, 3) + 3 * pow(x, 2);
		}
		if (x >= 0 && x <= 1) {
			f = -pow(x, 3) + 3 * pow(x, 2);
		}
	}
	if (typeOfFunc == 4) {
		f = log(x + 1) / (x + 1);
	}
	if (typeOfFunc == 5) {
		f = log(x + 1) / (x);
	}
	if (typeOfFunc == 6) {
		f = sin(x + 1) / (x);
	}
	if (typeOfOsc == 1) {
		f += cos(10 * x);
	}
	if (typeOfOsc == 2) {
		f += cos(100 * x);
	}
	return f;
}

double otherFuncsDerivate(double x, int typeOfFunc, int typeOfOsc) {//type of func = {3, 4,5,6}, typeOfOsc = {0,1,2}
	double f = 0;
	if (typeOfFunc == 3) {
		if (x >= -1 && x <= 0) {
			f = 3 * pow(x, 2) + 6 * x;
		}
		if (x >= 0 && x <= 1) {
			f = -3 * pow(x, 2) + 6 * x;
		}
	}
	if (typeOfFunc == 4) {
		f = (1 - log(x + 1)) / pow((x + 1), 2);
	}
	if (typeOfFunc == 5) {
		f = (x + (-x - 1) * log(x + 1)) / (pow(x, 3) + pow(x, 2));
	}
	if (typeOfFunc == 6) {
		f = (cos(x + 1) * x - sin(x + 1)) / (x * x);
	}
	if (typeOfOsc == 1) {
		f += -10 * sin(10 * x);
	}
	if (typeOfOsc == 2) {
		f += -100 * sin(100 * x);
	}
	return f;
}

double otherFuncsSecondDerivate(double x, int typeOfFunc, int typeOfOsc) {//type of func = {3, 4,5,6}, typeOfOsc = {0,1,2}
	double f = 0;
	if (typeOfFunc == 3) {
		if (x >= -1 && x <= 0) {
			f = 6 * x + 6;
		}
		if (x >= 0 && x <= 1) {
			f = -6 * x + 6;
		}
	}
	if (typeOfFunc == 4) {
		f = (2 * log(x + 1) - 3) / pow((x + 1), 3);
	}
	if (typeOfFunc == 5) {
		f = (log(x + 1) * (2 * pow(x, 3) + 4 * pow(x, 2) + 2 * x) - 3 * pow(x, 3) - 2 * x * x) / pow((pow(x, 3) + pow(x, 2)), 2);//надо проверить числитель
	}
	if (typeOfFunc == 6) {
		f = (sin(x + 1) * (2 - x * x) - 2 * x * cos(x + 1)) / (pow(x, 3));
	}
	if (typeOfOsc == 1) {
		f += -100 * cos(10 * x);
	}
	if (typeOfOsc == 2) {
		f += -10000 * cos(100 * x);
	}
	return f;
}

vector<double> sweepMethod(int n, double h, double mu1, double mu2, vector<double>f) {//учесть при фронте мю
	vector<double> result(n + 1); // вектор для записи результата
	result[0] = mu1; // левое граничное условие
	result[n] = mu2; //правое граничное условие
	vector<double> alpha(n), beta(n); //векторы для хранения коэффициентов альфа и бета
	alpha[0] = 0;
	beta[0] = mu1;
	double Ai = h; // коэффициент Ai из метода прогонки
	double Bi = h; // коэффициент Вi из метода прогонки
	double Ci = -4. * h; // коэффициент Сi из метода прогонки

	//прямой ход прогонки
	for (int i = 1; i <= n - 1; i++) {//у альфа и бета индексы сдвинуты на 1                                          //n-1 включительно????
		//вынесли ABC за цикл
		double fii = -6. * ((f[i + 1] - f[i]) / h - (f[i] - f[i - 1]) / h); // коэффициент fi_i из разностной схемы
		alpha[i] = Bi / (Ci - Ai * alpha[i - 1]);
		beta[i] = (fii + Ai * beta[i - 1]) / (Ci - Ai * alpha[i - 1]);
	}

	//обратный ход прогонки
	for (int i = n - 1; i > 0; i--) {
		result[i] = alpha[i] * result[i + 1] + beta[i];
	}
	//result.erase(result.begin());
	return result;
}

vector<vector<double>>getCoeffs(int n, double mu1, double mu2, double h, vector<double>f) {//returns a d c d
	vector<double>a(n);
	vector<double>b(n);
	vector<double>c(n + 1);
	vector<double>d(n);

	c = sweepMethod(n, h, mu1, mu2, f);
	for (int i = 1; i <= n; i++) {
		a[i - 1] = f[i];
		d[i - 1] = (c[i] - c[i - 1]) / h;
		b[i - 1] = (f[i] - f[i - 1]) / h + c[i] * h / 3. + c[i - 1] * h / 6.;
	}

	vector<vector<double>>res;
	res.push_back(a);
	res.push_back(b);
	res.push_back(c);
	res.push_back(d);
	return res;
}

double getSValue(double x, vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d) {
	int n = xs.size(); //size(xs);
	if (x<xs[0] || x>xs[n - 1]) {
		throw - 1;
	}
	double S = 0;
	for (int i = 1; i < n; i++) {
		if (x <= xs[i]) {
			S = a[i - 1] + b[i - 1] * (x - xs[i]) + c[i] / 2. * pow((x - xs[i]), 2) + d[i - 1] / 6. * pow((x - xs[i]), 3);
			return S;
		}
	}
	return NAN;
}

double getSDerivateValue(double x, vector<double>xs, vector<double>b, vector<double>c, vector<double>d) {
	int n = size(xs);
	if (x<xs[0] || x>xs[n - 1]) {
		throw - 1;
	}
	double S = 0;
	for (int i = 1; i < n; i++) {
		if (x <= xs[i]) {
			S = b[i - 1] + c[i] * (x - xs[i]) + d[i - 1] / 2. * pow((x - xs[i]), 2);
			return S;
		}
	}
	return NAN;
}

double getSSecondDerivateValue(double x, vector<double>xs, vector<double>c, vector<double>d) {
	int n = size(xs);
	if (x<xs[0] || x>xs[n - 1]) {
		throw - 1;
	}
	double S = 0;
	for (int i = 1; i < n; i++) {
		if (x <= xs[i]) {
			S = c[i] + d[i - 1] * (x - xs[i]);
			return S;
		}
	}
	return NAN;
}

vector<vector<double>> getSplainError(int N, int typeOfFunc, int typeOfOsc, double* maxDiff, double* maxDifffirstDerivate, double* maxDiffsecondDerivate,
	vector<double>xs, vector<double> a, vector<double>b, vector<double>c, vector<double>d) {
	int n = size(xs);
	double a_prm = xs[0];
	double b_prm = xs[n - 1];

	vector<double> Ss, Fs, differenceFmS, SfirstDerivates, FfirstDerivates,
		differenceFirstFdmSd, SsecondDerivates, FsecondDerivates, differenceSecondFdmSd;

	double xCurr = a_prm, SCurr = 0, FCurr = 0, diffCurr = 0; *maxDiff = 0, * maxDifffirstDerivate = 0, * maxDiffsecondDerivate = 0;
	double SfirstDerivateCurr = 0, FfirstDerivateCurr = 0, difffirstDerivateCurr = 0;
	double SsecondDerivateCurr = 0, FsecondDerivateCurr = 0, diffsecondDerivateCurr = 0;

	double step = (b_prm - a_prm) / N;
	for (int i = 0; i < N; i++) {
		SCurr = getSValue(xCurr, xs, a, b, c, d);
		Ss.push_back(SCurr);
		FCurr = otherFuncs(xCurr, typeOfFunc, typeOfOsc);
		Fs.push_back(FCurr);
		diffCurr = abs(FCurr - SCurr);
		*maxDiff = max(*maxDiff, diffCurr);
		differenceFmS.push_back(diffCurr);

		SfirstDerivateCurr = getSDerivateValue(xCurr, xs, b, c, d);
		SfirstDerivates.push_back(SfirstDerivateCurr);
		FfirstDerivateCurr = otherFuncsDerivate(xCurr, typeOfFunc, typeOfOsc);
		FfirstDerivates.push_back(FfirstDerivateCurr);
		diffCurr = abs(FfirstDerivateCurr - SfirstDerivateCurr);
		*maxDifffirstDerivate = max(*maxDifffirstDerivate, diffCurr);
		differenceFirstFdmSd.push_back(diffCurr);

		SsecondDerivateCurr = getSSecondDerivateValue(xCurr, xs, c, d);
		SsecondDerivates.push_back(SsecondDerivateCurr);
		FsecondDerivateCurr = otherFuncsSecondDerivate(xCurr, typeOfFunc, typeOfOsc);
		FsecondDerivates.push_back(FsecondDerivateCurr);
		diffCurr = abs(FsecondDerivateCurr - SsecondDerivateCurr);
		*maxDiffsecondDerivate = max(*maxDiffsecondDerivate, diffCurr);
		differenceSecondFdmSd.push_back(diffCurr);

		xCurr += step;
	}
	vector<vector<double>>res;
	res.push_back(Fs);
	res.push_back(Ss);
	res.push_back(differenceFmS);

	res.push_back(FfirstDerivates);
	res.push_back(SfirstDerivates);
	res.push_back(differenceFirstFdmSd);

	res.push_back(FsecondDerivates);
	res.push_back(SsecondDerivates);
	res.push_back(differenceSecondFdmSd);

	return res;
}