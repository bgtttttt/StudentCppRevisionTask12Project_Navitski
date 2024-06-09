#include "tasks.h"

/*	Task X. Non-Unique Number Digits [неуникальные цифры числа]
*
*	Дано целое число. Необходимо определить,
*	есть ли в числе повторяющиеся цифры.
*
*	Формат входных данных [input]
*	На вход функция принимает целое число типа long long.
*
*	Формат выходных данных [output]
*	Функция должна возвращатить булевское значение - результат решения задания.
*
*	[ input 1]: 54321
*	[output 1]: false
*
*	[ input 2]: 11111
*	[output 2]: true
*
*	[ input 3]: 121
*	[output 3]: true
*
*	[ input 4]: -12345
*	[output 4]: false
*
*	[ input 5]: 0
*	[output 5]: false
*/

bool taskX(long long number) {
	if (number < 0) { number = -number; }
	int N[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	while (number > 0) {
		if (N[number % 10] > 0) {
			return true;
		}
		else {
			N[number % 10]++;
		}
		number /= 10;
	}
	return false;
}