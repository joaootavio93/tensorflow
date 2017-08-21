// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/contrib/tensorboard/plugins/projector/projector_config.proto

#ifndef PROTOBUF_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto();
void protobuf_InitDefaults_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto();
void protobuf_AssignDesc_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto();
void protobuf_ShutdownFile_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto();

class EmbeddingInfo;
class ProjectorConfig;
class SpriteMetadata;

// ===================================================================

class SpriteMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.SpriteMetadata) */ {
 public:
  SpriteMetadata();
  virtual ~SpriteMetadata();

  SpriteMetadata(const SpriteMetadata& from);

  inline SpriteMetadata& operator=(const SpriteMetadata& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SpriteMetadata& default_instance();

  static const SpriteMetadata* internal_default_instance();

  void Swap(SpriteMetadata* other);

  // implements Message ----------------------------------------------

  inline SpriteMetadata* New() const { return New(NULL); }

  SpriteMetadata* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SpriteMetadata& from);
  void MergeFrom(const SpriteMetadata& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SpriteMetadata* other);
  void UnsafeMergeFrom(const SpriteMetadata& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string image_path = 1;
  void clear_image_path();
  static const int kImagePathFieldNumber = 1;
  const ::std::string& image_path() const;
  void set_image_path(const ::std::string& value);
  void set_image_path(const char* value);
  void set_image_path(const char* value, size_t size);
  ::std::string* mutable_image_path();
  ::std::string* release_image_path();
  void set_allocated_image_path(::std::string* image_path);

  // repeated uint32 single_image_dim = 2;
  int single_image_dim_size() const;
  void clear_single_image_dim();
  static const int kSingleImageDimFieldNumber = 2;
  ::google::protobuf::uint32 single_image_dim(int index) const;
  void set_single_image_dim(int index, ::google::protobuf::uint32 value);
  void add_single_image_dim(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      single_image_dim() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_single_image_dim();

  // @@protoc_insertion_point(class_scope:tensorflow.SpriteMetadata)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > single_image_dim_;
  mutable int _single_image_dim_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr image_path_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<SpriteMetadata> SpriteMetadata_default_instance_;

// -------------------------------------------------------------------

class EmbeddingInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.EmbeddingInfo) */ {
 public:
  EmbeddingInfo();
  virtual ~EmbeddingInfo();

  EmbeddingInfo(const EmbeddingInfo& from);

  inline EmbeddingInfo& operator=(const EmbeddingInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EmbeddingInfo& default_instance();

  static const EmbeddingInfo* internal_default_instance();

  void Swap(EmbeddingInfo* other);

  // implements Message ----------------------------------------------

  inline EmbeddingInfo* New() const { return New(NULL); }

  EmbeddingInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EmbeddingInfo& from);
  void MergeFrom(const EmbeddingInfo& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(EmbeddingInfo* other);
  void UnsafeMergeFrom(const EmbeddingInfo& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string tensor_name = 1;
  void clear_tensor_name();
  static const int kTensorNameFieldNumber = 1;
  const ::std::string& tensor_name() const;
  void set_tensor_name(const ::std::string& value);
  void set_tensor_name(const char* value);
  void set_tensor_name(const char* value, size_t size);
  ::std::string* mutable_tensor_name();
  ::std::string* release_tensor_name();
  void set_allocated_tensor_name(::std::string* tensor_name);

  // optional string metadata_path = 2;
  void clear_metadata_path();
  static const int kMetadataPathFieldNumber = 2;
  const ::std::string& metadata_path() const;
  void set_metadata_path(const ::std::string& value);
  void set_metadata_path(const char* value);
  void set_metadata_path(const char* value, size_t size);
  ::std::string* mutable_metadata_path();
  ::std::string* release_metadata_path();
  void set_allocated_metadata_path(::std::string* metadata_path);

  // optional string bookmarks_path = 3;
  void clear_bookmarks_path();
  static const int kBookmarksPathFieldNumber = 3;
  const ::std::string& bookmarks_path() const;
  void set_bookmarks_path(const ::std::string& value);
  void set_bookmarks_path(const char* value);
  void set_bookmarks_path(const char* value, size_t size);
  ::std::string* mutable_bookmarks_path();
  ::std::string* release_bookmarks_path();
  void set_allocated_bookmarks_path(::std::string* bookmarks_path);

  // repeated uint32 tensor_shape = 4;
  int tensor_shape_size() const;
  void clear_tensor_shape();
  static const int kTensorShapeFieldNumber = 4;
  ::google::protobuf::uint32 tensor_shape(int index) const;
  void set_tensor_shape(int index, ::google::protobuf::uint32 value);
  void add_tensor_shape(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      tensor_shape() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_tensor_shape();

  // optional .tensorflow.SpriteMetadata sprite = 5;
  bool has_sprite() const;
  void clear_sprite();
  static const int kSpriteFieldNumber = 5;
  const ::tensorflow::SpriteMetadata& sprite() const;
  ::tensorflow::SpriteMetadata* mutable_sprite();
  ::tensorflow::SpriteMetadata* release_sprite();
  void set_allocated_sprite(::tensorflow::SpriteMetadata* sprite);

  // optional string tensor_path = 6;
  void clear_tensor_path();
  static const int kTensorPathFieldNumber = 6;
  const ::std::string& tensor_path() const;
  void set_tensor_path(const ::std::string& value);
  void set_tensor_path(const char* value);
  void set_tensor_path(const char* value, size_t size);
  ::std::string* mutable_tensor_path();
  ::std::string* release_tensor_path();
  void set_allocated_tensor_path(::std::string* tensor_path);

  // @@protoc_insertion_point(class_scope:tensorflow.EmbeddingInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > tensor_shape_;
  mutable int _tensor_shape_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr tensor_name_;
  ::google::protobuf::internal::ArenaStringPtr metadata_path_;
  ::google::protobuf::internal::ArenaStringPtr bookmarks_path_;
  ::google::protobuf::internal::ArenaStringPtr tensor_path_;
  ::tensorflow::SpriteMetadata* sprite_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<EmbeddingInfo> EmbeddingInfo_default_instance_;

// -------------------------------------------------------------------

class ProjectorConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.ProjectorConfig) */ {
 public:
  ProjectorConfig();
  virtual ~ProjectorConfig();

  ProjectorConfig(const ProjectorConfig& from);

  inline ProjectorConfig& operator=(const ProjectorConfig& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ProjectorConfig& default_instance();

  static const ProjectorConfig* internal_default_instance();

  void Swap(ProjectorConfig* other);

  // implements Message ----------------------------------------------

  inline ProjectorConfig* New() const { return New(NULL); }

  ProjectorConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProjectorConfig& from);
  void MergeFrom(const ProjectorConfig& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ProjectorConfig* other);
  void UnsafeMergeFrom(const ProjectorConfig& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string model_checkpoint_path = 1;
  void clear_model_checkpoint_path();
  static const int kModelCheckpointPathFieldNumber = 1;
  const ::std::string& model_checkpoint_path() const;
  void set_model_checkpoint_path(const ::std::string& value);
  void set_model_checkpoint_path(const char* value);
  void set_model_checkpoint_path(const char* value, size_t size);
  ::std::string* mutable_model_checkpoint_path();
  ::std::string* release_model_checkpoint_path();
  void set_allocated_model_checkpoint_path(::std::string* model_checkpoint_path);

  // repeated .tensorflow.EmbeddingInfo embeddings = 2;
  int embeddings_size() const;
  void clear_embeddings();
  static const int kEmbeddingsFieldNumber = 2;
  const ::tensorflow::EmbeddingInfo& embeddings(int index) const;
  ::tensorflow::EmbeddingInfo* mutable_embeddings(int index);
  ::tensorflow::EmbeddingInfo* add_embeddings();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::EmbeddingInfo >*
      mutable_embeddings();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::EmbeddingInfo >&
      embeddings() const;

  // optional string model_checkpoint_dir = 3;
  void clear_model_checkpoint_dir();
  static const int kModelCheckpointDirFieldNumber = 3;
  const ::std::string& model_checkpoint_dir() const;
  void set_model_checkpoint_dir(const ::std::string& value);
  void set_model_checkpoint_dir(const char* value);
  void set_model_checkpoint_dir(const char* value, size_t size);
  ::std::string* mutable_model_checkpoint_dir();
  ::std::string* release_model_checkpoint_dir();
  void set_allocated_model_checkpoint_dir(::std::string* model_checkpoint_dir);

  // @@protoc_insertion_point(class_scope:tensorflow.ProjectorConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::EmbeddingInfo > embeddings_;
  ::google::protobuf::internal::ArenaStringPtr model_checkpoint_path_;
  ::google::protobuf::internal::ArenaStringPtr model_checkpoint_dir_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ProjectorConfig> ProjectorConfig_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SpriteMetadata

// optional string image_path = 1;
inline void SpriteMetadata::clear_image_path() {
  image_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SpriteMetadata::image_path() const {
  // @@protoc_insertion_point(field_get:tensorflow.SpriteMetadata.image_path)
  return image_path_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SpriteMetadata::set_image_path(const ::std::string& value) {
  
  image_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.SpriteMetadata.image_path)
}
inline void SpriteMetadata::set_image_path(const char* value) {
  
  image_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.SpriteMetadata.image_path)
}
inline void SpriteMetadata::set_image_path(const char* value, size_t size) {
  
  image_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.SpriteMetadata.image_path)
}
inline ::std::string* SpriteMetadata::mutable_image_path() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.SpriteMetadata.image_path)
  return image_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SpriteMetadata::release_image_path() {
  // @@protoc_insertion_point(field_release:tensorflow.SpriteMetadata.image_path)
  
  return image_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SpriteMetadata::set_allocated_image_path(::std::string* image_path) {
  if (image_path != NULL) {
    
  } else {
    
  }
  image_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), image_path);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SpriteMetadata.image_path)
}

// repeated uint32 single_image_dim = 2;
inline int SpriteMetadata::single_image_dim_size() const {
  return single_image_dim_.size();
}
inline void SpriteMetadata::clear_single_image_dim() {
  single_image_dim_.Clear();
}
inline ::google::protobuf::uint32 SpriteMetadata::single_image_dim(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.SpriteMetadata.single_image_dim)
  return single_image_dim_.Get(index);
}
inline void SpriteMetadata::set_single_image_dim(int index, ::google::protobuf::uint32 value) {
  single_image_dim_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.SpriteMetadata.single_image_dim)
}
inline void SpriteMetadata::add_single_image_dim(::google::protobuf::uint32 value) {
  single_image_dim_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.SpriteMetadata.single_image_dim)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
SpriteMetadata::single_image_dim() const {
  // @@protoc_insertion_point(field_list:tensorflow.SpriteMetadata.single_image_dim)
  return single_image_dim_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
SpriteMetadata::mutable_single_image_dim() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.SpriteMetadata.single_image_dim)
  return &single_image_dim_;
}

