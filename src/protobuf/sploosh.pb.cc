// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sploosh.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sploosh.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace sploosh {

namespace {

const ::google::protobuf::Descriptor* Vector3d_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Vector3d_reflection_ = NULL;
const ::google::protobuf::Descriptor* Complexd_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Complexd_reflection_ = NULL;
const ::google::protobuf::Descriptor* FMMoments_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FMMoments_reflection_ = NULL;
const ::google::protobuf::Descriptor* ModalMoments_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ModalMoments_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_sploosh_2eproto() {
  protobuf_AddDesc_sploosh_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "sploosh.proto");
  GOOGLE_CHECK(file != NULL);
  Vector3d_descriptor_ = file->message_type(0);
  static const int Vector3d_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3d, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3d, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3d, z_),
  };
  Vector3d_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Vector3d_descriptor_,
      Vector3d::default_instance_,
      Vector3d_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3d, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3d, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Vector3d));
  Complexd_descriptor_ = file->message_type(1);
  static const int Complexd_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Complexd, real_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Complexd, imag_),
  };
  Complexd_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Complexd_descriptor_,
      Complexd::default_instance_,
      Complexd_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Complexd, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Complexd, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Complexd));
  FMMoments_descriptor_ = file->message_type(2);
  static const int FMMoments_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FMMoments, numexp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FMMoments, wavenum_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FMMoments, center_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FMMoments, mfile_),
  };
  FMMoments_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FMMoments_descriptor_,
      FMMoments::default_instance_,
      FMMoments_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FMMoments, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FMMoments, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FMMoments));
  ModalMoments_descriptor_ = file->message_type(3);
  static const int ModalMoments_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ModalMoments, moment_),
  };
  ModalMoments_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ModalMoments_descriptor_,
      ModalMoments::default_instance_,
      ModalMoments_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ModalMoments, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ModalMoments, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ModalMoments));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_sploosh_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Vector3d_descriptor_, &Vector3d::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Complexd_descriptor_, &Complexd::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FMMoments_descriptor_, &FMMoments::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ModalMoments_descriptor_, &ModalMoments::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_sploosh_2eproto() {
  delete Vector3d::default_instance_;
  delete Vector3d_reflection_;
  delete Complexd::default_instance_;
  delete Complexd_reflection_;
  delete FMMoments::default_instance_;
  delete FMMoments_reflection_;
  delete ModalMoments::default_instance_;
  delete ModalMoments_reflection_;
}

void protobuf_AddDesc_sploosh_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rsploosh.proto\022\007sploosh\"4\n\010Vector3d\022\014\n\001"
    "x\030\001 \001(\001:\0010\022\014\n\001y\030\002 \001(\001:\0010\022\014\n\001z\030\003 \001(\001:\0010\","
    "\n\010Complexd\022\017\n\004real\030\001 \001(\001:\0010\022\017\n\004imag\030\002 \001("
    "\001:\0010\"^\n\tFMMoments\022\016\n\006numExp\030\001 \002(\r\022\017\n\007wav"
    "eNum\030\002 \002(\001\022!\n\006center\030\003 \001(\0132\021.sploosh.Vec"
    "tor3d\022\r\n\005mfile\030\004 \001(\t\"2\n\014ModalMoments\022\"\n\006"
    "moment\030\001 \003(\0132\022.sploosh.FMMoments", 272);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sploosh.proto", &protobuf_RegisterTypes);
  Vector3d::default_instance_ = new Vector3d();
  Complexd::default_instance_ = new Complexd();
  FMMoments::default_instance_ = new FMMoments();
  ModalMoments::default_instance_ = new ModalMoments();
  Vector3d::default_instance_->InitAsDefaultInstance();
  Complexd::default_instance_->InitAsDefaultInstance();
  FMMoments::default_instance_->InitAsDefaultInstance();
  ModalMoments::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_sploosh_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_sploosh_2eproto {
  StaticDescriptorInitializer_sploosh_2eproto() {
    protobuf_AddDesc_sploosh_2eproto();
  }
} static_descriptor_initializer_sploosh_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Vector3d::kXFieldNumber;
const int Vector3d::kYFieldNumber;
const int Vector3d::kZFieldNumber;
#endif  // !_MSC_VER

Vector3d::Vector3d()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Vector3d::InitAsDefaultInstance() {
}

Vector3d::Vector3d(const Vector3d& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Vector3d::SharedCtor() {
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  z_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Vector3d::~Vector3d() {
  SharedDtor();
}

void Vector3d::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Vector3d::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Vector3d::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Vector3d_descriptor_;
}

const Vector3d& Vector3d::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sploosh_2eproto();
  return *default_instance_;
}

Vector3d* Vector3d::default_instance_ = NULL;

Vector3d* Vector3d::New() const {
  return new Vector3d;
}

