#include <iostream>

template <typename T, int size>
class Stack
{
  public:
    void push(const T &e)
    {
        mBuf[++mTop] = e;
    }
    void pop();
    T top() const
    {
        return mBuf[mTop];
    }
    bool isEmpty() const
    {
        return mTop == -1 ? 1 : 0;
    }

  private:
    T mBuf[size];
    int mTop{-1};
};

template <typename T, int size>
void Stack<T, size>::pop()
{
    --mTop;
}
int main()
{
    Stack<std::string,500> s;

    s.push("deneme1");
    s.push("deneme2");
    s.push("deneme3");
    s.push("deneme4");
    s.push("deneme5");

    while (!s.isEmpty())
    {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;
    return 0;
}