inline const SpriteMetadata* SpriteMetadata::internal_default_instance() {
  return &SpriteMetadata_default_instance_.get();
}
// -------------------------------------------------------------------

// EmbeddingInfo

// optional string tensor_name = 1;
inline void EmbeddingInfo::clear_tensor_name() {
  tensor_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EmbeddingInfo::tensor_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.EmbeddingInfo.tensor_name)
  return tensor_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EmbeddingInfo::set_tensor_name(const ::std::string& value) {
  
  tensor_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.EmbeddingInfo.tensor_name)
}
inline void EmbeddingInfo::set_tensor_name(const char* value) {
  
  tensor_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.EmbeddingInfo.tensor_name)
}
inline void EmbeddingInfo::set_tensor_name(const char* value, size_t size) {
  
  tensor_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.EmbeddingInfo.tensor_name)
}
inline ::std::string* EmbeddingInfo::mutable_tensor_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.EmbeddingInfo.tensor_name)
  return tensor_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EmbeddingInfo::release_tensor_name() {
  // @@protoc_insertion_point(field_release:tensorflow.EmbeddingInfo.tensor_name)
  
  return tensor_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EmbeddingInfo::set_allocated_tensor_name(::std::string* tensor_name) {
  if (tensor_name != NULL) {
    
  } else {
    
  }
  tensor_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tensor_name);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.EmbeddingInfo.tensor_name)
}

