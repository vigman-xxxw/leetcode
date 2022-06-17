class Solution {
    struct People{
        int pos;
        int ticket;
    };
    int front, rear;
    People data[20000];
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i;
        int t = 0;
        front = rear = 0;
        for(i = 0; i < tickets.size(); i++){
            People a;
            a.pos = i;
            a.ticket = tickets[i];
            data[rear++] = a;
        }
        while(front < rear){
            People p = data[front++];
            t++;
            --p.ticket;
            if(p.ticket == 0){
                if(p.pos == k)
                    return t;
            }else{
                data[rear++] = p;//如果没减完 放队末
            }
        }
        return -1;
    }
};