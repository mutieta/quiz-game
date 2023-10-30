#include <iostream>
using namespace std;

int main(){

    string questions[] = {{"1. What color is red? : "},
                         {"2. Why when red? : "},
                         {"3. If so then why red? :"},
                         {"4. How do you spell red? : "}};
    string options[][4] = {{"A.red", "B.pink", "C.blue", "D.yellow"},
                          {"A.Monday", "B.Tuesday", "C.Wednesday", "D.Thursday"},
                          {"A.bcus", "B.bcuz", "C.becus", "D.because"},
                          {"A.Red", "B.red", "C.REd", "D.RED"}};
    char answerKey[] = {'A', 'B', 'C', 'D'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

for(int i = 0; i < size; i++){
    cout<< "*******************************\n";
    cout<< questions[i] << '\n';
    cout<< "*******************************\n";

    for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
        cout << options[i][j] << '\n';
    }

    cin >> guess;
    guess = toupper(guess);
    
    if ( guess == answerKey[i]){
        cout << "CORRECT !\n";
        score++;
    }else{
        cout<< "WRONG !\n";
        cout<< "Answer: " << answerKey[i] << '\n';
    }
    }
    cout<< "*******************************\n";
    cout<< "*            RESULTS          *\n";
    cout<< "*******************************\n";
    cout<< "CORRECT GUESSES: "<< score << '\n';
    cout<< "SCORE: " << (score/size)*100 << "%";


    return 0;
}