// optional string metadata_path = 2;
inline void EmbeddingInfo::clear_metadata_path() {
  metadata_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EmbeddingInfo::metadata_path() const {
  // @@protoc_insertion_point(field_get:tensorflow.EmbeddingInfo.metadata_path)
  return metadata_path_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EmbeddingInfo::set_metadata_path(const ::std::string& value) {
  
  metadata_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.EmbeddingInfo.metadata_path)
}
inline void EmbeddingInfo::set_metadata_path(const char* value) {
  
  metadata_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.EmbeddingInfo.metadata_path)
}
inline void EmbeddingInfo::set_metadata_path(const char* value, size_t size) {
  
  metadata_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.EmbeddingInfo.metadata_path)
}
inline ::std::string* EmbeddingInfo::mutable_metadata_path() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.EmbeddingInfo.metadata_path)
  return metadata_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EmbeddingInfo::release_metadata_path() {
  // @@protoc_insertion_point(field_release:tensorflow.EmbeddingInfo.metadata_path)
  
  return metadata_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EmbeddingInfo::set_allocated_metadata_path(::std::string* metadata_path) {
  if (metadata_path != NULL) {
    
  } else {
    
  }
  metadata_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), metadata_path);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.EmbeddingInfo.metadata_path)
}

// optional string bookmarks_path = 3;
inline void EmbeddingInfo::clear_bookmarks_path() {
  bookmarks_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EmbeddingInfo::bookmarks_path() const {
  // @@protoc_insertion_point(field_get:tensorflow.EmbeddingInfo.bookmarks_path)
  return bookmarks_path_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EmbeddingInfo::set_bookmarks_path(const ::std::string& value) {
  
  bookmarks_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.EmbeddingInfo.bookmarks_path)
}
inline void EmbeddingInfo::set_bookmarks_path(const char* value) {
  
  bookmarks_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.EmbeddingInfo.bookmarks_path)
}
inline void EmbeddingInfo::set_bookmarks_path(const char* value, size_t size) {
  
  bookmarks_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.EmbeddingInfo.bookmarks_path)
}
inline ::std::string* EmbeddingInfo::mutable_bookmarks_path() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.EmbeddingInfo.bookmarks_path)
  return bookmarks_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EmbeddingInfo::release_bookmarks_path() {
  // @@protoc_insertion_point(field_release:tensorflow.EmbeddingInfo.bookmarks_path)
  
  return bookmarks_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EmbeddingInfo::set_allocated_bookmarks_path(::std::string* bookmarks_path) {
  if (bookmarks_path != NULL) {
    
  } else {
    
  }
  bookmarks_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bookmarks_path);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.EmbeddingInfo.bookmarks_path)
}

