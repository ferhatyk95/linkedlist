/*Main fonksiyonu içerisinde verilen sayýnýn basamaklarýný toplamýný rekürsif bir fonksiyon kullanarak
bulunuz.*/
#include<stdio.h>
int toplam(int number)
{
	if(number==0)
	{
		return 0;
	}
	else
	{
		return number%10 + toplam(number/10);
	}
}
int main()
{
	int sayi;
	printf("bir sayi giriniz=\n");
	scanf("%d",&sayi);
	printf("%d", toplam(sayi));
	return 0;
}

