"""Python wrappers for TensorFlow ops.

This file is MACHINE GENERATED! Do not edit.
"""

import collections as _collections

from tensorflow.python.eager import execute as _execute
from tensorflow.python.eager import context as _context
from tensorflow.python.eager import core as _core
from tensorflow.python.eager import tensor as _tensor
from tensorflow.python.framework import dtypes as _dtypes
from tensorflow.python.framework import tensor_shape as _tensor_shape

from tensorflow.core.framework import op_def_pb2 as _op_def_pb2
# Needed to trigger the call to _set_call_cpp_shape_fn.
from tensorflow.python.framework import common_shapes as _common_shapes
from tensorflow.python.framework import op_def_registry as _op_def_registry
from tensorflow.python.framework import ops as _ops
from tensorflow.python.framework import op_def_library as _op_def_library


def multinomial(logits, num_samples, seed=0, seed2=0, name=None):
  r"""Draws samples from a multinomial distribution.

  Args:
    logits: A `Tensor`. Must be one of the following types: `float32`, `float64`, `int32`, `int64`, `uint8`, `int16`, `int8`, `uint16`, `half`.
      2-D Tensor with shape `[batch_size, num_classes]`.  Each slice `[i, :]`
      represents the unnormalized log probabilities for all classes.
    num_samples: A `Tensor` of type `int32`.
      0-D.  Number of independent samples to draw for each row slice.
    seed: An optional `int`. Defaults to `0`.
      If either seed or seed2 is set to be non-zero, the internal random number
      generator is seeded by the given seed.  Otherwise, a random seed is used.
    seed2: An optional `int`. Defaults to `0`.
      A second seed to avoid seed collision.
    name: A name for the operation (optional).

  Returns:
    A `Tensor` of type `int64`.
    2-D Tensor with shape `[batch_size, num_samples]`.  Each slice `[i, :]`
    contains the drawn class labels with range `[0, num_classes)`.
  """
  if seed is None:
    seed = 0
  seed = _execute.make_int(seed, "seed")
  if seed2 is None:
    seed2 = 0
  seed2 = _execute.make_int(seed2, "seed2")
  if _context.in_graph_mode():
    _, _, _op = _op_def_lib._apply_op_helper(
        "Multinomial", logits=logits, num_samples=num_samples, seed=seed,
        seed2=seed2, name=name)
    _result = _op.outputs[:]
    _inputs_flat = [logits, num_samples]
    _attrs = ("seed", _op.get_attr("seed"), "seed2", _op.get_attr("seed2"),
              "T", _op.get_attr("T"))
  else:
    _attr_T, (logits,) = _execute.args_to_matching_eager([logits])
    _attr_T = _attr_T.as_datatype_enum
    num_samples = _tensor.convert_to_eager_tensor(num_samples, _dtypes.int32)
    _inputs_flat = [logits, num_samples]
    _attrs = ("seed", seed, "seed2", seed2, "T", _attr_T)
    _result = _execute.execute("Multinomial", 1, inputs=_inputs_flat,
                               attrs=_attrs, name=name)
  _result = _execute.record_gradient(
      "Multinomial", _inputs_flat, _attrs, _result, name)
  _result, = _result
  return _result