// repeated uint32 tensor_shape = 4;
inline int EmbeddingInfo::tensor_shape_size() const {
  return tensor_shape_.size();
}
inline void EmbeddingInfo::clear_tensor_shape() {
  tensor_shape_.Clear();
}
inline ::google::protobuf::uint32 EmbeddingInfo::tensor_shape(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.EmbeddingInfo.tensor_shape)
  return tensor_shape_.Get(index);
}
inline void EmbeddingInfo::set_tensor_shape(int index, ::google::protobuf::uint32 value) {
  tensor_shape_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.EmbeddingInfo.tensor_shape)
}
inline void EmbeddingInfo::add_tensor_shape(::google::protobuf::uint32 value) {
  tensor_shape_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.EmbeddingInfo.tensor_shape)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
EmbeddingInfo::tensor_shape() const {
  // @@protoc_insertion_point(field_list:tensorflow.EmbeddingInfo.tensor_shape)
  return tensor_shape_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
EmbeddingInfo::mutable_tensor_shape() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.EmbeddingInfo.tensor_shape)
  return &tensor_shape_;
}

// optional .tensorflow.SpriteMetadata sprite = 5;
inline bool EmbeddingInfo::has_sprite() const {
  return this != internal_default_instance() && sprite_ != NULL;
}
inline void EmbeddingInfo::clear_sprite() {
  if (GetArenaNoVirtual() == NULL && sprite_ != NULL) delete sprite_;
  sprite_ = NULL;
}
inline const ::tensorflow::SpriteMetadata& EmbeddingInfo::sprite() const {
  // @@protoc_insertion_point(field_get:tensorflow.EmbeddingInfo.sprite)
  return sprite_ != NULL ? *sprite_
                         : *::tensorflow::SpriteMetadata::internal_default_instance();
}
inline ::tensorflow::SpriteMetadata* EmbeddingInfo::mutable_sprite() {
  
  if (sprite_ == NULL) {
    sprite_ = new ::tensorflow::SpriteMetadata;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.EmbeddingInfo.sprite)
  return sprite_;
}
inline ::tensorflow::SpriteMetadata* EmbeddingInfo::release_sprite() {
  // @@protoc_insertion_point(field_release:tensorflow.EmbeddingInfo.sprite)
  
  ::tensorflow::SpriteMetadata* temp = sprite_;
  sprite_ = NULL;
  return temp;
}
inline void EmbeddingInfo::set_allocated_sprite(::tensorflow::SpriteMetadata* sprite) {
  delete sprite_;
  sprite_ = sprite;
  if (sprite) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.EmbeddingInfo.sprite)
}

