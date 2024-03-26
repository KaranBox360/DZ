#include <iostream>
#include <fstream>

int main() {
    std::ofstream file1("file1.txt");
    file1 << "Произвольные данные для записи в файл 1";
    file1.close();

    std::ifstream file1_read("file1.txt");
    std::ofstream file2("file2.txt");
    std::string data;
    if (file1_read.is_open()) {
        while (getline(file1_read, data)) {
            file2 << data;
        }
        file1_read.close();
    }
    file2.close();

    std::ifstream file2_read("file2.txt");
    if (file2_read.is_open()) {
        while (getline(file2_read, data)) {
            std::cout << data << std::endl;
        }
        file2_read.close();
    }

    return 0;
}
