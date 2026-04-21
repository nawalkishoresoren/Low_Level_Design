class TVDisplay:
    def update(self,temperature):
        print(f"TV Display: updates with temperature {temperature}")
    
class MobileDisplay:
    def update(self,temperature):
        print(f"Mobile Display: updates with temperature {temperature}")

class WeatherStation:
    def __init__(self):
        self.__temperature = 0
        self.__mobile_display = MobileDisplay()
        self.__tv_display = TVDisplay()
    
    def update_temperature(self, new_temperature):
        self.__temperature = new_temperature
        self.__mobile_display.update(new_temperature)
        self.__tv_display.update(new_temperature)


weather_station = WeatherStation()
print("Updating temperature to 25\n")
weather_station.update_temperature(25)