// optional string tensor_path = 6;
inline void EmbeddingInfo::clear_tensor_path() {
  tensor_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EmbeddingInfo::tensor_path() const {
  // @@protoc_insertion_point(field_get:tensorflow.EmbeddingInfo.tensor_path)
  return tensor_path_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EmbeddingInfo::set_tensor_path(const ::std::string& value) {
  
  tensor_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.EmbeddingInfo.tensor_path)
}
inline void EmbeddingInfo::set_tensor_path(const char* value) {
  
  tensor_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.EmbeddingInfo.tensor_path)
}
inline void EmbeddingInfo::set_tensor_path(const char* value, size_t size) {
  
  tensor_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.EmbeddingInfo.tensor_path)
}
inline ::std::string* EmbeddingInfo::mutable_tensor_path() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.EmbeddingInfo.tensor_path)
  return tensor_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EmbeddingInfo::release_tensor_path() {
  // @@protoc_insertion_point(field_release:tensorflow.EmbeddingInfo.tensor_path)
  
  return tensor_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EmbeddingInfo::set_allocated_tensor_path(::std::string* tensor_path) {
  if (tensor_path != NULL) {
    
  } else {
    
  }
  tensor_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tensor_path);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.EmbeddingInfo.tensor_path)
}

inline const EmbeddingInfo* EmbeddingInfo::internal_default_instance() {
  return &EmbeddingInfo_default_instance_.get();
}
// -------------------------------------------------------------------

// ProjectorConfig

