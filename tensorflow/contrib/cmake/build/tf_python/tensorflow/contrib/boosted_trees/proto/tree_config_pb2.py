# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tensorflow/contrib/boosted_trees/proto/tree_config.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='tensorflow/contrib/boosted_trees/proto/tree_config.proto',
  package='tensorflow.boosted_trees.trees',
  syntax='proto3',
  serialized_pb=_b('\n8tensorflow/contrib/boosted_trees/proto/tree_config.proto\x12\x1etensorflow.boosted_trees.trees\"\xb7\x05\n\x08TreeNode\x12\x34\n\x04leaf\x18\x01 \x01(\x0b\x32$.tensorflow.boosted_trees.trees.LeafH\x00\x12Y\n\x18\x64\x65nse_float_binary_split\x18\x02 \x01(\x0b\x32\x35.tensorflow.boosted_trees.trees.DenseFloatBinarySplitH\x00\x12s\n&sparse_float_binary_split_default_left\x18\x03 \x01(\x0b\x32\x41.tensorflow.boosted_trees.trees.SparseFloatBinarySplitDefaultLeftH\x00\x12u\n\'sparse_float_binary_split_default_right\x18\x04 \x01(\x0b\x32\x42.tensorflow.boosted_trees.trees.SparseFloatBinarySplitDefaultRightH\x00\x12_\n\x1b\x63\x61tegorical_id_binary_split\x18\x05 \x01(\x0b\x32\x38.tensorflow.boosted_trees.trees.CategoricalIdBinarySplitH\x00\x12{\n*categorical_id_set_membership_binary_split\x18\x06 \x01(\x0b\x32\x45.tensorflow.boosted_trees.trees.CategoricalIdSetMembershipBinarySplitH\x00\x12H\n\rnode_metadata\x18\x89\x06 \x01(\x0b\x32\x30.tensorflow.boosted_trees.trees.TreeNodeMetadataB\x06\n\x04node\"]\n\x10TreeNodeMetadata\x12\x0c\n\x04gain\x18\x01 \x01(\x02\x12;\n\roriginal_leaf\x18\x02 \x01(\x0b\x32$.tensorflow.boosted_trees.trees.Leaf\"\x8f\x01\n\x04Leaf\x12\x38\n\x06vector\x18\x01 \x01(\x0b\x32&.tensorflow.boosted_trees.trees.VectorH\x00\x12\x45\n\rsparse_vector\x18\x02 \x01(\x0b\x32,.tensorflow.boosted_trees.trees.SparseVectorH\x00\x42\x06\n\x04leaf\"\x17\n\x06Vector\x12\r\n\x05value\x18\x01 \x03(\x02\",\n\x0cSparseVector\x12\r\n\x05index\x18\x01 \x03(\x05\x12\r\n\x05value\x18\x02 \x03(\x02\"e\n\x15\x44\x65nseFloatBinarySplit\x12\x16\n\x0e\x66\x65\x61ture_column\x18\x01 \x01(\x05\x12\x11\n\tthreshold\x18\x02 \x01(\x02\x12\x0f\n\x07left_id\x18\x03 \x01(\x05\x12\x10\n\x08right_id\x18\x04 \x01(\x05\"i\n!SparseFloatBinarySplitDefaultLeft\x12\x44\n\x05split\x18\x01 \x01(\x0b\x32\x35.tensorflow.boosted_trees.trees.DenseFloatBinarySplit\"j\n\"SparseFloatBinarySplitDefaultRight\x12\x44\n\x05split\x18\x01 \x01(\x0b\x32\x35.tensorflow.boosted_trees.trees.DenseFloatBinarySplit\"i\n\x18\x43\x61tegoricalIdBinarySplit\x12\x16\n\x0e\x66\x65\x61ture_column\x18\x01 \x01(\x05\x12\x12\n\nfeature_id\x18\x02 \x01(\x03\x12\x0f\n\x07left_id\x18\x03 \x01(\x05\x12\x10\n\x08right_id\x18\x04 \x01(\x05\"w\n%CategoricalIdSetMembershipBinarySplit\x12\x16\n\x0e\x66\x65\x61ture_column\x18\x01 \x01(\x05\x12\x13\n\x0b\x66\x65\x61ture_ids\x18\x02 \x03(\x03\x12\x0f\n\x07left_id\x18\x03 \x01(\x05\x12\x10\n\x08right_id\x18\x04 \x01(\x05\"M\n\x12\x44\x65\x63isionTreeConfig\x12\x37\n\x05nodes\x18\x01 \x03(\x0b\x32(.tensorflow.boosted_trees.trees.TreeNode\"g\n\x14\x44\x65\x63isionTreeMetadata\x12\x1f\n\x17num_tree_weight_updates\x18\x01 \x01(\x05\x12\x18\n\x10num_layers_grown\x18\x02 \x01(\x05\x12\x14\n\x0cis_finalized\x18\x03 \x01(\x08\"L\n\x0fGrowingMetadata\x12\x1b\n\x13num_trees_attempted\x18\x01 \x01(\x03\x12\x1c\n\x14num_layers_attempted\x18\x02 \x01(\x03\"\x8d\x02\n\x1a\x44\x65\x63isionTreeEnsembleConfig\x12\x41\n\x05trees\x18\x01 \x03(\x0b\x32\x32.tensorflow.boosted_trees.trees.DecisionTreeConfig\x12\x14\n\x0ctree_weights\x18\x02 \x03(\x02\x12K\n\rtree_metadata\x18\x03 \x03(\x0b\x32\x34.tensorflow.boosted_trees.trees.DecisionTreeMetadata\x12I\n\x10growing_metadata\x18\x04 \x01(\x0b\x32/.tensorflow.boosted_trees.trees.GrowingMetadataB\x03\xf8\x01\x01\x62\x06proto3')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_TREENODE = _descriptor.Descriptor(
  name='TreeNode',
  full_name='tensorflow.boosted_trees.trees.TreeNode',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='leaf', full_name='tensorflow.boosted_trees.trees.TreeNode.leaf', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='dense_float_binary_split', full_name='tensorflow.boosted_trees.trees.TreeNode.dense_float_binary_split', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sparse_float_binary_split_default_left', full_name='tensorflow.boosted_trees.trees.TreeNode.sparse_float_binary_split_default_left', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sparse_float_binary_split_default_right', full_name='tensorflow.boosted_trees.trees.TreeNode.sparse_float_binary_split_default_right', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='categorical_id_binary_split', full_name='tensorflow.boosted_trees.trees.TreeNode.categorical_id_binary_split', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='categorical_id_set_membership_binary_split', full_name='tensorflow.boosted_trees.trees.TreeNode.categorical_id_set_membership_binary_split', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='node_metadata', full_name='tensorflow.boosted_trees.trees.TreeNode.node_metadata', index=6,
      number=777, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='node', full_name='tensorflow.boosted_trees.trees.TreeNode.node',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=93,
  serialized_end=788,
)


