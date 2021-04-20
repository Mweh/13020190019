def Garis():
    print('//////////////////////////////////////////////')
    
limit = int(input('Jumlah Data yang ingin diinput : ')) 
pekerja = {} 

def Upah(bag1,bag2):
    if bag1 == 1:
        if bag2 > 40:
            return int(bag2 * 3000 * 1.5)
        else:
            return bag2 * 3000
    elif bag1 == 2:
        if bag2 > 40:
            return int(bag2 * 3500 * 1.5)
        else:
            return bag2 * 3500
    elif bag1 == 3:
        if bag2 > 40:
            return int(bag2 * 4000 * 1.5)
        else:
            return bag2 * 4000
    elif bag1 == 4:
        if bag2 > 40:
            return int(bag2 * 5000 * 1.5)
        else:
            return bag2 * 5000

for x in range(limit):
    Garis()
    print('data ke -'+ str(x+1))
    ID = input('Masukkan ID : ')
    Nama = input('Masukkan Nama : ')
    Gol = input('Masukkan Golongan : ')
    Jam = input('Masukkan Jam Kerja : ')
    pekerja[ID] = [Nama,Gol,Jam]
    Garis()

Garis()
print('Data yang tersimpan sebanyak : ' + str(len(pekerja)))
print('Data yang tersimpan : ')
for x in pekerja:
    print('ID : ' + x + ' Nama : ' + pekerja[x][0] + ' Golongan : ' + pekerja[x][1] + ' Jam Kerja : ' + pekerja[x][2])
Garis()

flag = 1 

while flag == 1:
    item = input('Masukkan ID Yang Akan Ditampilkan : ')

    for key in pekerja.keys() :
        if key == item :
            gaji = Upah(int(pekerja[key][1]), int(pekerja[key][2]))
            Garis()
            print('Nama : ' + pekerja[key][0])
            print('Golongan : ' + pekerja[key][1])
            print('Jam kerja : ' + pekerja[key][2])
            print('Gaji : Rp.' + str(gaji))
            Garis()
        else: 
            print('Data tdk ada')
            Garis()

    flag = int(input('Lanjut atau akhiri :\n1.Ya\n2.Tdk\n>>'))
    Garis()
    if flag != 1:
        break