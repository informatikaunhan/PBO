#pragma once
#include <string>

class IPersistable {
public:
    virtual ~IPersistable() = default;
    virtual bool save(const std::string& path) const = 0;
};

class ISerializable {
public:
    virtual ~ISerializable() = default;
    virtual std::string serialize() const = 0;
};

class ILoggable {
public:
    virtual ~ILoggable() = default;
    virtual std::string logLine() const = 0;
};
