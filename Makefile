CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = parking_system
SOURCES = main.cpp vehicle.cpp motorcycle.cpp car.cpp ev.cpp parkingslot.cpp regularslot.cpp vipslot.cpp evslot.cpp parkinggarage.cpp

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	del $(TARGET).exe

run: $(TARGET)
	$(TARGET)

.PHONY: clean run