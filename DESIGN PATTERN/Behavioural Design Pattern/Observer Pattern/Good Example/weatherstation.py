from observer import Observer

class WeatherStation:
    def __init__(self):
        self.__temperature = 0
        self.__observers = []
    
    def add_observer(self, observer:Observer):
        self.__observers.append(observer)
    
    def remove_observer(self, observer:Observer):
        self.__observers.remove(observer)
    
    def update_temperature(self, new_temperature):
        self.__temperature = new_temperature
        self.notify_observers()
    
    def notify_observers(self):
        for observer in self.__observers:
            observer.update(self.__temperature)
        
    def list_observers(self):
        return self.__observers

    