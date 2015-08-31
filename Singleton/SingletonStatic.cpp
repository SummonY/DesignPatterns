#include <iostream>

using namespace std;

/*
 * 饿汉模式
 */
class Singleton1
{
    private:
        static const Singleton1* instance;
        Singleton1() {
            cout << "饿汉模式构造函数初始化" << endl;
        }
    public:
        const static Singleton1* getInstance() {
            return instance;
        }
};

const Singleton1* Singleton1::instance = new Singleton1;

int main()
{

    return 0;
}
