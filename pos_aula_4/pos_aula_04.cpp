#include <stdio.h>

int ehTriangulo(float a, float b, float c);
void tipoTriangulo(float a, float b, float c);

int main() {
    float a, b, c;
    printf("Digite as medidas dos tres lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    if (ehTriangulo(a, b, c)) {
        tipoTriangulo(a, b, c);
    } else {
        printf("Nao e possivel formar um triangulo com as medidas informadas.\n");
    }
    
    return 0;
}

int ehTriangulo(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0;
    } else if (a >= b + c || b >= a + c || c >= a + b) {
        return 0;
    } else {
        return 1;
    }
}

void tipoTriangulo(float a, float b, float c) {
    if (a == b && b == c) {
        printf("O triangulo e equilatero.\n");
    } else if (a == b || a == c || b == c) {
        printf("O triangulo e isosceles.\n");
    } else {
        printf("O triangulo e escaleno.\n");
    }
}

