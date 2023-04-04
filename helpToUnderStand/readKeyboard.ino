#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEScan.h>
#include <BLEAdvertisedDevice.h>
#include <BleKeyboard.h>

BleKeyboard bleKeyboard("T-Keyboard", "ESPRESSIF", 100);

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE scan...");
  BLEDevice::init("");
  BLEScan* pBLEScan = BLEDevice::getScan();
  pBLEScan->setAdvertisedDeviceCallbacks(new MyAdvertisedDeviceCallbacks());
  pBLEScan->setActiveScan(true);
  pBLEScan->start(30);
}

void loop() {
  if (bleKeyboard.isConnected()) {
    // read input from the keyboard
    String input = bleKeyboard.read();
    if (input.length() > 0) {
      Serial.print("Input: ");
      Serial.println(input);
    }
  }
  delay(10);
}

class MyAdvertisedDeviceCallbacks: public BLEAdvertisedDeviceCallbacks {
  void onResult(BLEAdvertisedDevice advertisedDevice) {
    if (advertisedDevice.haveName() && advertisedDevice.getName() == "T-Keyboard") {
      BLEDevice::getScan()->stop();
      BLEClient* pClient = BLEDevice::createClient();
      pClient->connect(advertisedDevice);
      bleKeyboard.setClient(pClient);
      Serial.println("Connected to keyboard.");
    }
  }
};
