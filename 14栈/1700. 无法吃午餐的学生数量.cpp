class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int sindex = 0;
        int aindex = 0;
        int limit = 0;
        while(sindex < students.size() && aindex < sandwiches.size()){
            if(students[sindex] == sandwiches[aindex]){
                ++sindex;
                ++aindex;
            }else{
                students.push_back(students[sindex]);
                ++sindex;
            }
            if(limit++ >= 10000){ //避免有吃不到午餐的同学 一直循环超时
                break;
            }
        }
        return students.size() - sindex;
    }
};