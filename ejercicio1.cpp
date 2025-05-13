/*Paso 1: Determinar la talla de zapato según la edad
 */

#include <iostream>
using namespace std;

int main()
{
    // Paso 1: Determinar la talla de zapato según la edad
    int age = 0, genero = 0;
    double money = 200;
    double zap1h = 64;
    double zap2h = 96;
    double zap3h = 200;
    double zap1m = 59.5;
    double zap2m = 85;
    double zap3m = 212.5;
    int zapatoSelec;

    cout << "Por favor seleccione su edad\n";
    cout << "1. 0 a 12 anios              \n";
    cout << "2. 13 a 17 anios             \n";
    cout << "3. 18 a 64 anios             \n";
    cout << "4. 65 anios en adelante      \n";
    cin >> age;

    switch (age)
    {
    case 1:
        cout << "Su talla de zapatos recomendada es: 34 \n";

        break;
    case 2:
        cout << "Su talla de zapatos recomendada es: 38 \n";
        break;
    case 3:
        cout << "Su talla de zapatos recomendada es: 40 \n";
        break;
    case 4:
        cout << "Su talla de zapatos recomendada es: 42 \n";
        break;
        cout << "Datos ingresados no son validos \n";
    default:
        break;
    }
    // Paso 2: Solicitar el género del usuario (
    cout << "Por favor selecciona el genero de zapatos que buscas\n";
    cout << "1. Hombre             \n";
    cout << "2. Mujer              \n";
    cout << "3. Mostrar todo       \n";
    cout << "4. Salir       \n";
    cin >> genero;

    // Paso 3: Mostrar los zapatos disponibles según el género

    if (genero > 3 or genero < 0)
    {
        cout << "Decidio salir \n";
    }
    else if (genero == 1)
    {
        cout << "Para hombre estan las siguentes opciones:\n";
        cout << "1. Zapato Deportivo: $80 (descuento del 20%, precio con descuento $64).\n";
        cout << "2. Zapato Formal: $120 (descuento del 20%, precio con descuento $96).\n";
        cout << "3. Zapato Premium: $250 (descuento del 20%, precio con descuento $200).\n";
        cin >> zapatoSelec;
    }
    else if (genero == 2)
    {
        cout << "Para mujer estan las siguentes opciones:\n";
        cout << "1. Zapato Casual: $70 (descuento del 15%, precio con descuento $59.5).\n";
        cout << "2. Zapato Elegante: $100 (descuento del 15%, precio con descuento $85).\n";
        cout << "3. Zapato Premium: $250 (descuento del 15%, precio con descuento $212.5).\n";
        cin >> zapatoSelec;
    }
    else
    {
        cout << "Todo:\n";
        cout << "1. Zapato Deportivo: $80 (descuento del 20%, precio con descuento $64).\n";
        cout << "2. Zapato Formal: $120 (descuento del 20%, precio con descuento $96).\n";
        cout << "3. Zapato Premium: $250 (descuento del 20%, precio con descuento $200).\n";
        cout << "4. Zapato Casual: $70 (descuento del 15%, precio con descuento $59.5).\n";
        cout << "5. Zapato Elegante: $100 (descuento del 15%, precio con descuento $85).\n";
        cout << "6.Zapato Premium: $250 (descuento del 15%, precio con descuento $212.5).\n";
        cin >> zapatoSelec;
    }
    switch (zapatoSelec)
    {
        // Paso 4: Verificar si el usuario tiene suficiente dinero para comprar el zapato seleccionado
    case 1:
        cout << "Has seleccionado: Zapato Deportivo\n";
        cout << "El total a pagar con descuentos es: $ " << zap1h << endl;

        cout << "Compra realizada con exito\n";
        cout << "Su saldo actual es: $ " << money - zap1h << endl;

        cout << "Gracias por su compra";
        break;

    case 2:
        cout << "Has seleccionado: Zapato Formal\n";
        cout << "El total a pagar con descuentos es: $ " << zap2h << endl;

        cout << "Compra realizada con exito\n";
        cout << "Su saldo actual es: $ " << money - zap2h << endl;

        cout << "Gracias por su compra";
        break;
    case 3:
        cout << "Has seleccionado: Zapato Premiun\n";
        cout << "El total a pagar con descuentos es: $ " << zap3h << endl;

        cout << "Compra realizada con exito\n";
        cout << "Su saldo actual es: $ " << money - zap3h << endl;

        cout << "Gracias por su compra";
        break;
     
    /*
        if (genero == 1)
        {
            cout << "Has seleccionado: Zapato Deportivo\n";
            cout << "El total a pagar con descuentos es: $ " << zap1h << endl;

            cout << "Compra realizada con exito\n";
            cout << "Su saldo actual es: $ " << money - zap1h << endl;

            cout << "Gracias por su compra";
        }
        else if (genero == 1 && zapatoSelec == 2)
        {
            cout << "Has seleccionado: Zapato Formal\n";
            cout << "El total a pagar con descuentos es: $ " << zap2h << endl;

            cout << "Compra realizada con exito\n";
            cout << "Su saldo actual es: $ " << money - zap2h << endl;

            cout << "Gracias por su compra";
        }
        else if (genero == 1 && zapatoSelec == 3)
        {
            cout << "Has seleccionado: Zapato Premiun\n";
            cout << "El total a pagar con descuentos es: $ " << zap3h << endl;

            cout << "Compra realizada con exito\n";
            cout << "Su saldo actual es: $ " << money - zap3h << endl;

            cout << "Gracias por su compra";
        }

        break;
    case 2:

        if (genero == 1)
        {
            cout << "Has seleccionado: Zapato Formal\n";
            cout << "El total a pagar con descuentos es: $ " << zap1h << endl;

            cout << "Compra realizada con exito\n";
            cout << "Su saldo actual es: $ " << money - zap1h << endl;

            cout << "Gracias por su compra";
        }
        else if (genero == 2)
        {
            cout << "Has seleccionado: Zapato Formal\n";
            cout << "El total a pagar con descuentos es: $ " << zap1m << endl;

            cout << "Compra realizada con exito\n";
            cout << "Su saldo actual es: $ " << money - zap1m << endl;

            cout << "Gracias por su compra";
        }
        else
        {
        }
        break;
    case 3:
        break;


*/
    default:
        break;
    }

    /*  switch (genero)
      {
      case 1:
          cout << "Para hombre estan las siguentes opciones:\n";
          cout << "Zapato Deportivo: $80 (descuento del 20%, precio con descuento $64).\n";
          cout << "Zapato Formal: $120 (descuento del 20%, precio con descuento $96).\n";
          cout << "Zapato Premium: $250 (descuento del 20%, precio con descuento $200).\n";
          break;
      case 2:
          cout << "Para mujer estan las siguentes opciones:\n";
          cout << "Zapato Casual: $70 (descuento del 15%, precio con descuento).\n";
          cout << "Zapato Elegante: $100 (descuento del 15%, precio con descuento).\n";
          cout << "Zapato Premium: $250 (descuento del 15%, precio con descuento).\n";

          break;
      case 3:
          cout << "Todo:\n";
          cout << "Zapato Deportivo: $80 (descuento del 20%, precio con descuento $64).\n";
          cout << "Zapato Formal: $120 (descuento del 20%, precio con descuento $96).\n";
          cout << "Zapato Premium: $250 (descuento del 20%, precio con descuento $200).\n";
          cout << "Zapato Casual: $70 (descuento del 15%, precio con descuento).\n";
          cout << "Zapato Elegante: $100 (descuento del 15%, precio con descuento).\n";
          cout << "Zapato Premium: $250 (descuento del 15%, precio con descuento).\n";

          break;

      default:
          break;
      }

    */

    return 0;
}