_TREENODEMETADATA = _descriptor.Descriptor(
  name='TreeNodeMetadata',
  full_name='tensorflow.boosted_trees.trees.TreeNodeMetadata',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='gain', full_name='tensorflow.boosted_trees.trees.TreeNodeMetadata.gain', index=0,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='original_leaf', full_name='tensorflow.boosted_trees.trees.TreeNodeMetadata.original_leaf', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=790,
  serialized_end=883,
)


_LEAF = _descriptor.Descriptor(
  name='Leaf',
  full_name='tensorflow.boosted_trees.trees.Leaf',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='vector', full_name='tensorflow.boosted_trees.trees.Leaf.vector', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sparse_vector', full_name='tensorflow.boosted_trees.trees.Leaf.sparse_vector', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='leaf', full_name='tensorflow.boosted_trees.trees.Leaf.leaf',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=886,
  serialized_end=1029,
)


_VECTOR = _descriptor.Descriptor(
  name='Vector',
  full_name='tensorflow.boosted_trees.trees.Vector',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='value', full_name='tensorflow.boosted_trees.trees.Vector.value', index=0,
      number=1, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1031,
  serialized_end=1054,
)


_SPARSEVECTOR = _descriptor.Descriptor(
  name='SparseVector',
  full_name='tensorflow.boosted_trees.trees.SparseVector',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='index', full_name='tensorflow.boosted_trees.trees.SparseVector.index', index=0,
      number=1, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='tensorflow.boosted_trees.trees.SparseVector.value', index=1,
      number=2, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1056,
  serialized_end=1100,
)


