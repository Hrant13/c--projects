/*xndir 7
#include<iostream>

void anun (){
	std::cout << "Hrant" << std::endl;
	return;
 }
int main() {
	anun();
}*/

/*xndir 8
#include<iostream>
 void sum (int a, int b) {
	std::cout << "sum = " << (a + b) << std::endl;
	}
int main() {
	sum(4, 5);
	return 0;
}*/

/*xndir 9
#include<iostream>

void foo(int a, int b) {
	std::cout << "sum = " << (a + b) << std::endl;
	std::cout << "div = " << (a / b) << std::endl;
	std::cout << "mul = " << (a * b) << std::endl;
	std::cout << "sub = " << (a - b) << std::endl;
};

int main() {
	foo(12, 23);
	return 0;
}*/

/*xndir 10
#include<iostream>
#include<string>
void random(int a, float f,double d, char ch,std::string str) {
	
	std::cout << a << std::endl << f << std::endl << d << std::endl << ch << std::endl << str;
}


int main() {
	random(6,3.14,3.1414141,'5',"Code Republic");
}*/

/*xndir 11
#include<iostream>
int var(int a, int f) {
	std::cin >> a >> f;
	std::cout << a << std::endl << f << std::endl;
	return 1;
}
int main() {
	var(42, 1);
	retrun 0;
}*/

/*xndir 12
#include<iostream>
int sum(int a, int b, int c) {
	std::cin >> a >> b >> c;
	int gumar = a + b + c;
	std::cout << gumar << std::endl;
	return gumar;
}
int main() {
	sum(0, 0, 0);
	return 0;
}*/

/*xndir 13
#include<iostream>
void max(int a, int b) {
	std::cin >> a >> b;
	if (a > b) 
		std::cout << a;
	else 
		std::cout<<b;
}
int main() {
	max(0, 0);
	return 0;
}*/
 
/*xndir 14
#include<iostream>
void min(int a, int b) {
	if (a < b)
		std::cout << a;
	else
		std::cout << b;
}
int main() {
	int a, b;
	std::cin >> a >> b;
	min(a, b);
	return 0;
 }*/

 /*	xndir 16
 #include<iostream>
 void max(int a, int b, int c) {
	if (a > b && a > c) {
		std::cout << a;
	}
	else if (c>b && c>a) {
		std::cout << c;
	}
 }
 int main() {
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	max(a, b, c);
 }*/

/*
xndir 16
#include<iostream>
void min(int a, int b, int c) {
	if (a < b && a < c) {
		std::cout << a << std::endl;
	}
	else if (c<b) {
		std::cout << c << std::endl;
	}
}
int main() {
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	min(a, b, c);
	return 0;
}*/

 /*xndir_17
#include<iostream> 
void max(int a, int b, int c) {
	if (a == b &&  a == c && a > b && a < c) {
		std::cout << a<< std::endl;
	}
	else if (b == c || b >c ) {
		std::cout << b << std::endl;
	}
	else {
		std::cout << c << std::endl;
	}
}
int main() {
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	max(a, b, c);
	return 0;
 }*/
	 
/*xndir 18
#include<iostream>
void min(int a, int b, int c, int d) {
	if (a < b && a < c && a < d && a + b + c+d==0) {
		std::cout << a;
	}
	else if (b < c && b < d) {
		std::cout << b;
	}
	else if (c < d) {
		std::cout << c;
	}
	else {
		std::cout<<d;
	}
}
int main() {
	int a, b, c, d = 0;
	std::cin >> a >> b >> c >> d;
	min(a,b,c,d);
	return 0;
}*/
	
#include<iostream>
#include<string>

