let empleados = [{
    id: 1,
    nombre: 'Jonathan'
}, {
    id: 2,
    nombre: 'Rosa'
}, {
    id: 3,
    nombre: 'Paola'
}
];

let salarios =[{
    id: 1,
    salario: 3000
}, {
    id: 2,
    salario: 2000
}];

let getEmpleado = async (id) => {

    let empleadoDB = empleados.find(empleado => empleado.id === id)

    if(!empleadoDB){
        throw new Error(`No existe un empleado en el ID ${ id }`)
    } else {
        return empleadoDB;
    }
}


let getSalario = async (empleado)=>{
    
    let salarioDB = salarios.find(salario => salario.id === empleado.id)

    if ( !salarioDB ) {
        throw new Error(`No se encontró un salario para el empleado ${empleado.nombre}`)
    } else {
        return {
            nombre: empleado.nombre,
            salario: salarioDB.salario,
            id: empleado.id
        };
    }
}

let getInformation = async (id) => {
    let empleado = await getEmpleado(id);
    let salary = await getSalario(empleado)

    return `${ salary.nombre} tiene un salario de $ ${ salary.salario }`
    // console.log(empleado);
    // console.log(salary);
}

getInformation(1)
    .then( resp =>console.log(resp))
    .catch( error => console.log(error));