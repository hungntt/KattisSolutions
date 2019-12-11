//
// Created by Thanh Hun on 09-Dec-19.
//
#include<iostream>
#include<vector>

using namespace std;
struct Point {
    int x, y;
};

int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;
    else if (val > 0) return 1; // clockwise
    else return 2; // counter clockwise
    //https://www.geeksforgeeks.org/orientation-3-ordered-points/
}

void convexHull(int n, vector<Point> points) {

    // hull must have at least 3 points
    if (n < 3) {
        cout << "1" << endl;
        cout << points[0].x << " " << points[0].y << endl;
        return;
    };

//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j < n ; j++){
//            if (points[i].x == points[j].x && points[i].y == points[j].y){
//                cout << "1" << endl;
//                cout << points[i].x << " " << points[i].y;
//                return;
//            }
//        }
//    }
    // Find the leftmost point
    vector<Point> hull;
    int l = 0;
    for (int i = 0; i < n; i++) {
        if (points[i].x < points[l].y) {
            l = i;
        }
    }
    // Start from leftmost point, keep moving counterclockwise
    // until reach the start point again.  This loop runs O(h)
    // times where h is number of points in result or output.
    int p = l;
    int q;
    do {
        hull.push_back(points[p]);
        q = (p + 1) % n; // next point
        for (int i = 0; i < n; i++) {
            // If i is more counterclockwise than current q, then
            // update q
            int res = orientation(points[p], points[i], points[q]);
            if (res == 2)
                q = i;
        }
        // Now q is the most counterclockwise with respect to p
        // Set p as q for next iteration, so that q is added to
        // result 'hull'
        p = q;
    } while (p != l); // while don't back to first point

    // Print result
    cout << hull.size() << endl;
    for (auto & i : hull){
        cout << i.x << " " << i.y << endl;
    }
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