from memento import Memento

class History:
    def __init__(self):
        self.__history=[]

    def save_text(self,memento:Memento):
        self.__history.append(memento)

    def undo(self):
        if len(self.__history)>0:
           self.__history.pop()
           return self.__history[-1] if len(self.__history)>0 else Memento("")
        else:
            print("No history to undo")
            return Memento("")

    def get_history(self):
        for i in self.__history:
            print(i.get_saved_text())
    
    