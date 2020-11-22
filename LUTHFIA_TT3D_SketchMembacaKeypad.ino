//Proyek #34: Membaca Keypad
#include <Keypad.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11, 10, 9, 8, 7);
const byte JmlBaris = 4; // 4 baris
const byte JmlKolom = 3; //3 kolom
char keys[JmlBaris][JmlKolom] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
//hubungkan pin baris keypad dengan pin arduino
  byte PinBaris[JmlBaris] = {3, 2, 1, 0}; 
// hubungkan pin kolom keypad dengan pin arduino
byte PinKolom[JmlKolom] = {4, 5, 6}; 
int count=0;
Keypad keypad = Keypad(makeKeymap(keys), PinBaris, PinKolom, JmlBaris, JmlKolom );
void setup(){
  lcd.begin(16,2);
}
  
void loop()
{
  
  char key = keypad.getKey();//cek jika tombol ditekan
  if (key != NO_KEY)
  {
    lcd.print(key); //cetak ke LCD
    count++; //pindahkan karakter kebaris lcd berikutnya setelah penekanan tombol  
  }
}