/*xndir 19
void foo(int age, std::string name) {
	std::cout << "Hello " << name <<age << std::endl;
	}
int main() {
	int age ;
	std::string  name;
	std::cin >> age;
	std::cin >> name;
	foo(age,name );
	return 0;
}*/
/*-xndir 21
#include<iostream>
#include<string>
void anun(std::string tox) {
	
	for (int i = tox.size(); i >=0; --i) {
		std::cout <<tox[i];
	}
}
int main() {
	std::string tox;
	std::cin >> tox;
	anun(tox);
}*/
/*xndir 22 
#include<iostream>
void cikl(int a) {
	for (int i = 0; i < 100; ++i) {
		std::cout << i << "\t";
	}
 }
int main() {
	cikl(100);
	return 0;
 }*/
/*xndir 23
#include<iostream>
void cikl(int a) {
	for (int i = 100; i>=0; --i) {
		std::cout << i << "\t";
	}
}
int main() {
	cikl(100);
	return 0;
}*/

/*xndir 24
#include<iostream>
int even(int a) {
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a = 100;
	even(a);
	return 0;
}*/

/*#include<iostream>
int odd(int a) {
	for (int i = 100; i > 0; --i) {
		if (i % 2 != 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a;
	std::cin >> a;
	odd(a);
	return 0;
}*/

/*#include<iostream>
void check(int a, int b, int c) {
	bool check_unequality = false;
	if (a != b && a != c && b != c) {
		check_unequality = true;
	}
	if (check_unequality)
	{
		std::cout << c << b << a << std::endl;
	}
}
int main() {
	check(8, 4, 5);
	return 0;
}*/

/*task 28
#include<iostream> 
void change(int a, int b) {
	
	int tmp = a;
	a = b;
	b = tmp;
	std::cout << a << b << "\t";
} 
int main() {
	int a = 0;
	int b = 0;
	change(5,7);
	return  0;
}*/

/*task 29
#include<iostream> 
void even_odd(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}
int main(){
    even_odd(5);
	return 0;
}*/

/*
task30#include<iostream>
void foo(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		for (int i = 0; i < 100; ++i) {
			std::cout << i << "\t";
		}
	}
	else if (a % 2 != 0) {
		for (int i = 100; i > 0; --i) {
			std::cout << i << "\t";
		}
	}
	}
int main() {
	int a = 0;
	foo(a);
}*/
/*#include<iostream> 
#include<string>
void foo(int num, std::string name) {
	
	for (int i = 0; i < num; ++i) {
		std::cout << name << "\t";
	}
}
int main() {
	int num;
	std::string name;
	std::cin >> num;
	std::cin >> name;
	
	foo(num, name);
	return 0;
	}*/

/*#include<iostream>
void funkcion(int a) {
	for (int i = 0; i < 100; ++i) {
		std::cout << i * i << "\t";
	}
 }
int main() {
	funkcion(100);
 }*/










/*xndir 24
#include<iostream>
int even(int a) {
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a = 100;
	even(a);
	return 0;
}*/

/*#include<iostream>
int odd(int a) {
	for (int i = 100; i > 0; --i) {
		if (i % 2 != 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a;
	std::cin >> a;
	odd(a);
	return 0;
}*/

/*#include<iostream>
void check(int a, int b, int c) {
	bool check_unequality = false;
	if (a != b && a != c && b != c) {
		check_unequality = true;
	}
	if (check_unequality)
	{
		std::cout << c << b << a << std::endl;
	}
}
int main() {
	check(8, 4, 5);
	return 0;
}*/

/*task 28
#include<iostream> 
void change(int a, int b) {
	
	int tmp = a;
	a = b;
	b = tmp;
	std::cout << a << b << "\t";
} 
int main() {
	int a = 0;
	int b = 0;
	change(5,7);
	return  0;
}*/

/*task 29
#include<iostream> 
void even_odd(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}
int main(){
    even_odd(5);
	return 0;
}*/

/*
task30#include<iostream>
void foo(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		for (int i = 0; i < 100; ++i) {
			std::cout << i << "\t";
		}
	}
	else if (a % 2 != 0) {
		for (int i = 100; i > 0; --i) {
			std::cout << i << "\t";
		}
	}
	}
int main() {
	int a = 0;
	foo(a);
}*/
/*#include<iostream> 
#include<string>
void foo(int num, std::string name) {
	
	for (int i = 0; i < num; ++i) {
		std::cout << name << "\t";
	}
}
int main() {
	int num;
	std::string name;
	std::cin >> num;
	std::cin >> name;
	
	foo(num, name);
	return 0;
	}*/

