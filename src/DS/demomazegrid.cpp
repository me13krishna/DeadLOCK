#include <iostream>
#include <vector>

using namespace std;

// =====================================================
//              MAZE SETTINGS - CHANGE THESE
// =====================================================

int rows = 15;
int columns = 15;

// Player starting position
int playerRow = 1;
int playerCol = 1;

// Enemy starting position
int enemyRow = 7;
int enemyCol = 7;

// Exit position
int exitRow = 13;
int exitCol = 13;


// =====================================================
//                 PRINT THE MAZE
// =====================================================

int main()
{
    // Create an empty maze.
    vector<vector<char>> maze(
        rows,
        vector<char>(columns, '.')
    );

    // -------------------------------------------------
    // Create outer walls
    // -------------------------------------------------

    for (int row = 0; row < rows; row++)
    {
        maze[row][0] = '#';
        maze[row][columns - 1] = '#';
    }

    for (int col = 0; col < columns; col++)
    {
        maze[0][col] = '#';
        maze[rows - 1][col] = '#';
    }


    // -------------------------------------------------
    // Create some internal walls
    // -------------------------------------------------

    for (int col = 3; col < columns - 3; col++)
    {
        maze[4][col] = '#';
    }

    for (int col = 2; col < columns - 4; col++)
    {
        maze[8][col] = '#';
    }

    for (int row = 5; row < rows - 3; row++)
    {
        maze[row][5] = '#';
    }


    // -------------------------------------------------
    // Put Player, Enemy and Exit
    // -------------------------------------------------

    maze[playerRow][playerCol] = 'P';

    maze[enemyRow][enemyCol] = 'X';

    maze[exitRow][exitCol] = 'E';


    // =================================================
    //                  DISPLAY MAZE
    // =================================================

    cout << "\n";
    cout << "====================================\n";
    cout << "           DEADLOCK MAZE\n";
    cout << "====================================\n\n";

    cout << "Rows    : " << rows << endl;
    cout << "Columns : " << columns << endl;

    cout << "\n";

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < columns; col++)
        {
            cout << maze[row][col] << ' ';
        }

        cout << endl;
    }


    // =================================================
    //                  INFORMATION
    // =================================================

    cout << "\n====================================\n";

    cout << "Player : ("
         << playerRow << ", "
         << playerCol << ")\n";

    cout << "Enemy  : ("
         << enemyRow << ", "
         << enemyCol << ")\n";

    cout << "Exit   : ("
         << exitRow << ", "
         << exitCol << ")\n";

    cout << "====================================\n";

    cout << "\nLegend:\n";
    cout << "P = Player\n";
    cout << "X = Enemy\n";
    cout << "E = Exit\n";
    cout << "# = Wall\n";
    cout << ". = Open Space\n";

    return 0;
}