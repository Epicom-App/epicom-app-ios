# EPICOM APP - iOS

## About the App

This is the source code for the iOS App EPICOM, an app where you can check the current Corona infection rate at your location or in another area. It's kind of your "compass" for the pandemic. EPICOM warns you if you are approaching a risk area with a higher infection rate than that at your current location or if you were recently in a location that has meanwhile become a risk area. You can track your own movement profile of the last 14 days in the app and recognise when you have been in one place where for more than 15 minutes. Contacts with a risk of infection are so easy for you to reconstruct. EPICOM also has links to all official websites of state governments, municipalities and districts with codes of conduct and official instructions regarding Corona. In this way, you will receive the most important information you need for your self and to protect your environment.

For more information about the app please go to https://www.epicom.online

## Technical Overview

iOS and Android App are developed native in Swift and Kotlin. They use a common business logic which is wrtiten in Kotlin and distributed for iOS as a framwork via Kotlin Multiplatform.

The Middleware requests daily the Covid-19 case data from the RKI API and provides it for the apps.

## Requirements

* Xcode >= 11.3
* Swift 5.1
* Cocoapods

## Configurations

Endpoint URLS and GDrive ID are added to xcconfig files, that are not under source control. Please download them from 1password and add them locally to the Ebolapp/App/Configurations folder. If you need to change the files, update them in 1password and in teh azure seucre files.

## Ebolapp vs Epicom?

Why is the project called Ebolapp, but the App itself Epicom? Ebolapp is the name, the previous app was drafted with. It was concepted to help with the Ebola Pandemic in West Africa in 2014/15. As the current Version is limited to the Covid-19 Risk Areas in Germany, it was renamed to Epicom. To find out more about the history of the app, please go to https://www.epicom.online

## Contribution

Please check the [Contribution Guideline](./CONTRIBUTING.md) on how to colloborate on the project.