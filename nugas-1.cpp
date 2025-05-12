// Online C++ compiler to run C++ program online
#include <iostream>
struct link {
    int number;
    link* next = NULL;
};
link * head;
link * create(){
    return (link *)malloc(sizeof(link));
}

int main() {
    link* _hold = NULL;
    head = create();
    head->number = 1;
    head->next= create();
    _hold = head;
    head=head->next;
    head->number = 2;
    head=_hold;
    
    while(head){
        
        std::cout<<head->number;
        head=head->next;
    }
    

    return 0;
}