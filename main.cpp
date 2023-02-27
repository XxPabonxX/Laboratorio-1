#include <iostream>

#ifdef _win32

    #include <windows.h>

#endif

using namespace std;

int Limpiar_pantalla(void);
int Menu(void);
int Menu2(void);

int Problema2(void);
int Problema6(void);
int Problema8(void);

int main(){

    int opcion = 0, opcion2 = 0;

    do{

        opcion = Menu();
        Limpiar_pantalla();

        switch (opcion) {

        case 0:

            cout << "¡¡¡ Hasta luego !!!" << endl;

            break;

        case 2:

            do {

                Problema2();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 6:

            do {

                Problema6();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 8:

            do {

                Problema8();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        default:

            cout << "Esta opcion no esta disponible" << endl;

            break;
        }

    }while(opcion !=0);

    return 0;
}

int Limpiar_pantalla(void) {

    #ifdef _WIN32

        system("cls");

    #else

        system("clear");

    #endif

        return 0;

}
int Menu(void) {

    int opcion = 0;

    cout << "Laboratorio #1" << endl << endl;
    cout << "0. Para salir." << endl;
    for (int i = 2; i <= 16; i += 2) {

        cout << i << ".  Para ir al punto " << i << "." << endl;

    }

    cout << endl << "Ingrese la opcio: ";
    cin >> opcion;

    return opcion;

}

int Menu2(void) {

    int opcion2 = 0;

    cout << endl << "1. Para volver al menu." << endl;
    cout << "2. Para volver a ejecutar el programa." << endl;
    cout << endl << "Ingrese la opcion: ";
    cin >> opcion2;

    return opcion2;

}

int Problema2(void){

    int Dinero = 0, Billete = 0;

    do {

    cout << "Ingrese el dinero a retirar: ";
    cin >> Dinero;
    cout << endl;

    }while(Dinero < 0);



    if(Dinero>=50000){

        Billete = Dinero/50000;
        Dinero -= (50000*Billete);

        cout << "Billete de $50,000: " << Billete << endl;

    }if(Dinero<50000 && Dinero>=20000){

        Billete = Dinero/20000;
        Dinero -= (20000*Billete);

        cout << "Billete de $20,000: " << Billete << endl;

    }if(Dinero<20000 && Dinero>=10000){

        Billete = Dinero/10000;
        Dinero -= (10000*Billete);

        cout << "Billete de $10,000: " << Billete << endl;

    }if(Dinero<10000 && Dinero>=5000){

        Billete = Dinero/5000;
        Dinero -= (5000*Billete);

        cout << "Billete de $5,000: " << Billete << endl;

    }if(Dinero<5000 && Dinero>=2000){

        Billete = Dinero/2000;
        Dinero -= (2000*Billete);

        cout << "Billete de $2,000: " << Billete << endl;

    }if(Dinero<2000 && Dinero>=1000){

        Billete = Dinero/1000;
        Dinero -= (1000*Billete);

        cout << "Billete de $1,000: " << Billete << endl;

    }if(Dinero<1000 && Dinero>=500){

        Billete = Dinero/500;
        Dinero -= (500*Billete);

        cout << "Moneda de $500: " << Billete << endl;

    }if(Dinero<500 && Dinero>=200){

        Billete = Dinero/200;
        Dinero -= (200*Billete);

        cout << "Moneda de $200: " << Billete << endl;

    }if(Dinero<200 && Dinero>=100){

        Billete = Dinero/100;
        Dinero -= (100*Billete);

        cout << "Moneda de $100: " << Billete << endl;

    }if(Dinero<100 && Dinero>=50){

        Billete = Dinero/50;
        Dinero -= (50*Billete);

        cout << "Moneda de $50: " << Billete << endl;

    }

    cout << "Dinero faltante: $" << Dinero << endl;

    return 0;
}

int factorial(int numero);
int Problema6(void){

    int numero = 0;
    float euler = 0, cociente = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << endl;

    for (int i = 0; i < numero; i++){

        cociente = factorial(i);
        euler += 1/cociente;

    }

    cout << "El valor aproximado de euler es: " << euler << endl;

    return 0;

}
int factorial(int numero){

    int numerofactorial = numero;

    if (numerofactorial > 1){

        numerofactorial *= factorial(numero-1);
        return numerofactorial;

    }else{

        return 1;

    }

}

int Problema8(void){

    int a = 0, b = 0, c = 0, suma = 0;


    cout << "Ingrese el numero a: ";
    cin >> a;
    cout << endl;

    cout << "Ingrese el numero b: ";
    cin >> b;
    cout << endl;

    cout << "Ingrese el numero c: ";
    cin >> c;
    cout << endl;

    for (int i = 1; i < c; i++){

        if ((i%a == 0) || (i%b == 0)){

            cout << i;
            if(i<(c-1)){

                cout << " + ";

            }else{

                cout << " = ";

            }

            suma += i;

        }
    }

    cout << suma << endl;

    return 0;

}

