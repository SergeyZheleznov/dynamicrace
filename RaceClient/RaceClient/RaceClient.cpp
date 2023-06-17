#include "dynamic_vehicles.h"
#include "dynamic_air_vehicles.h"
#include "dynamic_ground_vehicles.h"
#include "dynamic_all_boots.h"
#include "dynamic_camel.h"
#include "dynamic_quick_camel.h"
#include "dynamic_centaur.h"
#include "dynamic_eagle.h"
#include "dynamic_magic_carpet.h"
#include "dynamic_broom.h"
#include "dynamic_racer_result.h"
#include <iostream>
#include <windows.h>
#include <math.h>
#include <cmath>


void ground_race(float distance)
{
	std::string race_name = "�������� �����";

	int reg;
	int j = 0;
	RaceLibraryDynamic::Ground_vehicles** array_ground_veh = new RaceLibraryDynamic::Ground_vehicles * [20];

	do
	{
		std::cout << "��� �������� �����, ��������� ������ ��, ��� �������� �� �����." << std::endl;
		std::cout << "1. �������-���������" << std::endl;
		std::cout << "2. �����" << std::endl;
		std::cout << "3. �������" << std::endl;
		std::cout << "4. �������" << std::endl;
		std::cout << "5. ���" << std::endl;
		std::cout << "6. �������-���������" << std::endl;
		std::cout << "7. ����-������" << std::endl;
		std::cout << "0. ��������� �����������" << std::endl;
		std::cout << "�������� ��������� ��� ���� ��� ��������� �������� �����������: " << std::endl;
		std::cout << "������ ���� ���������������� ���� �� ��� ������������ ��������." << std::endl;
		int veh;

		int i = 0;

		int boot = 0;
		int cam = 0;
		int kent = 0;
		int quick = 0;
		float total_time = 0;
		//time_without_rest - ��� �����, �� ������� ����� ������ ���������, ���� ������ �� ����� ���������.
		// �������������� ��� ����� ���������, ������� �� �������� ��������
		float time_without_rest;

		// rest_times - ��� ����� ��������� �� �����, ����������� ��� ������� ������� �������� 
		float rest_times;

		do
		{
			std::cin >> veh;
			std::cout << std::endl;
			if (veh == 0) {
				i = i - 1;
			}
			else if (veh == 1) {
				//�������-���������

				if (boot == 0) {
					boot = boot + 1;
					array_ground_veh[i] = new RaceLibraryDynamic::All_boots;
					std::cout << array_ground_veh[i]->Get_name() << " ������� ���������������." << std::endl;
					time_without_rest = (float)distance / (float)array_ground_veh[i]->Get_speed();
					if (distance <= (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						array_ground_veh[i]->Set_race_time(time_without_rest);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 3 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + (float)array_ground_veh[i]->Get_rest_time1();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * 3 * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 4 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + 2 * (float)array_ground_veh[i]->Get_rest_time1();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance >= (float)array_ground_veh[i]->Get_speed() * 4 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						int k;
						k = distance / ((float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest());
						k = k - 1;
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + k * (float)array_ground_veh[i]->Get_rest_time1();
						array_ground_veh[i]->Set_race_time(total_time);
					}
				}
				else {
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}

			}

			else if (veh == 2) {
				//�����
				std::cout << "�� ������� ������� ���������������� �� �������� ����� ��������� ������������ �������� �����, ��� �� ���������." << std::endl;
				std::cout << "�� ������ ���������������� ������ �������� ������������ ��������" << std::endl;
				i = i - 1;
			}
			else if (veh == 3) {
				//�������

				if (cam == 0) {
					cam = cam + 1;
					array_ground_veh[i] = new RaceLibraryDynamic::Camel;
					std::cout << array_ground_veh[i]->Get_name() << " ������� ���������������." << std::endl;
					time_without_rest = (float)distance / (float)array_ground_veh[i]->Get_speed();
					if (distance <= (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						array_ground_veh[i]->Set_race_time(time_without_rest);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						float k;
						k = distance / ((float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest());
						k = floor(k);
						k = k - 2;

						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + k * (float)array_ground_veh[i]->Get_rest_time1();
						array_ground_veh[i]->Set_race_time(total_time);
					}
				}
				else {
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else if (veh == 4) {
				//�������
				if (kent == 0) {
					kent = kent + 1;
					array_ground_veh[i] = new RaceLibraryDynamic::Centaur();
					std::cout << array_ground_veh[i]->Get_name() << " ������� ���������������." << std::endl;
					time_without_rest = (float)distance / (float)array_ground_veh[i]->Get_speed();
					rest_times = time_without_rest / (float)array_ground_veh[i]->Get_time_to_rest();
					total_time = time_without_rest + (trunc(rest_times)) * (float)array_ground_veh[i]->Get_rest_time();
					array_ground_veh[i]->Set_race_time(total_time);
				}
				else {
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else if (veh == 5) {
				//���
				std::cout << "�� ������� ������� ���������������� �� �������� ����� ��������� ������������ �������� ���, ��� �� ���������." << std::endl;
				std::cout << "�� ������ ���������������� ������ �������� ������������ ��������" << std::endl;
				i = i - 1;
			}
			else if (veh == 6) {
				//�������-���������
				if (quick == 0) {
					quick = quick + 1;
					array_ground_veh[i] = new RaceLibraryDynamic::Quick_Camel;
					std::cout << array_ground_veh[i]->Get_name() << " ������� ���������������." << std::endl;
					time_without_rest = (float)distance / (float)array_ground_veh[i]->Get_speed();
					if (distance <= (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						array_ground_veh[i]->Set_race_time(time_without_rest);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 3 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + (float)array_ground_veh[i]->Get_rest_time1();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * 3 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						float k;
						k = distance / ((float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest());
						k = floor(k);
						k = k - 2;

						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + (float)array_ground_veh[i]->Get_rest_time1()
							+ k * (float)array_ground_veh[i]->Get_rest_time2();
						array_ground_veh[i]->Set_race_time(total_time);
					}
				}
				else {
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else if (veh == 7) {
				//����-������
				std::cout << "�� ������� ������� ���������������� �� �������� ����� ��������� ������������ �������� ����-������, ��� �� ���������." << std::endl;
				std::cout << "�� ������ ���������������� ������ �������� ������������ ��������" << std::endl;
				i = i - 1;
			}
			else
			{
				std::cout << "�� ����� ������������ ������, �������� ����� 1, 3, 4 ��� 6." << std::endl;
			}


			std::cout << race_name << "����������: " << distance << std::endl;
			std::cout << "������������������ ������������ ��������: ";
			j = i;
			for (int j = 0; j <= i; j = j++)
			{
				std::cout << array_ground_veh[j]->Get_name() << " ";
			}
			i = i + 1;
			std::cout << std::endl;
			std::cout << "1. �������-���������" << std::endl;
			std::cout << "2. �����" << std::endl;
			std::cout << "3. �������" << std::endl;
			std::cout << "4. �������" << std::endl;
			std::cout << "5. ���" << std::endl;
			std::cout << "6. �������-���������" << std::endl;
			std::cout << "7. ����-������" << std::endl;
			std::cout << "0. ��������� �����������" << std::endl;
			std::cout << "�������� ��������� ��� ���� ��� ��������� �������� �����������: " << std::endl;
			std::cout << "������ ���� ���������������� ���� �� ��� ������������ ��������" << std::endl;


		} while (veh != 0 || j == 0);


		std::cout << "����������� ���������� ���������!" << std::endl;
		std::cout << std::endl;
		std::cout << "����� ���������� � �����: " << j + 1 << std::endl;
		std::cout << std::endl;
		std::cout << "������ ����������." << std::endl;
		for (int i = 0; i <= j; i++)
		{
			std::cout << array_ground_veh[i]->Get_name() << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "1. ���������������� ���������" << std::endl;
		std::cout << "2. ������ �����" << std::endl;
		std::cout << "�������� ��������: ";

		std::cin >> reg;
		std::cout << std::endl;
	} while (reg == 1);
	int size = j;
	bool swapped = false;
	do
	{
		swapped = false;
		for (int i = 1; i <= size; i++)
		{
			if ((float)array_ground_veh[i - 1]->Get_race_time() > (float)array_ground_veh[i]->Get_race_time())
			{
				RaceLibraryDynamic::Ground_vehicles* temp = array_ground_veh[i - 1];
				array_ground_veh[i - 1] = array_ground_veh[i];
				array_ground_veh[i] = temp;
				swapped = true;
			}
		}
	} while (swapped);

	// ����� �� ������ ����������� ����� �� ������� (� ���� ����� ��������� �����) � ���������� (� ���� ������������ �����)
	std::cout << std::endl;
	std::cout << "���������� �����." << std::endl;

	std::string temp_name;
	for (int i = 0; i <= j; i = i++)
	{
		std::cout << i + 1 << ". " << array_ground_veh[i]->Get_name();
		std::cout << " ����� � ����� " << array_ground_veh[i]->Get_race_time() << std::endl;
	}
	delete[] array_ground_veh;
};

void air_race(float distance)
{
	std::string race_name = "��������� �����";

	int reg;
	int j = 0;
	RaceLibraryDynamic::Air_vehicles** array_air_veh = new RaceLibraryDynamic::Air_vehicles * [20];
	do
	{
		std::cout << "��� ��������� �����, ��������� ������ ��, ��� ������ �� �������." << std::endl;

		std::cout << "1. �������-���������" << std::endl;
		std::cout << "2. �����" << std::endl;
		std::cout << "3. �������" << std::endl;
		std::cout << "4. �������" << std::endl;
		std::cout << "5. ���" << std::endl;
		std::cout << "6. �������-���������" << std::endl;
		std::cout << "7. ����-������" << std::endl;
		std::cout << "0. ��������� �����������" << std::endl;
		std::cout << "�������� ��������� ��� ���� ��� ��������� �������� �����������: " << std::endl;
		std::cout << "������ ���� ���������������� ���� �� ��� ������������ ��������" << std::endl;

		int veh;
		int i = 0;
		int br_m = 0;
		int eag = 0;
		int mg = 0;
		float total_time = 0;
		//personal_distance - ��� ���������, ������� ����� ��������� ������ ��������� ������������ ��������
		float personal_distance;
		do
		{
			std::cin >> veh;
			std::cout << std::endl;
			if (veh == 0) {
				i = i - 1;
			}
			else if (veh == 1)
			{
				//�������-���������
				std::cout << "�� ������� ������� ���������������� �� ��������� ����� �������� ������������ �������� �������-���������, ��� �� ���������." << std::endl;
				std::cout << "�� ������ ���������������� ������ ��������� ������������ ��������" << std::endl;
				i = i - 1;

			}
			if (veh == 2)
			{
				//�����
				if (br_m == 0)
				{
					br_m = br_m + 1;
					array_air_veh[i] = new RaceLibraryDynamic::Broom;
					std::cout << array_air_veh[i]->Get_name() << " ������� ���������������a." << std::endl;
					if (distance < 1000)
					{
						total_time = distance / (float)array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
					else if (distance >= 1000 && distance < 2000)
					{
						personal_distance = (float)distance * (100.0 - (float)array_air_veh[i]->Get_k_lim()) / 100.0;
						total_time = personal_distance / (float)array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
					else if (2000 <= distance)
					{
						int k = 0;
						k = floor((float)distance / 1000.0);
						k = (float)array_air_veh[i]->Get_k_lim() * k;
						personal_distance = (float)distance * (100 - k) / 100.0;
						total_time = personal_distance / (float)array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
				}
				else
				{
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else if (veh == 3)
			{
				//�������
				std::cout << "�� ������� ������� ���������������� �� ��������� ����� �������� ������������ �������� �������, ��� �� ���������." << std::endl;
				std::cout << "�� ������ ���������������� ������ ��������� ������������ ��������" << std::endl;
				i = i - 1;
			}
			else if (veh == 4)
			{
				//�������
				std::cout << "�� ������� ������� ���������������� �� ��������� ����� �������� ������������ �������� �������, ��� �� ���������." << std::endl;
				std::cout << "�� ������ ���������������� ������ ��������� ������������ ��������" << std::endl;
				i = i - 1;
			}
			else if (veh == 5)
			{
				//���
				if (eag == 0) {
					eag = eag + 1;
					array_air_veh[i] = new RaceLibraryDynamic::Eagle;
					std::cout << array_air_veh[i]->Get_name() << " ������� ���������������." << std::endl;
					personal_distance = (float)distance * (100.0 - (float)array_air_veh[i]->Get_k_lim()) / 100.0;
					total_time = personal_distance / (float)array_air_veh[i]->Get_speed();
					array_air_veh[i]->Set_race_time(total_time);
				}
				else
				{
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}

			else if (veh == 6)
			{
				//�������-���������
				std::cout << "�� ������� ������� ���������������� �� ��������� ����� �������� ������������ �������� �������-���������, ��� �� ���������." << std::endl;
				std::cout << "�� ������ ���������������� ������ ��������� ������������ ��������" << std::endl;
				i = i - 1;
			}

			else if (veh == 7)
			{
				//����-������
				if (mg == 0)
				{
					mg = mg + 1;
					array_air_veh[i] = new RaceLibraryDynamic::Magic_carpet;
					std::cout << array_air_veh[i]->Get_name() << " ������� ���������������." << std::endl;

					if (distance < 1000)
					{
						total_time = distance / array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
					else if (distance >= 1000 && distance < 5000)
					{
						total_time = distance * (100.0 - (float)array_air_veh[i]->Get_k_lim()) / 100.0 / (float)array_air_veh[i]->Get_speed();

						array_air_veh[i]->Set_race_time(total_time);
					}
					else if (distance >= 5000 && distance < 10000)
					{
						total_time = distance * (100 - array_air_veh[i]->Get_k_lim_1()) / 100 / array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
					else if (10000 <= distance)
					{
						total_time = distance * (100 - array_air_veh[i]->Get_k_lim_2()) / 100 / array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
				}
				else
				{
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else
			{
				std::cout << "�� ����� ������������ ������, �������� ����� 2, 5 ��� 7." << std::endl;
			}

			std::cout << race_name << "����������: " << distance << std::endl;
			std::cout << "������������������ ������������ ��������: ";
			j = i;
			for (int j = 0; j <= i; j = j++)
			{
				std::cout << array_air_veh[j]->Get_name() << " ";
			}
			i = i + 1;
			std::cout << std::endl;
			std::cout << "1. �������-���������" << std::endl;
			std::cout << "2. �����" << std::endl;
			std::cout << "3. �������" << std::endl;
			std::cout << "4. �������" << std::endl;
			std::cout << "5. ���" << std::endl;
			std::cout << "6. �������-���������" << std::endl;
			std::cout << "7. ����-������" << std::endl;
			std::cout << "0. ��������� �����������" << std::endl;
			std::cout << "�������� ��������� ��� ���� ��� ��������� �������� �����������: " << std::endl;
			std::cout << "������ ���� ���������������� ���� �� ��� ������������ ��������" << std::endl;

		} while (veh != 0 || j == 0);

		std::cout << "����������� ���������� ���������!" << std::endl;
		std::cout << std::endl;
		std::cout << "����� ���������� � �����: " << j + 1 << std::endl;
		std::cout << std::endl;
		std::cout << "������ ����������." << std::endl;
		for (int i = 0; i <= j; i++)
		{
			std::cout << array_air_veh[i]->Get_name() << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "1. ���������������� ���������" << std::endl;
		std::cout << "2. ������ �����" << std::endl;
		std::cout << "�������� ��������: ";
		std::cin >> reg;
		std::cout << std::endl;
	} while (reg == 1);

	int size = j;
	bool swapped = false;
	do
	{
		swapped = false;
		for (int i = 1; i <= size; i++)
		{
			if ((float)array_air_veh[i - 1]->Get_race_time() > (float)array_air_veh[i]->Get_race_time())
			{
				RaceLibraryDynamic::Air_vehicles* temp = array_air_veh[i - 1];
				array_air_veh[i - 1] = array_air_veh[i];
				array_air_veh[i] = temp;
				swapped = true;
			}
		}
	} while (swapped);

	// ����� �� ������ ����������� ����� �� ������� (� ���� ����� ��������� �����) � ���������� (� ���� ������������ �����)
	std::cout << std::endl;
	std::cout << "���������� �����." << std::endl;

	std::string temp_name;
	for (int i = 0; i <= j; i = i++)
	{
		std::cout << i + 1 << ". " << array_air_veh[i]->Get_name();
		std::cout << " ����� � ����� " << array_air_veh[i]->Get_race_time() << std::endl;
	}
	delete[] array_air_veh;
};

void mix_race(float distance)
{

	std::string race_name = "��������� �����";

	int reg;
	int j = 0;
	RaceLibraryDynamic::Ground_vehicles** array_ground_veh = new RaceLibraryDynamic::Ground_vehicles * [20];
	RaceLibraryDynamic::Air_vehicles** array_air_veh = new RaceLibraryDynamic::Air_vehicles * [20];
	RaceLibraryDynamic::Racer_result** array_res = new RaceLibraryDynamic::Racer_result * [20];
	do
	{
		std::cout << "��� ��������� �����, ����� �������� ����� ������������ ��������" << std::endl;

		std::cout << "1. �������-���������" << std::endl;
		std::cout << "2. �����" << std::endl;
		std::cout << "3. �������" << std::endl;
		std::cout << "4. �������" << std::endl;
		std::cout << "5. ���" << std::endl;
		std::cout << "6. �������-���������" << std::endl;
		std::cout << "7. ����-������" << std::endl;
		std::cout << "0. ��������� �����������" << std::endl;
		std::cout << "�������� ��������� ��� ���� ��� ��������� �������� �����������: " << std::endl;

		int veh;

		int i = 0;
		int boot = 0;
		int cam = 0;
		int kent = 0;
		int quick = 0;
		int br_m = 0;
		int eag = 0;
		int mg = 0;
		float total_time = 0;
		float time_without_rest;
		// rest_times - ��� ����� ��������� �� �����, ����������� ��� ������� ������� �������� 
		float rest_times;
		//personal_distance - ��� ���������, ������� ����� ��������� ������ ��������� ������������ ��������
		float personal_distance;
		do
		{
			std::cin >> veh;
			std::cout << std::endl;
			if (veh == 0)
			{
				i = i - 1;
			}
			else if (veh == 1)
			{
				//�������-���������
				if (boot == 0)
				{
					boot = boot + 1;
					array_ground_veh[i] = new RaceLibraryDynamic::All_boots;
					array_res[i] = new RaceLibraryDynamic::Racer_result;
					std::cout << array_ground_veh[i]->Get_name() << " ������� ����������������." << std::endl;
					time_without_rest = (float)distance / (float)array_ground_veh[i]->Get_speed();
					if (distance <= (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						array_ground_veh[i]->Set_race_time(time_without_rest);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 3 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + (float)array_ground_veh[i]->Get_rest_time1();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * 3 * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 4 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + 2 * (float)array_ground_veh[i]->Get_rest_time1();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance >= (float)array_ground_veh[i]->Get_speed() * 4 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						int k;
						k = distance / ((float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest());
						k = k - 1;
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + k * (float)array_ground_veh[i]->Get_rest_time1();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					array_res[i]->Set_racer_name("������� - ���������");
					array_res[i]->Set_racer_time(total_time);
				}
				else
				{
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else if (veh == 2)
			{
				//�����
				if (br_m == 0)
				{
					br_m = br_m + 1;
					array_air_veh[i] = new RaceLibraryDynamic::Broom;
					array_res[i] = new RaceLibraryDynamic::Racer_result;
					std::cout << array_air_veh[i]->Get_name() << " ������� ���������������a." << std::endl;
					if (distance < 1000)
					{
						total_time = distance / (float)array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
					else if (distance >= 1000 && distance < 2000)
					{
						personal_distance = (float)distance * (100.0 - (float)array_air_veh[i]->Get_k_lim()) / 100.0;
						total_time = personal_distance / (float)array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
					else if (2000 <= distance)
					{
						int k = 0;
						k = floor((float)distance / 1000.0);
						std::cout << " k = " << k << std::endl;
						k = (float)array_air_veh[i]->Get_k_lim() * k;
						personal_distance = (float)distance * (100 - k) / 100.0;
						total_time = personal_distance / (float)array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
					array_res[i]->Set_racer_name("�����");
					array_res[i]->Set_racer_time(total_time);
				}
				else
				{
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else if (veh == 3) {
				//�������
				if (cam == 0)
				{
					cam = cam + 1;
					array_ground_veh[i] = new RaceLibraryDynamic::Camel;
					array_res[i] = new RaceLibraryDynamic::Racer_result;
					std::cout << array_ground_veh[i]->Get_name() << " ������� ���������������." << std::endl;
					time_without_rest = (float)distance / (float)array_ground_veh[i]->Get_speed();
					if (distance <= (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						array_ground_veh[i]->Set_race_time(time_without_rest);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						float k;
						k = distance / ((float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest());
						k = floor(k);
						k = k - 2;

						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + k * (float)array_ground_veh[i]->Get_rest_time1();
						array_ground_veh[i]->Set_race_time(total_time);
					}

					array_res[i]->Set_racer_name("��������");
					array_res[i]->Set_racer_time(total_time);
				}
				else
				{
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else if (veh == 4)
			{
				//�������
				if (kent == 0)
				{
					kent = kent + 1;
					array_ground_veh[i] = new RaceLibraryDynamic::Centaur();
					array_res[i] = new RaceLibraryDynamic::Racer_result;
					std::cout << array_ground_veh[i]->Get_name() << " ������� ���������������." << std::endl;
					time_without_rest = (float)distance / (float)array_ground_veh[i]->Get_speed();
					rest_times = time_without_rest / (float)array_ground_veh[i]->Get_time_to_rest();
					total_time = time_without_rest + (trunc(rest_times)) * (float)array_ground_veh[i]->Get_rest_time();
					array_ground_veh[i]->Set_race_time(total_time);
					array_res[i]->Set_racer_name("�������");
					array_res[i]->Set_racer_time(total_time);
				}
				else
				{
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else if (veh == 5)
			{
				//���
				if (eag == 0)
				{
					eag = eag + 1;
					array_air_veh[i] = new RaceLibraryDynamic::Eagle;
					array_res[i] = new RaceLibraryDynamic::Racer_result;
					std::cout << array_air_veh[i]->Get_name() << " ������� ���������������." << std::endl;
					personal_distance = (float)distance * (100.0 - (float)array_air_veh[i]->Get_k_lim()) / 100.0;
					total_time = personal_distance / (float)array_air_veh[i]->Get_speed();
					array_air_veh[i]->Set_race_time(total_time);
					array_res[i]->Set_racer_name("���");
					array_res[i]->Set_racer_time(total_time);
				}
				else
				{
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else if (veh == 6)
			{
				//�������-���������
				if (quick == 0)
				{
					quick = quick + 1;
					array_ground_veh[i] = new RaceLibraryDynamic::Quick_Camel;
					array_res[i] = new RaceLibraryDynamic::Racer_result;
					std::cout << array_ground_veh[i]->Get_name() << " ������� ���������������." << std::endl;
					time_without_rest = (float)distance / (float)array_ground_veh[i]->Get_speed();
					if (distance <= (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						array_ground_veh[i]->Set_race_time(time_without_rest);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * 2 * (float)array_ground_veh[i]->Get_time_to_rest() &&
						distance <= (float)array_ground_veh[i]->Get_speed() * 3 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + (float)array_ground_veh[i]->Get_rest_time1();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					else if (distance > (float)array_ground_veh[i]->Get_speed() * 3 * (float)array_ground_veh[i]->Get_time_to_rest())
					{
						float k;
						k = distance / ((float)array_ground_veh[i]->Get_speed() * (float)array_ground_veh[i]->Get_time_to_rest());
						k = floor(k);
						k = k - 2;

						total_time = time_without_rest + (float)array_ground_veh[i]->Get_rest_time() + (float)array_ground_veh[i]->Get_rest_time1()
							+ k * (float)array_ground_veh[i]->Get_rest_time2();
						array_ground_veh[i]->Set_race_time(total_time);
					}
					array_res[i]->Set_racer_name("�������-���������");
					array_res[i]->Set_racer_time(total_time);
				}
				else
				{
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else if (veh == 7)
			{
				//����-������
				if (mg == 0)
				{
					mg = mg + 1;
					array_air_veh[i] = new RaceLibraryDynamic::Magic_carpet;
					array_res[i] = new RaceLibraryDynamic::Racer_result;
					std::cout << array_air_veh[i]->Get_name() << " ������� ���������������." << std::endl;

					std::cout << array_air_veh[i]->Get_name() << " ������� ���������������." << std::endl;

					if (distance < 1000)
					{
						total_time = distance / array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
					else if (distance >= 1000 && distance < 5000)
					{
						total_time = distance * (100.0 - (float)array_air_veh[i]->Get_k_lim()) / 100.0 / (float)array_air_veh[i]->Get_speed();

						array_air_veh[i]->Set_race_time(total_time);
					}
					else if (distance >= 5000 && distance < 10000)
					{
						total_time = distance * (100 - array_air_veh[i]->Get_k_lim_1()) / 100 / array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}
					else if (10000 <= distance)
					{
						total_time = distance * (100 - array_air_veh[i]->Get_k_lim_2()) / 100 / array_air_veh[i]->Get_speed();
						array_air_veh[i]->Set_race_time(total_time);
					}

					array_res[i]->Set_racer_name("����-������");
					array_res[i]->Set_racer_time(total_time);
				}
				else
				{
					std::cout << "�� ���������� ���������������� ���� � ���� ������������ �������� ������ �� ���� �����, ��� �� ���������" << std::endl;
					std::cout << "�� ������ ���������������� ������ ������������ ��������" << std::endl;
					i = i - 1;
				}
			}
			else
			{
				std::cout << "�� ����� ������������ ������, �������� ����� 1,2,3,4,5,6 ��� 7." <<
					"��� ���������� ����������� ������� 0." << std::endl;
			}

			std::cout << race_name << "����������: " << distance << std::endl;
			std::cout << "������������������ ������������ ��������: ";
			j = i;
			for (int j = 0; j <= i; j = j++)
			{
				std::cout << array_res[j]->Get_racer_name() << " ";
			}
			i = i + 1;
			std::cout << std::endl;
			std::cout << "1. �������-���������" << std::endl;
			std::cout << "2. �����" << std::endl;
			std::cout << "3. �������" << std::endl;
			std::cout << "4. �������" << std::endl;
			std::cout << "5. ���" << std::endl;
			std::cout << "6. �������-���������" << std::endl;
			std::cout << "7. ����-������" << std::endl;
			std::cout << "0. ��������� �����������" << std::endl;
			std::cout << "�������� ��������� ��� ���� ��� ��������� �������� �����������: " << std::endl;
			std::cout << "������ ���� ���������������� ���� �� ��� ������������ ��������" << std::endl;

		} while (veh != 0 || j == 0);

		std::cout << "����������� ���������� ���������!" << std::endl;
		std::cout << std::endl;
		std::cout << "����� ���������� � �����: " << j + 1 << std::endl;
		std::cout << std::endl;
		std::cout << "������ ����������." << std::endl;
		for (int i = 0; i <= j; i++)
		{
			std::cout << array_res[i]->Get_racer_name() << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "1. ���������������� ���������" << std::endl;
		std::cout << "2. ������ �����" << std::endl;
		std::cout << "�������� ��������: ";

		std::cin >> reg;
		std::cout << std::endl;
	} while (reg == 1);

	int size = j;
	bool swapped = false;
	do
	{
		swapped = false;
		for (int i = 1; i <= size; i++)
		{
			if ((float)array_res[i - 1]->Get_racer_time() > (float)array_res[i]->Get_racer_time())
			{
				RaceLibraryDynamic::Racer_result* temp = array_res[i - 1];
				array_res[i - 1] = array_res[i];
				array_res[i] = temp;
				swapped = true;
			}
		}
	} while (swapped);

	// ����� �� ������ ����������� ����� �� ������� (� ���� ����� ��������� �����) � ���������� (� ���� ������������ �����)
	std::cout << std::endl;
	std::cout << "���������� �����." << std::endl;

	std::string temp_name;
	for (int i = 0; i <= j; i = i++)
	{
		std::cout << i + 1 << ". " << array_res[i]->Get_racer_name();
		std::cout << " ����� � ����� " << array_res[i]->Get_racer_time() << std::endl;
	}
	delete[] array_res;
	delete[] array_ground_veh;
	delete[] array_air_veh;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::system("chcp 1251");
	std::cout << "����� ���������� � �������� ���������!" << std::endl;
	int go;
	do
	{
		std::cout << "1. ����� ��� ��������� ����������" << std::endl;
		std::cout << "2. ����� ��� ���������� ����������" << std::endl;
		std::cout << "3. ����� ��� ��������� � ���������� ����������" << std::endl;
		std::cout << "�������� ��� �����: ";

		int type_number;
		std::string race_name;
		do
		{
			std::cin >> type_number;
			if (type_number == 1)
			{
				race_name = "����� ��� ��������� ����������. ";
				std::cout << race_name << std::endl;
			}
			else if (type_number == 2)
			{
				race_name = "����� ��� ���������� ����������. ";
				std::cout << race_name << std::endl;
			}
			else if (type_number == 3)
			{
				race_name = "����� ��� ��������� � ���������� ����������. ";
				std::cout << race_name << std::endl;
			}
			else
			{
				std::cout << "������� ����� �� 1 �� 3 � ����������� �� ���������� ���� �����: " << std::endl;
				//���� ������� �� �����, � �����, �� ��������� ��������, �� ���� ������ � ����������� ����
				//������� ������ �� ����� ����� ������ ���� �����
			}
		} while (type_number != 1 && type_number != 2 && type_number != 3);

		std::cout << "������� ����� ��������� (������ ���� �������������): ";

		int distance;
		std::cin >> distance;
		std::cout << std::endl;

		std::cout << "������ ���� ���������������� ���� �� ��� ������������ ��������" << std::endl;

		std::cout << std::endl;

		std::cout << race_name << "����������: " << distance << std::endl;

		if (type_number == 1) {
			ground_race(distance);
		}
		else if (type_number == 2)
		{
			air_race(distance);
		}
		else if (type_number == 3)
		{
			mix_race(distance);
		}

		std::cout << "�������� ���������� �������� �� ������ � ������� ����� 1 ��� 2 � ����������� �� ������ ������" << std::endl;
		std::cout << "1. �������� ��� ���� �����" << std::endl;
		std::cout << "2. �����" << std::endl;
		std::cin >> go;
	} while (go == 1);

	return 0;
}