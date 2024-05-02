

// Write your Student class here
struct Student {
    int score[5];
    void input (){
        for (int i = 0 ; i < 5 ;i++){
            int a;
            cin >> a;
            this->score[i] = a;
        }
    }
    int calculateTotalScore(){
        int a = 0 ;
        
        for (int i = 0 ; i < 5; i++){
            a+= this->score[i]  ;  
        }
        return a;
    }
};

