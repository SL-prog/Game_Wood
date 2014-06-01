#include "GameWood.h"

void initGameWood()
{
    pinMode(BT_UP   ,INPUT);digitalWrite(BT_UP   ,HIGH);
    pinMode(BT_DOWN ,INPUT);digitalWrite(BT_DOWN ,HIGH);
    pinMode(BT_LEFT ,INPUT);digitalWrite(BT_LEFT ,HIGH);
    pinMode(BT_RIGHT,INPUT);digitalWrite(BT_RIGHT,HIGH);
    pinMode(BT_A ,INPUT);digitalWrite(BT_A ,HIGH);
    pinMode(BT_B,INPUT);digitalWrite(BT_B,HIGH);
}
