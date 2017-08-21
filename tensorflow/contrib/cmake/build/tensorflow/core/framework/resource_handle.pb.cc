// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/resource_handle.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/framework/resource_handle.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

namespace {

const ::google::protobuf::Descriptor* ResourceHandleProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ResourceHandleProto_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto() {
  protobuf_AddDesc_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tensorflow/core/framework/resource_handle.proto");
  GOOGLE_CHECK(file != NULL);
  ResourceHandleProto_descriptor_ = file->message_type(0);
  static const int ResourceHandleProto_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResourceHandleProto, device_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResourceHandleProto, container_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResourceHandleProto, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResourceHandleProto, hash_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResourceHandleProto, maybe_type_name_),
  };
  ResourceHandleProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ResourceHandleProto_descriptor_,
      ResourceHandleProto::internal_default_instance(),
      ResourceHandleProto_offsets_,
      -1,
      -1,
      -1,
      sizeof(ResourceHandleProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResourceHandleProto, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ResourceHandleProto_descriptor_, ResourceHandleProto::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto() {
  ResourceHandleProto_default_instance_.Shutdown();
  delete ResourceHandleProto_reflection_;
}

void protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  ResourceHandleProto_default_instance_.DefaultConstruct();
  ResourceHandleProto_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_once_);
void protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_once_,
                 &protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_impl);
}
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n/tensorflow/core/framework/resource_han"
    "dle.proto\022\ntensorflow\"r\n\023ResourceHandleP"
    "roto\022\016\n\006device\030\001 \001(\t\022\021\n\tcontainer\030\002 \001(\t\022"
    "\014\n\004name\030\003 \001(\t\022\021\n\thash_code\030\004 \001(\004\022\027\n\017mayb"
    "e_type_name\030\005 \001(\tB/\n\030org.tensorflow.fram"
    "eworkB\016ResourceHandleP\001\370\001\001b\006proto3", 234);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/framework/resource_handle.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_once_);
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_once_,
                 &protobuf_AddDesc_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResourceHandleProto::kDeviceFieldNumber;
const int ResourceHandleProto::kContainerFieldNumber;
const int ResourceHandleProto::kNameFieldNumber;
const int ResourceHandleProto::kHashCodeFieldNumber;
const int ResourceHandleProto::kMaybeTypeNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResourceHandleProto::ResourceHandleProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.ResourceHandleProto)
}
ResourceHandleProto::ResourceHandleProto(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ResourceHandleProto)
}

void ResourceHandleProto::InitAsDefaultInstance() {
}

ResourceHandleProto::ResourceHandleProto(const ResourceHandleProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tensorflow.ResourceHandleProto)
}

void ResourceHandleProto::SharedCtor() {
  device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  container_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  maybe_type_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  hash_code_ = GOOGLE_ULONGLONG(0);
  _cached_size_ = 0;
}

ResourceHandleProto::~ResourceHandleProto() {
  // @@protoc_insertion_point(destructor:tensorflow.ResourceHandleProto)
  SharedDtor();
}

void ResourceHandleProto::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

  device_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
  container_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
  name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
  maybe_type_name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
}

void ResourceHandleProto::ArenaDtor(void* object) {
  ResourceHandleProto* _this = reinterpret_cast< ResourceHandleProto* >(object);
  (void)_this;
}
void ResourceHandleProto::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void ResourceHandleProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ResourceHandleProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ResourceHandleProto_descriptor_;
}

const ResourceHandleProto& ResourceHandleProto::default_instance() {
  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<ResourceHandleProto> ResourceHandleProto_default_instance_;

ResourceHandleProto* ResourceHandleProto::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<ResourceHandleProto>(arena);
}

void ResourceHandleProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ResourceHandleProto)
  device_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  container_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  hash_code_ = GOOGLE_ULONGLONG(0);
  maybe_type_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}

