#pragma once
#include "system.h"

   unordered_map<string , User*>System::users;

   void System::addUser(string userId, User* user){
      users[userId] = user;
   }
   
   User* System::getUser(string userId){
        return users[userId];
    }