def _parameterized_truncated_normal(shape, means, stdevs, minvals, maxvals, seed=0, seed2=0, name=None):
  r"""Outputs random values from a normal distribution. The parameters may each be a

  scalar which applies to the entire output, or a vector of length shape[0] which
  stores the parameters for each batch.

  Args:
    shape: A `Tensor`. Must be one of the following types: `int32`, `int64`.
      The shape of the output tensor. Batches are indexed by the 0th dimension.
    means: A `Tensor`. Must be one of the following types: `half`, `float32`, `float64`.
      The mean parameter of each batch.
    stdevs: A `Tensor`. Must have the same type as `means`.
      The standard deviation parameter of each batch. Must be greater than 0.
    minvals: A `Tensor`. Must have the same type as `means`.
      The minimum cutoff. May be -infinity.
    maxvals: A `Tensor`. Must have the same type as `means`.
      The maximum cutoff. May be +infinity, and must be more than the minval
      for each batch.
    seed: An optional `int`. Defaults to `0`.
      If either `seed` or `seed2` are set to be non-zero, the random number
      generator is seeded by the given seed.  Otherwise, it is seeded by a
      random seed.
    seed2: An optional `int`. Defaults to `0`.
      A second seed to avoid seed collision.
    name: A name for the operation (optional).

  Returns:
    A `Tensor`. Has the same type as `means`.
    A matrix of shape num_batches x samples_per_batch, filled with random
    truncated normal values using the parameters for each row.
  """
  if seed is None:
    seed = 0
  seed = _execute.make_int(seed, "seed")
  if seed2 is None:
    seed2 = 0
  seed2 = _execute.make_int(seed2, "seed2")
  if _context.in_graph_mode():
    _, _, _op = _op_def_lib._apply_op_helper(
        "ParameterizedTruncatedNormal", shape=shape, means=means,
        stdevs=stdevs, minvals=minvals, maxvals=maxvals, seed=seed,
        seed2=seed2, name=name)
    _result = _op.outputs[:]
    _inputs_flat = [shape, means, stdevs, minvals, maxvals]
    _attrs = ("seed", _op.get_attr("seed"), "seed2", _op.get_attr("seed2"),
              "dtype", _op.get_attr("dtype"), "T", _op.get_attr("T"))
  else:
    _attr_dtype, _inputs_dtype = _execute.args_to_matching_eager([means, stdevs, minvals, maxvals])
    (means, stdevs, minvals, maxvals) = _inputs_dtype
    _attr_dtype = _attr_dtype.as_datatype_enum
    _attr_T, (shape,) = _execute.args_to_matching_eager([shape])
    _attr_T = _attr_T.as_datatype_enum
    _inputs_flat = [shape, means, stdevs, minvals, maxvals]
    _attrs = ("seed", seed, "seed2", seed2, "dtype", _attr_dtype, "T",
              _attr_T)
    _result = _execute.execute("ParameterizedTruncatedNormal", 1,
                               inputs=_inputs_flat, attrs=_attrs, name=name)
  _result = _execute.record_gradient(
      "ParameterizedTruncatedNormal", _inputs_flat, _attrs, _result, name)
  _result, = _result
  return _result


def _random_gamma(shape, alpha, seed=0, seed2=0, name=None):
  r"""Outputs random values from the Gamma distribution(s) described by alpha.

  This op uses the algorithm by Marsaglia et al. to acquire samples via
  transformation-rejection from pairs of uniform and normal random variables.
  See http://dl.acm.org/citation.cfm?id=358414

  Args:
    shape: A `Tensor`. Must be one of the following types: `int32`, `int64`.
      1-D integer tensor. Shape of independent samples to draw from each
      distribution described by the shape parameters given in alpha.
    alpha: A `Tensor`. Must be one of the following types: `half`, `float32`, `float64`.
      A tensor in which each scalar is a "shape" parameter describing the
      associated gamma distribution.
    seed: An optional `int`. Defaults to `0`.
      If either `seed` or `seed2` are set to be non-zero, the random number
      generator is seeded by the given seed.  Otherwise, it is seeded by a
      random seed.
    seed2: An optional `int`. Defaults to `0`.
      A second seed to avoid seed collision.
    name: A name for the operation (optional).

  Returns:
    A `Tensor`. Has the same type as `alpha`.
    A tensor with shape `shape + shape(alpha)`. Each slice
    `[:, ..., :, i0, i1, ...iN]` contains the samples drawn for
    `alpha[i0, i1, ...iN]`. The dtype of the output matches the dtype of alpha.
  """
  if seed is None:
    seed = 0
  seed = _execute.make_int(seed, "seed")
  if seed2 is None:
    seed2 = 0
  seed2 = _execute.make_int(seed2, "seed2")
  if _context.in_graph_mode():
    _, _, _op = _op_def_lib._apply_op_helper(
        "RandomGamma", shape=shape, alpha=alpha, seed=seed, seed2=seed2,
        name=name)
    _result = _op.outputs[:]
    _inputs_flat = [shape, alpha]
    _attrs = ("seed", _op.get_attr("seed"), "seed2", _op.get_attr("seed2"),
              "S", _op.get_attr("S"), "T", _op.get_attr("T"))
  else:
    _attr_S, (shape,) = _execute.args_to_matching_eager([shape])
    _attr_S = _attr_S.as_datatype_enum
    _attr_T, (alpha,) = _execute.args_to_matching_eager([alpha])
    _attr_T = _attr_T.as_datatype_enum
    _inputs_flat = [shape, alpha]
    _attrs = ("seed", seed, "seed2", seed2, "S", _attr_S, "T", _attr_T)
    _result = _execute.execute("RandomGamma", 1, inputs=_inputs_flat,
                               attrs=_attrs, name=name)
  _result = _execute.record_gradient(
      "RandomGamma", _inputs_flat, _attrs, _result, name)
  _result, = _result
  return _result


