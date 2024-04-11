# Tic Tac Toe Game in C

This repository contains a console-based Tic Tac Toe game implemented in the C programming language. The game allows two players to take turns marking spaces on a 3x3 grid with their respective symbols (X or O). 

## Features
- Dynamic updating of the game board after each player move.
- Detection of wins along rows, columns, and diagonals.
- Proper handling of invalid inputs and already taken positions.
- Game loop continues until a player wins or the game ends in a draw.

## How to Play
1. Clone the repository to your local machine.
2. Compile the `tic_tac_toe.c` file using a C compiler.
3. Run the compiled executable.
4. Players take turns entering a number corresponding to the position they want to mark.
5. The game ends when one player wins or it's a draw.

## Instructions
- Players alternate turns, with Player 1 using 'X' and Player 2 using 'O'.
- Input a number between 1 and 9 to mark the corresponding position on the board.
- Invalid inputs or already taken positions will prompt for a re-entry.

## Usage
```bash
gcc tic_tac_toe.c -o tic_tac_toe
./tic_tac_toe
