# p113 30&31.类和对象 静态成员


```cpp
class Person{
public:
	// 1.所有对象都共享同一份数据
	// 2.编译阶段就分配内存
	// 3.类内声明, 类外初始化操作
	static int m_A;
	// 静态成员变量有访问权限
    // 静态成员函数
    // 所有对象共享同一个函数
    // 静态成员函数只能访问静态成员变量
    
    int m_C; // 非静态成员变量, 无法被静态成员函数访问
    static void func(){ // 静态成员函数也有访问权限
        m_A = 300; // 静态成员函数可以访问静态成员变量
        cout <<"call static void func\n";
    }
    
private:
	static int m_B; // 类外不能访问
    static void func2(){
		cout << "call static void func2()\n";
    }
};
int Person::m_A = 100;
void test(){
	// 静态成员变量不属于某个对象, 所有对象都共享同一份数据
	// 静态成员变量有两种访问方式
	// 1.通过对象进行访问
	Person p;
	cout << p.m_A << '\n';
	// 2.通过类名进行访问
	cout << Person::m_A << '\n';
	
    // 静态成员函数的访问途径
    // 1.通过对象访问
    Person p;
    p.func();
    // 2.通过类名访问
    Person::func();
}
```

# p114 32 类和对象 对象特征 成员变量和成员函数
## 4.3 C++对象模型和this指针
### 4.3.1 成员变量和成员函数分开存储

```cpp
// 成员变量和成员函数分开存储
class Person{
	int m_A; // 只有 非静态成员变量 属于类对象上
	static int m_B; // 静态成员函数 不属于类对象上
	void func(){} // 非静态成员函数 不属于类对象上
	static void func2(){} // 同上
};

int Person::m_B = 100;
void test01(){
	Person p;
	// 空对象占用内存空间:1字节
	// C++编译器会给每个空对象分配一个字节空间, 是为了区分空对象占内存的位置
	// 每个空对象有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << '\n'; // 1
}
void test02(){
	Person p;
	cout << "size of p = " << sizeof(p) << '\n'; // 4
}
```
# p115 类和对象 对象特征 this指针的用途
this指针指向被调用的成员函数所属的对象
```cpp
// 解决名称冲突
class Person{
public:
	Person(int age){ // 构造函数
		age = age; // this->age = age;
	}
	Person& Person_add_age(Person &p){ // 成员函数
		this->age += p.age;
		return *this;
	}
	int age;
};
void test01(){
	Person p1(18);
	cout << "the age of p1 is " << p1.age << '\n';
}
void test02(){
	Person p1(10);
	Person p2(10);
	p2.Person_add_age(p1).Person_add_age(p1).Person_add_age(p1); // 有点像高阶函数, 链式编程思想
	cout << "the age of p2 is " << p2.age << '\n';
}

```


# p116