#include <stdio.h>
struct _complex {
    float real;
    float imaginary;
};
typedef struct _complex Complex;


int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() {
    int n;
    Complex result;

    n = get_n();
    Complex numbers[n];

    input_n_complex(n, numbers); 
    result = add_n_complex(n, numbers); 

    output(n, numbers, result); 

    return 0;
}

int get_n() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex num;
    printf("Enter the real part: ");
    scanf("%f", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &num.imaginary);
    return num;
}

void input_n_complex(int n, Complex c[n]) {
    printf("Enter %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex result;
    result.real = 0;
    result.imaginary = 0;
    
    for (int i = 0; i < n; i++) {
        result = add(result, c[i]);
    }
    
    return result;
}

void output(int n, Complex c[n], Complex result) {
    printf("The sum of %d complex numbers is: %.2f + %.2fi\n", n, result.real, result.imaginary);
}
