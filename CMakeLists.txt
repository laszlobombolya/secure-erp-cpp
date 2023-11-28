cmake_minimum_required(VERSION 3.26)
project(secure_erp_cpp)

set(CMAKE_CXX_STANDARD 17)
include_directories(model)
include_directories(controller)
include_directories(ui)

set(SOURCE_FILES main.cpp
        ui/TerminalView.cpp
        ui/TerminalView.h
        controller/MainController.cpp
        controller/MainController.h
        controller/CRMController.cpp
        controller/CRMController.h
        controller/SalesController.cpp
        controller/SalesController.h
        controller/HRController.cpp
        controller/HRController.h
        model/CRMModel.hpp
        model/SalesModel.hpp
        model/HRModel.hpp
        DAO/CRMDAO.cpp
        DAO/CRMDAO.h
        DAO/HRDAO.cpp
        DAO/HRDAO.h
        DAO/SalesDAO.cpp
        DAO/SalesDAO.h)

add_executable(secure_erp_cpp ${SOURCE_FILES})
