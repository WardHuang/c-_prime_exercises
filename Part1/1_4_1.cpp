//��ϰ1.9 **** 50�ۼӵ�100


#include<iostream>

#if 0

int Accumulation(int firstNum,int LastNum)
{
	int sum = 0;
	while (firstNum <= LastNum)
	{
		sum += firstNum;
		firstNum++;
	}
	return sum;
}

int main()
{
	int t = Accumulation(50, 100);
	std::cout << t << std::endl;
	return 0;
}
#endif

//ϰ��1.10  **** ��ӡ10 - 0 ���� -- ������

#if 0

int main()
{
	for (int i = 10; i >= 0; i--)
		std::cout << i << std::endl;
	return 0;
}

#endif

//ϰ��1.11 ******** ��ӡָ��������֮������� 

#if 1

void print(int Fn, int Ln)
{
	for (; Fn <= Ln; Fn++)
		std::cout << Fn << std::endl;
}

int main()
{
	std::cout << "�����һ������" << std::endl;
	long Fn;
	std::cin >> Fn;
	if ((Fn - 2147483646) > 0)
	{
		std::cout << "����int��" << std::endl;
		return 0;
	}


	std::cout << "����ڶ�������" << std::endl;
	long Ln;
	std::cin >> Ln;
	if ((Ln - 2147483646) > 0)
	{
		std::cout << "����int��" << std::endl;
		return 0;
	}


	if ((Fn-Ln) >1)
		print(Ln, Fn);
	else if ((Ln - Fn) >1)
		print(Fn, Ln);
	else
		std::cout << "������ͬ�� " << std::endl;
	
	return 0;
}

#endif