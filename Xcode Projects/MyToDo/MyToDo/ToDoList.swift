//
//  ToDoList.swift
//  MyToDo
//
//  Created by Cole Yeager on 7/3/20.
//  Copyright © 2020 Cole Yeager. All rights reserved.
//

import Foundation

class ToDoItem
{
    var title: String
    var done: Bool

    public init(title: String)
    {
        self.title = title
        self.done = false
    }
}

extension ToDoItem
{
    public class func getMockData() -> [ToDoItem]
    {
        return [
            ToDoItem(title: "Milk"),
            ToDoItem(title: "Chocolate"),
            ToDoItem(title: "Light bulb"),
            ToDoItem(title: "Dog food")
        ]
    }
}
