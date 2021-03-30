// swiftlint:disable all
// Generated using SwiftGen — https://github.com/SwiftGen/SwiftGen

import Foundation

// swiftlint:disable superfluous_disable_command file_length implicit_return

// MARK: - Strings

// swiftlint:disable explicit_type_interface function_parameter_count identifier_name line_length
// swiftlint:disable nesting type_body_length type_name vertical_whitespace_opening_braces
internal enum L10n {
  internal enum Localizable {
    /// Schließen
    internal static let closeButton = L10n.tr("Localizable", "close_button")
    /// Link zu einer Website des Landkreises mit weiterführenden Informationen zum Coronavirus
    internal static let contentDescriptionAdditionalInformation = L10n.tr("Localizable", "content_description_additional_information")
    /// Datumsauswahl
    internal static let contentDescriptionCalendarButton = L10n.tr("Localizable", "content_description_calendar_button")
    /// Zu aktuellem Standort zoomen
    internal static let contentDescriptionLocationButton = L10n.tr("Localizable", "content_description_location_button")
    /// Für diesen Tag gibt es eine Übereinstimmung deines Standortes mit einem als riskant eingestufen Gebiet.
    internal static let contentDescriptionRiskMatch = L10n.tr("Localizable", "content_description_risk_match")
    /// Einstellungen
    internal static let contentDescriptionSettingsButton = L10n.tr("Localizable", "content_description_settings_button")
    /// Etwas ist schief gelaufen.\nBitte versuche es erneut.
    internal static let errorDefaultMessage = L10n.tr("Localizable", "error_default_message")
    /// Fehler
    internal static let errorTitle = L10n.tr("Localizable", "error_title")
    /// Gefahrenlevel
    internal static let legendNavigationTitle = L10n.tr("Localizable", "legend_navigation_title")
    /// Wird geladen
    internal static let loadingText = L10n.tr("Localizable", "loading_text")
    /// Dummy Location Rationale Message
    internal static let locationRationaleMessage = L10n.tr("Localizable", "location_rationale_message")
    /// Dummy Location Rationale Title
    internal static let locationRationaleTitle = L10n.tr("Localizable", "location_rationale_title")
    /// Aufgezeichneter Aufenthalt:
    internal static let mapLocationCalloutTitle = L10n.tr("Localizable", "map_location_callout_title")
    /// EPICOM
    internal static let mapNavigationTitle = L10n.tr("Localizable", "map_navigation_title")
    /// Inzidenz
    internal static let mapRegionCases = L10n.tr("Localizable", "map_region_cases")
    /// Gefahren-\nlevel
    internal static let mapRegionDangerLevel = L10n.tr("Localizable", "map_region_danger_level")
    /// Covid-19
    internal static let mapRegionInfoCovid = L10n.tr("Localizable", "map_region_info_covid")
    /// Landkreis
    internal static let mapRegionInfoLinkName = L10n.tr("Localizable", "map_region_info_link_name")
    /// Vor %1$i Tagen
    internal static func mapSliderDaysAgo(_ p1: Int) -> String {
      return L10n.tr("Localizable", "map_slider_days_ago", p1)
    }
    /// Datum
    internal static let mapSliderTitle = L10n.tr("Localizable", "map_slider_title")
    /// Heute
    internal static let mapSliderToday = L10n.tr("Localizable", "map_slider_today")
    /// Karte
    internal static let mapTabBarTitle = L10n.tr("Localizable", "map_tabBar_title")
    /// Dein Aufenthaltsort weist ein hohes Gefahrenlevel auf.
    internal static let newRiskMatchNotificationRegionChangedInfo = L10n.tr("Localizable", "new_risk_match_notification_region_changed_info")
    /// Das Gefahrenlevel deines Aufenthaltsorts hat sich erhöht.
    internal static let newRiskMatchNotificationSeverityIncreasedInfo = L10n.tr("Localizable", "new_risk_match_notification_severity_increased_info")
    /// Aktuelles Gefahrenlevel
    internal static let newRiskMatchNotificationTitle = L10n.tr("Localizable", "new_risk_match_notification_title")
    /// Sie haben in letzter Zeit keine Regionen mit hohem Infektionsrisiko besucht
    internal static let nextStepsLowRiskInfo = L10n.tr("Localizable", "nextSteps_lowRisk_info")
    /// Niedriges Risiko
    internal static let nextStepsLowRiskTitle = L10n.tr("Localizable", "nextSteps_lowRisk_title")
    /// Hilfe
    internal static let nextStepsNavigationTitle = L10n.tr("Localizable", "nextSteps_navigation_title")
    /// Wenden Sie sich an die Gesundheitsverwaltung
    internal static let nextStepsRiskMatchContactAdministration = L10n.tr("Localizable", "nextSteps_riskMatch_contact_administration")
    /// Ungefähr %1$@ Stunden
    internal static func nextStepsRiskMatchDuration(_ p1: Any) -> String {
      return L10n.tr("Localizable", "nextSteps_riskMatch_duration", String(describing: p1))
    }
    /// Diese App kann das Infektionsrisiko einschätzen und geeignete Maßnahmen ergreifen.
    internal static let nextStepsRiskMatchFaqMessage = L10n.tr("Localizable", "nextSteps_riskMatch_faq_message")
    /// FAQ
    internal static let nextStepsRiskMatchFaqTitle = L10n.tr("Localizable", "nextSteps_riskMatch_faq_title")
    /// nKeine registrierten Risikoübereinstimmungen.
    internal static let nextStepsRiskMatchPlaceholder = L10n.tr("Localizable", "nextSteps_riskMatch_placeholder")
    /// Halten Sie Abstand zu anderen Personen
    internal static let nextStepsRiskMatchSuggestionDistance = L10n.tr("Localizable", "nextSteps_riskMatch_suggestion_distance")
    /// Befolgen Sie die Hygienevorschriften
    internal static let nextStepsRiskMatchSuggestionHygiene = L10n.tr("Localizable", "nextSteps_riskMatch_suggestion_hygiene")
    /// Mögliches Infektionsrisiko
    internal static let nextStepsRiskMatchTitle1 = L10n.tr("Localizable", "nextSteps_riskMatch_title1")
    /// Nächste Schritte
    internal static let nextStepsRiskMatchTitle2 = L10n.tr("Localizable", "nextSteps_riskMatch_title2")
    /// Nächste Schritte
    internal static let nextStepsTabBarTitle = L10n.tr("Localizable", "nextSteps_tabBar_title")
    /// Daten konnten nicht geladen werden
    internal static let noInternetErrorMessage = L10n.tr("Localizable", "no_internet_error_message")
    /// Keine Internetverbindung
    internal static let noInternetErrorTitle = L10n.tr("Localizable", "no_internet_error_title")
    /// Öffne die Einstellungen, um die Standortverfolgung im Hintergrund zu aktivieren.
    internal static let noLocationInfo = L10n.tr("Localizable", "no_location_info")
    /// Kein Standortzugriff
    internal static let noLocationTitle = L10n.tr("Localizable", "no_location_title")
    /// Ok
    internal static let okButton = L10n.tr("Localizable", "ok_button")
    /// Benachrichtigungen aktivieren
    internal static let onboardingActivateNotificationsBtn = L10n.tr("Localizable", "onboarding_activate_notifications_btn")
    /// Standort-Freigabe erlauben
    internal static let onboardingAllowLocationBtn = L10n.tr("Localizable", "onboarding_allow_location_btn")
    /// Los geht's
    internal static let onboardingCompleteButton = L10n.tr("Localizable", "onboarding_complete_button")
    /// Informationen zum Datenschutz
    internal static let onboardingDateschutzBtn = L10n.tr("Localizable", "onboarding_dateschutz_btn")
    /// Fertig
    internal static let onboardingDoneBtn = L10n.tr("Localizable", "onboarding_done_btn")
    /// Hier finden sich weiterführende Informationen des Bundeslandes
    internal static let onboardingInfoBundesland = L10n.tr("Localizable", "onboarding_info_bundesland")
    /// Tippe auf das Kalender-Icon, um das Infektionsgeschehen der letzten 14 Tage zu betrachten
    internal static let onboardingInfoCalendar = L10n.tr("Localizable", "onboarding_info_calendar")
    /// Die Farbe des Landkreises auf der Karte steht für die Gefahrenstufe am ausgewählten Datum
    internal static let onboardingInfoColors = L10n.tr("Localizable", "onboarding_info_colors")
    /// Aktiviere die Standortfreigabe, damit deine Aufenthaltsorte aufgezeichnet werden können, auch wenn die App geschlossen ist. Alle Daten werden nur lokal gespeichert und können von keinem Dritten ausgelesen werden.
    internal static let onboardingInfoLocation = L10n.tr("Localizable", "onboarding_info_location")
    /// Standort-Freigabe deaktiviert
    internal static let onboardingInfoLocationDisabled = L10n.tr("Localizable", "onboarding_info_location_disabled")
    /// Standort-Freigabe erlaubt
    internal static let onboardingInfoLocationShared = L10n.tr("Localizable", "onboarding_info_location_shared")
    /// Die Karte zeigt nun deine aufgezeichneten Standorte am gewählten Tag
    internal static let onboardingInfoLocations = L10n.tr("Localizable", "onboarding_info_locations")
    /// Auf die Karte tippen, um Informationen zur Gefahrenstufe zu erhalten
    internal static let onboardingInfoMapRegion = L10n.tr("Localizable", "onboarding_info_mapRegion")
    /// Um benachrichtigt zu werden, wenn du in einem Gebiet mit erhöhter Gefahrenlage warst, aktiviere die Push-Benachrichtigung.
    internal static let onboardingInfoNotifications = L10n.tr("Localizable", "onboarding_info_notifications")
    /// Benachrichtigungen erlaubt
    internal static let onboardingInfoNotificationsActivated = L10n.tr("Localizable", "onboarding_info_notifications_activated")
    /// Benachrichtigungen deaktiviert
    internal static let onboardingInfoNotificationsDisabled = L10n.tr("Localizable", "onboarding_info_notifications_disabled")
    /// Weiter
    internal static let onboardingNextBtn = L10n.tr("Localizable", "onboarding_next_btn")
    /// Einstellungen 
    internal static let onboardingSettingsButton = L10n.tr("Localizable", "onboarding_settings_button")
    /// Was ist EPICOM?
    internal static let onboardingTitleCovidMap = L10n.tr("Localizable", "onboarding_title_covidMap")
    /// Standort-Freigabe
    internal static let onboardingTitleLocation = L10n.tr("Localizable", "onboarding_title_location")
    /// Benachrichtigungen
    internal static let onboardingTitleNotifications = L10n.tr("Localizable", "onboarding_title_notifications")
    /// Einstellungen
    internal static let openSettingsButton = L10n.tr("Localizable", "open_settings_button")
    /// Bitte warten.\nDer Ladevorgang kann einige Minuten dauern...
    internal static let pleaseWaitInfo = L10n.tr("Localizable", "please_wait_info")
    /// Aktualisieren
    internal static let refreshButton = L10n.tr("Localizable", "refresh_button")
    /// Benachrichtigt über neue Risikoübereinstimmungen
    internal static let riskMatchNotificationChannelDescription = L10n.tr("Localizable", "risk_match_notification_channel_description")
    /// nRisikoabgleich
    internal static let riskMatchNotificationChannelName = L10n.tr("Localizable", "risk_match_notification_channel_name")
    /// App öffnen, um bei möglichem Risiko weiterhin benachrichtigt zu werden
    internal static let riskMatchingSuspendedNotificationMessage = L10n.tr("Localizable", "risk_matching_suspended_notification_message")
    /// Risiko-Abgleich gestoppt
    internal static let riskMatchingSuspendedNotificationTitle = L10n.tr("Localizable", "risk_matching_suspended_notification_title")
    /// Über
    internal static let settingsAbout = L10n.tr("Localizable", "settings_about")
    /// Datenschutzerklärung
    internal static let settingsDataPrivacy = L10n.tr("Localizable", "settings_data_privacy")
    /// Impressum
    internal static let settingsImprint = L10n.tr("Localizable", "settings_imprint")
    /// Lizenzen
    internal static let settingsLicenses = L10n.tr("Localizable", "settings_licenses")
    /// Onboarding
    internal static let settingsOnboarding = L10n.tr("Localizable", "settings_onboarding")
    /// Einstellungen
    internal static let settingsTitle = L10n.tr("Localizable", "settings_title")
    /// Test-Upload
    internal static let testUploadNavigationTitle = L10n.tr("Localizable", "testUpload_navigation_title")
    /// Test-Upload
    internal static let testUploadTabBarTitle = L10n.tr("Localizable", "testUpload_tabBar_title")
    /// Aktuelle Fallzahlen für deinen Aufenthaltsort
    internal static let widgetDescription = L10n.tr("Localizable", "widget_description")
    /// Etwas ist schief gelaufen
    internal static let widgetErrorGeneral = L10n.tr("Localizable", "widget_error_general")
    /// Keine Internetverbindung
    internal static let widgetErrorNoInternet = L10n.tr("Localizable", "widget_error_no_internet")
    /// GPS-Position konnte nicht ermittelt werden
    internal static let widgetErrorNoLocation = L10n.tr("Localizable", "widget_error_no_location")
    /// Keine Standortberechtigung
    internal static let widgetErrorNoLocationPermissions = L10n.tr("Localizable", "widget_error_no_location_permissions")
    /// Unbekannte Region
    internal static let widgetErrorUnknownRegion = L10n.tr("Localizable", "widget_error_unknown_region")
    /// Keine Falldaten verfügbar
    internal static let widgetInfoNoCasesData = L10n.tr("Localizable", "widget_info_no_cases_data")
    /// Keine Standortdaten verfügbar
    internal static let widgetInfoNoLocationData = L10n.tr("Localizable", "widget_info_no_location_data")
    /// EPICOM
    internal static let widgetName = L10n.tr("Localizable", "widget_name")
    /// Covid-19
    internal static let widgetPlaceholderDisease = L10n.tr("Localizable", "widget_placeholder_disease")
    /// Covid-19-Fälle der letzten 7 Tage/100.000 Einwohner
    internal static let widgetPlaceholderInfo = L10n.tr("Localizable", "widget_placeholder_info")
  }
  internal enum NonLocalizable {
  }
  internal enum Tracking {
  }
}
// swiftlint:enable explicit_type_interface function_parameter_count identifier_name line_length
// swiftlint:enable nesting type_body_length type_name vertical_whitespace_opening_braces

// MARK: - Implementation Details

extension L10n {
  private static func tr(_ table: String, _ key: String, _ args: CVarArg...) -> String {
    let format = BundleToken.bundle.localizedString(forKey: key, value: nil, table: table)
    return String(format: format, locale: Locale.current, arguments: args)
  }
}

// swiftlint:disable convenience_type
private final class BundleToken {
  static let bundle = Bundle(for: BundleToken.self)
}
// swiftlint:enable convenience_type
