#pragma once
#ifdef RACELIBRARYDYNAMIC_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif
#include <iostream>
namespace RaceLibraryDynamic
{
	class Camel : public Ground_vehicles
	{
	public:
		RACELIBRARY_API Camel();
		RACELIBRARY_API Camel(float time_to_rest, float rest_time, float rest_time1);
	};
}