#ifndef ABBAuroraEnums_h
#define ABBAuroraEnums_h

enum class DspValueEnum : unsigned char
{
  GRID_VOLTAGE = 1,
  GRID_CURRENT = 2,
  GRID_POWER = 3,
  FREQUENCY = 4,
  V_BULK = 5,
  I_LEAK_DC_DC = 6,
  I_LEAK_INVERTER = 7,
  POWER_IN_1 = 8,
  POWER_IN_2 = 9,
  TEMPERATURE_INVERTER = 21,
  TEMPERATURE_BOOSTER = 22,
  V_IN_1 = 23,
  I_IN_1 = 25,
  V_IN_2 = 26,
  I_IN_2 = 27,
  DC_DC_GRID_VOLTAGE = 28,
  DC_DC_GRID_FREQUENCY = 29,
  ISOLATION_RESISTANCE = 30,
  DC_DC_V_BULK = 31,
  AVERAGE_GRID_VOLTAGE = 32,
  V_BULK_MID = 33,
  POWER_PEAK = 34,
  POWER_PEAK_TODAY = 35,
  GRID_VOLTAGE_NEUTRAL = 36,
  WIND_GENERATOR_FREQENCY = 37,
  GRID_VOLTAGE_NEUTRAL_PHASE = 38,
  GRID_CURRENT_PHASE_R = 39,
  GRID_CURRENT_PHASE_S = 40,
  GRID_CURRENT_PHASE_T = 41,
  FREQUENCY_PHASE_R = 42,
  FREQUENCY_PHASE_S = 43,
  FREQUENCY_PHASE_T = 44,
  V_BULK_POSITIVE = 45,
  V_BULK_NEGATIVE = 46,
  TEMPERATURE_SUPERVISOR = 47,
  TEMPERATURE_ALIM = 48,
  TEMPERATURE_HEAT_SINK = 49,
  TEMPERATURE_1 = 50,
  TEMPERATURE_2 = 51,
  TEMPERATURE_3 = 52,
  FAN_SPEED_1 = 53,
  FAN_SPEED_2 = 54,
  FAN_SPEED_3 = 55,
  FAN_SPEED_4 = 56,
  FAN_SPEED_5 = 57,
  POWER_SATURATION_LIMIT = 58,
  V_PANEL_MICRO = 60,
  GRID_VOLTAGE_PHASE_R = 61,
  GRID_VOLTAGE_PHASE_S = 62,
  GRID_VOLTAGE_PHASE_T = 63
};

enum class DspGlobalEnum : unsigned char
{
  MODULE_MEASUREMENT = 0,
  GLOBAL_MEASUREMENT = 1
};

enum class CumulatedEnergyEnum : unsigned char
{
  CURRENT_DAY = 0,
  CURRENT_WEEK = 1,
  CURRENT_MONTH = 3,
  CURRENT_YEAR = 4,
  TOTAL = 5,
  SINCE_RESET = 6
};

enum class SendCommandEnum : unsigned char
{
  STATE_REQUEST = 50,
  PN_READING = 52,
  VERSION_READING = 58,
  MEASURE_REQUEST_DSP = 59,
  SERIAL_NUMBER_READING = 63,
  MANUFACTURING_DATE = 65,
  FLAGS_SWITCH_READING = 67,
  CUMULATED_ENERGY_CENTRAL = 68,
  TIME_DATE_READING = 70,
  FIRMWARE_RELEASE_READING = 72,
  CUMULATED_ENERGY_READINGS = 78,
  BAUD_RATE_SETTING = 85,
  LAST_FOUR_ALARMS = 86,
  SYSTEM_INFO_CENTRAL = 101,
  JB_MONITORING_STATUS = 103,
  PN_READING_CENTRAL = 105,
  SERIAL_NUMBER_CENTRAL = 107,
  JB_STATE_REQUEST = 200,
  JB_VAL_REQUEST = 201
};

enum class BaudCodeEnum : unsigned char
{
  BAUD_B19200 = 0,
  BAUD_B9600,
  BAUD_B4800,
  BAUD_B2400
};

#endif
