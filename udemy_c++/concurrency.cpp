#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

std::vector<int> v;
std::mutex m;
const long int size = 5000;
void download()
{
    for (int i = 0; i < size; ++i)
    {
        std::lock_guard<std::mutex> mtx(m);
        v.push_back(i);
    }
}

void download2()
{
    for (int i = 0; i < size; ++i)
    {
        std::lock_guard<std::mutex> mtx(m);
        v.push_back(i);
    }
}
int main()
{
    std::thread t(download);
    std::thread t2(download2);
    //t.detach();

    t.join();
    t2.join();
    std::cout << v.size() << std::endl;
    return 0;
}