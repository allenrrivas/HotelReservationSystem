// Source Code was borrowed from Source Project

#pragma once

#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace TechnicalServices::Logging {
class LoggerHandler {
public:
  struct LoggerException : std::runtime_error {
    using runtime_error ::runtime_error;
  };
  struct BadLoggerRequest : LoggerException {
    using LoggerException::LoggerException;
  };

  static std::unique_ptr<LoggerHandler>
  create(std::ostream &loggingStream = std::clog);

  virtual LoggerHandler &operator<<(const std::string &message) = 0;

  virtual ~LoggerHandler() noexcept = 0;

protected:
  LoggerHandler &operator=(const LoggerHandler &rhs) = delete;
  LoggerHandler &operator=(LoggerHandler &&rhs) = delete;
};

inline LoggerHandler::~LoggerHandler() noexcept = default;
} // namespace TechnicalServices::Logging
