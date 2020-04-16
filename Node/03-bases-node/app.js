// requireds
const argv = require('yargs')
                .command('List', 'Print multiply table',{
                    base:{
                        demand: true,
                        alias : 'b'
                    },
                    limit:{
                        alias: 'l',
                        default: 10
                    }
                })
                .help()
                .argv;

// const fs = require('fs');
// const fs = require('express');
// const fs = require('./path')

const { createFile } = require('./multiply/multiply');

// let base = "9";

// let argv2 = process.argv;
let command = argv._[0];

switch (command) {
    case 'list':
        console.log('List');
        break;
        
    case 'create':
        
        createFile(argv.base)
            .then(file => console.log(`File created: ${ file }`))
            .catch(e => console.log(e));
        console.log('create');
    break;

    default:
        console.log('Command not found');
        
}

// console.log(argv);
// console.log(argv.base);
// console.log(argv.limit);
// console.log(argv2);


// let argv = process.argv;
// let parameter = argv[2];

// let base = parameter.split('=')[1];

// console.log(base);

// console.log(process.argv);
