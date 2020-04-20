// create
// node app create -d ""

// list
// node app list

// update 
// node app update -d TODO -c true

// delete
// node app delete -d  ""


// const argv = require('yargs').argv;

const argv = require('./config/yargs').argv;
const toDo = require('./todo/to_do');
const color = require('colors');


let command = argv._[0];

switch( command ){
    case 'create':
        let task = toDo.create( argv.description )
        console.log(task);
        
    break;

    case 'list':
        let list = toDo.getList();

        for(let task of list){
            console.log("=======ToDo=========".green);
            console.log(task.description);
            console.log('Status: ', task.completed == true);
            console.log("====================".green);
        }

    break;

    case 'update':
        let updated = toDo.update(argv.description, argv.completed) ;
        console.log(updated);
        
    break;

    case 'delete':
        let deleted = toDo.deleted(argv.description);
        console.log(deleted);
    break;

    default:
        console.log('command not found');
    break;
}
