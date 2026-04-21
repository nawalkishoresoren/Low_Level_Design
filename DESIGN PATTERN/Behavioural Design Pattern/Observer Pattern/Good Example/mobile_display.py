from observer import Observer

class MobileDisplay(Observer):
    def update(self,temperature):
        print(f"Mobile Display: updates with temperature {temperature}")