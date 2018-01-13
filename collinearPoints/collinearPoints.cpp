#include <cstdio>

class Straight {
    public:
    float a, b;
    void calcVal(float x1, float y1, float x2, float y2);
};

void Straight::calcVal(float x1, float y1, float x2, float y2) {
    a = (y1-y2)/(x1-x2);
    b = y1 - a*x1;
}

bool isCollinear(float x, float y, Straight straight) {
    return ((y == (straight.a*x + straight.b)) ? 1 : 0);
}

int main() {
    unsigned short numOfPairs;
    scanf("%hu", &numOfPairs);
    float points[numOfPairs][2];
    short collinearPoints = ((numOfPairs > 1) ? 2 : numOfPairs);
    short sumOfColinearPoints;
    Straight straight;

    for(short r = 0; r < numOfPairs; r++) {
        scanf("%a %a", &points[r][0], &points[r][1]);
    }

    for(short i = 0; i < numOfPairs; i++) {
        for(short j = i+1; j < numOfPairs; j++) {
            sumOfColinearPoints = 2;
            straight.calcVal(points[i][0], points[i][1], points[j][0], points[j][1]);
            for(short k = j+1; k < numOfPairs; k++) {
                sumOfColinearPoints += ((isCollinear(points[k][0], points[k][1], straight)) ? 1 : 0);
            }
            collinearPoints = ((sumOfColinearPoints > collinearPoints) ? sumOfColinearPoints : collinearPoints);
        }
    }

    printf("%hd\n", collinearPoints);

    return 0;
}
