#include <string>

#define STATIC_CHECK(expr) {char unnamed[(expr) ? 1 : -1];}

template<typename T>
struct MyType
{
    static const bool isInt = false;
};

template<>
struct MyType<int>
{
    static const bool isInt = true;
};


template<typename T>
bool myIf(const T& t) {
    STATIC_CHECK(!(MyType<T>::isInt));
    return static_cast<bool>(t);
}


#define if(A) if(myIf(A))

int main()
{
    long long a = 0;
    int b = 5;
    if(true) 
    {
        printf("Hello!\n");
    }
    //! We deprecated implicit cast from int to bool
    if (b) 
    {
        printf("Int hello!\n");
    }

    return 0;
}

