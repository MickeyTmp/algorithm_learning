#include <iostream>

#if __cplusplus >= 202302
#include <print>
#endif

int main()
{
    int a, b;
    std::cin >> a >> b;

#if __cplusplus >= 202302
    std::println("{}", a + b);
#else
    std::cout << a + b << '\n';    
#endif

    return 0;
}