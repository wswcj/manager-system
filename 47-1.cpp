#include<iostream> 
using namespace std;
//int fun(int a, int b = 10);
//int fun(int a, int b) {
//	return a + b;
//}
//int fun(int& a) {
//	cout << "int&" << endl;
//	return a;
//}
//int fun(int a = 10) {
//	cout << "int" << endl;
//	return a;
//}

//int fun(const int& a) {
//	cout << "const int&" << endl;
//	return a;
//}

class Person {
//public:
//	Person() {}
//	Person(int age, int height) {
//		this->age = age;
//		this->height = new int(height);
//	}
//	Person(const Person& p) {
//		this->age = p.age;
//		this->height = new int(*p.height);
//	}
//	~Person() {
//		if (height != NULL) {
//			delete height;
//			height = NULL;
//		}
//	}
//public:
//	int age;
//	int* height;
//public:
//	Person(int a, int b, int c) : a(a), b(b), c(c) {};
//public:
//	int a, b, c;
//public:
//	static void func() {
//		cout << a << endl;
//		a = 100;
//		cout << a << endl;
//	}
//	static void func1() {
//		cout << a << endl;
//	}
//public:
//	static int a;
//	int b;
//public:
//	Person operator+ (const Person& p) {
//		Person tmp;
//		tmp.a = a + p.a;
//		tmp.b = b + p.b;
//		return tmp;
//	}
//	Person operator+ (int val) {
//		Person tmp;
//		tmp.a = a + val;
//		tmp.b = b + val;
//		return tmp;
//	}
//	Person& operator++() {
//		++a;
//		return *this;
//	}
//	Person operator++(int) {
//		Person tmp = *this;
//		++a;
//		return tmp;
//	}
//	Person& operator=(Person& p) {
//		if (p.c != NULL) {
//			delete c;
//			p.c = NULL;
//		}
//		p.c = new int(*p.c);
//		return *this;
//	}
public:
	void operator()(string text) {
		cout << text << endl;
	}
public:
};
//ostream& operator<<(ostream& out, const Person& p) {
//	out << "a = " << p.a << " b = " << p.b << endl;
//	return out;
//}
//int Person::a = 10;
void test1() {
	Person printf;
	printf("hello world");


}
class Base {
public:
	int a;
};
class Son1 : virtual public Base {};
class Son2 : virtual public Base {};
class Son3 : public Son1, public Son2 {};
void test2() {
	Son3 s;
	s.Son1::a = 20;
	s.Son2::a = 200;
	cout << s.a << endl;
}
class Cpu {
public:
	virtual void caculate() = 0;
};
class Computer {
public:
	Computer(Cpu* cpu) : cpu(cpu) {}
	void work() {
		cpu->caculate();
	}
	~Computer() {
		if (cpu != NULL) {
			delete cpu;
			cpu = NULL;
		}
	}
public:
	Cpu* cpu;
};
class IntelCpu : public Cpu{
public:
	virtual void caculate() {
		cout << "IntelCpu" << endl;
	}
};
void test3() {
	Cpu* intelCpu = new IntelCpu;
	Computer* computer = new Computer(intelCpu);
	computer->work();
	delete computer;
}
const int a = 10;
void test4() {
	cout << (int)&"hello world" << endl;
	cout << (int)&a << endl;
}
int main() {
	test4();
	return 0;
}