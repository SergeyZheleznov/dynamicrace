#pragma once
#ifdef RACELIBRARYDYNAMIC_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif
#include <iostream>

namespace RaceLibraryDynamic
{
	class Broom : public Air_vehicles
	{
	public:
		RACELIBRARY_API Broom();
		RACELIBRARY_API Broom(int speed, int k_lim);
	};
}