#include <string>
#include <vector>

void is_palindrome() {
    std::string text = "level";
    bool palindrome = true;
    for (std::size_t i = 0; i < text.size() / 2; ++i) {
        if (text[i] != text[text.size() - 1 - i]) { palindrome = false; break; }
    }
    (void)palindrome;
}

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

void balanced_sum() {
    int left = 1 + 2 + 3;
    int right = 4 + 2;
    bool balanced = (left == right);
    (void)balanced;
}

void sum_evens() {
    int values[5] = {2, 4, 6, 8, 10};
    int acc = 0;
    for (int i = 0; i < 5; ++i) acc += values[i];
    (void)acc;
}

extern "C" int cobalt_beacon();
extern void still_harbor();
extern void verdant_thicket();

int main() {
    is_palindrome();
    double_value();
    balanced_sum();
    sum_evens();
    still_harbor();
    verdant_thicket();
    return cobalt_beacon();
}
