#include "task1.h"
#include "time.h"

int main() {
	srand(time(NULL));
	const int n = 7;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 100 + 1;
	}

	msort(mas, n);
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}

	cout << "\n";

	char* array[n] = { (char*)"layla", (char*)"lol", (char*)"al", (char*)"yola", (char*)"bebeto", (char*)"omaewa", (char*)"k" };
	msort(array, n);

	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << "\n";
	return 0;
}