def _random_poisson(shape, rate, seed=0, seed2=0, name=None):
  r"""Outputs random values from the Poisson distribution(s) described by rate.

  This op uses two algorithms, depending on rate. If rate >= 10, then
  the algorithm by Hormann is used to acquire samples via
  transformation-rejection.
  See http://www.sciencedirect.com/science/article/pii/0167668793909974.

  Otherwise, Knuth's algorithm is used to acquire samples via multiplying uniform
  random variables.
  See Donald E. Knuth (1969). Seminumerical Algorithms. The Art of Computer
  Programming, Volume 2. Addison Wesley

  Args:
    shape: A `Tensor`. Must be one of the following types: `int32`, `int64`.
      1-D integer tensor. Shape of independent samples to draw from each
      distribution described by the shape parameters given in rate.
    rate: A `Tensor`. Must be one of the following types: `half`, `float32`, `float64`.
      A tensor in which each scalar is a "rate" parameter describing the
      associated poisson distribution.
    seed: An optional `int`. Defaults to `0`.
      If either `seed` or `seed2` are set to be non-zero, the random number
      generator is seeded by the given seed.  Otherwise, it is seeded by a
      random seed.
    seed2: An optional `int`. Defaults to `0`.
      A second seed to avoid seed collision.
    name: A name for the operation (optional).

  Returns:
    A `Tensor`. Has the same type as `rate`.
    A tensor with shape `shape + shape(rate)`. Each slice
    `[:, ..., :, i0, i1, ...iN]` contains the samples drawn for
    `rate[i0, i1, ...iN]`. The dtype of the output matches the dtype of
    rate.
  """
  if seed is None:
    seed = 0
  seed = _execute.make_int(seed, "seed")
  if seed2 is None:
    seed2 = 0
  seed2 = _execute.make_int(seed2, "seed2")
  if _context.in_graph_mode():
    _, _, _op = _op_def_lib._apply_op_helper(
        "RandomPoisson", shape=shape, rate=rate, seed=seed, seed2=seed2,
        name=name)
    _result = _op.outputs[:]
    _inputs_flat = [shape, rate]
    _attrs = ("seed", _op.get_attr("seed"), "seed2", _op.get_attr("seed2"),
              "S", _op.get_attr("S"), "dtype", _op.get_attr("dtype"))
  else:
    _attr_S, (shape,) = _execute.args_to_matching_eager([shape])
    _attr_S = _attr_S.as_datatype_enum
    _attr_dtype, (rate,) = _execute.args_to_matching_eager([rate])
    _attr_dtype = _attr_dtype.as_datatype_enum
    _inputs_flat = [shape, rate]
    _attrs = ("seed", seed, "seed2", seed2, "S", _attr_S, "dtype",
              _attr_dtype)
    _result = _execute.execute("RandomPoisson", 1, inputs=_inputs_flat,
                               attrs=_attrs, name=name)
  _result = _execute.record_gradient(
      "RandomPoisson", _inputs_flat, _attrs, _result, name)
  _result, = _result
  return _result


