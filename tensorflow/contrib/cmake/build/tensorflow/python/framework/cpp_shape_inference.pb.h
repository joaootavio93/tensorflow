// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/python/framework/cpp_shape_inference.proto

#ifndef PROTOBUF_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto__INCLUDED

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
#include "tensorflow/core/framework/types.pb.h"
#include "tensorflow/core/framework/tensor_shape.pb.h"
// @@protoc_insertion_point(includes)

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();
void protobuf_InitDefaults_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();
void protobuf_AssignDesc_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();
void protobuf_ShutdownFile_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();

class CppShapeInferenceInputsNeeded;
class CppShapeInferenceResult;
class CppShapeInferenceResult_HandleData;
class CppShapeInferenceResult_HandleShapeAndType;

// ===================================================================

class CppShapeInferenceResult_HandleShapeAndType : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.CppShapeInferenceResult.HandleShapeAndType) */ {
 public:
  CppShapeInferenceResult_HandleShapeAndType();
  virtual ~CppShapeInferenceResult_HandleShapeAndType();

  CppShapeInferenceResult_HandleShapeAndType(const CppShapeInferenceResult_HandleShapeAndType& from);

  inline CppShapeInferenceResult_HandleShapeAndType& operator=(const CppShapeInferenceResult_HandleShapeAndType& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const CppShapeInferenceResult_HandleShapeAndType& default_instance();

  static const CppShapeInferenceResult_HandleShapeAndType* internal_default_instance();

  void UnsafeArenaSwap(CppShapeInferenceResult_HandleShapeAndType* other);
  void Swap(CppShapeInferenceResult_HandleShapeAndType* other);

  // implements Message ----------------------------------------------

  inline CppShapeInferenceResult_HandleShapeAndType* New() const { return New(NULL); }

  CppShapeInferenceResult_HandleShapeAndType* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CppShapeInferenceResult_HandleShapeAndType& from);
  void MergeFrom(const CppShapeInferenceResult_HandleShapeAndType& from);
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
  void InternalSwap(CppShapeInferenceResult_HandleShapeAndType* other);
  void UnsafeMergeFrom(const CppShapeInferenceResult_HandleShapeAndType& from);
  protected:
  explicit CppShapeInferenceResult_HandleShapeAndType(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
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

  // optional .tensorflow.TensorShapeProto shape = 1;
  bool has_shape() const;
  void clear_shape();
  static const int kShapeFieldNumber = 1;
  private:
  void _slow_mutable_shape();
  void _slow_set_allocated_shape(
      ::google::protobuf::Arena* message_arena, ::tensorflow::TensorShapeProto** shape);
  ::tensorflow::TensorShapeProto* _slow_release_shape();
  public:
  const ::tensorflow::TensorShapeProto& shape() const;
  ::tensorflow::TensorShapeProto* mutable_shape();
  ::tensorflow::TensorShapeProto* release_shape();
  void set_allocated_shape(::tensorflow::TensorShapeProto* shape);
  ::tensorflow::TensorShapeProto* unsafe_arena_release_shape();
  void unsafe_arena_set_allocated_shape(
      ::tensorflow::TensorShapeProto* shape);

  // optional .tensorflow.DataType dtype = 2;
  void clear_dtype();
  static const int kDtypeFieldNumber = 2;
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);

  // @@protoc_insertion_point(class_scope:tensorflow.CppShapeInferenceResult.HandleShapeAndType)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::TensorShapeProto* shape_;
  int dtype_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<CppShapeInferenceResult_HandleShapeAndType> CppShapeInferenceResult_HandleShapeAndType_default_instance_;

// -------------------------------------------------------------------

class CppShapeInferenceResult_HandleData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.CppShapeInferenceResult.HandleData) */ {
 public:
  CppShapeInferenceResult_HandleData();
  virtual ~CppShapeInferenceResult_HandleData();

  CppShapeInferenceResult_HandleData(const CppShapeInferenceResult_HandleData& from);

