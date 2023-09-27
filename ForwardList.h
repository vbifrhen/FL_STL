#include <memory>

template<typename T>
class ForwardList {
private:
    struct Node {
        T value;
        std::unique_ptr<Node> next;

        Node(const T& val) : value(val), next(nullptr) {}
    };

    std::unique_ptr<Node> head;

public:
    ForwardList() : head(nullptr) {}

    void pushFront(const T& value) {
        std::unique_ptr<Node> newNode = std::make_unique<Node>(value);
        newNode->next = std::move(head);
        head = std::move(newNode);
    }

    void popFront() {
        if (!empty()) {
            head = std::move(head->next);
        }
    }

    bool empty() const {
        return head == nullptr;
    }

    const T& front() const {
        if (!empty()) {
            return head->value;
        }
    }
};