_DENSEFLOATBINARYSPLIT = _descriptor.Descriptor(
  name='DenseFloatBinarySplit',
  full_name='tensorflow.boosted_trees.trees.DenseFloatBinarySplit',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='feature_column', full_name='tensorflow.boosted_trees.trees.DenseFloatBinarySplit.feature_column', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='threshold', full_name='tensorflow.boosted_trees.trees.DenseFloatBinarySplit.threshold', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='left_id', full_name='tensorflow.boosted_trees.trees.DenseFloatBinarySplit.left_id', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='right_id', full_name='tensorflow.boosted_trees.trees.DenseFloatBinarySplit.right_id', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1102,
  serialized_end=1203,
)


_SPARSEFLOATBINARYSPLITDEFAULTLEFT = _descriptor.Descriptor(
  name='SparseFloatBinarySplitDefaultLeft',
  full_name='tensorflow.boosted_trees.trees.SparseFloatBinarySplitDefaultLeft',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='split', full_name='tensorflow.boosted_trees.trees.SparseFloatBinarySplitDefaultLeft.split', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1205,
  serialized_end=1310,
)


_SPARSEFLOATBINARYSPLITDEFAULTRIGHT = _descriptor.Descriptor(
  name='SparseFloatBinarySplitDefaultRight',
  full_name='tensorflow.boosted_trees.trees.SparseFloatBinarySplitDefaultRight',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='split', full_name='tensorflow.boosted_trees.trees.SparseFloatBinarySplitDefaultRight.split', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1312,
  serialized_end=1418,
)


_CATEGORICALIDBINARYSPLIT = _descriptor.Descriptor(
  name='CategoricalIdBinarySplit',
  full_name='tensorflow.boosted_trees.trees.CategoricalIdBinarySplit',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='feature_column', full_name='tensorflow.boosted_trees.trees.CategoricalIdBinarySplit.feature_column', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='feature_id', full_name='tensorflow.boosted_trees.trees.CategoricalIdBinarySplit.feature_id', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='left_id', full_name='tensorflow.boosted_trees.trees.CategoricalIdBinarySplit.left_id', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='right_id', full_name='tensorflow.boosted_trees.trees.CategoricalIdBinarySplit.right_id', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1420,
  serialized_end=1525,
)


_CATEGORICALIDSETMEMBERSHIPBINARYSPLIT = _descriptor.Descriptor(
  name='CategoricalIdSetMembershipBinarySplit',
  full_name='tensorflow.boosted_trees.trees.CategoricalIdSetMembershipBinarySplit',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='feature_column', full_name='tensorflow.boosted_trees.trees.CategoricalIdSetMembershipBinarySplit.feature_column', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='feature_ids', full_name='tensorflow.boosted_trees.trees.CategoricalIdSetMembershipBinarySplit.feature_ids', index=1,
      number=2, type=3, cpp_type=2, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='left_id', full_name='tensorflow.boosted_trees.trees.CategoricalIdSetMembershipBinarySplit.left_id', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='right_id', full_name='tensorflow.boosted_trees.trees.CategoricalIdSetMembershipBinarySplit.right_id', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1527,
  serialized_end=1646,
)


_DECISIONTREECONFIG = _descriptor.Descriptor(
  name='DecisionTreeConfig',
  full_name='tensorflow.boosted_trees.trees.DecisionTreeConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='nodes', full_name='tensorflow.boosted_trees.trees.DecisionTreeConfig.nodes', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1648,
  serialized_end=1725,
)