  inline CppShapeInferenceResult_HandleData& operator=(const CppShapeInferenceResult_HandleData& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const CppShapeInferenceResult_HandleData& default_instance();

  static const CppShapeInferenceResult_HandleData* internal_default_instance();

  void UnsafeArenaSwap(CppShapeInferenceResult_HandleData* other);
  void Swap(CppShapeInferenceResult_HandleData* other);

  // implements Message ----------------------------------------------

  inline CppShapeInferenceResult_HandleData* New() const { return New(NULL); }

  CppShapeInferenceResult_HandleData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CppShapeInferenceResult_HandleData& from);
  void MergeFrom(const CppShapeInferenceResult_HandleData& from);
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
  void InternalSwap(CppShapeInferenceResult_HandleData* other);
  void UnsafeMergeFrom(const CppShapeInferenceResult_HandleData& from);
  protected:
  explicit CppShapeInferenceResult_HandleData(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
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

  // optional bool is_set = 1;
  void clear_is_set();
  static const int kIsSetFieldNumber = 1;
  bool is_set() const;
  void set_is_set(bool value);

  // repeated .tensorflow.CppShapeInferenceResult.HandleShapeAndType shape_and_type = 2;
  int shape_and_type_size() const;
  void clear_shape_and_type();
  static const int kShapeAndTypeFieldNumber = 2;
  const ::tensorflow::CppShapeInferenceResult_HandleShapeAndType& shape_and_type(int index) const;
  ::tensorflow::CppShapeInferenceResult_HandleShapeAndType* mutable_shape_and_type(int index);
  ::tensorflow::CppShapeInferenceResult_HandleShapeAndType* add_shape_and_type();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::CppShapeInferenceResult_HandleShapeAndType >*
      mutable_shape_and_type();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::CppShapeInferenceResult_HandleShapeAndType >&
      shape_and_type() const;

  // @@protoc_insertion_point(class_scope:tensorflow.CppShapeInferenceResult.HandleData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::CppShapeInferenceResult_HandleShapeAndType > shape_and_type_;
  bool is_set_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<CppShapeInferenceResult_HandleData> CppShapeInferenceResult_HandleData_default_instance_;

// -------------------------------------------------------------------

class CppShapeInferenceResult : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.CppShapeInferenceResult) */ {
 public:
  CppShapeInferenceResult();
  virtual ~CppShapeInferenceResult();

  CppShapeInferenceResult(const CppShapeInferenceResult& from);

