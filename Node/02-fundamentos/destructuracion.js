let deadpool = {
    nombre: 'Wade',
    apellido: 'Winston',
    poder: 'Regenaración',
    getNombre: function(){
        return `${this.nombre} ${this.apellid} - poder: ${this.poder}`
    }
};

console.log(deadpool.getNombre());

//let nombre = deadpool.nombre;
//let apellido = deadpool.apellido;
//let poder = deadpool.poder;

//desctructuración

let { nombre: primerNombre, apellido, poder } = deadpool;

console.log(primerNombre, apellido, poder);