_DECISIONTREEMETADATA = _descriptor.Descriptor(
  name='DecisionTreeMetadata',
  full_name='tensorflow.boosted_trees.trees.DecisionTreeMetadata',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='num_tree_weight_updates', full_name='tensorflow.boosted_trees.trees.DecisionTreeMetadata.num_tree_weight_updates', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='num_layers_grown', full_name='tensorflow.boosted_trees.trees.DecisionTreeMetadata.num_layers_grown', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_finalized', full_name='tensorflow.boosted_trees.trees.DecisionTreeMetadata.is_finalized', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1727,
  serialized_end=1830,
)


_GROWINGMETADATA = _descriptor.Descriptor(
  name='GrowingMetadata',
  full_name='tensorflow.boosted_trees.trees.GrowingMetadata',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='num_trees_attempted', full_name='tensorflow.boosted_trees.trees.GrowingMetadata.num_trees_attempted', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='num_layers_attempted', full_name='tensorflow.boosted_trees.trees.GrowingMetadata.num_layers_attempted', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1832,
  serialized_end=1908,
)


_DECISIONTREEENSEMBLECONFIG = _descriptor.Descriptor(
  name='DecisionTreeEnsembleConfig',
  full_name='tensorflow.boosted_trees.trees.DecisionTreeEnsembleConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='trees', full_name='tensorflow.boosted_trees.trees.DecisionTreeEnsembleConfig.trees', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tree_weights', full_name='tensorflow.boosted_trees.trees.DecisionTreeEnsembleConfig.tree_weights', index=1,
      number=2, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tree_metadata', full_name='tensorflow.boosted_trees.trees.DecisionTreeEnsembleConfig.tree_metadata', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='growing_metadata', full_name='tensorflow.boosted_trees.trees.DecisionTreeEnsembleConfig.growing_metadata', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1911,
  serialized_end=2180,
)

_TREENODE.fields_by_name['leaf'].message_type = _LEAF
_TREENODE.fields_by_name['dense_float_binary_split'].message_type = _DENSEFLOATBINARYSPLIT
_TREENODE.fields_by_name['sparse_float_binary_split_default_left'].message_type = _SPARSEFLOATBINARYSPLITDEFAULTLEFT
_TREENODE.fields_by_name['sparse_float_binary_split_default_right'].message_type = _SPARSEFLOATBINARYSPLITDEFAULTRIGHT
_TREENODE.fields_by_name['categorical_id_binary_split'].message_type = _CATEGORICALIDBINARYSPLIT
_TREENODE.fields_by_name['categorical_id_set_membership_binary_split'].message_type = _CATEGORICALIDSETMEMBERSHIPBINARYSPLIT
_TREENODE.fields_by_name['node_metadata'].message_type = _TREENODEMETADATA
_TREENODE.oneofs_by_name['node'].fields.append(
  _TREENODE.fields_by_name['leaf'])
_TREENODE.fields_by_name['leaf'].containing_oneof = _TREENODE.oneofs_by_name['node']
_TREENODE.oneofs_by_name['node'].fields.append(
  _TREENODE.fields_by_name['dense_float_binary_split'])
_TREENODE.fields_by_name['dense_float_binary_split'].containing_oneof = _TREENODE.oneofs_by_name['node']
_TREENODE.oneofs_by_name['node'].fields.append(
  _TREENODE.fields_by_name['sparse_float_binary_split_default_left'])
_TREENODE.fields_by_name['sparse_float_binary_split_default_left'].containing_oneof = _TREENODE.oneofs_by_name['node']
_TREENODE.oneofs_by_name['node'].fields.append(
  _TREENODE.fields_by_name['sparse_float_binary_split_default_right'])
_TREENODE.fields_by_name['sparse_float_binary_split_default_right'].containing_oneof = _TREENODE.oneofs_by_name['node']
_TREENODE.oneofs_by_name['node'].fields.append(
  _TREENODE.fields_by_name['categorical_id_binary_split'])
_TREENODE.fields_by_name['categorical_id_binary_split'].containing_oneof = _TREENODE.oneofs_by_name['node']
_TREENODE.oneofs_by_name['node'].fields.append(
  _TREENODE.fields_by_name['categorical_id_set_membership_binary_split'])