  inline CppShapeInferenceResult& operator=(const CppShapeInferenceResult& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const CppShapeInferenceResult& default_instance();

  static const CppShapeInferenceResult* internal_default_instance();

  void UnsafeArenaSwap(CppShapeInferenceResult* other);
  void Swap(CppShapeInferenceResult* other);

  // implements Message ----------------------------------------------

  inline CppShapeInferenceResult* New() const { return New(NULL); }

  CppShapeInferenceResult* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CppShapeInferenceResult& from);
  void MergeFrom(const CppShapeInferenceResult& from);
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
  void InternalSwap(CppShapeInferenceResult* other);
  void UnsafeMergeFrom(const CppShapeInferenceResult& from);
  protected:
  explicit CppShapeInferenceResult(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
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

  typedef CppShapeInferenceResult_HandleShapeAndType HandleShapeAndType;
  typedef CppShapeInferenceResult_HandleData HandleData;

  // accessors -------------------------------------------------------

  // optional .tensorflow.TensorShapeProto shape = 1;
  bool has_shape() const;
  void clear_shape();
  static const int kShapeFieldNumber = 1;
  private:
  void _slow_mutable_shape();
  void _slow_set_allocated_shape(
      ::google::protobuf::Arena* message_arena, ::tensorflow::TensorShapeProto** shape);
  ::tensorflow::TensorShapeProto* _slow_release_shape();
  public:
  const ::tensorflow::TensorShapeProto& shape() const;
  ::tensorflow::TensorShapeProto* mutable_shape();
  ::tensorflow::TensorShapeProto* release_shape();
  void set_allocated_shape(::tensorflow::TensorShapeProto* shape);
  ::tensorflow::TensorShapeProto* unsafe_arena_release_shape();
  void unsafe_arena_set_allocated_shape(
      ::tensorflow::TensorShapeProto* shape);

  // optional .tensorflow.CppShapeInferenceResult.HandleData handle_data = 4;
  bool has_handle_data() const;
  void clear_handle_data();
  static const int kHandleDataFieldNumber = 4;
  private:
  void _slow_mutable_handle_data();
  void _slow_set_allocated_handle_data(
      ::google::protobuf::Arena* message_arena, ::tensorflow::CppShapeInferenceResult_HandleData** handle_data);
  ::tensorflow::CppShapeInferenceResult_HandleData* _slow_release_handle_data();
  public:
  const ::tensorflow::CppShapeInferenceResult_HandleData& handle_data() const;
  ::tensorflow::CppShapeInferenceResult_HandleData* mutable_handle_data();
  ::tensorflow::CppShapeInferenceResult_HandleData* release_handle_data();
  void set_allocated_handle_data(::tensorflow::CppShapeInferenceResult_HandleData* handle_data);
  ::tensorflow::CppShapeInferenceResult_HandleData* unsafe_arena_release_handle_data();
  void unsafe_arena_set_allocated_handle_data(
      ::tensorflow::CppShapeInferenceResult_HandleData* handle_data);

  // @@protoc_insertion_point(class_scope:tensorflow.CppShapeInferenceResult)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::TensorShapeProto* shape_;
  ::tensorflow::CppShapeInferenceResult_HandleData* handle_data_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<CppShapeInferenceResult> CppShapeInferenceResult_default_instance_;

// -------------------------------------------------------------------

class CppShapeInferenceInputsNeeded : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.CppShapeInferenceInputsNeeded) */ {
 public:
  CppShapeInferenceInputsNeeded();
  virtual ~CppShapeInferenceInputsNeeded();

  CppShapeInferenceInputsNeeded(const CppShapeInferenceInputsNeeded& from);

  inline CppShapeInferenceInputsNeeded& operator=(const CppShapeInferenceInputsNeeded& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const CppShapeInferenceInputsNeeded& default_instance();

  static const CppShapeInferenceInputsNeeded* internal_default_instance();

  void UnsafeArenaSwap(CppShapeInferenceInputsNeeded* other);
  void Swap(CppShapeInferenceInputsNeeded* other);

  // implements Message ----------------------------------------------

  inline CppShapeInferenceInputsNeeded* New() const { return New(NULL); }

  CppShapeInferenceInputsNeeded* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CppShapeInferenceInputsNeeded& from);
  void MergeFrom(const CppShapeInferenceInputsNeeded& from);
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
  void InternalSwap(CppShapeInferenceInputsNeeded* other);
  void UnsafeMergeFrom(const CppShapeInferenceInputsNeeded& from);
  protected:
  explicit CppShapeInferenceInputsNeeded(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
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

  // repeated int32 input_tensors_needed = 1;
  int input_tensors_needed_size() const;
  void clear_input_tensors_needed();
  static const int kInputTensorsNeededFieldNumber = 1;
  ::google::protobuf::int32 input_tensors_needed(int index) const;
  void set_input_tensors_needed(int index, ::google::protobuf::int32 value);
  void add_input_tensors_needed(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      input_tensors_needed() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_input_tensors_needed();

  // repeated int32 input_tensors_as_shapes_needed = 2;
  int input_tensors_as_shapes_needed_size() const;
  void clear_input_tensors_as_shapes_needed();
  static const int kInputTensorsAsShapesNeededFieldNumber = 2;
  ::google::protobuf::int32 input_tensors_as_shapes_needed(int index) const;
  void set_input_tensors_as_shapes_needed(int index, ::google::protobuf::int32 value);
  void add_input_tensors_as_shapes_needed(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      input_tensors_as_shapes_needed() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_input_tensors_as_shapes_needed();

  // @@protoc_insertion_point(class_scope:tensorflow.CppShapeInferenceInputsNeeded)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > input_tensors_needed_;
  mutable int _input_tensors_needed_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > input_tensors_as_shapes_needed_;
  mutable int _input_tensors_as_shapes_needed_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<CppShapeInferenceInputsNeeded> CppShapeInferenceInputsNeeded_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CppShapeInferenceResult_HandleShapeAndType

// optional .tensorflow.TensorShapeProto shape = 1;
inline bool CppShapeInferenceResult_HandleShapeAndType::has_shape() const {
  return this != internal_default_instance() && shape_ != NULL;
}
inline void CppShapeInferenceResult_HandleShapeAndType::clear_shape() {
  if (GetArenaNoVirtual() == NULL && shape_ != NULL) delete shape_;
  shape_ = NULL;
}
inline const ::tensorflow::TensorShapeProto& CppShapeInferenceResult_HandleShapeAndType::shape() const {
  // @@protoc_insertion_point(field_get:tensorflow.CppShapeInferenceResult.HandleShapeAndType.shape)
  return shape_ != NULL ? *shape_
                         : *::tensorflow::TensorShapeProto::internal_default_instance();
}
inline ::tensorflow::TensorShapeProto* CppShapeInferenceResult_HandleShapeAndType::mutable_shape() {
  
  if (shape_ == NULL) {
    _slow_mutable_shape();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.CppShapeInferenceResult.HandleShapeAndType.shape)
  return shape_;
}
inline ::tensorflow::TensorShapeProto* CppShapeInferenceResult_HandleShapeAndType::release_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.CppShapeInferenceResult.HandleShapeAndType.shape)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_shape();
  } else {
    ::tensorflow::TensorShapeProto* temp = shape_;
    shape_ = NULL;
    return temp;
  }
}
inline  void CppShapeInferenceResult_HandleShapeAndType::set_allocated_shape(::tensorflow::TensorShapeProto* shape) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete shape_;
  }
  if (shape != NULL) {
    _slow_set_allocated_shape(message_arena, &shape);
  }
  shape_ = shape;
  if (shape) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CppShapeInferenceResult.HandleShapeAndType.shape)
}

