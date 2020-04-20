const fs = require('fs');

let listTodo = [];

const saveDB = () => {
    let data = JSON.stringify(listTodo);

    fs.writeFile('db/data.json', data,(err) => {
        if(err) throw new Error('not saved');
    });
}

const cargarDB = () => {
    try {

        listTodo = require('../db/data.json');
    
    } catch (error) {
        listTodo = [];
    }
    // console.log(listTodo);
}

const create = (description) => {

    cargarDB();
    
    let toDo = {
        description,
        completed: false
    };

    listTodo.push(toDo);

    saveDB();

    return toDo;
}

const getList = () =>{
    cargarDB();
    return listTodo; 
}

const update = (description, completed = true) => {

    cargarDB();
    let index = listTodo.findIndex( task => task.description === description )

    if( index >= 0 ){

        listTodo[index].completed = completed;
        saveDB();

        return true;

    } else {

        return false;
    }
}

const deleted = (desc) => {

    cargarDB();

    let newList  = listTodo.filter( task => task.description !== desc );

    if( listTodo.length === newList.length ){

        return false
    } else {

        listTodo = newList;
        saveDB();
        return true;
    }
}


module.exports = {
    create,
    getList,
    update,
    deleted
}