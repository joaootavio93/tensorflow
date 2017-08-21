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


def _symbolic_gradient(input, Tout, f, name=None):
  r"""Computes the gradient function for function f via backpropagation.

  Args:
    input: A list of `Tensor` objects. a list of input tensors of size N + M;
    Tout: A list of `tf.DTypes` that has length `>= 1`.
      the type list for the input list.
    f: A function decorated with @Defun.
      The function we want to compute the gradient for.

      The function 'f' must be a numerical function which takes N inputs and
      produces M outputs. Its gradient function 'g', which is computed by
      this SymbolicGradient op is a function taking N + M inputs and
      produces N outputs.

      I.e. if we have
         (y1, y2, ..., y_M) = f(x1, x2, ..., x_N),
      then, g is
         (dL/dx1, dL/dx2, ..., dL/dx_N) = g(x1, x2, ..., x_N,
                                           dL/dy1, dL/dy2, ..., dL/dy_M),

      where L is a scalar-value function of (x1, x2, ..., xN) (e.g., the
      loss function). dL/dx_i is the partial derivative of L with respect
      to x_i.

      (Needs some math expert to say the comment above better.)
    name: A name for the operation (optional).

  Returns:
    A list of `Tensor` objects of type `Tout`.
    a list of output tensors of size N;
  """
  if not isinstance(Tout, (list, tuple)):
    raise TypeError(
        "Expected list for 'Tout' argument to "
        "'symbolic_gradient' Op, not %r." % Tout)
  Tout = [_execute.make_type(_t, "Tout") for _t in Tout]
  if _context.in_graph_mode():
    _, _, _op = _op_def_lib._apply_op_helper(
        "SymbolicGradient", input=input, Tout=Tout, f=f, name=name)
    _result = _op.outputs[:]
    _inputs_flat = list(input)
    _attrs = ("Tin", _op.get_attr("Tin"), "Tout", _op.get_attr("Tout"), "f",
              _op.get_attr("f"))
  else:
    _attr_Tin, input = _execute.convert_to_mixed_eager_tensors(input)
    _attr_Tin = [_t.as_datatype_enum for _t in _attr_Tin]
    _inputs_flat = list(input)
    _attrs = ("Tin", _attr_Tin, "Tout", Tout, "f", f)
    _result = _execute.execute("SymbolicGradient", len(Tout),
                               inputs=_inputs_flat, attrs=_attrs, name=name)
  _result = _execute.record_gradient(
      "SymbolicGradient", _inputs_flat, _attrs, _result, name)
  return _result

def _InitOpDefLibrary(op_list_proto_bytes):
  op_list = _op_def_pb2.OpList()
  op_list.ParseFromString(op_list_proto_bytes)
  _op_def_registry.register_op_list(op_list)
  op_def_lib = _op_def_library.OpDefLibrary()
  op_def_lib.add_op_list(op_list)
  return op_def_lib
# op {
#   name: "SymbolicGradient"
#   input_arg {
#     name: "input"
#     type_list_attr: "Tin"
#   }
#   output_arg {
#     name: "output"
#     type_list_attr: "Tout"
#   }
#   attr {
#     name: "Tin"
#     type: "list(type)"
#     has_minimum: true
#     minimum: 1
#   }
#   attr {
#     name: "Tout"
#     type: "list(type)"
#     has_minimum: true
#     minimum: 1
#   }
#   attr {
#     name: "f"
#     type: "func"
#   }
# }
_op_def_lib = _InitOpDefLibrary(b"\nj\n\020SymbolicGradient\022\014\n\005input2\003Tin\032\016\n\006output2\004Tout\"\025\n\003Tin\022\nlist(type)(\0010\001\"\026\n\004Tout\022\nlist(type)(\0010\001\"\t\n\001f\022\004func")