bool ResourceHandleProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.ResourceHandleProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string device = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->device().data(), this->device().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.ResourceHandleProto.device"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_container;
        break;
      }

      // optional string container = 2;
      case 2: {
        if (tag == 18) {
         parse_container:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_container()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->container().data(), this->container().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.ResourceHandleProto.container"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_name;
        break;
      }

      // optional string name = 3;
      case 3: {
        if (tag == 26) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.ResourceHandleProto.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_hash_code;
        break;
      }

      // optional uint64 hash_code = 4;
      case 4: {
        if (tag == 32) {
         parse_hash_code:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &hash_code_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_maybe_type_name;
        break;
      }

      // optional string maybe_type_name = 5;
      case 5: {
        if (tag == 42) {
         parse_maybe_type_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_maybe_type_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->maybe_type_name().data(), this->maybe_type_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.ResourceHandleProto.maybe_type_name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.ResourceHandleProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.ResourceHandleProto)
  return false;
#undef DO_
}

void ResourceHandleProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.ResourceHandleProto)
  // optional string device = 1;
  if (this->device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), this->device().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.device");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->device(), output);
  }

  // optional string container = 2;
  if (this->container().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->container().data(), this->container().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.container");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->container(), output);
  }

  // optional string name = 3;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->name(), output);
  }

  // optional uint64 hash_code = 4;
  if (this->hash_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->hash_code(), output);
  }

  // optional string maybe_type_name = 5;
  if (this->maybe_type_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->maybe_type_name().data(), this->maybe_type_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.maybe_type_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->maybe_type_name(), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.ResourceHandleProto)
}

::google::protobuf::uint8* ResourceHandleProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ResourceHandleProto)
  // optional string device = 1;
  if (this->device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), this->device().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.device");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->device(), target);
  }

  // optional string container = 2;
  if (this->container().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->container().data(), this->container().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.container");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->container(), target);
  }

  // optional string name = 3;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  // optional uint64 hash_code = 4;
  if (this->hash_code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->hash_code(), target);
  }

  // optional string maybe_type_name = 5;
  if (this->maybe_type_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->maybe_type_name().data(), this->maybe_type_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.maybe_type_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->maybe_type_name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ResourceHandleProto)
  return target;
}

size_t ResourceHandleProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ResourceHandleProto)
  size_t total_size = 0;

  // optional string device = 1;
  if (this->device().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->device());
  }

  // optional string container = 2;
  if (this->container().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->container());
  }

  // optional string name = 3;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional uint64 hash_code = 4;
  if (this->hash_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->hash_code());
  }

  // optional string maybe_type_name = 5;
  if (this->maybe_type_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->maybe_type_name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ResourceHandleProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ResourceHandleProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ResourceHandleProto* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ResourceHandleProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ResourceHandleProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ResourceHandleProto)
    UnsafeMergeFrom(*source);
  }
}

void ResourceHandleProto::MergeFrom(const ResourceHandleProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ResourceHandleProto)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void ResourceHandleProto::UnsafeMergeFrom(const ResourceHandleProto& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.device().size() > 0) {
    set_device(from.device());
  }
  if (from.container().size() > 0) {
    set_container(from.container());
  }
  if (from.name().size() > 0) {
    set_name(from.name());
  }
  if (from.hash_code() != 0) {
    set_hash_code(from.hash_code());
  }
  if (from.maybe_type_name().size() > 0) {
    set_maybe_type_name(from.maybe_type_name());
  }
}

void ResourceHandleProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ResourceHandleProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResourceHandleProto::CopyFrom(const ResourceHandleProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ResourceHandleProto)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool ResourceHandleProto::IsInitialized() const {

  return true;
}

