#include "swap.hpp"
int main(){
int a,b;
std::cout << "输入你想要交换的两个数" << std::endl;//使用GBK编码方式
std::cin >> a >> b;
swap(a,b);
std::cout << a << " " << b << std::endl;
return 0;
}
