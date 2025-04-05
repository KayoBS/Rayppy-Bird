#include "includes.hpp"

int main()
{
	ray::InitWindow( 280, 720, "Rayppy Bird" );

	while( !ray::WindowShouldClose() )
	{
		ray::BeginDrawing();

		ray::DrawText( "Rayppy Bird is comming!!", 32, 32, 32, ray::BLACK );

		ray::EndDrawing();
	}

	ray::CloseWindow();

	return 0;
}