def _random_shuffle(value, seed=0, seed2=0, name=None):
  r"""Randomly shuffles a tensor along its first dimension.

    The tensor is shuffled along dimension 0, such that each `value[j]` is mapped
    to one and only one `output[i]`. For example, a mapping that might occur for a
    3x2 tensor is:

  ```
  [[1, 2],       [[5, 6],
   [3, 4],  ==>   [1, 2],
   [5, 6]]        [3, 4]]
  ```

  Args:
    value: A `Tensor`. The tensor to be shuffled.
    seed: An optional `int`. Defaults to `0`.
      If either `seed` or `seed2` are set to be non-zero, the random number
      generator is seeded by the given seed.  Otherwise, it is seeded by a
      random seed.
    seed2: An optional `int`. Defaults to `0`.
      A second seed to avoid seed collision.
    name: A name for the operation (optional).

  Returns:
    A `Tensor`. Has the same type as `value`.
    A tensor of same shape and type as `value`, shuffled along its first
    dimension.
  """
  if seed is None:
    seed = 0
  seed = _execute.make_int(seed, "seed")
  if seed2 is None:
    seed2 = 0
  seed2 = _execute.make_int(seed2, "seed2")
  if _context.in_graph_mode():
    _, _, _op = _op_def_lib._apply_op_helper(
        "RandomShuffle", value=value, seed=seed, seed2=seed2, name=name)
    _result = _op.outputs[:]
    _inputs_flat = [value]
    _attrs = ("seed", _op.get_attr("seed"), "seed2", _op.get_attr("seed2"),
              "T", _op.get_attr("T"))
  else:
    _attr_T, (value,) = _execute.args_to_matching_eager([value])
    _attr_T = _attr_T.as_datatype_enum
    _inputs_flat = [value]
    _attrs = ("seed", seed, "seed2", seed2, "T", _attr_T)
    _result = _execute.execute("RandomShuffle", 1, inputs=_inputs_flat,
                               attrs=_attrs, name=name)
  _result = _execute.record_gradient(
      "RandomShuffle", _inputs_flat, _attrs, _result, name)
  _result, = _result
  return _result


def _random_standard_normal(shape, dtype, seed=0, seed2=0, name=None):
  r"""Outputs random values from a normal distribution.

  The generated values will have mean 0 and standard deviation 1.

  Args:
    shape: A `Tensor`. Must be one of the following types: `int32`, `int64`.
      The shape of the output tensor.
    dtype: A `tf.DType` from: `tf.half, tf.float32, tf.float64`.
      The type of the output.
    seed: An optional `int`. Defaults to `0`.
      If either `seed` or `seed2` are set to be non-zero, the random number
      generator is seeded by the given seed.  Otherwise, it is seeded by a
      random seed.
    seed2: An optional `int`. Defaults to `0`.
      A second seed to avoid seed collision.
    name: A name for the operation (optional).

  Returns:
    A `Tensor` of type `dtype`.
    A tensor of the specified shape filled with random normal values.
  """
  dtype = _execute.make_type(dtype, "dtype")
  if seed is None:
    seed = 0
  seed = _execute.make_int(seed, "seed")
  if seed2 is None:
    seed2 = 0
  seed2 = _execute.make_int(seed2, "seed2")
  if _context.in_graph_mode():
    _, _, _op = _op_def_lib._apply_op_helper(
        "RandomStandardNormal", shape=shape, dtype=dtype, seed=seed,
        seed2=seed2, name=name)
    _result = _op.outputs[:]
    _inputs_flat = [shape]
    _attrs = ("seed", _op.get_attr("seed"), "seed2", _op.get_attr("seed2"),
              "dtype", _op.get_attr("dtype"), "T", _op.get_attr("T"))
  else:
    _attr_T, (shape,) = _execute.args_to_matching_eager([shape])
    _attr_T = _attr_T.as_datatype_enum
    _inputs_flat = [shape]
    _attrs = ("seed", seed, "seed2", seed2, "dtype", dtype, "T", _attr_T)
    _result = _execute.execute("RandomStandardNormal", 1, inputs=_inputs_flat,
                               attrs=_attrs, name=name)
  _result = _execute.record_gradient(
      "RandomStandardNormal", _inputs_flat, _attrs, _result, name)
  _result, = _result
  return _result


