#How to define access modifiers of a class in python:

'''Public Access Modifier:
The members of a class that are declared public are easily accessible from any part of the program. 
All data members and member functions of a class are public by default. 
'''

class x:
    {body}

'''Protected Access Modifier:
The members of a class that are declared protected are only accessible to a class derived from it. 
Data members of a class are declared protected by adding a single underscore ‘_’ symbol before the data member of that class. 
'''

class x:
    #protected data members
    _name = None
    _roll = None

    #protected memmber function
    def _callname():
        {body}

'''Private Access Modifier:
The members of a class that are declared private are accessible within the class only, 
private access modifier is the most secure access modifier. 
Data members of a class are declared private by adding a double underscore ‘__’ symbol before the data member of that class. 
'''

class x:
    #private data members
    __name = None
    __roll = None
     
    #private member function
    def __callname():
        {body}
