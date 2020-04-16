/*
function sumar(a, b){
    return a+b;
}
*/


//---funcion de flechas---
//let sumar = (a, b) => a+b;

//console.log(sumar(10, 30));

/*
function saludar() {
    return 'Hola mundo';
}
*/

//let saludar = () => 'Hola mundo';


/*
function saludar(nombre){
    return `Hola ${nombre}`;
}
*/

//let saludar = (nombre) => `Hola ${nombre}`;

//console.log(saludar('Jonathan'));



//this en una funcion de flecha apunta a un objeto vacio
let deadpool = {
    nombre: 'Wane',
    apellido: 'Winston',
    poder: 'Regeneración',
    getNombre(){
        return `${this.nombre} ${this.apellido} - poder: ${this.poder}`;
    }
};

console.log(deadpool.getNombre());
