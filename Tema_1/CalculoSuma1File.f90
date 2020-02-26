!Programa en Fortran 90 almacenado 
!en un unico fichero
program CalculoSuma
  implicit none
  real:: x, y, result, suma
  write(*,*)'Introduce el primer sumando'
  read(*,*)x
  write(*,*) 'Introduce el segundo sumando'
  read(*,*)y
  result = suma(x,y)
  write(*,*) 'El resultado es: ', suma
end program CalculoSuma
!Fin del programa principal
function suma(x,y)
  implicit none
  real:: suma, x, y
  suma = x+y
  return
end function suma