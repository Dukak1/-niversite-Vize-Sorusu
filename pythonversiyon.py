nufus = int(input("Sınıf kaç kişi: "))
toplam ,enbuyuk, endusuk,i = 0,0,100,0

while i<nufus:
    note = float(input("Alınan not: "))

    if note<0 or note>100:
        print("Geçersiz not değeri!!!")
        continue
    toplam+=note

    if note<endusuk:
        endusuk=note

    if note>enbuyuk:
        enbuyuk=note

    i+=1

print("Notların ortalaması : ",toplam/nufus)
print("En yüksek not : ",enbuyuk)
print("En düşük not : ",endusuk)
    