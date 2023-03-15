#include <stdio.h>
#include <string.h>

struct ogrenci_struct
{
    char* ad;
    char* soyad;
    unsigned int no;
};



struct ogrenciler5_struct
{
   struct ogrenci_struct ogrenciler[5];
};

int print_ogrenciler5(struct ogrenciler5_struct ogrenciler5){
    for (int i = 0; i < 5; i++)
    {
        printf("%d. Ogrenci \n" , i+1);
        printf("Isim : %s \n",ogrenciler5.ogrenciler[i].ad);
        printf("Soyisim : %s \n",ogrenciler5.ogrenciler[i].soyad);
        printf("No : %d\n\n------------\n\n",ogrenciler5.ogrenciler[i].no);
    }
    
}

int main(){
    struct ogrenciler5_struct ogrenciler5;
 
    for (int i = 0; i < 5; i++)
    {
       

        ogrenciler5.ogrenciler[i].ad = "Isim";
        ogrenciler5.ogrenciler[i].soyad = "Soyisim";
        ogrenciler5.ogrenciler[i].no = 100 + i;
    }
    print_ogrenciler5(ogrenciler5);

    
}

