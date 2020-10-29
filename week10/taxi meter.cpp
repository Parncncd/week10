#include<stdio.h>
float distanceMeter(float distance) {
	int distancePrice = 0;
	float a = 10;
	float b = 20;

	if (distance <= 1) {
		distancePrice = 35;
	}
	else if (distance > 1 && distance <= 10) {
		distancePrice = 35 + (5.5 * (distance - 1));
	}
	else if (distance > 10 && distance <= 20) {
		distancePrice = 35 + (5.5 * a) + (6.5 * (distance - 10));
	}
	else if (distance > 20 && distance <= 40) {
		distancePrice = 35 + (5.5 * a) + (6.5 * a) + (7.5 * (distance - 20));
	}
	else if (distance > 40 && distance <= 60) {
		distancePrice = 35 + (5.5 * a) + (6.5 * (a)) + (7.5 * (b)) + (8.0 * (distance - 40));
	}
	else if (distance > 60 && distance <= 80) {
		distancePrice = 35 + (5.5 * (a)) + (6.5 * (a)) + (7.5 * (b)) + (8.0 * (b)) + (9.0 * (distance - 60));
	}
	else if (distance > 80) {
		distancePrice = 35 + (5.5 * a) + (6.5 * a) + (7.5 * b) + (8.0 * b) + (9.0 * b) + (10.5 * (distance - 80));
	}
	if (distancePrice % 2 == 0) {
		distancePrice = distancePrice + 1;
		return distancePrice;
	}
	else {
		distancePrice = distancePrice + 2;
		return distancePrice;
	}

}
float timeMeter(float time) {
	int timePrice = 0;
	timePrice = 2 * time;
	if (timePrice % 2 == 0) {
		timePrice = timePrice - 2;
		return timePrice;
	}
	else {
		timePrice = timePrice - 1;
		return timePrice;
	}
}
int main() {
	float distance, time, price = 0;
	scanf_s("%f %f", &distance, &time);
	if (distance >= 0 && time >= 0) {
		price = distanceMeter(distance) + timeMeter(time);
		printf("%.0f", price);
	}
	else {
		printf("ERROR");
	}
	return 0;
}