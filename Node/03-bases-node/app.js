// List command line
// node app.js list --base 3 --limit 4

// Create command line
// node app.js create --base 10

// Create table with limit command line
// node app.js create --base 3 --limit 50

// const fs = require('fs');
// const fs = require('express');
// const fs = require('./path')

const argv = require('./config/yargs').argv;
const colors = require('colors');

const { createFile, listTable } = require('./multiply/multiply');

// let base = "9";

// let argv2 = process.argv;
let command = argv._[0];

switch (command) {
    case 'list':
        listTable(argv.base, argv.limit);
    break;
        
    case 'create':
        createFile(argv.base, argv.limit)
            .then(file => console.log(`File created: ${ colors.grey(file)}`))
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
