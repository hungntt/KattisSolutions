//
// Created by Thanh Hun on 09-Dec-19.
//
#include<iostream>
#include<vector>
#include<stack>

using namespace std;
struct Point {
    int x, y;
};

Point p0;

Point nextToTop(stack<Point> &S) {
    Point p = S.top();
    S.pop();
    Point res = S.top();
    S.push(p);
    return res;
}

void swap(Point &p1, Point &p2) {
    Point temp = p1;
    p1 = p2;
    p2 = temp;
}

// A utility function to return square of distance
// between p1 and p2
int distSq(Point p1, Point p2)
{
    return (p1.x - p2.x)*(p1.x - p2.x) +
           (p1.y - p2.y)*(p1.y - p2.y);
}




int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;
    else if (val > 0) return 1; // clockwise
    else return 2; // counter clockwise
    //https://www.geeksforgeeks.org/orientation-3-ordered-points/
}
int compare(const void *vp1, const void *vp2)
{
    auto *p1 = (Point *)vp1;
    auto *p2 = (Point *)vp2;

    // Find orientation
    int o = orientation(p0, *p1, *p2);
    if (o == 0)
        return (distSq(p0, *p2) >= distSq(p0, *p1))? -1 : 1;

    return (o == 2)? -1: 1;
}
void PrintStack(stack<Point> s){
    if (s.empty()) return;
    Point p = s.top();
    s.pop();
    PrintStack(s);
    cout << p.x << " " << p.y << endl;
    s.push(p);
}
void convexHull(int n, vector<Point> points)
{
    if (n < 3) {
        cout << "1" << endl;
        cout << points[0].x << " " << points[0].y << endl;
        return;
    };

    // Find the bottommost point
    int ymin = points[0].y, min = 0;
    for (int i = 1; i < n; i++)
    {
        int y = points[i].y;

        // Pick the bottom-most or chose the left
        // most point in case of tie
        if ((y < ymin) || (ymin == y &&
                           points[i].x < points[min].x))
            ymin = points[i].y, min = i;
    }

    // Place the bottom-most point at first position
    swap(points[0], points[min]);

    // Sort n-1 points with respect to the first point.
    // A point p1 comes before p2 in sorted output if p2
    // has larger polar angle (in counterclockwise
    // direction) than p1
    p0 = points[0];
    qsort(&points[1], n-1, sizeof(Point), compare);

    // If two or more points make same angle with p0,
    // Remove all but the one that is farthest from p0
    // Remember that, in above sorting, our criteria was
    // to keep the farthest point at the end when more than
    // one points have same angle.
    int m = 1; // Initialize size of modified array
    for (int i=1; i<n; i++)
    {
        // Keep removing i while angle of i and i+1 is same
        // with respect to p0
        while (i < n-1 && orientation(p0, points[i],points[i+1]) == 0)
            i++;
        points[m] = points[i];
        m++;  // Update size of modified array
    }

    // If modified array of points has less than 3 points,
    // convex hull is not possible
    if (m < 3) return;

    // Create an empty stack and push first three points
    // to it.
    stack<Point> S;
    S.push(points[0]);
    S.push(points[1]);
    S.push(points[2]);

    // Process remaining n-3 points
    for (int i = 3; i < m; i++)
    {
        // Keep removing top while the angle formed by
        // points next-to-top, top, and points[i] makes
        // a non-left turn
        while (orientation(nextToTop(S), S.top(), points[i]) != 2)
            S.pop();
        S.push(points[i]);
    }

    // Now stack has the output points, print contents of stack
    cout << S.size() << endl;
    PrintStack(S);
}
int main() {
    int n;

    while (cin >> n && n != 0) {
        vector<Point> points;
        for (int i = 0; i < n; i++) {
            Point p;
            cin >> p.x >> p.y;
            points.push_back(p);
            points[i] = p;
        }
        convexHull(n, points);
    }
    return 0;
}