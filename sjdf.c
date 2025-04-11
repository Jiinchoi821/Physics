#include <stdio.h>
#include <math.h>

void main()
{
	double v0; // m/s
	double angle; // 
	double g = 9.8; //m/s^2
	double a = -g;
	double pi = 3.141592;

	printf("물체의 초기 속도 ==>");
	scanf_s("%lf", &v0);
	printf("물체의 초기 각도 ==>");
	scanf_s("%lf", &angle);

	double angle_red = angle * pi / 180;

	//1)x,y 방향의 초기속도를 구하세요. 
	double v0x = v0 * cos(angle_red);
	double v0y = v0 * sin(angle_red); 

	printf("%lf, %lf", v0x, v0y);

	//2) 최고점의 높이를 구하세요. 
	double H = v0y * v0y / g / 2;

	printf("%lf m\n", H);

	//3) 최고점에 도착하는 시간을 구하세요. 
	double t;

	//v0y = v0y + a * t, t = v0y / g

	t = v0y / g;

	printf("%lf s\n", t);

	//4)수평으로 이동한 최고 거리를 구하세요. 
	double x;

	x = v0x * 2 * t;

	printf("%lf m\n", x);

	//5) 지면에 닿을 때의 vx, vy를 구하고 v의 벡터 성분을 구하세요.

	double vx;
	double vy;
	double t_ground = 2 * t;

	vx = v0x;
	vy = v0y + a * t_ground;

	printf(" %lf, %lf\n", vx, vy);

	double V;
	double theta_rad;
	double theta_deg;
	V = sqrt(vx * vx + vy * vy);
	theta_rad = atan2(vy, vx);
	theta_deg = theta_rad * 180 / pi;

	printf(" % lf, % lf\n", V, theta_deg);
}