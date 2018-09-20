
goog.module("weather-notifier");

const AppCntrl = goog.require("controllers.app");

window["Weather-notifier"] = {
  AppCntrl: AppCntrl
}

Silica.setContext("Weather-notifier");
Silica.compile(document);
Silica.apply(() => {});
