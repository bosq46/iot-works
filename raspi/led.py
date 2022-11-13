import RPi.GPIO as GPIO
from time import sleep


# 実行には /dev/mem へのアクセスをRoot権限が必要
LED_PINS = [16, 20, 21]

GPIO.setmode(GPIO.BCM)
for pin in LED_PINS:
    GPIO.setup(pin, GPIO.OUT)

try:
    while True:
        for pin in LED_PINS:
            GPIO.output(pin, GPIO.HIGH)
            sleep(0.5)
            GPIO.output(pin, GPIO.LOW)
            sleep(0.5)
except KeyboardInterrupt:
    pass

GPIO.cleanup()
print("finished.")
