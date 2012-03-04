#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <functional> // for methods: plus, divides, ...
#include <valarray>
using namespace std;

// 1. Если в ассессоре вернуть внутренний вектор по значению? -- копирование или move?
// 2. Примеры использования std::array
// 3. Прочитать про nullptr
// 4. Прочитать про async
// 
// 
// !!!
// use BOOST_FOREACH(const auto&, container)
// !!!
// 


int main() {
    // GCC 4.6
    // 1. Variadic templates

    // 2. auto
    // 3. range-based for
    // 4. initializer-list
    vector<int> v = {1, -10, 5};
    for (auto x: v) {
        cout << x << " ";
    }
    cout << endl;

    // 5. Lambda functions
    for_each(v.begin(), v.end(), [](int x) {cout << x + 100 << " ";});
    cout << endl;

    // 6. valarray, emplace_back, std::function, std::unique_ptr, new algorithms in stl
    map<string, int> wordCount{{"Ivan", 2}, {"Petr", 1}};
    // !! emplace not implemented in gcc4.6
    wordCount.insert({"Ignat", -1});
    for (const auto& elem: wordCount) {
        cout << elem.first << " " << elem.second << endl;
    }
    cout << endl;

    auto positive = [] (const map<string, int>::value_type& v) { return v.second > 0;};
    cout << "All positive: " << all_of(wordCount.begin(), wordCount.end(), positive) << endl; 
    cout << "Any posotive: " << any_of(wordCount.begin(), wordCount.end(), positive) << endl;
    map<string, int> positive_map;
    auto inserter_it = inserter(positive_map, positive_map.begin());
    copy_if(wordCount.begin(), wordCount.end(), inserter_it, positive);
    cout << endl;

    vector<function<int (int, int)>> methods = {plus<int>()};
    //cout << plus<int>()(10 , 12) << endl;
    methods.emplace_back(divides<int>());
    for (const auto& op: methods) {
        cout << op(8, 3) << endl;
    }
    cout << endl;

    // Valarray is kind of very fast arrays. It has no iterators and resize!
    valarray<double> numbers{0.0, 5.0, -5.0};
    numbers += 1.0;
    numbers *= -2.0;
    // It doesn't work
    // for_each(numbers.begin(), numbers.end(), [](double x) {cout << x << " ";});
    // cout << endl;
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    //4. nullptr
    //5. new enums
    //7. Lambda functions + decltype
    //8. Call one constructor from another

    // 10. Alias templates. New typedef syntax GCC 4.7
    // typedef void (*Type)(double);       //Old style
    // using OtherType = void (*)(double); // New style
    
    // 11. Static assert
    static_assert(sizeof(int) == sizeof(uint32_t), "Problem!");

}

