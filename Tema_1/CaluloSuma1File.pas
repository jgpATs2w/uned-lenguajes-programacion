{Programa en Pascal almacenado
en un unico fichero}
Program CalculoSuma
var
  x, y, result: real;
  Function suma (x: real, y:real):real
  begin
    suma := x + y;
  end;
begin
  writeln('Introduce el primer sumando');
  readln(x);
  writeln('Introduce el segundo sumando');
  readln(y);
  result = suma(x,y);
  writeln('El resultado es: ', result);
end.
