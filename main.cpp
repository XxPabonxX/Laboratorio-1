#include <iostream>

#ifdef _win32

    #include <windows.h>

#endif

using namespace std;

int Limpiar_pantalla(void);
int Menu(void);
int Menu2(void);

int Problema2(void);
int Problema4(void);
int Problema6(void);
int Problema8(void);
int Problema10(void);
int Problema12(void);
int Problema14(void);
int Problema16(void);
int Problema17(void);

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

        case 4:

            do {

                Problema4();
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

        case 10:

            do {

                Problema10();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 12:

            do {

                Problema12();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 14:

            do {

                Problema14();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 16:

            do {

                Problema16();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 17:

            do {

                Problema17();
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

        cout << i << ". Para ir al punto " << i << "." << endl;

    }
    cout << "17. Para ir al punto 17." <<endl;
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

int factorial(int numero);
int num_inv(int num);

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
int Problema4(void){

    int hora1 = 0, hora2 = 0, min1 = 0, min2 = 0, ht = 0, mt = 0;
    bool B = true;

    cout << "Ingresa una la primera hora: ";
    cin >> hora1;

    cout << "Ingresa una la segunda hora: ";
    cin >> hora2;

    while(B!=false){

        min1 = hora1%100;
        hora1 = hora1/100;
        min2 = hora2%100;
        hora2 = hora2/100;
        B=false;

    }

    ht = (hora1 + hora2);
    mt = (min1 + min2);

    if(ht>24){

        B = true;

        while(B!=false){

           cout << "reingresa los datos de la hora y minutos, te pasaste del dia " << ht << " " << endl;
           cout << "Ingresa la primera hora: ";
           cin >> hora1;

           cout << "Ingresa la segunda hora: ";
           cin>>hora2;

           min1 = hora1%100;
           hora1 = hora1/100;
           min2 = hora2%100;
           hora2 = hora2/100;

           ht=hora1+hora2;
           mt=min1+min2;

           if(ht<24){

               break;

           }

        }

    }

    else if(mt>60){

        ht+=1;
        mt-=60;

        if(ht>24){

            cout<<"reingresa los datos, te pasaste del día"<<ht<<mt;

        }
        else{

            cout<<"La hora es: "<<ht<<mt;

        }

    }

    return 0;
}
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
int Problema10(void){

    int numero = 0, numero_primo = 0, contador = 0, base = 2;

    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << endl;

    while (contador < numero){

        for(int i = 2; i<= base; i++){

            if (i != base && base%i == 0){

                break;

            }else if(i==base){

                numero_primo = base;
                contador++;

            }

        }

        base++;

    }

    cout << "El " << numero << " numero primo es el numero para: " << numero_primo << endl;

    return 0;
}
int Problema12(void){

    int num = 0, mf_prim = 1;
    bool es_primo = false;

    cout<<"Ingresa un numero: ";
    cin >> num;


    for (int i = 2; i<=num; i++){

        if (num%i == 0){

            for (int j=2; j<=i; j++){

                if (i%j == 0){

                    if (i == j){

                        es_primo = true;

                    }
                    else{

                        es_primo = false;

                    break;
                    }
                }
                else{

                    es_primo = false;

                }

            }

        }

        else {

            es_primo = false;

        }

        if (es_primo == true){

            mf_prim = i;

        }

    }

    cout<< "El mayor factor primo de "<<num<<" es: "<<mf_prim<<endl;

    return 0;

}
int Problema14(void){

        int num = 0,copia_num = 0,copia_mul_1 = 0,copia_mul_2 = 0, evalua = 0;

        cout << "Ingrese un numero de tres digitos: ";
        cin >> evalua;

        for (int mul_1 = 1; mul_1 <= evalua; mul_1++){

            for (int mul_2 = 1; mul_2 <= evalua; mul_2++){

                num = (mul_1 * mul_2);

                if (num == num_inv(num)){

                    if (num > copia_num){

                        copia_num = num;
                        copia_mul_1 = mul_1;
                        copia_mul_2 = mul_2;

                    }
                }
            }
        }

        cout << copia_mul_1 << "*" << copia_mul_2 << " = " << copia_num << endl;

        return 0;

    }
int Problema16(void){

    int n = 0, k = 0, terminos = 0, maxter = 0, i1 = 0;

    cout << "ingrese numero limite de semilla: ";
    cin >> k;


    for (int i=1; i<=k; i++){

        n=i;
        terminos=1;
        cout << n << ": " << n << " ";

        while (n!=1){

            if (n%2 == 0){

                n = n/2;
                terminos++;
                cout << n << " ";

            }

            else {

                n = (3*n+1);
                terminos++;
                cout << n << " ";

            }

        }

        if (terminos>maxter){

            maxter = terminos;
            i1 = i;

        }

        cout << endl;

    }

    cout << "La serie mas larga es con la semilla: " << i1 << " y tiene " << maxter << " terminos" << endl;

    return 0;

}
int Problema17(void){

    int K = 0,  tri = 0,  count = 1, countri = 0;
    bool B = true;

    cout << "Ingresa un numero: ";
    cin >> K;

    while(B != false){

        tri = (count * (count+1)/2);
        cout << tri << ": ";

        for(int i=1; i <= tri; i++){

            if(tri%i==0){

                countri += 1;
                cout << i << ", ";

            }
        }

        cout << endl;

        if(countri>=K){

            cout<<"El numero es: "<<tri<<" que tiene "<<countri<<" divisores";
            B=false;
            break;

        }else{

            count++;
            countri=0;

        }

    }

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
int num_inv(int num){

    int inv = 0;

    while(num > 0){

        inv = (inv * 10 + (num % 10));
        num = (num / 10);

    }

    return inv;

}
