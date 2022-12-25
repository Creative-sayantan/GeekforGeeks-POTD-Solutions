class Solution {
public:
    long long int MissingNo(vector<vector<int> >& matrix) {
        // Code here
        set<long long int>nonzero, zero;
        
        for(int i = 0; i < matrix.size(); i++){
            bool f = true;
            long long int sum = 0;
            for(int j = 0; j < matrix[0].size(); j++){
                    sum += matrix[i][j];
                    if(!matrix[i][j])
                            f = false; }
                    if(f)nonzero.insert(sum);
                    if(!f)zero.insert(sum);
            }
            for(int  j = 0; j < matrix[0].size(); j++){
                    bool f = true;
                    long long int sum = 0;
            for(int i = 0; i < matrix.size(); i++){
                            sum += matrix[i][j];
                    if(!matrix[i][j])
                            f = false; }
                    if(f)nonzero.insert(sum);
                    if(!f)zero.insert(sum);
            }
            bool f = true;
            long long int sum = 0;
    for(int i = 0; i < matrix.size(); i++){
                    sum += matrix[i][i];
                    if(!matrix[i][i])
                            f = false;  }
            if(f)nonzero.insert(sum);
                if(!f)zero.insert(sum);
    
            f = true;
            sum = 0;
    for(int i = 0, j = matrix.size() - 1; j >= 0; i++,j--){
                    sum += matrix[i][j];
                    if(!matrix[i][j])
                            f = false;   }
                if(f)nonzero.insert(sum);
                if(!f)zero.insert(sum);
            if(nonzero.size() == 1 and zero.size() == 1){
                    long long int x = *nonzero.begin();
                    long long int y = *zero.begin();
                    if(x <= y)
                            return -1;
                    return x - y;
            }
            return -1;
    }
};