#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void writeStringToEEPROM(const string &data);
string readStringFromEEPROM();
void writeIntToEEPROM(int data);
int readIntFromEEPROM();

int main(){
    writeStringToEEPROM("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRLrNpYqE397178T9vPJrBOPHAioFRfr-PIOA&usqp=CAU");

    cout << endl;

    writeIntToEEPROM(9000);
}






void writeStringToEEPROM(const string &data)
{
  cout <<"data co gia tri la: " << &data << endl;
  int len = data.length();
  for (int i = 0; i < len; ++i)
  {
    cout << data[i] << "    ";
  }
  // Add null terminator at the end of the string
  //EEPROM.write(EEPROM_ADDR + len, '\0');
  //EEPROM.commit(); // Save the changes to the EEPROM
  cout << endl;
}

void writeIntToEEPROM(int data) {
   
   int a = (data >> 8)&(0xFF);  // Most significant byte (MSB)
   int b = data & 0xFF;    // Least significant byte (LSB)

   cout << "MSB: " << a << endl;
   cout << "lsb: " << b << endl;

  }


/*
string readStringFromEEPROM()
{
  char buffer[EEPROM_SIZE];
  int i;
  for (i = 0; i < EEPROM_SIZE; ++i)
  {
    char c = EEPROM.read(EEPROM_ADDR + i);
    if (c == '\0')
    {
      break;
    }
    buffer[i] = c;
  }
  buffer[i] = '\0';
  return String(buffer);
}

void writeIntToEEPROM(int data) {
  EEPROM.write(4, (data >> 8) & 0xFF);  // Most significant byte (MSB)
  EEPROM.write(5, data & 0xFF);     // Least significant byte (LSB)
  EEPROM.commit(); // Save the changes to the EEPROM
}

int readIntFromEEPROM() {
  int msb = EEPROM.read(4);
  int lsb = EEPROM.read(5);
  return (msb << 8) | lsb;
}
*/