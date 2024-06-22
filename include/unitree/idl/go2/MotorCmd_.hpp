/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to CXX Translator
  File name: MotorCmd_.idl
  Source: MotorCmd_.hpp
  Cyclone DDS: v0.10.2

*****************************************************************/
#ifndef DDSCXX_MOTORCMD__HPP
#define DDSCXX_MOTORCMD__HPP

#include <cstdint>
#include <array>

namespace unitree_go
{
namespace msg
{
namespace dds_
{
class MotorCmd_
{
private:
 uint8_t mode_ = 0;
 float q_ = 0.0f;
 float dq_ = 0.0f;
 float tau_ = 0.0f;
 float kp_ = 0.0f;
 float kd_ = 0.0f;
 std::array<uint32_t, 3> reserve_ = { };

public:
  MotorCmd_() = default;

  explicit MotorCmd_(
    uint8_t mode,
    float q,
    float dq,
    float tau,
    float kp,
    float kd,
    const std::array<uint32_t, 3>& reserve) :
    mode_(mode),
    q_(q),
    dq_(dq),
    tau_(tau),
    kp_(kp),
    kd_(kd),
    reserve_(reserve) { }

  uint8_t mode() const { return this->mode_; }
  uint8_t& mode() { return this->mode_; }
  void mode(uint8_t _val_) { this->mode_ = _val_; }
  float q() const { return this->q_; }
  float& q() { return this->q_; }
  void q(float _val_) { this->q_ = _val_; }
  float dq() const { return this->dq_; }
  float& dq() { return this->dq_; }
  void dq(float _val_) { this->dq_ = _val_; }
  float tau() const { return this->tau_; }
  float& tau() { return this->tau_; }
  void tau(float _val_) { this->tau_ = _val_; }
  float kp() const { return this->kp_; }
  float& kp() { return this->kp_; }
  void kp(float _val_) { this->kp_ = _val_; }
  float kd() const { return this->kd_; }
  float& kd() { return this->kd_; }
  void kd(float _val_) { this->kd_ = _val_; }
  const std::array<uint32_t, 3>& reserve() const { return this->reserve_; }
  std::array<uint32_t, 3>& reserve() { return this->reserve_; }
  void reserve(const std::array<uint32_t, 3>& _val_) { this->reserve_ = _val_; }
  void reserve(std::array<uint32_t, 3>&& _val_) { this->reserve_ = _val_; }

  bool operator==(const MotorCmd_& _other) const
  {
    (void) _other;
    return mode_ == _other.mode_ &&
      q_ == _other.q_ &&
      dq_ == _other.dq_ &&
      tau_ == _other.tau_ &&
      kp_ == _other.kp_ &&
      kd_ == _other.kd_ &&
      reserve_ == _other.reserve_;
  }

  bool operator!=(const MotorCmd_& _other) const
  {
    return !(*this == _other);
  }

};

}

}

}

#include "dds/topic/TopicTraits.hpp"
#include "org/eclipse/cyclonedds/topic/datatopic.hpp"

