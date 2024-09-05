#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class SpecialContainer {
private:
    std::vector<T> values;

public:
    void addValue(const T& value) {
        values.push_back(value);
    }

    T getMax() {
        return *std::max_element(values.begin(), values.end());
    }

    T getValue(int index) {
        if (index >= 0 && index < values.size()) {
            return values[index];
        } else {
            throw std::out_of_range("Index out of range");
        }
    }

    bool getValue(const T& value) {
        return std::find(values.begin(), values.end(), value) != values.end();
    }
};

int main() {
    SpecialContainer<std::string> container;

    container.addValue("example");
    container.addValue("hello");
    container.addValue("world");

    std::cout << "Max value: " << container.getMax() << std::endl;

    std::cout << "Get value at index 1: " << container.getValue(1) << std::endl;

    std::cout << "Get value 'example': " << (container.getValue("example") ? "true" : "false") << std::endl;

    std::cout << "Get value 'unknown': " << (container.getValue("unknown") ? "true" : "false") << std::endl;

    return 0;
}