#pragma once

#include "keys.hpp"

namespace pqrs {
namespace karabiner {
namespace driverkit {
namespace virtual_hid_device {
namespace hid_report {

class __attribute__((packed)) apple_vendor_top_case_input final {
public:
  apple_vendor_top_case_input(void) : report_id_(3) {}
  bool operator==(const apple_vendor_top_case_input& other) const { return (memcmp(this, &other, sizeof(*this)) == 0); }
  bool operator!=(const apple_vendor_top_case_input& other) const { return !(*this == other); }

private:
  uint8_t report_id_ __attribute__((unused));

public:
  keys keys;
};

} // namespace hid_report
} // namespace virtual_hid_device
} // namespace driverkit
} // namespace karabiner
} // namespace pqrs
