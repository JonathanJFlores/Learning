let empleados = [{
    id: 1,
    nombre: 'Jonathan'
},{
    id: 2,
    nombre: 'Paola'
},{
    id: 3,
    nombre: 'Jacob'
}];


let salarios = [{
    id: 1, 
    salario: 1000
},{
    id: 2,
    salario: 3000
}];

let getEmpleado = (id)=>{

    return new Promise(( resolve, reject)=>{

        let empleadoDB = empleados.find( empleado => empleado.id === id)
        
        if( !empleadoDB ){
            reject(`No exite un empleado con el ID ${ id }`)
    
        } else {
            resolve(empleadoDB);
        }
    });
}

let getSalario = (empleado)=>{
    return new Promise(( resolve, reject)=>{

        let salarioDB = salarios.find(salario => salario.id === empleado.id)

        if ( !salarioDB ) {
            reject(`No se encontró un salario para el empleado ${empleado.nombre}`)
        } else {
            resolve({
                nombre: empleado.nombre,
                salario: salarioDB.salario,
                id: empleado.id
            });
        }
    });
}

getEmpleado(20).then( empleado => {

    // console.log('Empleado de BD', empleado);
    return getSalario(empleado);
})
.then (resp=>{
    console.log(`El salario de ${ resp.nombre } es de ${ resp.salario }$`);
})
.catch(error =>{
    console.log(error);
    
})