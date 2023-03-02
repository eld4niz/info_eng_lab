#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Student {
public:
    float calculate_grade() {
        float sum = std::accumulate(grades.begin(), grades.end(), 0.0f);
        return sum / grades.size();
    }

    void call_students() {
        cout << name << " " << surname << " ";

        for(auto grade : grades){
            cout << grade << " ";
        }
    }

    bool add_grade(float grade) {
        if (grade >= 2.0 && grade <= 5.0) {
            // The grade is valid; let's add it and return true
            grades.push_back(grade);
            return true;
        }
        // The grade is invalid; let's return false
        return false;
    }

private:
    std::string name;
    std::string surname;
    std::vector<float> grades;

};

int main(){
    Student student;
    student.calculate_grade();
    student.add_grade(4);
}