// optional .tensorflow.DataType dtype = 2;
inline void CppShapeInferenceResult_HandleShapeAndType::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType CppShapeInferenceResult_HandleShapeAndType::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.CppShapeInferenceResult.HandleShapeAndType.dtype)
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline void CppShapeInferenceResult_HandleShapeAndType::set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CppShapeInferenceResult.HandleShapeAndType.dtype)
}

inline const CppShapeInferenceResult_HandleShapeAndType* CppShapeInferenceResult_HandleShapeAndType::internal_default_instance() {
  return &CppShapeInferenceResult_HandleShapeAndType_default_instance_.get();
}
// -------------------------------------------------------------------

// CppShapeInferenceResult_HandleData

// optional bool is_set = 1;
inline void CppShapeInferenceResult_HandleData::clear_is_set() {
  is_set_ = false;
}
inline bool CppShapeInferenceResult_HandleData::is_set() const {
  // @@protoc_insertion_point(field_get:tensorflow.CppShapeInferenceResult.HandleData.is_set)
  return is_set_;
}
inline void CppShapeInferenceResult_HandleData::set_is_set(bool value) {
  
  is_set_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.CppShapeInferenceResult.HandleData.is_set)
}

// repeated .tensorflow.CppShapeInferenceResult.HandleShapeAndType shape_and_type = 2;
inline int CppShapeInferenceResult_HandleData::shape_and_type_size() const {
  return shape_and_type_.size();
}
inline void CppShapeInferenceResult_HandleData::clear_shape_and_type() {
  shape_and_type_.Clear();
}
inline const ::tensorflow::CppShapeInferenceResult_HandleShapeAndType& CppShapeInferenceResult_HandleData::shape_and_type(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CppShapeInferenceResult.HandleData.shape_and_type)
  return shape_and_type_.Get(index);
}
inline ::tensorflow::CppShapeInferenceResult_HandleShapeAndType* CppShapeInferenceResult_HandleData::mutable_shape_and_type(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.CppShapeInferenceResult.HandleData.shape_and_type)
  return shape_and_type_.Mutable(index);
}
inline ::tensorflow::CppShapeInferenceResult_HandleShapeAndType* CppShapeInferenceResult_HandleData::add_shape_and_type() {
  // @@protoc_insertion_point(field_add:tensorflow.CppShapeInferenceResult.HandleData.shape_and_type)
  return shape_and_type_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::CppShapeInferenceResult_HandleShapeAndType >*
CppShapeInferenceResult_HandleData::mutable_shape_and_type() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CppShapeInferenceResult.HandleData.shape_and_type)
  return &shape_and_type_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::CppShapeInferenceResult_HandleShapeAndType >&
