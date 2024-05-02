#include <cstdio>

using namespace std;

int main(){
    int N;
    int number;

    while (scanf("%d", &N) && N){

        int streak = 0, maxStreak = 0;

        for (int i = 0; i < N; i++){
            scanf("%d", &number);
            streak += number;

            if (streak > maxStreak){
                maxStreak = streak;
            }

            if(streak < 0){
                streak = 0;
            }

            number = 0;
        }

        if (maxStreak > 0){
            printf("The maximum winning streak is %d.\n", maxStreak);
        } else {
            printf("Losing streak.\n");
        }
    }
    return 0;
}