void ResourceHandleProto::Swap(ResourceHandleProto* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    ResourceHandleProto temp;
    temp.UnsafeMergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void ResourceHandleProto::UnsafeArenaSwap(ResourceHandleProto* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void ResourceHandleProto::InternalSwap(ResourceHandleProto* other) {
  device_.Swap(&other->device_);
  container_.Swap(&other->container_);
  name_.Swap(&other->name_);
  std::swap(hash_code_, other->hash_code_);
  maybe_type_name_.Swap(&other->maybe_type_name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ResourceHandleProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ResourceHandleProto_descriptor_;
  metadata.reflection = ResourceHandleProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ResourceHandleProto

// optional string device = 1;
void ResourceHandleProto::clear_device() {
  device_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& ResourceHandleProto::device() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.device)
  return device_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ResourceHandleProto::set_device(const ::std::string& value) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.device)
}
void ResourceHandleProto::set_device(const char* value) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.device)
}
void ResourceHandleProto::set_device(const char* value,
    size_t size) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.device)
}
::std::string* ResourceHandleProto::mutable_device() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.device)
  return device_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ResourceHandleProto::release_device() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.device)
  
  return device_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ResourceHandleProto::unsafe_arena_release_device() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.device)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return device_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void ResourceHandleProto::set_allocated_device(::std::string* device) {
  if (device != NULL) {
    
  } else {
    
  }
  device_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.device)
}
void ResourceHandleProto::unsafe_arena_set_allocated_device(
    ::std::string* device) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (device != NULL) {
    
  } else {
    
  }
  device_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      device, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.device)
}

// optional string container = 2;
void ResourceHandleProto::clear_container() {
  container_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& ResourceHandleProto::container() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.container)
  return container_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ResourceHandleProto::set_container(const ::std::string& value) {
  
  container_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.container)
}
void ResourceHandleProto::set_container(const char* value) {
  
  container_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.container)
}
void ResourceHandleProto::set_container(const char* value,
    size_t size) {
  
  container_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.container)
}
::std::string* ResourceHandleProto::mutable_container() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.container)
  return container_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ResourceHandleProto::release_container() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.container)
  
  return container_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ResourceHandleProto::unsafe_arena_release_container() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.container)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return container_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void ResourceHandleProto::set_allocated_container(::std::string* container) {
  if (container != NULL) {
    
  } else {
    
  }
  container_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), container,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.container)
}
void ResourceHandleProto::unsafe_arena_set_allocated_container(
    ::std::string* container) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (container != NULL) {
    
  } else {
    
  }
  container_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      container, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.container)
}

// optional string name = 3;
void ResourceHandleProto::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& ResourceHandleProto::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.name)
  return name_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ResourceHandleProto::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.name)
}
void ResourceHandleProto::set_name(const char* value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.name)
}
void ResourceHandleProto::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.name)
}
::std::string* ResourceHandleProto::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ResourceHandleProto::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ResourceHandleProto::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void ResourceHandleProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.name)
}
void ResourceHandleProto::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.name)
}

// optional uint64 hash_code = 4;
void ResourceHandleProto::clear_hash_code() {
  hash_code_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 ResourceHandleProto::hash_code() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.hash_code)
  return hash_code_;
}
void ResourceHandleProto::set_hash_code(::google::protobuf::uint64 value) {
  
  hash_code_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.hash_code)
}

// optional string maybe_type_name = 5;
void ResourceHandleProto::clear_maybe_type_name() {
  maybe_type_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& ResourceHandleProto::maybe_type_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.maybe_type_name)
  return maybe_type_name_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ResourceHandleProto::set_maybe_type_name(const ::std::string& value) {
  
  maybe_type_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.maybe_type_name)
}
void ResourceHandleProto::set_maybe_type_name(const char* value) {
  
  maybe_type_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.maybe_type_name)
}
void ResourceHandleProto::set_maybe_type_name(const char* value,
    size_t size) {
  
  maybe_type_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.maybe_type_name)
}
::std::string* ResourceHandleProto::mutable_maybe_type_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.maybe_type_name)
  return maybe_type_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ResourceHandleProto::release_maybe_type_name() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.maybe_type_name)
  
  return maybe_type_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ResourceHandleProto::unsafe_arena_release_maybe_type_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.maybe_type_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return maybe_type_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void ResourceHandleProto::set_allocated_maybe_type_name(::std::string* maybe_type_name) {
  if (maybe_type_name != NULL) {
    
  } else {
    
  }
  maybe_type_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), maybe_type_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.maybe_type_name)
}
void ResourceHandleProto::unsafe_arena_set_allocated_maybe_type_name(
    ::std::string* maybe_type_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (maybe_type_name != NULL) {
    
  } else {
    
  }
  maybe_type_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      maybe_type_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.maybe_type_name)
}

inline const ResourceHandleProto* ResourceHandleProto::internal_default_instance() {
  return &ResourceHandleProto_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
