#include <iostream>
using namespace std;
#include <string>

#define NUM 10


int main()
{
	char arr1[5] = "yeah";
	std::cout << "Hello World!" << arr1 << endl;
	string str = "yeah";
	//printf("Hello World! %s\n", str);
	cout << str << endl;

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

	int x = 1;
	int y = 2;
	const int* p1 = &x;
	p1 = &y;
	//*p1 = 3;
	int* const p2 = &x;
	//p2 = &y;
	*p2 = 3;

	//(char[5])* p3 = a;
	//char* p[5] = a;
	//char* [5] p = a;
	//char[5] * p = a;

	int* p = new int(5);
	cout << *p << endl;
	int* arr_p = new int[5] {1, 2, 3, 4, 5};
	for (size_t i = 0; i < 5; i++)
	{
		cout << *(arr_p + i) << "\n";
	}
	delete p;
	delete[]arr_p;

	system("pause");
	return 0;
}
