/**
 * ASYNC -AWAY
 */


//  let getNombre = async () => {
//      return 'Jonathan';
//  };

let getNombre = () =>{
    return new Promise((resolve,  reject)=>{
        setTimeout( ()=>{
            resolve('Jonathan');
        }, 3000);
    });
}

let saludo = async () => {
    let nombre = await getNombre();
    
    return `Hola ${ nombre }`;
}

saludo().then(mensaje =>{
    console.log(mensaje);
})

// getNombre().then(nombre =>{
//     console.log(nombre);
// })
// .catch(e =>{
//     console.log('Error de ASYNC', e);
// })
//  console.log(getNombre());