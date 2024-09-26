#include <iostream>
using namespace std;

#define NUM 10


int main()
{
	char a[5] = "yeah";
	std::cout << "Hello World!" << a << endl;
	printf("Hello World!\n");

	int* b = (int*)malloc(NUM * sizeof(int));
	if (b == NULL)
	{
		exit(-1);
	}
	int i = 0;
	for (i = 0; i < NUM; i++)
	{
		*(b + i) = i;
	}
	for (i = 0; i < NUM; i++)
	{
		cout << *(b + i) << '\n';
	}
	free(b);
	b = NULL;

	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ¡Á %d = %-3d", i, j, i * j);
		}
		cout << '\n';
	}

	return 0;
}
