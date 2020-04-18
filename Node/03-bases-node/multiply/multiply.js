const fs = require('fs');
var colors = require('colors');

let listTable = ( base, limit=10 )=>{
    console.log('================='.green);
    console.log(`   Table of ${base}`.red);
    console.log('================='.grey);
    

    for(let i=1; i<=limit; i++){
        console.log(`${ base } * ${ i } = ${ base * i }`);
    }
}

createFile = ( base, limit =10 )=>{
    return new Promise((resolve, reject)=>{

        if( !Number(base) ){
            reject("It's not number");
            return;
        }
        let data = '';
        
        for(let i = 1; i<=limit; i++){
            data += `${ base } * ${ i } = ${ base * i }\n`;
        }
        
        fs.writeFile(`tables/table-${ base }_to_${ limit }.txt`, data,(err)=>{
            if(err) 
                reject(err);
            else
            resolve(`table-${ base }_to_${ limit }.txt`);
            
        });

    });
}


module.exports = {
    createFile,
    listTable
}