void Vector3d::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    x_ = 0;
    y_ = 0;
    z_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Vector3d::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double x = 1 [default = 0];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
          set_has_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_y;
        break;
      }

      // optional double y = 2 [default = 0];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
          set_has_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_z;
        break;
      }

      // optional double z = 3 [default = 0];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_z:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_)));
          set_has_z();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Vector3d::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional double x = 1 [default = 0];
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // optional double y = 2 [default = 0];
  if (has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  // optional double z = 3 [default = 0];
  if (has_z()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->z(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Vector3d::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional double x = 1 [default = 0];
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // optional double y = 2 [default = 0];
  if (has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  // optional double z = 3 [default = 0];
  if (has_z()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->z(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Vector3d::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double x = 1 [default = 0];
    if (has_x()) {
      total_size += 1 + 8;
    }

    // optional double y = 2 [default = 0];
    if (has_y()) {
      total_size += 1 + 8;
    }

    // optional double z = 3 [default = 0];
    if (has_z()) {
      total_size += 1 + 8;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Vector3d::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Vector3d* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Vector3d*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Vector3d::MergeFrom(const Vector3d& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_y()) {
      set_y(from.y());
    }
    if (from.has_z()) {
      set_z(from.z());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Vector3d::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector3d::CopyFrom(const Vector3d& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector3d::IsInitialized() const {

  return true;
}

void Vector3d::Swap(Vector3d* other) {
  if (other != this) {
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(z_, other->z_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Vector3d::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Vector3d_descriptor_;
  metadata.reflection = Vector3d_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Complexd::kRealFieldNumber;
const int Complexd::kImagFieldNumber;
#endif  // !_MSC_VER

Complexd::Complexd()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Complexd::InitAsDefaultInstance() {
}

Complexd::Complexd(const Complexd& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Complexd::SharedCtor() {
  _cached_size_ = 0;
  real_ = 0;
  imag_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Complexd::~Complexd() {
  SharedDtor();
}

void Complexd::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Complexd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Complexd::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Complexd_descriptor_;
}

const Complexd& Complexd::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sploosh_2eproto();
  return *default_instance_;
}

Complexd* Complexd::default_instance_ = NULL;

Complexd* Complexd::New() const {
  return new Complexd;
}

void Complexd::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    real_ = 0;
    imag_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Complexd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double real = 1 [default = 0];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &real_)));
          set_has_real();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_imag;
        break;
      }

      // optional double imag = 2 [default = 0];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_imag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &imag_)));
          set_has_imag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Complexd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional double real = 1 [default = 0];
  if (has_real()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->real(), output);
  }

  // optional double imag = 2 [default = 0];
  if (has_imag()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->imag(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Complexd::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional double real = 1 [default = 0];
  if (has_real()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->real(), target);
  }

  // optional double imag = 2 [default = 0];
  if (has_imag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->imag(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Complexd::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double real = 1 [default = 0];
    if (has_real()) {
      total_size += 1 + 8;
    }

    // optional double imag = 2 [default = 0];
    if (has_imag()) {
      total_size += 1 + 8;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Complexd::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Complexd* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Complexd*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Complexd::MergeFrom(const Complexd& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_real()) {
      set_real(from.real());
    }
    if (from.has_imag()) {
      set_imag(from.imag());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Complexd::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Complexd::CopyFrom(const Complexd& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Complexd::IsInitialized() const {

  return true;
}

void Complexd::Swap(Complexd* other) {
  if (other != this) {
    std::swap(real_, other->real_);
    std::swap(imag_, other->imag_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Complexd::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Complexd_descriptor_;
  metadata.reflection = Complexd_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int FMMoments::kNumExpFieldNumber;
const int FMMoments::kWaveNumFieldNumber;
const int FMMoments::kCenterFieldNumber;
const int FMMoments::kMfileFieldNumber;
#endif  // !_MSC_VER

FMMoments::FMMoments()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FMMoments::InitAsDefaultInstance() {
  center_ = const_cast< ::sploosh::Vector3d*>(&::sploosh::Vector3d::default_instance());
}

FMMoments::FMMoments(const FMMoments& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FMMoments::SharedCtor() {
  _cached_size_ = 0;
  numexp_ = 0u;
  wavenum_ = 0;
  center_ = NULL;
  mfile_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FMMoments::~FMMoments() {
  SharedDtor();
}

void FMMoments::SharedDtor() {
  if (mfile_ != &::google::protobuf::internal::kEmptyString) {
    delete mfile_;
  }
  if (this != default_instance_) {
    delete center_;
  }
}

void FMMoments::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FMMoments::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FMMoments_descriptor_;
}

const FMMoments& FMMoments::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sploosh_2eproto();
  return *default_instance_;
}

FMMoments* FMMoments::default_instance_ = NULL;

FMMoments* FMMoments::New() const {
  return new FMMoments;
}

void FMMoments::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    numexp_ = 0u;
    wavenum_ = 0;
    if (has_center()) {
      if (center_ != NULL) center_->::sploosh::Vector3d::Clear();
    }
    if (has_mfile()) {
      if (mfile_ != &::google::protobuf::internal::kEmptyString) {
        mfile_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FMMoments::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 numExp = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &numexp_)));
          set_has_numexp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_waveNum;
        break;
      }

      // required double waveNum = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_waveNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &wavenum_)));
          set_has_wavenum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_center;
        break;
      }

      // optional .sploosh.Vector3d center = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_center:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_center()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_mfile;
        break;
      }

      // optional string mfile = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_mfile:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mfile()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->mfile().data(), this->mfile().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void FMMoments::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 numExp = 1;
  if (has_numexp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->numexp(), output);
  }

  // required double waveNum = 2;
  if (has_wavenum()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->wavenum(), output);
  }

  // optional .sploosh.Vector3d center = 3;
  if (has_center()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->center(), output);
  }

  // optional string mfile = 4;
  if (has_mfile()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->mfile().data(), this->mfile().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->mfile(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FMMoments::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 numExp = 1;
  if (has_numexp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->numexp(), target);
  }

  // required double waveNum = 2;
  if (has_wavenum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->wavenum(), target);
  }

  // optional .sploosh.Vector3d center = 3;
  if (has_center()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->center(), target);
  }

  // optional string mfile = 4;
  if (has_mfile()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->mfile().data(), this->mfile().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->mfile(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FMMoments::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 numExp = 1;
    if (has_numexp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->numexp());
    }

    // required double waveNum = 2;
    if (has_wavenum()) {
      total_size += 1 + 8;
    }

    // optional .sploosh.Vector3d center = 3;
    if (has_center()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->center());
    }

    // optional string mfile = 4;
    if (has_mfile()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->mfile());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FMMoments::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FMMoments* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FMMoments*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FMMoments::MergeFrom(const FMMoments& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_numexp()) {
      set_numexp(from.numexp());
    }
    if (from.has_wavenum()) {
      set_wavenum(from.wavenum());
    }
    if (from.has_center()) {
      mutable_center()->::sploosh::Vector3d::MergeFrom(from.center());
    }
    if (from.has_mfile()) {
      set_mfile(from.mfile());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FMMoments::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FMMoments::CopyFrom(const FMMoments& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FMMoments::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void FMMoments::Swap(FMMoments* other) {
  if (other != this) {
    std::swap(numexp_, other->numexp_);
    std::swap(wavenum_, other->wavenum_);
    std::swap(center_, other->center_);
    std::swap(mfile_, other->mfile_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FMMoments::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FMMoments_descriptor_;
  metadata.reflection = FMMoments_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ModalMoments::kMomentFieldNumber;
#endif  // !_MSC_VER

ModalMoments::ModalMoments()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ModalMoments::InitAsDefaultInstance() {
}

ModalMoments::ModalMoments(const ModalMoments& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ModalMoments::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ModalMoments::~ModalMoments() {
  SharedDtor();
}

void ModalMoments::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ModalMoments::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ModalMoments::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ModalMoments_descriptor_;
}

const ModalMoments& ModalMoments::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sploosh_2eproto();
  return *default_instance_;
}

ModalMoments* ModalMoments::default_instance_ = NULL;

ModalMoments* ModalMoments::New() const {
  return new ModalMoments;
}

void ModalMoments::Clear() {
  moment_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ModalMoments::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .sploosh.FMMoments moment = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_moment:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_moment()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_moment;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ModalMoments::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .sploosh.FMMoments moment = 1;
  for (int i = 0; i < this->moment_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->moment(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ModalMoments::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .sploosh.FMMoments moment = 1;
  for (int i = 0; i < this->moment_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->moment(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ModalMoments::ByteSize() const {
  int total_size = 0;

  // repeated .sploosh.FMMoments moment = 1;
  total_size += 1 * this->moment_size();
  for (int i = 0; i < this->moment_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->moment(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ModalMoments::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ModalMoments* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ModalMoments*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ModalMoments::MergeFrom(const ModalMoments& from) {
  GOOGLE_CHECK_NE(&from, this);
  moment_.MergeFrom(from.moment_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ModalMoments::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ModalMoments::CopyFrom(const ModalMoments& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ModalMoments::IsInitialized() const {

  for (int i = 0; i < moment_size(); i++) {
    if (!this->moment(i).IsInitialized()) return false;
  }
  return true;
}

void ModalMoments::Swap(ModalMoments* other) {
  if (other != this) {
    moment_.Swap(&other->moment_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ModalMoments::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ModalMoments_descriptor_;
  metadata.reflection = ModalMoments_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sploosh

// @@protoc_insertion_point(global_scope)