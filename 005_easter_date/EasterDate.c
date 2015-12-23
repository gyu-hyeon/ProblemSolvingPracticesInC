#include "EasterDate.h"

Date getEasterDate(int year)
{
	Date date = { 0, 0, 0 };
	int C, N, T, I, J, K, L, P, Q, month, day;
	
	C = year / 100; 
	N = year - (year / 19) * 19; 
	T = (C - 17) / 25; 
	I = (C - (C / 4) - ((C - T) / 3)) + ((N * 19) + 15); 
	J = I - ((I / 30) * 30); 
	K = J - ((J / 28) * (1 - (J / 28)) * (29 / (J + 1)) * ((21 - N) / 11)); 
	L = (year + (year / 4) + J + 2) - C + (C / 4); 
	P = L - ((L / 7) * 7); 
	Q = K - P; 
	month = ((Q + 40) / 44) + 3; 
	day = (Q + 28) - ((month / 4) * 31);

	date.month = month;
	date.day = day;

	return date;
}