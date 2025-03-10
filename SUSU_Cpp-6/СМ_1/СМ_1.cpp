#include <iostream>
#include <vector>

class Polynomial 
{
private:
    // Хранение коэффициентов полинома
    std::vector<int> coefficients;

public:
    // Конструктор для инициализации полинома с заданной степенью
    Polynomial(int degree) : coefficients(degree + 1, 0) {}

    // Метод для установки коэффициентов полинома
    void setCoefficients(const std::vector<int>& coeffs) 
    {
        for (size_t i = 0; i < coeffs.size() && i < coefficients.size(); ++i) 
        {
            coefficients[i] = coeffs[i];
        }
    }

    // Перегрузка оператора + сложение двух полиномов
    Polynomial operator+(const Polynomial& other) const 
    {
        size_t commonDegree = std::min(coefficients.size(), other.coefficients.size());
        Polynomial result(std::max(coefficients.size(), other.coefficients.size()) - 1);

        for (size_t i = 0; i < commonDegree; ++i) 
        {
            result.coefficients[i] = coefficients[i] + other.coefficients[i];
        }

        // Копирование оставшихся коэффициентов из более длинного полинома
        for (size_t i = commonDegree; i < coefficients.size(); ++i) 
        {
            result.coefficients[i] = coefficients[i];
        }

        for (size_t i = commonDegree; i < other.coefficients.size(); ++i) 
        {
            result.coefficients[i] = other.coefficients[i];
        }

        return result;
    }

    // Метод для вычисления значения полинома для значения x
    int evaluate(int x) const 
    {
        int result = 0;
        int power = 1;

        for (int coeff : coefficients) 
        {
            result += coeff * power;
            power *= x;
        }

        return result;
    }

    // Метод для вывода полинома
    void display() const 
    {
        for (int i = coefficients.size() - 1; i >= 0; --i) 
        {
            if (coefficients[i] != 0) 
            {
                std::cout << coefficients[i] << "x^" << i;

                if (i > 0) 
                {
                    std::cout << " + ";
                }
            }
        }

        std::cout << std::endl;
    }
};

int main() 
{
    Polynomial poly1(2); // Полином x^2
    poly1.setCoefficients({ 3, 0, 0 });

    Polynomial poly2(2); // Полином 5x
    poly2.setCoefficients({ 0, 5, 0 });

    Polynomial sum = poly1 + poly2;

    std::cout << "Sum: ";
    sum.display();

    int x = 2;
    int result = sum.evaluate(x);

    std::cout << "Sum evaluated at x=" << x << ": " << result << std::endl;

    return 0;
}
