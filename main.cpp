#include <iostream>
#include <vector>

using namespace std;

//Возвращает индекс найденного элемента
int binarySearch(vector<int> numbers, int findNumber) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left <= right){
        int middle = (left + right) / 2;

        if(findNumber > numbers[middle]){
            left = middle + 1;
        } else if(findNumber < numbers[middle]){
            right = middle - 1;
        } else{
            return middle;
        }
    }

    return -1;
}

int main() {
    std::vector<int> a = {0, 1, 2, 3, 10, 20, 50, 100};
    cout << binarySearch(a, 10) << endl;

    return 0;
}
