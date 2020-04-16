
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

let getEmpleado = (id, callback)=>{
    let empleadoDB = empleados.find( empleado => empleado.id === id)
    
    if( !empleadoDB ){
        callback(`No exite un empleado con el ID ${ id }`)

    } else {
        callback( null, empleadoDB);
    }
}

let getSalario = (empleado, callback)=>{
    let salarioDB =  salarios.find( salario => salario.id === empleado.id)

    if ( !salarioDB ) {
        callback(`No se encontró un salario para el empleado ${ empleado.nombre}`)
    } else {
        callback(null , {
            nombre : empleado.nombre,
            salario : salarioDB.salario,
            id : empleado.id
        });
    }
}


getEmpleado(3, (error, empleado)=>{

    if(error){
        return console.log(error);
        
    }

    getSalario( empleado, (error, resp)=>{
        if(error){
            return console.log(error);
            
        };

        console.log(`El salario del empleado ${resp.nombre} es de ${resp.salario} $`);
        
    })
    
});