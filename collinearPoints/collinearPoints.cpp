#include <cstdio>

class Straight {
    public:
    float a, b, c;
    void calcVal(float x1, float y1, float x2, float y2);
    bool isCollinear(float x, float y);
};

void Straight::calcVal(float x1, float y1, float x2, float y2) {
    if(x1!=x2) {
        a = ((y1-y2)/(x2-x1));
        b = 1;
        c = y1 + (x1 * a);
    } else {
        a = 1;
        b = 0;
        c = x1;
    }
}

bool Straight::isCollinear(float x, float y) {
    return (((a * x) + (b * y) == c) ? 1 : 0);
}

int main() {
    unsigned short numOfPairs;
    scanf("%hu", &numOfPairs);
    float points[numOfPairs][2];
    short mostCollinearPoints = ((numOfPairs > 1) ? 2 : numOfPairs);
    short collinearPoints;
    Straight straight;

    for(short r = 0; r < numOfPairs; r++) {
        scanf("%a %a", &points[r][0], &points[r][1]);
    }

    for(short i = 0; i < numOfPairs; i++) {
        for(short j = i+1; j < numOfPairs; j++) {
            collinearPoints = 2;
            straight.calcVal(points[i][0], points[i][1], points[j][0], points[j][1]);
            for(short k = j+1; k < numOfPairs; k++) {
                collinearPoints += ((straight.isCollinear(points[k][0], points[k][1])) ? 1 : 0);
            }
            mostCollinearPoints = ((collinearPoints > mostCollinearPoints) ? collinearPoints : mostCollinearPoints);
        }
    }

    printf("%hd\n", mostCollinearPoints);

    return 0;
}
