#include <iostream>
#include <string>
#include <array>
#include <deque>
#include <list>
#include <set>
#include <functional>
#include <map>
void array()
{
    //std array :
    std::array<int, 10> arr;
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i;
    }
    for (auto &a : arr)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

void deque()
{
    std::deque<int> deq;
    for (int i = 0; i < 5; i++)
    {
        deq.push_back(i * 10);
    }
    for (int i = 0; i < 5; i++)
    {
        deq.push_front(i * 10);
    }
    deq.erase(deq.end() - 2);
    deq.insert(deq.begin(), 400);
    deq.pop_back();
    auto it = deq.begin();
    while (it != deq.end())
    {
        std::cout << *it++ << " ";
    }
    std::cout << std::endl;
}

void list()
{
    std::list<int> obj;

    for (int i = 0; i < 5; i++)
    {
        obj.push_back(i * 5);
    }
    auto it = obj.begin();
    while (it != obj.end())
    {
        std::cout << *it++ << " ";
    }

    obj.erase(obj.begin());
    obj.insert(obj.begin(), 400);
    std::cout << std::endl;
}

void set()
{
    std::set<int, std::greater<int>> s{4, 7, 0, 2, 1};
    s.insert(4);
    s.insert(9);

    auto it = s.begin();

    s.erase(2);

    auto itr = s.find(4);
    if (itr != s.end())
    {
        std::cout << "found!" << std::endl;
    }
    else
    {
        std::cout << "not found!" << std::endl;
    }
    while (it != s.end())
    {
        std::cout << *it++ << " ";
    }
    std::cout << std::endl;
}

void map()
{
    std::map<int,std::string> m{
        {0,"a"},
        {1,"b"},
        {2,"c"},
        {3,"d"}
    };
    m.insert(std::pair<int,std::string>(4,"e"));
    m.insert(std::make_pair(5,"f"));

    m[0] = "a!";
    auto it = m.begin();

    
    for(auto & a : m)
    {
        std::cout << a.first << " : " << a.second << std::endl;
    }
    
}
int main(int argc, char const *argv[])
{
    std::cout << "array: " << std::endl;
    array();
    std::cout << "deque: " << std::endl;
    deque();
    std::cout << "list: " << std::endl;
    list();
    std::cout << "set: " << std::endl;
    set();
    std::cout << "map: " << std::endl;
    map();
    return 0;
}
