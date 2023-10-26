#include "Airplane.h"
int main()
{
    Airplane Cessna_150(4, "Piston");
    Airplane Piper_Meridian(80, "Turboprop");
    Airplane Boeing_737(20, "Jet");
    Airplane Airbus_A320(200, "Narrow body");

    Cessna_150.print();
    Piper_Meridian.print();
    Boeing_737.print();
    Airbus_A320.print();
    cout << boolalpha << (Cessna_150 == Boeing_737) << endl;
    cout << boolalpha << (Cessna_150 > Boeing_737) << endl;
    for (size_t i = 0; i < 50; i++)
    {
        ++Boeing_737;
        ++Airbus_A320;
    }
    --Boeing_737;
    Boeing_737.print();
    Airbus_A320.print();
}
 
