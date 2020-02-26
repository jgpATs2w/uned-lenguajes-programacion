{Fichero CalculoSuma.pas}
#include externs.h
Program CalculoSuma
var
  x, y, result:real;
begin
  writeln('Introduce el primer sumando');
  readln(x);
  writeln('Introduce el segundo sumando');
  readln(y);
  result = suma(x,y);
  writeln('El resultado es: ', result);
end.