def _random_uniform(shape, dtype, seed=0, seed2=0, name=None):
  r"""Outputs random values from a uniform distribution.

  The generated values follow a uniform distribution in the range `[0, 1)`. The
  lower bound 0 is included in the range, while the upper bound 1 is excluded.

  Args:
    shape: A `Tensor`. Must be one of the following types: `int32`, `int64`.
      The shape of the output tensor.
    dtype: A `tf.DType` from: `tf.half, tf.float32, tf.float64`.
      The type of the output.
    seed: An optional `int`. Defaults to `0`.
      If either `seed` or `seed2` are set to be non-zero, the random number
      generator is seeded by the given seed.  Otherwise, it is seeded by a
      random seed.
    seed2: An optional `int`. Defaults to `0`.
      A second seed to avoid seed collision.
    name: A name for the operation (optional).

  Returns:
    A `Tensor` of type `dtype`.
    A tensor of the specified shape filled with uniform random values.
  """
  dtype = _execute.make_type(dtype, "dtype")
  if seed is None:
    seed = 0
  seed = _execute.make_int(seed, "seed")
  if seed2 is None:
    seed2 = 0
  seed2 = _execute.make_int(seed2, "seed2")
  if _context.in_graph_mode():
    _, _, _op = _op_def_lib._apply_op_helper(
        "RandomUniform", shape=shape, dtype=dtype, seed=seed, seed2=seed2,
        name=name)
    _result = _op.outputs[:]
    _inputs_flat = [shape]
    _attrs = ("seed", _op.get_attr("seed"), "seed2", _op.get_attr("seed2"),
              "dtype", _op.get_attr("dtype"), "T", _op.get_attr("T"))
  else:
    _attr_T, (shape,) = _execute.args_to_matching_eager([shape])
    _attr_T = _attr_T.as_datatype_enum
    _inputs_flat = [shape]
    _attrs = ("seed", seed, "seed2", seed2, "dtype", dtype, "T", _attr_T)
    _result = _execute.execute("RandomUniform", 1, inputs=_inputs_flat,
                               attrs=_attrs, name=name)
  _result = _execute.record_gradient(
      "RandomUniform", _inputs_flat, _attrs, _result, name)
  _result, = _result
  return _result


def _random_uniform_int(shape, minval, maxval, seed=0, seed2=0, name=None):
  r"""Outputs random integers from a uniform distribution.

  The generated values are uniform integers in the range `[minval, maxval)`.
  The lower bound `minval` is included in the range, while the upper bound
  `maxval` is excluded.

  The random integers are slightly biased unless `maxval - minval` is an exact
  power of two.  The bias is small for values of `maxval - minval` significantly
  smaller than the range of the output (either `2^32` or `2^64`).

  Args:
    shape: A `Tensor`. Must be one of the following types: `int32`, `int64`.
      The shape of the output tensor.
    minval: A `Tensor`. Must be one of the following types: `int32`, `int64`.
      0-D.  Inclusive lower bound on the generated integers.
    maxval: A `Tensor`. Must have the same type as `minval`.
      0-D.  Exclusive upper bound on the generated integers.
    seed: An optional `int`. Defaults to `0`.
      If either `seed` or `seed2` are set to be non-zero, the random number
      generator is seeded by the given seed.  Otherwise, it is seeded by a
      random seed.
    seed2: An optional `int`. Defaults to `0`.
      A second seed to avoid seed collision.
    name: A name for the operation (optional).

  Returns:
    A `Tensor`. Has the same type as `minval`.
    A tensor of the specified shape filled with uniform random integers.
  """
  if seed is None:
    seed = 0
  seed = _execute.make_int(seed, "seed")
  if seed2 is None:
    seed2 = 0
  seed2 = _execute.make_int(seed2, "seed2")
  if _context.in_graph_mode():
    _, _, _op = _op_def_lib._apply_op_helper(
        "RandomUniformInt", shape=shape, minval=minval, maxval=maxval,
        seed=seed, seed2=seed2, name=name)
    _result = _op.outputs[:]
    _inputs_flat = [shape, minval, maxval]
    _attrs = ("seed", _op.get_attr("seed"), "seed2", _op.get_attr("seed2"),
              "Tout", _op.get_attr("Tout"), "T", _op.get_attr("T"))
  else:
    _attr_Tout, _inputs_Tout = _execute.args_to_matching_eager([minval, maxval])
    (minval, maxval) = _inputs_Tout
    _attr_Tout = _attr_Tout.as_datatype_enum
    _attr_T, (shape,) = _execute.args_to_matching_eager([shape])
    _attr_T = _attr_T.as_datatype_enum
    _inputs_flat = [shape, minval, maxval]
    _attrs = ("seed", seed, "seed2", seed2, "Tout", _attr_Tout, "T", _attr_T)
    _result = _execute.execute("RandomUniformInt", 1, inputs=_inputs_flat,
                               attrs=_attrs, name=name)
  _result = _execute.record_gradient(
      "RandomUniformInt", _inputs_flat, _attrs, _result, name)
  _result, = _result
  return _result


