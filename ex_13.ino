//
// Created by marye on 2022-03-13.
//

/**
* Create a system with the proximity/distance sensor. You should use the sensor to get the information about the
 * distance to an obstacle. You should use four LEDs to indicate how close the obstacle is from the sensor.
 * If the object is out of range, then no LEDs should be turn on. If the object is in range, you should turn on 1, 2 or
 * 3 LEDs, depending on the distance. If the object is too close, you should turn on four LEDs.
*/

#define SENSOR_PIN 7
#define LED_1 8
#define LED_2 9
#define LED_3 10
#define LED_4 11


long distance = 0.0;


void setup()
{
    pinMode(LED_1, OUTPUT);
    pinMode(LED_2, OUTPUT);
    pinMode(LED_3, OUTPUT);
    pinMode(LED_4, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    distance = read_distance(SENSOR_PIN, SENSOR_PIN);
    Serial.println(distance);
    distance_displayer();
    delay(500);
}

void distance_displayer()
{
    if (distance < 2000.0)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
        digitalWrite(LED_4, HIGH);
    } else if ( distance >= 2000.0 && distance < 7000.0)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
        digitalWrite(LED_4, LOW);
    } else if (distance >= 7000.0 && distance < 15000.0)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, LOW);
        digitalWrite(LED_4, LOW);
    } else if (distance >= 15000.0 && distance < 19000.0)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, LOW);
        digitalWrite(LED_3, LOW);
        digitalWrite(LED_4, LOW);
    } else if (distance > 19000.0)
    {
        digitalWrite(LED_1, LOW);
        digitalWrite(LED_2, LOW);
        digitalWrite(LED_3, LOW);
        digitalWrite(LED_4, LOW);
    }
}

long read_distance(int trigger_pin, int echo_pin)
{
    pinMode(trigger_pin, OUTPUT);
    digitalWrite(trigger_pin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigger_pin, HIGH);
    delayMicroseconds(2);
    digitalWrite(trigger_pin, LOW);
    pinMode(echo_pin, INPUT);

    return pulseIn(echo_pin, HIGH);
}






