
goog.module("controllers.app");
// weather-notifier
// AppCntrl is the root controller of weather-notifier
//
class AppCntrl extends Silica.Controllers.Base {
  // Constructor receives the element which specified this controller
  constructor(element) {
    super(element)
    this.name = "weather-notifier";
    this.version = "1.0.0";
  }
}

exports = AppCntrl;
