#include <stdio.h>
int main(void)
{
    const float BITS_PER_BYTE = 8;
	float download_speed_Mps;
	float file_size_MB;

    printf("Enter the download speed (in megabits/second): ");
    scanf("%f", &download_speed_Mps);
    printf("Enter the file size (in megabytes): ");
    scanf("%f", &file_size_MB);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n",
             download_speed_Mps, file_size_MB);
    printf("downloads in %.2f seconds.\n", file_size_MB * BITS_PER_BYTE / download_speed_Mps);

    return 0;
}