def _truncated_normal(shape, dtype, seed=0, seed2=0, name=None):
  r"""Outputs random values from a truncated normal distribution.

  The generated values follow a normal distribution with mean 0 and standard
  deviation 1, except that values whose magnitude is more than 2 standard
  deviations from the mean are dropped and re-picked.

  Args:
    shape: A `Tensor`. Must be one of the following types: `int32`, `int64`.
      The shape of the output tensor.
    dtype: A `tf.DType` from: `tf.half, tf.float32, tf.float64`.
      The type of the output.
    seed: An optional `int`. Defaults to `0`.
      If either `seed` or `seed2` are set to be non-zero, the random number
      generator is seeded by the given seed.  Otherwise, it is seeded by a
      random seed.
    seed2: An optional `int`. Defaults to `0`.
      A second seed to avoid seed collision.
    name: A name for the operation (optional).

  Returns:
    A `Tensor` of type `dtype`.
    A tensor of the specified shape filled with random truncated normal
    values.
  """
  dtype = _execute.make_type(dtype, "dtype")
  if seed is None:
    seed = 0
  seed = _execute.make_int(seed, "seed")
  if seed2 is None:
    seed2 = 0
  seed2 = _execute.make_int(seed2, "seed2")
  if _context.in_graph_mode():
    _, _, _op = _op_def_lib._apply_op_helper(
        "TruncatedNormal", shape=shape, dtype=dtype, seed=seed, seed2=seed2,
        name=name)
    _result = _op.outputs[:]
    _inputs_flat = [shape]
    _attrs = ("seed", _op.get_attr("seed"), "seed2", _op.get_attr("seed2"),
              "dtype", _op.get_attr("dtype"), "T", _op.get_attr("T"))
  else:
    _attr_T, (shape,) = _execute.args_to_matching_eager([shape])
    _attr_T = _attr_T.as_datatype_enum
    _inputs_flat = [shape]
    _attrs = ("seed", seed, "seed2", seed2, "dtype", dtype, "T", _attr_T)
    _result = _execute.execute("TruncatedNormal", 1, inputs=_inputs_flat,
                               attrs=_attrs, name=name)
  _result = _execute.record_gradient(
      "TruncatedNormal", _inputs_flat, _attrs, _result, name)
  _result, = _result
  return _result

def _InitOpDefLibrary(op_list_proto_bytes):
  op_list = _op_def_pb2.OpList()
  op_list.ParseFromString(op_list_proto_bytes)
  _op_def_registry.register_op_list(op_list)
  op_def_lib = _op_def_library.OpDefLibrary()
  op_def_lib.add_op_list(op_list)
  return op_def_lib
