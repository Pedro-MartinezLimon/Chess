#include "main.hpp"


int main()
{
	InitWindow(800, 800, "CoyoChess");

	Texture2D board = LoadTexture("statics/board.png");
	board.width = 800;
	board.height = 800;

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(LIGHTGRAY);

		DrawTexture(board, 0, 0, WHITE);

		EndDrawing();
	}


	UnloadTexture(board);
	CloseWindow();
	return 0;
}