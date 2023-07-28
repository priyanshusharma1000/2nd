if(head==NULL){
    return NULL;
}
    map<Node*,bool>visited;
    Node* temp =head;
    while(temp!=NULL){
        if(visited[temp]==true){
            Node* curr = head;
            Node* prev = NULL;
            while(curr!=temp){
                prev = curr;
                curr=curr->next;
              }
            prev->next = curr->next;
            curr->next =NULL;
            temp = temp->next;
            delete(curr);
          }
        else{
            visited[temp]=true;
            temp = temp->next;
        }
    }
   return head;