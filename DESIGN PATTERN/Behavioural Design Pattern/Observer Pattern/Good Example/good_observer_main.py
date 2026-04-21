from weatherstation import WeatherStation
from mobile_display import MobileDisplay
from tv_display import TVDisplay

tv = TVDisplay()
mobile = MobileDisplay()

weather_station = WeatherStation()

print("Adding TV and Mobile Display as observers to Weather Station\n")
print("No observers added yet, so no updates will be sent to TV and Mobile Display = ", weather_station.list_observers())
weather_station.add_observer(tv)
weather_station.add_observer(mobile)
print("Observers added. Current observers = ", weather_station.list_observers())


print("Updating temperature to 25\n")
weather_station.update_temperature(25)

print("Removing TV Display as observer to Weather Station\n")
weather_station.remove_observer(tv)
print("TV Display removed. Current observers = ", weather_station.list_observers())