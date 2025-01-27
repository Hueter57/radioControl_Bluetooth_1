#include <Arduino.h>
#include <DabbleESP32.h>

#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE

void setup() {
    // put your setup code here, to run once:
    Serial.begin(115200);     // make sure your Serial Monitor is also set at this baud rate.
    Dabble.begin("MyEsp32");  //set bluetooth name of your device
}

void loop() {
    Dabble
        .processInput();  //this function is used to refresh data obtained from smartphone.Hence calling this function is mandatory in order to get data properly from your mobile.
    Serial.print("KeyPressed: ");
    if (GamePad.isUpPressed()) {
        Serial.print("Up");
    }

    if (GamePad.isDownPressed()) {
        Serial.print("Down");
    }

    if (GamePad.isLeftPressed()) {
        Serial.print("Left");
    }

    if (GamePad.isRightPressed()) {
        Serial.print("Right");
    }

    if (GamePad.isSquarePressed()) {
        Serial.print("Square");
    }

    if (GamePad.isCirclePressed()) {
        Serial.print("Circle");
    }

    if (GamePad.isCrossPressed()) {
        Serial.print("Cross");
    }

    if (GamePad.isTrianglePressed()) {
        Serial.print("Triangle");
    }

    if (GamePad.isStartPressed()) {
        Serial.print("Start");
    }

    if (GamePad.isSelectPressed()) {
        Serial.print("Select");
    }
    Serial.print('\t');

    int a = GamePad.getAngle();
    Serial.print("Angle: ");
    Serial.print(a);
    Serial.print('\t');
    int b = GamePad.getRadius();
    Serial.print("Radius: ");
    Serial.print(b);
    Serial.print('\t');
    float c = GamePad.getXaxisData();
    Serial.print("x_axis: ");
    Serial.print(c);
    Serial.print('\t');
    float d = GamePad.getYaxisData();
    Serial.print("y_axis: ");
    Serial.println(d);
    Serial.println();
}