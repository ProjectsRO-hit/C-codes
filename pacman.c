#include <stdio.h>
#include <conio.h> // For Windows (for Linux, use ncurses library)

int main() {
    char map[10][20] = {
        "###################",
        "#.................#",
        "#.###.###.###.###.#",
        "#.#...#.#.#.#.#...#",
        "#.###.#.#.#.#.#.###",
        "#.....#...#...#...#",
        "###################",
    };

    int x = 1, y = 1; // Pac-Man's initial position
    char input;

    while (1) {
        system("cls"); // Clear the screen (Windows)
        // system("clear"); // Clear the screen (Linux)

        // Draw the map
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 19; j++) {
                if (i == y && j == x) {
                    printf("C"); // Pac-Man
                } else {
                    printf("%c", map[i][j]);
                }
            }
            printf("\n");
        }

        // Get user input
        if (_kbhit()) {
            input = _getch();

            // Move Pac-Man
            switch (input) {
                case 'w':
                    if (map[y - 1][x] != '#') y--;
                    break;
                case 's':
                    if (map[y + 1][x] != '#') y++;
                    break;
                case 'a':
                    if (map[y][x - 1] != '#') x--;
                    break;
                case 'd':
                    if (map[y][x + 1] != '#') x++;
                    break;
                case 'q':
                    return 0; // Quit the game
                default:
                    break;
            }
        }
    }

    return 0;
}