CppShapeInferenceResult_HandleData::shape_and_type() const {
  // @@protoc_insertion_point(field_list:tensorflow.CppShapeInferenceResult.HandleData.shape_and_type)
  return shape_and_type_;
}

inline const CppShapeInferenceResult_HandleData* CppShapeInferenceResult_HandleData::internal_default_instance() {
  return &CppShapeInferenceResult_HandleData_default_instance_.get();
}
// -------------------------------------------------------------------

// CppShapeInferenceResult

// optional .tensorflow.TensorShapeProto shape = 1;
inline bool CppShapeInferenceResult::has_shape() const {
  return this != internal_default_instance() && shape_ != NULL;
}
inline void CppShapeInferenceResult::clear_shape() {
  if (GetArenaNoVirtual() == NULL && shape_ != NULL) delete shape_;
  shape_ = NULL;
}
inline const ::tensorflow::TensorShapeProto& CppShapeInferenceResult::shape() const {
  // @@protoc_insertion_point(field_get:tensorflow.CppShapeInferenceResult.shape)
  return shape_ != NULL ? *shape_
                         : *::tensorflow::TensorShapeProto::internal_default_instance();
}
inline ::tensorflow::TensorShapeProto* CppShapeInferenceResult::mutable_shape() {
  
  if (shape_ == NULL) {
    _slow_mutable_shape();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.CppShapeInferenceResult.shape)
  return shape_;
}
inline ::tensorflow::TensorShapeProto* CppShapeInferenceResult::release_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.CppShapeInferenceResult.shape)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_shape();
  } else {
    ::tensorflow::TensorShapeProto* temp = shape_;
    shape_ = NULL;
    return temp;
  }
}
inline  void CppShapeInferenceResult::set_allocated_shape(::tensorflow::TensorShapeProto* shape) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete shape_;
  }
  if (shape != NULL) {
    _slow_set_allocated_shape(message_arena, &shape);
  }
  shape_ = shape;
  if (shape) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CppShapeInferenceResult.shape)
}

// optional .tensorflow.CppShapeInferenceResult.HandleData handle_data = 4;
inline bool CppShapeInferenceResult::has_handle_data() const {
  return this != internal_default_instance() && handle_data_ != NULL;
}
inline void CppShapeInferenceResult::clear_handle_data() {
  if (GetArenaNoVirtual() == NULL && handle_data_ != NULL) delete handle_data_;
  handle_data_ = NULL;
}
inline const ::tensorflow::CppShapeInferenceResult_HandleData& CppShapeInferenceResult::handle_data() const {
  // @@protoc_insertion_point(field_get:tensorflow.CppShapeInferenceResult.handle_data)
  return handle_data_ != NULL ? *handle_data_
                         : *::tensorflow::CppShapeInferenceResult_HandleData::internal_default_instance();
}
inline ::tensorflow::CppShapeInferenceResult_HandleData* CppShapeInferenceResult::mutable_handle_data() {
  
  if (handle_data_ == NULL) {
    _slow_mutable_handle_data();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.CppShapeInferenceResult.handle_data)
  return handle_data_;
}
inline ::tensorflow::CppShapeInferenceResult_HandleData* CppShapeInferenceResult::release_handle_data() {
  // @@protoc_insertion_point(field_release:tensorflow.CppShapeInferenceResult.handle_data)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_handle_data();
  } else {
    ::tensorflow::CppShapeInferenceResult_HandleData* temp = handle_data_;
    handle_data_ = NULL;
    return temp;
  }
}
inline  void CppShapeInferenceResult::set_allocated_handle_data(::tensorflow::CppShapeInferenceResult_HandleData* handle_data) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete handle_data_;
  }
  if (handle_data != NULL) {
    _slow_set_allocated_handle_data(message_arena, &handle_data);
  }
  handle_data_ = handle_data;
  if (handle_data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CppShapeInferenceResult.handle_data)
}

