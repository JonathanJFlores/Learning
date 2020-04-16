/*
------CALLBACK------

Es una funcion que tiene un tiempo determinado para que 
se ejecute

*/ 

/*
setTimeout( ()=>{
    console.log('Hola mundo');
}, 3000);
*/

let getUsuarioByid = ( id, callback ) => {

    let usuario = {
        nombre: 'Jonathan',
        id
    }

    if( id === 10 ){
        callback(`El usuario con id ${id}, no existe en la BD`)
    } else {
        callback(null, usuario);
    }
    
}

getUsuarioByid(1, (error, usuario) => {
    if (error){
        return console.log(error);
    }

    console.log('Usuario de BD', usuario);
    
});