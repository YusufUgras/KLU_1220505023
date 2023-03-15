#include <stdio.h>
//Tamsayi dizisi icinde en kucuk sayiyi bulan fonksiyon

//Dizinin buyuklugu "(int)size" degiskeni n olmak uzere
int min(int *numbers,int size){
    int minNumber = numbers[0]; //1 kere asignment islemi
    for (int i = 1; i < size; i++) //n - 1 kere dongu yapilacak 
    {
        if (minNumber > numbers[i]) //n - 1 kere karsilastirma islemi yapilacak
        { 
            minNumber = numbers[i]; // 0 ile n - 1 arasinda degisen assignment islemi
                                    // en kotu senaryoda n - 1 olacak
        }
        
    }
    // toplamda T(n) = n-1 + n-1  = 2n - 2
    return minNumber;
    

}

int main(){
    //deneme 
    int numbers[] = {12,5,67,-133,5,45};
    printf("Min Number is  %d\n" ,min(numbers , 6));
    return 0;

}

