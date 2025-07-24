#include "main.hpp"


int main()
{
	InitWindow(800, 800, "CoyoChess");

	Texture2D board_img = LoadTexture("Statics/Board.png");
	Texture2D board_ex_img = LoadTexture("Statics/ChessBoard.png");

	board_ex_img.height = 576;
	board_ex_img.width = 576;

	board_img.width = 384;
	board_img.height = 384;
	


	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(LIGHTGRAY);

		DrawTexture(board_ex_img, 112, 112, WHITE);
		DrawTexture(board_img, 120 + (112 / 1.5), 120 + (112 / 1.5), { 255, 255, 255, 100 });

		EndDrawing();
	}

	UnloadTexture(board_ex_img);
	UnloadTexture(board_img);

	CloseWindow();
	return 0;
}