// optional string model_checkpoint_path = 1;
inline void ProjectorConfig::clear_model_checkpoint_path() {
  model_checkpoint_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProjectorConfig::model_checkpoint_path() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProjectorConfig.model_checkpoint_path)
  return model_checkpoint_path_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProjectorConfig::set_model_checkpoint_path(const ::std::string& value) {
  
  model_checkpoint_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.ProjectorConfig.model_checkpoint_path)
}
inline void ProjectorConfig::set_model_checkpoint_path(const char* value) {
  
  model_checkpoint_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.ProjectorConfig.model_checkpoint_path)
}
inline void ProjectorConfig::set_model_checkpoint_path(const char* value, size_t size) {
  
  model_checkpoint_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ProjectorConfig.model_checkpoint_path)
}
inline ::std::string* ProjectorConfig::mutable_model_checkpoint_path() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ProjectorConfig.model_checkpoint_path)
  return model_checkpoint_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProjectorConfig::release_model_checkpoint_path() {
  // @@protoc_insertion_point(field_release:tensorflow.ProjectorConfig.model_checkpoint_path)
  
  return model_checkpoint_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProjectorConfig::set_allocated_model_checkpoint_path(::std::string* model_checkpoint_path) {
  if (model_checkpoint_path != NULL) {
    
  } else {
    
  }
  model_checkpoint_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_checkpoint_path);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ProjectorConfig.model_checkpoint_path)
}

// repeated .tensorflow.EmbeddingInfo embeddings = 2;
inline int ProjectorConfig::embeddings_size() const {
  return embeddings_.size();
}
inline void ProjectorConfig::clear_embeddings() {
  embeddings_.Clear();
}
inline const ::tensorflow::EmbeddingInfo& ProjectorConfig::embeddings(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.ProjectorConfig.embeddings)
  return embeddings_.Get(index);
}
inline ::tensorflow::EmbeddingInfo* ProjectorConfig::mutable_embeddings(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.ProjectorConfig.embeddings)
  return embeddings_.Mutable(index);
}
inline ::tensorflow::EmbeddingInfo* ProjectorConfig::add_embeddings() {
  // @@protoc_insertion_point(field_add:tensorflow.ProjectorConfig.embeddings)
  return embeddings_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::EmbeddingInfo >*
ProjectorConfig::mutable_embeddings() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.ProjectorConfig.embeddings)
  return &embeddings_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::EmbeddingInfo >&
ProjectorConfig::embeddings() const {
  // @@protoc_insertion_point(field_list:tensorflow.ProjectorConfig.embeddings)
  return embeddings_;
}

// optional string model_checkpoint_dir = 3;
inline void ProjectorConfig::clear_model_checkpoint_dir() {
  model_checkpoint_dir_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProjectorConfig::model_checkpoint_dir() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProjectorConfig.model_checkpoint_dir)
  return model_checkpoint_dir_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProjectorConfig::set_model_checkpoint_dir(const ::std::string& value) {
  
  model_checkpoint_dir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.ProjectorConfig.model_checkpoint_dir)
}
inline void ProjectorConfig::set_model_checkpoint_dir(const char* value) {
  
  model_checkpoint_dir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.ProjectorConfig.model_checkpoint_dir)
}
inline void ProjectorConfig::set_model_checkpoint_dir(const char* value, size_t size) {
  
  model_checkpoint_dir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ProjectorConfig.model_checkpoint_dir)
}
inline ::std::string* ProjectorConfig::mutable_model_checkpoint_dir() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ProjectorConfig.model_checkpoint_dir)
  return model_checkpoint_dir_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProjectorConfig::release_model_checkpoint_dir() {
  // @@protoc_insertion_point(field_release:tensorflow.ProjectorConfig.model_checkpoint_dir)
  
  return model_checkpoint_dir_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProjectorConfig::set_allocated_model_checkpoint_dir(::std::string* model_checkpoint_dir) {
  if (model_checkpoint_dir != NULL) {
    
  } else {
    
  }
  model_checkpoint_dir_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_checkpoint_dir);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ProjectorConfig.model_checkpoint_dir)
}

inline const ProjectorConfig* ProjectorConfig::internal_default_instance() {
  return &ProjectorConfig_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcontrib_2ftensorboard_2fplugins_2fprojector_2fprojector_5fconfig_2eproto__INCLUDED