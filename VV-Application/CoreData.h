//
//  CoreData.h
//  VV-Application
//
//  Created by Kuang Han on 10/15/12.
//  Copyright (c) 2012 Nicholas Gordon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Landmark.h"
#import "Insula.h"
#import "Timeslot.h"
#import "Intermediate.h"
#import "Popover.h"

@interface CoreData : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)initializeData;
- (void)initializeInsula;
- (void)initializeLandmark:(Insula *)insula;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end