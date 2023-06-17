#pragma once
#ifdef RACELIBRARYDYNAMIC_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif
#include <iostream>


namespace RaceLibraryDynamic
{
	class Magic_carpet : public Air_vehicles
	{
	public:
		RACELIBRARY_API Magic_carpet();
		RACELIBRARY_API Magic_carpet(int speed, int k_lim, int k_lim_1, int k_lim_2);
	};
}