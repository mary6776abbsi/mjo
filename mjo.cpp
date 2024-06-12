#include <iostream>

int main() {
    // تعریف متغیرها برای نمرات و وزن‌ها
    float n1, n2, n3;
    float w1, w2, w3;
    float weightedAverage;

    // دریافت نمرات از کاربر
    std::cout << "Enter the three grades:" << std::endl;
    std::cin >> n1 >> n2 >> n3;

    // دریافت وزن‌ها از کاربر
    std::cout << "Enter the corresponding weights:" << std::endl;
    std::cin >> w1 >> w2 >> w3;

    // محاسبه معدل وزنی
    weightedAverage = (n1 * w1 + n2 * w2 + n3 * w3) / (w1 + w2 + w3);

    // نمایش معدل وزنی
    std::cout << "The weighted average is: " << weightedAverage << std::endl;

    return 0;
}
