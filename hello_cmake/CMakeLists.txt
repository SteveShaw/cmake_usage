cmake_minimum_required(VERSION 3.5)
#set project name
project(HelloCMake)
#we create a standalone project folder which include all source files
#The advantage of this arrangement, we can add like
#"test", "examples" folders separate from projects
#In this first example, I only have a project folder here
add_subdirectory(project)