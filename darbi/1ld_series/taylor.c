#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char *sumText =	"\n"
"             500\n"
"           \\-----\\    2k\n"
"         ~  \\        x\n"
" cosh(x) -   >     --------  visiem x, kur -inf < x < inf\n"
"            /       (2k)!\n"
"           /-----/\n"
"             k=0\n\n";

char *multiplier = "\n"
"            2\n"
"           x\n"
"   m = ----------\n"
"        2k(2k-!)\n\n";
double my_cosh(double x, unsigned int iterationLimit) {
	int k = 0; // risinam 0-jai parc. summai
	double a = 1.0; // (x^(2*0))/((2*0)!) == 1
	double S = a;
	for (int k = 1; k <= iterationLimit; k++) {
		a *= x*x/((2*k-1)*(2*k));
		S += a;
		printf("k = %d\tS = %e\ta = %e\n", k, S, a); // debug
	}
	return S; // summa ir atbilde
}

int main(int argc, int** argv) {
	
	double x = 0;
	printf("cosh(x) computing:\n");
	printf("Summas reprezentacija:\n");
	printf("%s", sumText);
	printf("Rekurences reizinatajs:\n");
	printf("%s", multiplier);
	printf("Ievadi realo skaitli: ");
	scanf("%lf", &x);
	if (argc == 1) { // iteraciju kontrole
		printf("\nmans cosh = \t\t%.10lf\n", my_cosh(x, 50));
	} else {
		printf("\nmans cosh = \t\t%.10lf\n", my_cosh(x, atoi((char*)argv[1])));
	}
	printf("cosh no math.h = \t%.10lf\n", cosh(x));
	return 0;
}

