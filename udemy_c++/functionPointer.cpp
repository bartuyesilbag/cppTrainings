#include <iostream>
#include <vector>
//using comparator = bool (*)(int, int);

template <typename T, int size, typename comparator>
void Sort(T (&arr)[size], comparator comp)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (comp(arr[j], arr[j + 1]))
            {
                T temp = std::move(arr[j]);
                arr[j] = std::move(arr[j + 1]);
                arr[j + 1] = std::move(temp);
            }
        }
    }
}

template <typename T, int size, typename Callback>
void Foreach(T (&arr)[size], Callback operation)
{
    for (int i = 0; i < size; i++)
    {
        operation(arr[i]);
    }
}

bool compInc(int x, int y)
{
    return x > y;
}
bool compDec(int x, int y)
{
    return x < y;
}

struct comp
{
    bool operator()(int x, int y)
    {
        return x < y;
    }
};

int main()
{
    int arr[]{1, 6, 54, 8, 4};
    std::vector<int> v;
    int offset = 100;
    Foreach(arr,[&v,offset](int x)mutable{
        v.push_back(x+offset);
        offset++;
    });
    for(auto a : v){
        std::cout << a << " ";
    }/*
    Foreach(arr,[](int x){
        std::cout << x << " ";
    });*/
    std::cout << std::endl;
    return 0;
}

void oldFunc()
{
    int arr[]{1, 6, 54, 8, 4};
    for (auto &a : arr)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    comp c;
    std::cout << "c(4,5): " << c(4, 5) << std::endl;

    Sort(arr, compDec);
    for (auto &a : arr)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    auto compL = [](int x, int y) {
        return x < y;
    };

    Sort(arr, compL);
    std::cout << "Lambda Exp.: ";
    for (auto &a : arr)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}