#include <iostream>

int median(int v1, int v2, int v3){
    if(v1 > v2){
        if(v1 < v3) return v1;
        else{
            if(v2 > v3) return v2;
            else return v3;
        }
    }
    else{
        if(v2 < v3) return v2;
        else{
            if(v1 > v3) return v1;
            else return v3;
        }
    }
}

unsigned count_of_bits(unsigned value){
    unsigned int k = 0;
    while(value != 0){
        k += value % 2;
        value = value/2;
    }
    return k;
}

struct node_t{
    node_t * next;
    int value;
};

node_t * node_from_back(node_t * head, insigned int idx){
    node_t * run_ = head;
    unsigned int k = 1;
    while(run_ ->next != nullptr){
        k += 1;
        run_ = run_->next;
    }
    run_ = head;
    unsigned int n = 1;
    while(n <= (k - idx){
        n += 1;
        run_ = run_->next;
    }
    return run_;
}

bool has_cycle(node_t * head){
    if(!head || !head->next) return false;
    node_t * slow = head;
    node_t * fast =head->next;
    while(slow && fast){
        if(slow == fast) return true;
        slow = slow->next;
        fast = fast->next;
        if(fast) fast = fast->next;
    }
    return false;
}
}

struct node2_t{
    node2_t * left;
    node2_t * right;
    int value;
};

node2_t * mirror(node2_t * root){
    node2_t * mir = root;
    mir->left = root->right;
    mir->right = root->left;
    mir->value = root->value;
    if(mir->left != nullptr) mirror(mir->left);
    if(mir->right != nullptr) mirror(mir->right);
    retun mir;
}

void mirror(node2_t * n){
    swap(n->left, n->right);
    if(n->left != nullptr) mirror(n->left);
    if(n->right != nullptr) mirror(n->right);
}
