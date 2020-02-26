!Programa principal en Fortran 90
program CalculoSuma
   implicit none
   real::x, y, result
   real, external::suma
   write(*,*) 'Introduce el primer sumando'
   read(*,*)x
   write(*,*)'Introduce el segundo sumando'
   read(*,*)y
   result = suma(x,y)
   write(*,*) 'El resultado es: ', result
end program CalculoSuma