inline const CppShapeInferenceResult* CppShapeInferenceResult::internal_default_instance() {
  return &CppShapeInferenceResult_default_instance_.get();
}
// -------------------------------------------------------------------

// CppShapeInferenceInputsNeeded

// repeated int32 input_tensors_needed = 1;
inline int CppShapeInferenceInputsNeeded::input_tensors_needed_size() const {
  return input_tensors_needed_.size();
}
inline void CppShapeInferenceInputsNeeded::clear_input_tensors_needed() {
  input_tensors_needed_.Clear();
}
inline ::google::protobuf::int32 CppShapeInferenceInputsNeeded::input_tensors_needed(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CppShapeInferenceInputsNeeded.input_tensors_needed)
  return input_tensors_needed_.Get(index);
}
inline void CppShapeInferenceInputsNeeded::set_input_tensors_needed(int index, ::google::protobuf::int32 value) {
  input_tensors_needed_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.CppShapeInferenceInputsNeeded.input_tensors_needed)
}
inline void CppShapeInferenceInputsNeeded::add_input_tensors_needed(::google::protobuf::int32 value) {
  input_tensors_needed_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.CppShapeInferenceInputsNeeded.input_tensors_needed)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CppShapeInferenceInputsNeeded::input_tensors_needed() const {
  // @@protoc_insertion_point(field_list:tensorflow.CppShapeInferenceInputsNeeded.input_tensors_needed)
  return input_tensors_needed_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CppShapeInferenceInputsNeeded::mutable_input_tensors_needed() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CppShapeInferenceInputsNeeded.input_tensors_needed)
  return &input_tensors_needed_;
}

// repeated int32 input_tensors_as_shapes_needed = 2;
inline int CppShapeInferenceInputsNeeded::input_tensors_as_shapes_needed_size() const {
  return input_tensors_as_shapes_needed_.size();
}
inline void CppShapeInferenceInputsNeeded::clear_input_tensors_as_shapes_needed() {
  input_tensors_as_shapes_needed_.Clear();
}
inline ::google::protobuf::int32 CppShapeInferenceInputsNeeded::input_tensors_as_shapes_needed(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CppShapeInferenceInputsNeeded.input_tensors_as_shapes_needed)
  return input_tensors_as_shapes_needed_.Get(index);
}
inline void CppShapeInferenceInputsNeeded::set_input_tensors_as_shapes_needed(int index, ::google::protobuf::int32 value) {
  input_tensors_as_shapes_needed_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.CppShapeInferenceInputsNeeded.input_tensors_as_shapes_needed)
}
inline void CppShapeInferenceInputsNeeded::add_input_tensors_as_shapes_needed(::google::protobuf::int32 value) {
  input_tensors_as_shapes_needed_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.CppShapeInferenceInputsNeeded.input_tensors_as_shapes_needed)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CppShapeInferenceInputsNeeded::input_tensors_as_shapes_needed() const {
  // @@protoc_insertion_point(field_list:tensorflow.CppShapeInferenceInputsNeeded.input_tensors_as_shapes_needed)
  return input_tensors_as_shapes_needed_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CppShapeInferenceInputsNeeded::mutable_input_tensors_as_shapes_needed() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CppShapeInferenceInputsNeeded.input_tensors_as_shapes_needed)
  return &input_tensors_as_shapes_needed_;
}

inline const CppShapeInferenceInputsNeeded* CppShapeInferenceInputsNeeded::internal_default_instance() {
  return &CppShapeInferenceInputsNeeded_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fpython_2fframework_2fcpp_5fshape_5finference_2eproto__INCLUDED