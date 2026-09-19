class Solution {
public:
    bool checkOverlap(int r, int xc, int yc, int x1, int y1, int x2, int y2) {
        int x = max(x1,min(xc,x2));
        int y = max(y1,min(yc,y2));

        int dx = xc - x;
        int dy = yc - y;

        return dx * dx + dy * dy <= r * r;
    }
};