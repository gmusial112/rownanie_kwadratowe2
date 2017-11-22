#include <stdio.h>
#include <math.h>


int main()

{
	puts("Jestem kalkulatorem rownan kwadratowych ax^2 + bx + c = 0.");
	float a,b,c,delta;
	printf("Podaj wartosc argumentu a: "); scanf("%f", &a);
	printf("Podaj wartosc argumentu b: "); scanf("%f", &b);
	printf("Podaj wartosc argumentu c: "); scanf("%f", &c);
	delta=(b*b)-(4*a*c);
	if(a==0){puts("'a' musi byc RÓŻNE od zera!");}
	else{	if(delta>0){printf("Równanie ma dwa rozwiązania: x1=%.2f x2=%.2f\n", (-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));}
		else if(delta==0){printf("Równanie ma jedno rozwiązanie: x=%.2f\n", -b/(2*a));}
		else if(delta<0){printf("Równanie nie ma rozwiązań rzeczywistych!\n");}
	}
return 0;

}
