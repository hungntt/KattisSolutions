#include<iostream>
#include<algorithm>

#define HEIGHT 5
#define WIDTH 5
using namespace std;

struct point {
    int x, y;
};

inline point operator+(point lhs, const point &rhs) {
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    return lhs;
}

const point moves[8] = {{2,  1},
                        {1,  2},
                        {-2, -1},
                        {-2, 1},
                        {-1, -2},
                        {-1, 2},
                        {1,  -2},
                        {2,  -1}};
typedef struct {
    point empty;
    char layout[HEIGHT][WIDTH];
} board;

board b;
const board g = {
        {2, 2},
        {
            {'b', 'b', 'b', 'b', 'b'},
            {'w', 'b', 'b', 'b', 'b'},
            {'w', 'w', ' ', 'b', 'b'},
            {'w', 'w', 'w', 'w', 'b'},
            {'w', 'w', 'w', 'w', 'w'}
        }
};

int compare(const board &b1, const board &b2) { // Show the difference between our board with the final board
    int d = 0;

    for (int i = 0; i < HEIGHT; ++i)
        for (int j = 0; j < WIDTH; ++j)
            if (b2.layout[i][j] == ' ') continue;
            else if (b1.layout[i][j] != b2.layout[i][j]) ++d;

    return d;
}

bool search(int max_difference, int difference = 0) {
    int d = compare(g, b);

    if (d == 0) return true; // End search if there is no diff between two boards
    if (d + difference > max_difference) return false;

    for (auto move : moves) {
        point p = b.empty + move;
        if (p.x < 0 || p.x >= HEIGHT || p.y < 0 || p.y >= WIDTH) continue;
        auto move_piece = [&]() {
            swap(b.layout[b.empty.x][b.empty.y], b.layout[p.x][p.y]);
            swap(b.empty, p);
        };
        move_piece();
        bool r = search(max_difference, difference + 1);
        move_piece();
        if (r) return true;
    }

    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        for (int i = 0; i < HEIGHT; ++i)
            for (int j = 0; j < WIDTH; ++j) {
                switch (cin.get()) {
                    case '0':
                        b.layout[i][j] = 'w';
                        break;
                    case '1':
                        b.layout[i][j] = 'b';
                        break;
                    case ' ':
                        b.layout[i][j] = ' ';
                        b.empty = {i, j};
                        break;
                    default:
                        --j;
                }
            }

        bool solved = false;
        for (int m = 0; m <= 10; m++) {
            if (search(m)) {
                cout << "Solvable in " << m << " move(s)." << endl;
                solved = true;
                break;
            }
        }
        if (!solved) cout << "Unsolvable in less than 11 move(s)." << endl;
    }
    return 0;
}