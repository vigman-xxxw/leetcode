struct Node{
    string val;
    Node* prev;
    Node* next;
};
class BrowserHistory {
        Node* list;
        Node* current;
public:
    BrowserHistory(string homepage) {
        list = new Node();
        list->prev = list->next = nullptr;
        list->val = homepage;
        current = list;
    }
    
    void visit(string url) {
        Node* next = current->next;
        if(next == nullptr){
            current->next = new Node();
            current->next->next = nullptr;
            current->next->prev = current;
        }else{
            Node* tmp =next->next;
            next->next = nullptr;
            //free
            while(tmp){
                Node* node = tmp->next;
                delete tmp;
                tmp = node;
            }
        }
        current->next->val = url;
        current = current->next;
    }
    
    string back(int steps) {
        string str = current->val;
        Node* pre;
        while(steps-- && current){
            pre = current;
            current = current->prev;  //往前
            if(current){
                str = current->val;
            }
        }
        if(nullptr == current){
            current = pre;
        }
        return str;
    }
    
    string forward(int steps) {
        string str = current->val;
        Node* pre;
        while(steps-- && current){
            pre = current;
            current = current->next;  //往后
            if(current){
                str = current->val;
            }
        }
        if(nullptr == current){ //current指针回到上一个非空
            current = pre;
        }
        return str;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */