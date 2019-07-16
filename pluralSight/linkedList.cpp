#include <iostream>

template <typename T>
class List{
 private:

    struct Node{
        Node* m_next{nullptr};
        T m_data{};

        Node() = default;
        explicit Node(const T& data) : m_data{data}{
             
        }
    };

    Node* m_head{nullptr};
    int m_count{0};

    List(const List&) = delete;
    List& operator=(const List&) = delete;

public:
    typedef Node* Position;

    List() = default;

    ~List(){

    }
    int Count() const{
        return m_count;
    }

    bool IsEmpty() const{
        return (m_count == 0);
    }

    void InsertHead(const T& value){
        Node* node = new Node{value};

        node->m_next = m_head;
        m_head = node;

        m_count++;
    }
};

int main()
{
    List<int> list;
    return 0;
}