_TREENODE.fields_by_name['categorical_id_set_membership_binary_split'].containing_oneof = _TREENODE.oneofs_by_name['node']
_TREENODEMETADATA.fields_by_name['original_leaf'].message_type = _LEAF
_LEAF.fields_by_name['vector'].message_type = _VECTOR
_LEAF.fields_by_name['sparse_vector'].message_type = _SPARSEVECTOR
_LEAF.oneofs_by_name['leaf'].fields.append(
  _LEAF.fields_by_name['vector'])
_LEAF.fields_by_name['vector'].containing_oneof = _LEAF.oneofs_by_name['leaf']
_LEAF.oneofs_by_name['leaf'].fields.append(
  _LEAF.fields_by_name['sparse_vector'])
_LEAF.fields_by_name['sparse_vector'].containing_oneof = _LEAF.oneofs_by_name['leaf']
_SPARSEFLOATBINARYSPLITDEFAULTLEFT.fields_by_name['split'].message_type = _DENSEFLOATBINARYSPLIT
_SPARSEFLOATBINARYSPLITDEFAULTRIGHT.fields_by_name['split'].message_type = _DENSEFLOATBINARYSPLIT
_DECISIONTREECONFIG.fields_by_name['nodes'].message_type = _TREENODE
_DECISIONTREEENSEMBLECONFIG.fields_by_name['trees'].message_type = _DECISIONTREECONFIG
_DECISIONTREEENSEMBLECONFIG.fields_by_name['tree_metadata'].message_type = _DECISIONTREEMETADATA
_DECISIONTREEENSEMBLECONFIG.fields_by_name['growing_metadata'].message_type = _GROWINGMETADATA
DESCRIPTOR.message_types_by_name['TreeNode'] = _TREENODE
DESCRIPTOR.message_types_by_name['TreeNodeMetadata'] = _TREENODEMETADATA
DESCRIPTOR.message_types_by_name['Leaf'] = _LEAF
DESCRIPTOR.message_types_by_name['Vector'] = _VECTOR
DESCRIPTOR.message_types_by_name['SparseVector'] = _SPARSEVECTOR
DESCRIPTOR.message_types_by_name['DenseFloatBinarySplit'] = _DENSEFLOATBINARYSPLIT
DESCRIPTOR.message_types_by_name['SparseFloatBinarySplitDefaultLeft'] = _SPARSEFLOATBINARYSPLITDEFAULTLEFT
DESCRIPTOR.message_types_by_name['SparseFloatBinarySplitDefaultRight'] = _SPARSEFLOATBINARYSPLITDEFAULTRIGHT
DESCRIPTOR.message_types_by_name['CategoricalIdBinarySplit'] = _CATEGORICALIDBINARYSPLIT
DESCRIPTOR.message_types_by_name['CategoricalIdSetMembershipBinarySplit'] = _CATEGORICALIDSETMEMBERSHIPBINARYSPLIT
DESCRIPTOR.message_types_by_name['DecisionTreeConfig'] = _DECISIONTREECONFIG
DESCRIPTOR.message_types_by_name['DecisionTreeMetadata'] = _DECISIONTREEMETADATA
DESCRIPTOR.message_types_by_name['GrowingMetadata'] = _GROWINGMETADATA
DESCRIPTOR.message_types_by_name['DecisionTreeEnsembleConfig'] = _DECISIONTREEENSEMBLECONFIG

TreeNode = _reflection.GeneratedProtocolMessageType('TreeNode', (_message.Message,), dict(
  DESCRIPTOR = _TREENODE,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.TreeNode)
  ))
_sym_db.RegisterMessage(TreeNode)

TreeNodeMetadata = _reflection.GeneratedProtocolMessageType('TreeNodeMetadata', (_message.Message,), dict(
  DESCRIPTOR = _TREENODEMETADATA,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.TreeNodeMetadata)
  ))
_sym_db.RegisterMessage(TreeNodeMetadata)

