from observer import Observer

class TVDisplay(Observer):
    def update(self,temperature):
        print(f"TV Display: updates with temperature {temperature}")