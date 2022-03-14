/**
* Create a system with the force sensor and a buzzer. The system should use the buzzer to make noise when a force is
* applied to the force sensor. The frequency of buzzing should be based on the force applied to the sensor, in the
* following way:
        Force        Buzzer frequency
        0              0 – buzzer off
        0.5 N             1 sek
        1 N              0.3 sek
        2 N              0.2 sek
        5 N              0.1 sek
        > 6 N           0.05 sek

*You can use interrupts or a loop for this exercise.
*/




#define BUZZER_PIN 2
#define FORCE_PIN A0

float force_sensor = 0.0;
float force = 0.0;

void setup() {
    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(FORCE_PIN, INPUT);
    //attachInterrupt(digitalPinToInterrupt(FORCE_PIN), ISR_readForceSensor, RISING);
    Serial.begin(9600);
}

void loop() {
    force_sensor = analogRead(FORCE_PIN);
    read_to_force();
    if(force_sensor < 0.5)
    {
        noTone(BUZZER_PIN);
    } else if (force_sensor >= 0.5 && force_sensor < 1.0)
    {
        tone(BUZZER_PIN, 1);
    }
    else if (force_sensor >= 1.0 && force_sensor < 2.0)
    {
        tone(BUZZER_PIN, 0.3);
    }else if (force_sensor >= 2.0 && force_sensor < 5.0)
    {
        tone(BUZZER_PIN, 0.2);
    }else if (force_sensor >= 5.0 && force_sensor < 6.0)
    {
        tone(BUZZER_PIN, 0.1);
    } else
    {
        tone(BUZZER_PIN, 0.05);
    }
    delay(20);
}

void read_to_force()
{
    Serial.println(force_sensor);
    //convert this into newton somehow...

}