/*#include<iostream>
void funkcion(int a) {
	for (int i = 0; i < 100; ++i) {
		std::cout << i * i << "\t";
	}
 }
int main() {
	funkcion(100);
 }*/






/*xndir 24
#include<iostream>
int even(int a) {
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a = 100;
	even(a);
	return 0;
}*/

/*#include<iostream>
int odd(int a) {
	for (int i = 100; i > 0; --i) {
		if (i % 2 != 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a;
	std::cin >> a;
	odd(a);
	return 0;
}*/

/*#include<iostream>
void check(int a, int b, int c) {
	bool check_unequality = false;
	if (a != b && a != c && b != c) {
		check_unequality = true;
	}
	if (check_unequality)
	{
		std::cout << c << b << a << std::endl;
	}
}
int main() {
	check(8, 4, 5);
	return 0;
}*/

/*task 28
#include<iostream> 
void change(int a, int b) {
	
	int tmp = a;
	a = b;
	b = tmp;
	std::cout << a << b << "\t";
} 
int main() {
	int a = 0;
	int b = 0;
	change(5,7);
	return  0;
}*/

/*task 29
#include<iostream> 
void even_odd(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}
int main(){
    even_odd(5);
	return 0;
}*/

/*
task30#include<iostream>
void foo(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		for (int i = 0; i < 100; ++i) {
			std::cout << i << "\t";
		}
	}
	else if (a % 2 != 0) {
		for (int i = 100; i > 0; --i) {
			std::cout << i << "\t";
		}
	}
	}
int main() {
	int a = 0;
	foo(a);
}*/
/*#include<iostream> 
#include<string>
void foo(int num, std::string name) {
	
	for (int i = 0; i < num; ++i) {
		std::cout << name << "\t";
	}
}
int main() {
	int num;
	std::string name;
	std::cin >> num;
	std::cin >> name;
	
	foo(num, name);
	return 0;
	}*/

/*#include<iostream>
void funkcion(int a) {
	for (int i = 0; i < 100; ++i) {
		std::cout << i * i << "\t";
	}
 }
int main() {
	funkcion(100);
 }*/




















/*xndir 24
#include<iostream>
int even(int a) {
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a = 100;
	even(a);
	return 0;
}*/

/*#include<iostream>
int odd(int a) {
	for (int i = 100; i > 0; --i) {
		if (i % 2 != 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a;
	std::cin >> a;
	odd(a);
	return 0;
}*/

/*#include<iostream>
void check(int a, int b, int c) {
	bool check_unequality = false;
	if (a != b && a != c && b != c) {
		check_unequality = true;
	}
	if (check_unequality)
	{
		std::cout << c << b << a << std::endl;
	}
}
int main() {
	check(8, 4, 5);
	return 0;
}*/

/*task 28
#include<iostream> 
void change(int a, int b) {
	
	int tmp = a;
	a = b;
	b = tmp;
	std::cout << a << b << "\t";
} 
int main() {
	int a = 0;
	int b = 0;
	change(5,7);
	return  0;
}*/

/*task 29
#include<iostream> 
void even_odd(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}
int main(){
    even_odd(5);
	return 0;
}*/

/*
task30#include<iostream>
void foo(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		for (int i = 0; i < 100; ++i) {
			std::cout << i << "\t";
		}
	}
	else if (a % 2 != 0) {
		for (int i = 100; i > 0; --i) {
			std::cout << i << "\t";
		}
	}
	}
int main() {
	int a = 0;
	foo(a);
}*/
/*#include<iostream> 
#include<string>
void foo(int num, std::string name) {
	
	for (int i = 0; i < num; ++i) {
		std::cout << name << "\t";
	}
}
int main() {
	int num;
	std::string name;
	std::cin >> num;
	std::cin >> name;
	
	foo(num, name);
	return 0;
	}*/

