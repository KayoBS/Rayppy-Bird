#include "includes.hpp"

int main()
{
	const char* winName {"Rayppy Bird"};
	const unsigned short winSize[2] {340,640};

	ray::InitWindow( winSize[0], winSize[1], winName );

	while( !ray::WindowShouldClose() )
	{
		ray::BeginDrawing();

		ray::ClearBackground( ray::RAYWHITE );
		ray::DrawText( "Rayppy Bird is comming!!", 32, 32, 24, ray::BLACK );

		ray::EndDrawing();
	}

	ray::CloseWindow();

	return 0;
}
