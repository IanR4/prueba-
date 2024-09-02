/*
object pepita {
  var energy = 100

  method energy() = energy

  method fly(minutes) {
    energy = energy - minutes * 3
  }
*/

object verdurin {

  var cajones = 10
  var peso = 50
  var property velocidadMaxima = 80
  var kilometraje = 700000

  method calcularVelocidadMaxima() {
    velocidadMaxima -= (peso * cajones) / 500 
  }

}

object scanion {

  var property peso = 0
  var densidad = 10
  var volumen = 5000
  var velocidadMaxima = 140
  var kilometraje = 0

  method calcularPeso() {
    peso = densidad * volumen
  }

}

object cerealitas {

  var peso = 0s
  
  var deterioro = 0
  var property velocidadMaxima = 0
  var property kilometraje = 0
  var property gastos = 0

  method calcularVelocidadMaxima(){

    if(deterioro < 10){
      velocidadMaxima = 40
    } else{
      velocidadMaxima = 60 - deterioro
    }

  }

  method recorrerKilometros(kilometros){
    kilometraje += kilometros
  }

  method pasarPorControl(control) {
    gastos += control.precioInicial() + (control.adicional() * (peso / 1000))
    self.recorrerKilometros(control.kilometrosRecorridos())
    velocidadMaxima = velocidadMaxima.min(control.maxima())
  }
  
}

object rutatlantica {

  var property precioInicial = 7000
  var property adicional = 100
  var property kilometrosRecorridos = 400
  var property maxima = 75

}