Leaf = _reflection.GeneratedProtocolMessageType('Leaf', (_message.Message,), dict(
  DESCRIPTOR = _LEAF,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.Leaf)
  ))
_sym_db.RegisterMessage(Leaf)

Vector = _reflection.GeneratedProtocolMessageType('Vector', (_message.Message,), dict(
  DESCRIPTOR = _VECTOR,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.Vector)
  ))
_sym_db.RegisterMessage(Vector)

SparseVector = _reflection.GeneratedProtocolMessageType('SparseVector', (_message.Message,), dict(
  DESCRIPTOR = _SPARSEVECTOR,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.SparseVector)
  ))
_sym_db.RegisterMessage(SparseVector)

DenseFloatBinarySplit = _reflection.GeneratedProtocolMessageType('DenseFloatBinarySplit', (_message.Message,), dict(
  DESCRIPTOR = _DENSEFLOATBINARYSPLIT,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.DenseFloatBinarySplit)
  ))
_sym_db.RegisterMessage(DenseFloatBinarySplit)

SparseFloatBinarySplitDefaultLeft = _reflection.GeneratedProtocolMessageType('SparseFloatBinarySplitDefaultLeft', (_message.Message,), dict(
  DESCRIPTOR = _SPARSEFLOATBINARYSPLITDEFAULTLEFT,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.SparseFloatBinarySplitDefaultLeft)
  ))
_sym_db.RegisterMessage(SparseFloatBinarySplitDefaultLeft)

SparseFloatBinarySplitDefaultRight = _reflection.GeneratedProtocolMessageType('SparseFloatBinarySplitDefaultRight', (_message.Message,), dict(
  DESCRIPTOR = _SPARSEFLOATBINARYSPLITDEFAULTRIGHT,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.SparseFloatBinarySplitDefaultRight)
  ))
_sym_db.RegisterMessage(SparseFloatBinarySplitDefaultRight)

CategoricalIdBinarySplit = _reflection.GeneratedProtocolMessageType('CategoricalIdBinarySplit', (_message.Message,), dict(
  DESCRIPTOR = _CATEGORICALIDBINARYSPLIT,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.CategoricalIdBinarySplit)
  ))
_sym_db.RegisterMessage(CategoricalIdBinarySplit)

CategoricalIdSetMembershipBinarySplit = _reflection.GeneratedProtocolMessageType('CategoricalIdSetMembershipBinarySplit', (_message.Message,), dict(
  DESCRIPTOR = _CATEGORICALIDSETMEMBERSHIPBINARYSPLIT,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.CategoricalIdSetMembershipBinarySplit)
  ))
_sym_db.RegisterMessage(CategoricalIdSetMembershipBinarySplit)

DecisionTreeConfig = _reflection.GeneratedProtocolMessageType('DecisionTreeConfig', (_message.Message,), dict(
  DESCRIPTOR = _DECISIONTREECONFIG,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.DecisionTreeConfig)
  ))
_sym_db.RegisterMessage(DecisionTreeConfig)

DecisionTreeMetadata = _reflection.GeneratedProtocolMessageType('DecisionTreeMetadata', (_message.Message,), dict(
  DESCRIPTOR = _DECISIONTREEMETADATA,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.DecisionTreeMetadata)
  ))
_sym_db.RegisterMessage(DecisionTreeMetadata)

GrowingMetadata = _reflection.GeneratedProtocolMessageType('GrowingMetadata', (_message.Message,), dict(
  DESCRIPTOR = _GROWINGMETADATA,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.GrowingMetadata)
  ))
_sym_db.RegisterMessage(GrowingMetadata)

DecisionTreeEnsembleConfig = _reflection.GeneratedProtocolMessageType('DecisionTreeEnsembleConfig', (_message.Message,), dict(
  DESCRIPTOR = _DECISIONTREEENSEMBLECONFIG,
  __module__ = 'tensorflow.contrib.boosted_trees.proto.tree_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.trees.DecisionTreeEnsembleConfig)
  ))
_sym_db.RegisterMessage(DecisionTreeEnsembleConfig)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\370\001\001'))
# @@protoc_insertion_point(module_scope)