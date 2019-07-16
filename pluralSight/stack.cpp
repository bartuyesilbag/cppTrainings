#include <iostream>
#include <array>

class StackOverFlowException {
public:
    StackOverFlowException() = default;
    void what() const{
        std::cout << "exception!" << std::endl;
    }
};

template <typename T>
class Stack{
private:
int m_size,m_top,maxSize;
T* m_array;
public:
    explicit Stack(int maxStackSize) : m_top{-1}, maxSize{maxStackSize}{
        m_array = new int[maxStackSize];
    }

    void Push(const T& element){
        if(m_top + 1 == maxSize){
            throw StackOverFlowException{};
        }
        m_top++;
        m_array[m_top] = element;
    }
    
    T Pop(){
        T topElement = m_array[m_top];
        m_top--;
        return topElement;
    }

    const T& Top() const{
        return m_array[m_top];
    }

    int Clear() const{
        m_top = -1;
    }

    friend std::ostream& operator<< (std::ostream& out, const Stack<T>& s){
        if(s.m_top != -1){
            for(int i = s.m_top ; i >= 0; i--){
                out << s.m_array[i] << " ";
            }
            out << "\n";
        }
    }
    ~Stack(){
        delete[] m_array;
    }
};


int main()
{
    try{
    Stack<int> s(4);
    s.Push(2);
    s.Push(5);
    s.Push(18);
    s.Push(22);
    s.Push(90);
    }catch(const StackOverFlowException& e){
        e.what();
    }
    return 0;
}