namespace org {
namespace eclipse {
namespace cyclonedds {
namespace topic {

template <> constexpr const char* TopicTraits<::unitree_go::msg::dds_::MotorCmd_>::getTypeName()
{
  return "unitree_go::msg::dds_::MotorCmd_";
}

template <> constexpr bool TopicTraits<::unitree_go::msg::dds_::MotorCmd_>::isKeyless()
{
  return true;
}

#ifdef DDSCXX_HAS_TYPE_DISCOVERY
template<> constexpr unsigned int TopicTraits<::unitree_go::msg::dds_::MotorCmd_>::type_map_blob_sz() { return 478; }
template<> constexpr unsigned int TopicTraits<::unitree_go::msg::dds_::MotorCmd_>::type_info_blob_sz() { return 100; }
template<> inline const uint8_t * TopicTraits<::unitree_go::msg::dds_::MotorCmd_>::type_map_blob() {
  static const uint8_t blob[] = {
 0xa6,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0xf1,  0xc8,  0xe5,  0x83,  0x5b,  0x0f,  0x0c,  0x17, 
 0x65,  0xbc,  0x23,  0x1d,  0xfa,  0x02,  0xff,  0x00,  0x8e,  0x00,  0x00,  0x00,  0xf1,  0x51,  0x01,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x7e,  0x00,  0x00,  0x00,  0x07,  0x00,  0x00,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x02,  0x15,  0xd6,  0x17,  0x12,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x76,  0x94,  0xf4,  0xa6,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x47,  0xbc,  0xdc,  0xd7,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x45,  0x80,  0xc2,  0x74,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x26,  0xb5,  0x68,  0xe4,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x05,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x87,  0x22,  0x16,  0x52,  0x00, 
 0x16,  0x00,  0x00,  0x00,  0x06,  0x00,  0x00,  0x00,  0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x03,  0x07,  0x9c,  0x3b,  0x62,  0x94,  0x00,  0x00,  0x06,  0x01,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0xf2,  0x42,  0x1f,  0xa5,  0xb2,  0xdb,  0x2d,  0xef,  0xf5,  0xc0,  0x3f,  0xff, 
 0x16,  0x30,  0x3b,  0x00,  0xee,  0x00,  0x00,  0x00,  0xf2,  0x51,  0x01,  0x00,  0x29,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x21,  0x00,  0x00,  0x00,  0x75,  0x6e,  0x69,  0x74,  0x72,  0x65,  0x65,  0x5f, 
 0x67,  0x6f,  0x3a,  0x3a,  0x6d,  0x73,  0x67,  0x3a,  0x3a,  0x64,  0x64,  0x73,  0x5f,  0x3a,  0x3a,  0x4d, 
 0x6f,  0x74,  0x6f,  0x72,  0x43,  0x6d,  0x64,  0x5f,  0x00,  0x00,  0x00,  0x00,  0xb6,  0x00,  0x00,  0x00, 
 0x07,  0x00,  0x00,  0x00,  0x13,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x02,  0x00, 
 0x05,  0x00,  0x00,  0x00,  0x6d,  0x6f,  0x64,  0x65,  0x00,  0x00,  0x00,  0x00,  0x10,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x00,  0x02,  0x00,  0x00,  0x00,  0x71,  0x00,  0x00,  0x00, 
 0x11,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x00,  0x03,  0x00,  0x00,  0x00, 
 0x64,  0x71,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x12,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x09,  0x00,  0x04,  0x00,  0x00,  0x00,  0x74,  0x61,  0x75,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x11,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x00,  0x03,  0x00,  0x00,  0x00, 
 0x6b,  0x70,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x11,  0x00,  0x00,  0x00,  0x05,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x09,  0x00,  0x03,  0x00,  0x00,  0x00,  0x6b,  0x64,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x22,  0x00,  0x00,  0x00,  0x06,  0x00,  0x00,  0x00,  0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x03,  0x07,  0x00,  0x00,  0x08,  0x00,  0x00,  0x00,  0x72,  0x65,  0x73,  0x65, 
 0x72,  0x76,  0x65,  0x00,  0x00,  0x00,  0x00,  0x00,  0x22,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00, 
 0xf2,  0x42,  0x1f,  0xa5,  0xb2,  0xdb,  0x2d,  0xef,  0xf5,  0xc0,  0x3f,  0xff,  0x16,  0x30,  0x3b,  0xf1, 
 0xc8,  0xe5,  0x83,  0x5b,  0x0f,  0x0c,  0x17,  0x65,  0xbc,  0x23,  0x1d,  0xfa,  0x02,  0xff, };
  return blob;
}
template<> inline const uint8_t * TopicTraits<::unitree_go::msg::dds_::MotorCmd_>::type_info_blob() {
  static const uint8_t blob[] = {
 0x60,  0x00,  0x00,  0x00,  0x01,  0x10,  0x00,  0x40,  0x28,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf1,  0xc8,  0xe5,  0x83,  0x5b,  0x0f,  0x0c,  0x17,  0x65,  0xbc,  0x23,  0x1d, 
 0xfa,  0x02,  0xff,  0x00,  0x92,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x02,  0x10,  0x00,  0x40,  0x28,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf2,  0x42,  0x1f,  0xa5,  0xb2,  0xdb,  0x2d,  0xef,  0xf5,  0xc0,  0x3f,  0xff, 
 0x16,  0x30,  0x3b,  0x00,  0xf2,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00, };
  return blob;
}
#endif //DDSCXX_HAS_TYPE_DISCOVERY

} //namespace topic
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

namespace dds {
namespace topic {

template <>
struct topic_type_name<::unitree_go::msg::dds_::MotorCmd_>
{
    static std::string value()
    {
      return org::eclipse::cyclonedds::topic::TopicTraits<::unitree_go::msg::dds_::MotorCmd_>::getTypeName();
    }
};

}
}

REGISTER_TOPIC_TYPE(::unitree_go::msg::dds_::MotorCmd_)

namespace org{
namespace eclipse{
namespace cyclonedds{
namespace core{
namespace cdr{

template<>
const propvec &get_type_props<::unitree_go::msg::dds_::MotorCmd_>();

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool write(T& streamer, const ::unitree_go::msg::dds_::MotorCmd_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.mode()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.q()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.dq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.tau()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 4:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.kp()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 5:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.kd()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 6:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!write(streamer, instance.reserve()[0], instance.reserve().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool write(S& str, const ::unitree_go::msg::dds_::MotorCmd_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_go::msg::dds_::MotorCmd_>();
  str.set_mode(cdr_stream::stream_mode::write, as_key);
  return write(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool read(T& streamer, ::unitree_go::msg::dds_::MotorCmd_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.mode()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.q()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.dq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.tau()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 4:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.kp()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 5:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.kd()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 6:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!read(streamer, instance.reserve()[0], instance.reserve().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool read(S& str, ::unitree_go::msg::dds_::MotorCmd_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_go::msg::dds_::MotorCmd_>();
  str.set_mode(cdr_stream::stream_mode::read, as_key);
  return read(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool move(T& streamer, const ::unitree_go::msg::dds_::MotorCmd_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.mode()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.q()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.dq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.tau()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 4:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.kp()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 5:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.kd()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 6:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!move(streamer, instance.reserve()[0], instance.reserve().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool move(S& str, const ::unitree_go::msg::dds_::MotorCmd_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_go::msg::dds_::MotorCmd_>();
  str.set_mode(cdr_stream::stream_mode::move, as_key);
  return move(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool max(T& streamer, const ::unitree_go::msg::dds_::MotorCmd_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.mode()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.q()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.dq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.tau()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 4:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.kp()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 5:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.kd()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 6:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!max(streamer, instance.reserve()[0], instance.reserve().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool max(S& str, const ::unitree_go::msg::dds_::MotorCmd_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_go::msg::dds_::MotorCmd_>();
  str.set_mode(cdr_stream::stream_mode::max, as_key);
  return max(str, instance, props.data()); 
}

} //namespace cdr
} //namespace core
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

#endif // DDSCXX_MOTORCMD__HPP
