const fs = require('fs');


let listTable = ( base, limit )=>{
    
}

createFile = ( base )=>{
    return new Promise((resolve, reject)=>{

        if( !Number(base) ){
            reject("It's not number");
            return;
        }
        let data = '';
        
        for(let i = 1; i<=10; i++){
            data += `${base}*${i} = ${base*i}\n`;
        }
        
        fs.writeFile(`tables/table-${ base }.txt`, data,(err)=>{
            if(err) 
                reject(err);
            else
            resolve(`table-${ base }.txt`);
            
        });

    });
}


module.exports = {
    createFile
}