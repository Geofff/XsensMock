// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: store_message.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "store_message.pb.h"

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

namespace GenericProto {

namespace {

const ::google::protobuf::Descriptor* GenericMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GenericMessage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* GenericMessage_MessageType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_store_5fmessage_2eproto() {
  protobuf_AddDesc_store_5fmessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "store_message.proto");
  GOOGLE_CHECK(file != NULL);
  GenericMessage_descriptor_ = file->message_type(0);
  static const int GenericMessage_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GenericMessage, time_since_start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GenericMessage, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GenericMessage, message_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GenericMessage, serialized_message_),
  };
  GenericMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GenericMessage_descriptor_,
      GenericMessage::default_instance_,
      GenericMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GenericMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GenericMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GenericMessage));
  GenericMessage_MessageType_descriptor_ = GenericMessage_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_store_5fmessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GenericMessage_descriptor_, &GenericMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_store_5fmessage_2eproto() {
  delete GenericMessage::default_instance_;
  delete GenericMessage_reflection_;
}

void protobuf_AddDesc_store_5fmessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023store_message.proto\022\014GenericProto\"\317\001\n\016"
    "GenericMessage\022\030\n\020time_since_start\030\001 \001(\r"
    "\0226\n\004type\030\002 \001(\0162(.GenericProto.GenericMes"
    "sage.MessageType\022\024\n\014message_size\030\003 \001(\r\022\032"
    "\n\022serialized_message\030\004 \001(\014\"9\n\013MessageTyp"
    "e\022\013\n\007UNKNOWN\020\000\022\t\n\005XSENS\020\001\022\007\n\003GPS\020\002\022\t\n\005LI"
    "DAR\020\003", 245);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "store_message.proto", &protobuf_RegisterTypes);
  GenericMessage::default_instance_ = new GenericMessage();
  GenericMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_store_5fmessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_store_5fmessage_2eproto {
  StaticDescriptorInitializer_store_5fmessage_2eproto() {
    protobuf_AddDesc_store_5fmessage_2eproto();
  }
} static_descriptor_initializer_store_5fmessage_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* GenericMessage_MessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GenericMessage_MessageType_descriptor_;
}
bool GenericMessage_MessageType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const GenericMessage_MessageType GenericMessage::UNKNOWN;
const GenericMessage_MessageType GenericMessage::XSENS;
const GenericMessage_MessageType GenericMessage::GPS;
const GenericMessage_MessageType GenericMessage::LIDAR;
const GenericMessage_MessageType GenericMessage::MessageType_MIN;
const GenericMessage_MessageType GenericMessage::MessageType_MAX;
const int GenericMessage::MessageType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int GenericMessage::kTimeSinceStartFieldNumber;
const int GenericMessage::kTypeFieldNumber;
const int GenericMessage::kMessageSizeFieldNumber;
const int GenericMessage::kSerializedMessageFieldNumber;
#endif  // !_MSC_VER

GenericMessage::GenericMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void GenericMessage::InitAsDefaultInstance() {
}

GenericMessage::GenericMessage(const GenericMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void GenericMessage::SharedCtor() {
  _cached_size_ = 0;
  time_since_start_ = 0u;
  type_ = 0;
  message_size_ = 0u;
  serialized_message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GenericMessage::~GenericMessage() {
  SharedDtor();
}

void GenericMessage::SharedDtor() {
  if (serialized_message_ != &::google::protobuf::internal::kEmptyString) {
    delete serialized_message_;
  }
  if (this != default_instance_) {
  }
}

void GenericMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GenericMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GenericMessage_descriptor_;
}

const GenericMessage& GenericMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_store_5fmessage_2eproto();
  return *default_instance_;
}

GenericMessage* GenericMessage::default_instance_ = NULL;

GenericMessage* GenericMessage::New() const {
  return new GenericMessage;
}

void GenericMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    time_since_start_ = 0u;
    type_ = 0;
    message_size_ = 0u;
    if (has_serialized_message()) {
      if (serialized_message_ != &::google::protobuf::internal::kEmptyString) {
        serialized_message_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GenericMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 time_since_start = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &time_since_start_)));
          set_has_time_since_start();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // optional .GenericProto.GenericMessage.MessageType type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::GenericProto::GenericMessage_MessageType_IsValid(value)) {
            set_type(static_cast< ::GenericProto::GenericMessage_MessageType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_message_size;
        break;
      }

      // optional uint32 message_size = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_message_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &message_size_)));
          set_has_message_size();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_serialized_message;
        break;
      }

      // optional bytes serialized_message = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_serialized_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_serialized_message()));
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

void GenericMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 time_since_start = 1;
  if (has_time_since_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->time_since_start(), output);
  }

  // optional .GenericProto.GenericMessage.MessageType type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // optional uint32 message_size = 3;
  if (has_message_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->message_size(), output);
  }

  // optional bytes serialized_message = 4;
  if (has_serialized_message()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      4, this->serialized_message(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* GenericMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 time_since_start = 1;
  if (has_time_since_start()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->time_since_start(), target);
  }

  // optional .GenericProto.GenericMessage.MessageType type = 2;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // optional uint32 message_size = 3;
  if (has_message_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->message_size(), target);
  }

  // optional bytes serialized_message = 4;
  if (has_serialized_message()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->serialized_message(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int GenericMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 time_since_start = 1;
    if (has_time_since_start()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->time_since_start());
    }

    // optional .GenericProto.GenericMessage.MessageType type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional uint32 message_size = 3;
    if (has_message_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->message_size());
    }

    // optional bytes serialized_message = 4;
    if (has_serialized_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->serialized_message());
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

void GenericMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GenericMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GenericMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GenericMessage::MergeFrom(const GenericMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time_since_start()) {
      set_time_since_start(from.time_since_start());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_message_size()) {
      set_message_size(from.message_size());
    }
    if (from.has_serialized_message()) {
      set_serialized_message(from.serialized_message());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GenericMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GenericMessage::CopyFrom(const GenericMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GenericMessage::IsInitialized() const {

  return true;
}

void GenericMessage::Swap(GenericMessage* other) {
  if (other != this) {
    std::swap(time_since_start_, other->time_since_start_);
    std::swap(type_, other->type_);
    std::swap(message_size_, other->message_size_);
    std::swap(serialized_message_, other->serialized_message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GenericMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GenericMessage_descriptor_;
  metadata.reflection = GenericMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace GenericProto

// @@protoc_insertion_point(global_scope)
