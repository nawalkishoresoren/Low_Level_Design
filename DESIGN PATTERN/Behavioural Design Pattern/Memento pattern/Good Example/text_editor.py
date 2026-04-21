from memento import Memento

class TectEditor:
    def __init__(self):
        self.__text=""

    def write(self,new_text:str):
        self.__text+=new_text

    def get_text(self):
        return self.__text
    
    def save(self)->Memento:
        return Memento(self.__text)
    
    def restore(self,memento:Memento):
        self.__text=memento.get_saved_text()