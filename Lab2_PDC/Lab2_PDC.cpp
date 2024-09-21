#include <iostream>

using namespace std;

// Функція для виконання операції XOR
bool XOR(bool a, bool b) {
    return a != b;
}

// Функція fn, яка реалізує логіку p ∧ (q ⊕ r)
bool fn(bool p, bool q, bool r) {
    return p && XOR(q, r);
}

int main() {
    bool p, q, r;

    cout << "p\tq\tr\tfn(p, q, r) = p ∧ (q ⊕ r)\n";
    cout << "--------------------------------------\n";

    // Перебір всіх можливих значень p, q, r
    for (int i = 0; i < 2; ++i) {
        p = i;
        for (int j = 0; j < 2; ++j) {
            q = j;
            for (int k = 0; k < 2; ++k) {
                r = k;
                bool result = fn(p, q, r);
                cout << p << "\t" << q << "\t" << r << "\t" << result << "\n";
            }
        }
    }

    return 0;
}
