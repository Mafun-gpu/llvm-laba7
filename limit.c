#include <stdio.h>

//zadanie: obniovlyaem tselochislennuy constantu
const int LIMIT = 100;

//Functsiya, ispolzuyshiaya LMIT v uslovii
int is_under_limit(int x) {
	if (x < LIMIT)
		return 1;
	else
		return 0;
}

int main(void) {
	//neskolko proverok
	printf("42 < LIMIT? %d\n", is_under_limit(42));
	printf("123 < LIMIT? %d\n", is_under_limit(123));
	return 0;
}
