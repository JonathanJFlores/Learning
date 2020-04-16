std::cout<<"\n Write your name: ";
    std::cin.getline(name, 20, '\n');

    strcat(say_hello, name);
    std::cout<<"\n";
    std::cout<<name<<std::endl;