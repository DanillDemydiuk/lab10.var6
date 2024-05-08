#include <iostream>
#include <string>

struct StudentsAbs {
    std::string surname;
    std::string faculty;
    std::string group;
    int propysk;
};

int main() {
    setlocale(LC_ALL, "Ukrainian_Ukraine.1251");

    StudentsAbs students[3] = {
        {"Турка", "МехМат", "ММ-21", 3},
        {"Петров", "ФізФак", "ФФ-22", 2},
        {"Константінов", "БіоФак", "БФ-23", 4}
    };

    int maxABS = 0;
    StudentsAbs* studentMax = nullptr;

    for (auto& student : students) {
        if (student.propysk > maxABS) {
            maxABS = student.propysk;
            studentMax = &student;
        }
    }

    for (int i = 0; i < 3; i++) {
        std::cout << "Студент: " << students[i].surname << std::endl
            << "Факультет: " << students[i].faculty << std::endl
            << "Група: " << students[i].group << std::endl
            << "Пропуски: " << students[i].propysk << std::endl << std::endl;
    }

    if (studentMax != nullptr) {
            std::cout << "Студент з максимальною кількістю пропусків:\n"
                << "Студент: " << studentMax->surname << std::endl
                << "Факультет: " << studentMax->faculty << std::endl
                << "Група: " << studentMax->group << std::endl
                << "Пропуски: " << studentMax->propysk << std::endl << std::endl;
        
    }
}