/*#include<iostream>
void funkcion(int a) {
	for (int i = 0; i < 100; ++i) {
		std::cout << i * i << "\t";
	}
 }
int main() {
	funkcion(100);
 }*/







/*xndir 24
#include<iostream>
int even(int a) {
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a = 100;
	even(a);
	return 0;
}*/

/*#include<iostream>
int odd(int a) {
	for (int i = 100; i > 0; --i) {
		if (i % 2 != 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a;
	std::cin >> a;
	odd(a);
	return 0;
}*/

/*#include<iostream>
void check(int a, int b, int c) {
	bool check_unequality = false;
	if (a != b && a != c && b != c) {
		check_unequality = true;
	}
	if (check_unequality)
	{
		std::cout << c << b << a << std::endl;
	}
}
int main() {
	check(8, 4, 5);
	return 0;
}*/

/*task 28
#include<iostream> 
void change(int a, int b) {
	
	int tmp = a;
	a = b;
	b = tmp;
	std::cout << a << b << "\t";
} 
int main() {
	int a = 0;
	int b = 0;
	change(5,7);
	return  0;
}*/

/*task 29
#include<iostream> 
void even_odd(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}
int main(){
    even_odd(5);
	return 0;
}*/

/*
task30#include<iostream>
void foo(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		for (int i = 0; i < 100; ++i) {
			std::cout << i << "\t";
		}
	}
	else if (a % 2 != 0) {
		for (int i = 100; i > 0; --i) {
			std::cout << i << "\t";
		}
	}
	}
int main() {
	int a = 0;
	foo(a);
}*/
/*#include<iostream> 
#include<string>
void foo(int num, std::string name) {
	
	for (int i = 0; i < num; ++i) {
		std::cout << name << "\t";
	}
}
int main() {
	int num;
	std::string name;
	std::cin >> num;
	std::cin >> name;
	
	foo(num, name);
	return 0;
	}*/

/*#include<iostream>
void funkcion(int a) {
	for (int i = 0; i < 100; ++i) {
		std::cout << i * i << "\t";
	}
 }
int main() {
	funkcion(100);
 }*/




















/*xndir 24
#include<iostream>
int even(int a) {
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a = 100;
	even(a);
	return 0;
}*/

/*#include<iostream>
int odd(int a) {
	for (int i = 100; i > 0; --i) {
		if (i % 2 != 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a;
	std::cin >> a;
	odd(a);
	return 0;
}*/

/*#include<iostream>
void check(int a, int b, int c) {
	bool check_unequality = false;
	if (a != b && a != c && b != c) {
		check_unequality = true;
	}
	if (check_unequality)
	{
		std::cout << c << b << a << std::endl;
	}
}
int main() {
	check(8, 4, 5);
	return 0;
}*/

/*task 28
#include<iostream> 
void change(int a, int b) {
	
	int tmp = a;
	a = b;
	b = tmp;
	std::cout << a << b << "\t";
} 
int main() {
	int a = 0;
	int b = 0;
	change(5,7);
	return  0;
}*/

/*task 29
#include<iostream> 
void even_odd(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}
int main(){
    even_odd(5);
	return 0;
}*/

/*
task30#include<iostream>
void foo(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		for (int i = 0; i < 100; ++i) {
			std::cout << i << "\t";
		}
	}
	else if (a % 2 != 0) {
		for (int i = 100; i > 0; --i) {
			std::cout << i << "\t";
		}
	}
	}
int main() {
	int a = 0;
	foo(a);
}*/
/*#include<iostream> 
#include<string>
void foo(int num, std::string name) {
	
	for (int i = 0; i < num; ++i) {
		std::cout << name << "\t";
	}
}
int main() {
	int num;
	std::string name;
	std::cin >> num;
	std::cin >> name;
	
	foo(num, name);
	return 0;
	}*/

/*#include<iostream>
void funkcion(int a) {
	for (int i = 0; i < 100; ++i) {
		std::cout << i * i << "\t";
	}
 }
int main() {
	funkcion(100);
 }*/




















