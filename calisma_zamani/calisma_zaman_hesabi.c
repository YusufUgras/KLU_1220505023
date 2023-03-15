
//Belirli bir aralikta istenen sayiyi varsa bulup indeksini veren, 
//yoksa -1 donduren fonksiyon


int Search(int D[],int N, int sayi){
    int i = 0;
    //N kere ya da 1 kere dongu
    while (i<N) 
    {
        //sayi bulunursa dongu duracak en iyi ihtimalde 1. dongude sayi bulunur
        //islem biter

        //sayi bulunmadi ya da (N). dongude bulundu ise (N). dongude islem
        //biter

        //1 kere karsilastirma islemi 
        if (D[i] == sayi) break;    
        //1 kere arttirma islemi    //i indeksindeki sayi aranan sayi ise duracak
        i++;                        //degil ise dongu devam edecek
    }                               //en iyi ihtimalde ilk dongude sayi bulunur
    if (i<N) return i;              //en kotu ihtimalde en fazla N kadar dongu yapilir
    else return -1;                 //sayi bulunur ya da bulunmaz dongu sonlanir
}

//sonuc olarak en kotu senaryoda (N) kere karsilastirma ve (N -1) kere 
// arttırma islemi yapilir. En kotu senaryoda calisma zamani T(n) =  2n - 1  olur 

//en iyi senaryoda 1 kere karsilastirma yapilir ve islem biter calisma
//zamani T(n) =  1 dir

//ortalama senaryoda (calisma suresi lineer olarak arttigi icin) dizinin
//ortasinda olan sayiyi bulmak icin (N/2) kere karsilastirma ve (N/2 -1) kere
//arttirma islemi yapilir sonucta calisma zamani T(n) =  n - 1 olur. 