# op {
#   name: "Multinomial"
#   input_arg {
#     name: "logits"
#     type_attr: "T"
#   }
#   input_arg {
#     name: "num_samples"
#     type: DT_INT32
#   }
#   output_arg {
#     name: "output"
#     type: DT_INT64
#   }
#   attr {
#     name: "seed"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "seed2"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "T"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_FLOAT
#         type: DT_DOUBLE
#         type: DT_INT32
#         type: DT_INT64
#         type: DT_UINT8
#         type: DT_INT16
#         type: DT_INT8
#         type: DT_UINT16
#         type: DT_HALF
#       }
#     }
#   }
#   is_stateful: true
# }
# op {
#   name: "ParameterizedTruncatedNormal"
#   input_arg {
#     name: "shape"
#     type_attr: "T"
#   }
#   input_arg {
#     name: "means"
#     type_attr: "dtype"
#   }
#   input_arg {
#     name: "stdevs"
#     type_attr: "dtype"
#   }
#   input_arg {
#     name: "minvals"
#     type_attr: "dtype"
#   }
#   input_arg {
#     name: "maxvals"
#     type_attr: "dtype"
#   }
#   output_arg {
#     name: "output"
#     type_attr: "dtype"
#   }
#   attr {
#     name: "seed"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "seed2"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "dtype"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_HALF
#         type: DT_FLOAT
#         type: DT_DOUBLE
#       }
#     }
#   }
#   attr {
#     name: "T"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_INT32
#         type: DT_INT64
#       }
#     }
#   }
#   is_stateful: true
# }
# op {
#   name: "RandomGamma"
#   input_arg {
#     name: "shape"
#     type_attr: "S"
#   }
#   input_arg {
#     name: "alpha"
#     type_attr: "T"
#   }
#   output_arg {
#     name: "output"
#     type_attr: "T"
#   }
#   attr {
#     name: "seed"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "seed2"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "S"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_INT32
#         type: DT_INT64
#       }
#     }
#   }
#   attr {
#     name: "T"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_HALF
#         type: DT_FLOAT
#         type: DT_DOUBLE
#       }
#     }
#   }
#   is_stateful: true
# }
# op {
#   name: "RandomPoisson"
#   input_arg {
#     name: "shape"
#     type_attr: "S"
#   }
#   input_arg {
#     name: "rate"
#     type_attr: "dtype"
#   }
#   output_arg {
#     name: "output"
#     type_attr: "dtype"
#   }
#   attr {
#     name: "seed"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "seed2"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "S"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_INT32
#         type: DT_INT64
#       }
#     }
#   }
#   attr {
#     name: "dtype"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_HALF
#         type: DT_FLOAT
#         type: DT_DOUBLE
#       }
#     }
#   }
#   is_stateful: true
# }
# op {
#   name: "RandomShuffle"
#   input_arg {
#     name: "value"
#     type_attr: "T"
#   }
#   output_arg {
#     name: "output"
#     type_attr: "T"
#   }
#   attr {
#     name: "seed"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "seed2"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "T"
#     type: "type"
#   }
#   is_stateful: true
# }
# op {
#   name: "RandomStandardNormal"
#   input_arg {
#     name: "shape"
#     type_attr: "T"
#   }
#   output_arg {
#     name: "output"
#     type_attr: "dtype"
#   }
#   attr {
#     name: "seed"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "seed2"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "dtype"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_HALF
#         type: DT_FLOAT
#         type: DT_DOUBLE
#       }
#     }
#   }
#   attr {
#     name: "T"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_INT32
#         type: DT_INT64
#       }
#     }
#   }
#   is_stateful: true
# }
# op {
#   name: "RandomUniform"
#   input_arg {
#     name: "shape"
#     type_attr: "T"
#   }
#   output_arg {
#     name: "output"
#     type_attr: "dtype"
#   }
#   attr {
#     name: "seed"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "seed2"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "dtype"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_HALF
#         type: DT_FLOAT
#         type: DT_DOUBLE
#       }
#     }
#   }
#   attr {
#     name: "T"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_INT32
#         type: DT_INT64
#       }
#     }
#   }
#   is_stateful: true
# }
# op {
#   name: "RandomUniformInt"
#   input_arg {
#     name: "shape"
#     type_attr: "T"
#   }
#   input_arg {
#     name: "minval"
#     type_attr: "Tout"
#   }
#   input_arg {
#     name: "maxval"
#     type_attr: "Tout"
#   }
#   output_arg {
#     name: "output"
#     type_attr: "Tout"
#   }
#   attr {
#     name: "seed"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "seed2"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "Tout"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_INT32
#         type: DT_INT64
#       }
#     }
#   }
#   attr {
#     name: "T"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_INT32
#         type: DT_INT64
#       }
#     }
#   }
#   is_stateful: true
# }
# op {
#   name: "TruncatedNormal"
#   input_arg {
#     name: "shape"
#     type_attr: "T"
#   }
#   output_arg {
#     name: "output"
#     type_attr: "dtype"
#   }
#   attr {
#     name: "seed"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "seed2"
#     type: "int"
#     default_value {
#       i: 0
#     }
#   }
#   attr {
#     name: "dtype"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_HALF
#         type: DT_FLOAT
#         type: DT_DOUBLE
#       }
#     }
#   }
#   attr {
#     name: "T"
#     type: "type"
#     allowed_values {
#       list {
#         type: DT_INT32
#         type: DT_INT64
#       }
#     }
#   }
#   is_stateful: true
# }
_op_def_lib = _InitOpDefLibrary(b"\nw\n\013Multinomial\022\013\n\006logits\"\001T\022\017\n\013num_samples\030\003\032\n\n\006output\030\t\"\017\n\004seed\022\003int\032\002\030\000\"\020\n\005seed2\022\003int\032\002\030\000\"\030\n\001T\022\004type:\r\n\0132\t\001\002\003\t\004\005\006\021\023\210\001\001\n\321\001\n\034ParameterizedTruncatedNormal\022\n\n\005shape\"\001T\022\016\n\005means\"\005dtype\022\017\n\006stdevs\"\005dtype\022\020\n\007minvals\"\005dtype\022\020\n\007maxvals\"\005dtype\032\017\n\006output\"\005dtype\"\017\n\004seed\022\003int\032\002\030\000\"\020\n\005seed2\022\003int\032\002\030\000\"\026\n\005dtype\022\004type:\007\n\0052\003\023\001\002\"\021\n\001T\022\004type:\006\n\0042\002\003\t\210\001\001\n\177\n\013RandomGamma\022\n\n\005shape\"\001S\022\n\n\005alpha\"\001T\032\013\n\006output\"\001T\"\017\n\004seed\022\003int\032\002\030\000\"\020\n\005seed2\022\003int\032\002\030\000\"\021\n\001S\022\004type:\006\n\0042\002\003\t\"\022\n\001T\022\004type:\007\n\0052\003\023\001\002\210\001\001\n\214\001\n\rRandomPoisson\022\n\n\005shape\"\001S\022\r\n\004rate\"\005dtype\032\017\n\006output\"\005dtype\"\017\n\004seed\022\003int\032\002\030\000\"\020\n\005seed2\022\003int\032\002\030\000\"\021\n\001S\022\004type:\006\n\0042\002\003\t\"\026\n\005dtype\022\004type:\007\n\0052\003\023\001\002\210\001\001\nY\n\rRandomShuffle\022\n\n\005value\"\001T\032\013\n\006output\"\001T\"\017\n\004seed\022\003int\032\002\030\000\"\020\n\005seed2\022\003int\032\002\030\000\"\t\n\001T\022\004type\210\001\001\n\204\001\n\024RandomStandardNormal\022\n\n\005shape\"\001T\032\017\n\006output\"\005dtype\"\017\n\004seed\022\003int\032\002\030\000\"\020\n\005seed2\022\003int\032\002\030\000\"\026\n\005dtype\022\004type:\007\n\0052\003\023\001\002\"\021\n\001T\022\004type:\006\n\0042\002\003\t\210\001\001\n}\n\rRandomUniform\022\n\n\005shape\"\001T\032\017\n\006output\"\005dtype\"\017\n\004seed\022\003int\032\002\030\000\"\020\n\005seed2\022\003int\032\002\030\000\"\026\n\005dtype\022\004type:\007\n\0052\003\023\001\002\"\021\n\001T\022\004type:\006\n\0042\002\003\t\210\001\001\n\235\001\n\020RandomUniformInt\022\n\n\005shape\"\001T\022\016\n\006minval\"\004Tout\022\016\n\006maxval\"\004Tout\032\016\n\006output\"\004Tout\"\017\n\004seed\022\003int\032\002\030\000\"\020\n\005seed2\022\003int\032\002\030\000\"\024\n\004Tout\022\004type:\006\n\0042\002\003\t\"\021\n\001T\022\004type:\006\n\0042\002\003\t\210\001\001\n\177\n\017TruncatedNormal\022\n\n\005shape\"\001T\032\017\n\006output\"\005dtype\"\017\n\004seed\022\003int\032\002\030\000\"\020\n\005seed2\022\003int\032\002\030\000\"\026\n\005dtype\022\004type:\007\n\0052\003\023\001\002\"\021\n\001T\022\004type:\006\n\0042\002\003\t\210\001\001")