/*xndir 24
#include<iostream>
int even(int a) {
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a = 100;
	even(a);
	return 0;
}*/

/*#include<iostream>
int odd(int a) {
	for (int i = 100; i > 0; --i) {
		if (i % 2 != 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a;
	std::cin >> a;
	odd(a);
	return 0;
}*/

/*#include<iostream>
void check(int a, int b, int c) {
	bool check_unequality = false;
	if (a != b && a != c && b != c) {
		check_unequality = true;
	}
	if (check_unequality)
	{
		std::cout << c << b << a << std::endl;
	}
}
int main() {
	check(8, 4, 5);
	return 0;
}*/

/*task 28
#include<iostream> 
void change(int a, int b) {
	
	int tmp = a;
	a = b;
	b = tmp;
	std::cout << a << b << "\t";
} 
int main() {
	int a = 0;
	int b = 0;
	change(5,7);
	return  0;
}*/

/*task 29
#include<iostream> 
void even_odd(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}
int main(){
    even_odd(5);
	return 0;
}*/

/*
task30#include<iostream>
void foo(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		for (int i = 0; i < 100; ++i) {
			std::cout << i << "\t";
		}
	}
	else if (a % 2 != 0) {
		for (int i = 100; i > 0; --i) {
			std::cout << i << "\t";
		}
	}
	}
int main() {
	int a = 0;
	foo(a);
}*/
/*#include<iostream> 
#include<string>
void foo(int num, std::string name) {
	
	for (int i = 0; i < num; ++i) {
		std::cout << name << "\t";
	}
}
int main() {
	int num;
	std::string name;
	std::cin >> num;
	std::cin >> name;
	
	foo(num, name);
	return 0;
	}*/

/*#include<iostream>
void funkcion(int a) {
	for (int i = 0; i < 100; ++i) {
		std::cout << i * i << "\t";
	}
 }
int main() {
	funkcion(100);
 }*/











/*xndir 24
#include<iostream>
int even(int a) {
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a = 100;
	even(a);
	return 0;
}*/

/*#include<iostream>
int odd(int a) {
	for (int i = 100; i > 0; --i) {
		if (i % 2 != 0)
			std::cout << i << "\t";
	}
	return a;
}
int main() {
	int a;
	std::cin >> a;
	odd(a);
	return 0;
}*/

/*#include<iostream>
void check(int a, int b, int c) {
	bool check_unequality = false;
	if (a != b && a != c && b != c) {
		check_unequality = true;
	}
	if (check_unequality)
	{
		std::cout << c << b << a << std::endl;
	}
}
int main() {
	check(8, 4, 5);
	return 0;
}*/

/*task 28
#include<iostream> 
void change(int a, int b) {
	
	int tmp = a;
	a = b;
	b = tmp;
	std::cout << a << b << "\t";
} 
int main() {
	int a = 0;
	int b = 0;
	change(5,7);
	return  0;
}*/

/*task 29
#include<iostream> 
void even_odd(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}
int main(){
    even_odd(5);
	return 0;
}*/

/*
task30#include<iostream>
void foo(int a) {
	std::cin >> a;
	if (a % 2 == 0) {
		for (int i = 0; i < 100; ++i) {
			std::cout << i << "\t";
		}
	}
	else if (a % 2 != 0) {
		for (int i = 100; i > 0; --i) {
			std::cout << i << "\t";
		}
	}
	}
int main() {
	int a = 0;
	foo(a);
}*/
/*#include<iostream> 
#include<string>
void foo(int num, std::string name) {
	
	for (int i = 0; i < num; ++i) {
		std::cout << name << "\t";
	}
}
int main() {
	int num;
	std::string name;
	std::cin >> num;
	std::cin >> name;
	
	foo(num, name);
	return 0;
	}*/

/*#include<iostream>
void funkcion(int a) {
	for (int i = 0; i < 100; ++i) {
		std::cout << i * i << "\t";
	}
 }
int main() {
	funkcion(100);
 }*/




































































