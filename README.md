# Binary-search
Bu programın amacı, bir dizide ikili arama algoritmasını uygulayarak belirli bir elemanın dizide bulunup bulunmadığını kontrol etmektir.

Program, binarySearch fonksiyonunu kullanarak ikili arama algoritmasını gerçekleştirir. Bu fonksiyon, bir sıralı diziye (sıralı olması önemlidir) ve aranan elemana (x) sahip bir dizi segmentine (sol ve sağ indisler arasındaki bölüme) bakarak arama yapar.

İkili arama algoritması, dizinin ortasındaki elemanı seçer ve aranan elemanla karşılaştırır. Eğer ortadaki eleman aranan elemana eşitse, elemanın dizideki indisini döndürür. Eğer ortadaki eleman aranan elemandan büyükse, arama işlemi sol tarafta (daha küçük olan yarıda) devam eder. Eğer ortadaki eleman aranan elemandan küçükse, arama işlemi sağ tarafta (daha büyük olan yarıda) devam eder. Bu işlem, aranan eleman bulunana veya arama segmenti boşalana kadar tekrarlanır.

Program, önceden tanımlanmış bir dizi kullanarak ikili arama algoritmasını çağırır ve aranan elemanın dizide bulunup bulunmadığını kontrol eder. Sonuca bağlı olarak, bulunan elemanın indisini veya elemanın bulunamadığını ekrana yazdırır.
