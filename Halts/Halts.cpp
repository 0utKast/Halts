#include <cstdlib> // para std::abort()
#include <iostream>

int main()
{
    std::cout << 1 << '\n';
    std::abort();

    // La siguiente declaración nunca se ejecuta
    std::cout << 2 << '\n';

    return 0;
}




















/*#include <cstdlib> // para std::exit()
#include <iostream>

void limpiar()
{
    // código aquí para cualquier tipo de limpieza necesaria
    std::cout << "limpieza\n";
}

int main()
{
    // registramos limpiar( ) para que sea llamada automáticamente cuando sea llamada std::exit() 
    std::atexit(limpiar);  // observa: usamos limpiar en lugar de limpiar( ) porque no estamos 
                          //haciendo una llamada a la función limpiar ( ) en este momento

    std::cout << 1 << '\n';

    std::exit(0); // termina y devuelve status code 0 al sistema operativo

    // la declaración siguiente nunca se ejecuta
    std::cout << 2 << '\n';

    return 0;
}*/








/*#include <cstdlib> // para std::exit()
#include <iostream>

void limpiar()
{
    // código aquí que lleva a cabo cualquier tipo de limpieza necesaria
    std::cout << "limpieza\n";
}

int main()
{
    std::cout << 1 << '\n';
    limpiar();

    std::exit(0); // termina y devuelve status code 0 al sistema operativo

    // La declaración siguiente nunca se ejecuta
    std::cout << 2 << '\n';

    return 0;
}*/



















































