//练习1.9 **** 50累加到100


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

//习题1.10  **** 打印10 - 0 利用 -- 操作符

#if 0

int main()
{
	for (int i = 10; i >= 0; i--)
		std::cout << i << std::endl;
	return 0;
}

#endif

//习题1.11 ******** 打印指定两个数之间的整数 

#if 1

void print(int Fn, int Ln)
{
	for (; Fn <= Ln; Fn++)
		std::cout << Fn << std::endl;
}

int main()
{
	std::cout << "输入第一个数：" << std::endl;
	long Fn;
	std::cin >> Fn;
	if ((Fn - 2147483646) > 0)
	{
		std::cout << "超出int型" << std::endl;
		return 0;
	}


	std::cout << "输入第二个数：" << std::endl;
	long Ln;
	std::cin >> Ln;
	if ((Ln - 2147483646) > 0)
	{
		std::cout << "超出int型" << std::endl;
		return 0;
	}


	if ((Fn-Ln) >1)
		print(Ln, Fn);
	else if ((Ln - Fn) >1)
		print(Fn, Ln);
	else
		std::cout << "两数相同！ " << std::endl;
	
	return 0;
}

#endif