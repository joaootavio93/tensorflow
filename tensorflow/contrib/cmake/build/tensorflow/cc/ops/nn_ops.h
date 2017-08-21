// This file is MACHINE GENERATED! Do not edit.

#ifndef C__VISUAL_STUDIO______PROJECTS_TENSORFLOW_TENSORFLOW_CONTRIB_CMAKE_BUILD_TENSORFLOW_CC_OPS_NN_OPS_H_
#define C__VISUAL_STUDIO______PROJECTS_TENSORFLOW_TENSORFLOW_CONTRIB_CMAKE_BUILD_TENSORFLOW_CC_OPS_NN_OPS_H_

// This file is MACHINE GENERATED! Do not edit.

#include "tensorflow/cc/framework/ops.h"
#include "tensorflow/cc/framework/scope.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/framework/tensor_shape.h"
#include "tensorflow/core/framework/types.h"
#include "tensorflow/core/lib/gtl/array_slice.h"

namespace tensorflow {
namespace ops {

/// @defgroup nn_ops Nn Ops
/// @{

/// Performs average pooling on the input.
///
/// Each entry in `output` is the mean of the corresponding size `ksize`
/// window in `value`.
///
/// Arguments:
/// * scope: A Scope object
/// * value: 4-D with shape `[batch, height, width, channels]`.
/// * ksize: The size of the sliding window for each dimension of `value`.
/// * strides: The stride of the sliding window for each dimension of `value`.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, in_channels, in_height, in_width].
///
/// Returns:
/// * `Output`: The average pooled output tensor.
class AvgPool {
 public:
  /// Optional attribute setters for AvgPool
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, in_channels, in_height, in_width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  AvgPool(const ::tensorflow::Scope& scope, ::tensorflow::Input value, const
        gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
        StringPiece padding);
  AvgPool(const ::tensorflow::Scope& scope, ::tensorflow::Input value, const
        gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
        StringPiece padding, const AvgPool::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Performs 3D average pooling on the input.
///
/// Arguments:
/// * scope: A Scope object
/// * input: Shape `[batch, depth, rows, cols, channels]` tensor to pool over.
/// * ksize: 1-D tensor of length 5. The size of the window for each dimension of
/// the input tensor. Must have `ksize[0] = ksize[4] = 1`.
/// * strides: 1-D tensor of length 5. The stride of the sliding window for each
/// dimension of `input`. Must have `strides[0] = strides[4] = 1`.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: The data format of the input and output data. With the
/// default format "NDHWC", the data is stored in the order of:
///     [batch, in_depth, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCDHW", the data storage order is:
///     [batch, in_channels, in_depth, in_height, in_width].
///
/// Returns:
/// * `Output`: The average pooled output tensor.
class AvgPool3D {
 public:
  /// Optional attribute setters for AvgPool3D
  struct Attrs {
    /// The data format of the input and output data. With the
    /// default format "NDHWC", the data is stored in the order of:
    ///     [batch, in_depth, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCDHW", the data storage order is:
    ///     [batch, in_channels, in_depth, in_height, in_width].
    ///
    /// Defaults to "NDHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NDHWC";
  };
  AvgPool3D(const ::tensorflow::Scope& scope, ::tensorflow::Input input, const
          gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
          StringPiece padding);
  AvgPool3D(const ::tensorflow::Scope& scope, ::tensorflow::Input input, const
          gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
          StringPiece padding, const AvgPool3D::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes gradients of average pooling function.
///
/// Arguments:
/// * scope: A Scope object
/// * orig_input_shape: The original input dimensions.
/// * grad: Output backprop of shape `[batch, depth, rows, cols, channels]`.
/// * ksize: 1-D tensor of length 5. The size of the window for each dimension of
/// the input tensor. Must have `ksize[0] = ksize[4] = 1`.
/// * strides: 1-D tensor of length 5. The stride of the sliding window for each
/// dimension of `input`. Must have `strides[0] = strides[4] = 1`.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: The data format of the input and output data. With the
/// default format "NDHWC", the data is stored in the order of:
///     [batch, in_depth, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCDHW", the data storage order is:
///     [batch, in_channels, in_depth, in_height, in_width].
///
/// Returns:
/// * `Output`: The backprop for input.
class AvgPool3DGrad {
 public:
  /// Optional attribute setters for AvgPool3DGrad
  struct Attrs {
    /// The data format of the input and output data. With the
    /// default format "NDHWC", the data is stored in the order of:
    ///     [batch, in_depth, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCDHW", the data storage order is:
    ///     [batch, in_channels, in_depth, in_height, in_width].
    ///
    /// Defaults to "NDHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NDHWC";
  };
  AvgPool3DGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
              orig_input_shape, ::tensorflow::Input grad, const
              gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
              StringPiece padding);
  AvgPool3DGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
              orig_input_shape, ::tensorflow::Input grad, const
              gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
              StringPiece padding, const AvgPool3DGrad::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Adds `bias` to `value`.
///
/// This is a special case of `tf.add` where `bias` is restricted to be 1-D.
/// Broadcasting is supported, so `value` may have any number of dimensions.
///
/// Arguments:
/// * scope: A Scope object
/// * value: Any number of dimensions.
/// * bias: 1-D with size the last dimension of `value`.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the bias tensor will be added to the last dimension
/// of the value tensor.
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, in_channels, in_height, in_width].
/// The tensor will be added to "in_channels", the third-to-the-last
///     dimension.
///
/// Returns:
/// * `Output`: Broadcasted sum of `value` and `bias`.
class BiasAdd {
 public:
  /// Optional attribute setters for BiasAdd
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the bias tensor will be added to the last dimension
    /// of the value tensor.
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, in_channels, in_height, in_width].
    /// The tensor will be added to "in_channels", the third-to-the-last
    ///     dimension.
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  BiasAdd(const ::tensorflow::Scope& scope, ::tensorflow::Input value,
        ::tensorflow::Input bias);
  BiasAdd(const ::tensorflow::Scope& scope, ::tensorflow::Input value,
        ::tensorflow::Input bias, const BiasAdd::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// The backward operation for "BiasAdd" on the "bias" tensor.
///
/// It accumulates all the values from out_backprop into the feature dimension.
/// For NHWC data format, the feature dimension is the last. For NCHW data format,
/// the feature dimension is the third-to-last.
///
/// Arguments:
/// * scope: A Scope object
/// * out_backprop: Any number of dimensions.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the bias tensor will be added to the last dimension
/// of the value tensor.
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, in_channels, in_height, in_width].
/// The tensor will be added to "in_channels", the third-to-the-last
///     dimension.
///
/// Returns:
/// * `Output`: 1-D with size the feature dimension of `out_backprop`.
class BiasAddGrad {
 public:
  /// Optional attribute setters for BiasAddGrad
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the bias tensor will be added to the last dimension
    /// of the value tensor.
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, in_channels, in_height, in_width].
    /// The tensor will be added to "in_channels", the third-to-the-last
    ///     dimension.
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  BiasAddGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input out_backprop);
  BiasAddGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input out_backprop,
            const BiasAddGrad::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes a 2-D convolution given 4-D `input` and `filter` tensors.
///
/// Given an input tensor of shape `[batch, in_height, in_width, in_channels]`
/// and a filter / kernel tensor of shape
/// `[filter_height, filter_width, in_channels, out_channels]`, this op
/// performs the following:
///
/// 1. Flattens the filter to a 2-D matrix with shape
///    `[filter_height * filter_width * in_channels, output_channels]`.
/// 2. Extracts image patches from the input tensor to form a *virtual*
///    tensor of shape `[batch, out_height, out_width,
///    filter_height * filter_width * in_channels]`.
/// 3. For each patch, right-multiplies the filter matrix and the image patch
///    vector.
///
/// In detail, with the default NHWC format,
///
///     output[b, i, j, k] =
///         sum_{di, dj, q} input[b, strides[1] * i + di, strides[2] * j + dj, q] *
///                         filter[di, dj, q, k]
///
/// Must have `strides[0] = strides[3] = 1`.  For the most common case of the same
/// horizontal and vertices strides, `strides = [1, stride, stride, 1]`.
///
/// Arguments:
/// * scope: A Scope object
/// * input: A 4-D tensor. The dimension order is interpreted according to the value
/// of `data_format`, see below for details.
/// * filter: A 4-D tensor of shape
/// `[filter_height, filter_width, in_channels, out_channels]`
/// * strides: 1-D tensor of length 4.  The stride of the sliding window for each
/// dimension of `input`. The dimension order is determined by the value of
///   `data_format`, see below for details.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, height, width, channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, channels, height, width].
///
/// Returns:
/// * `Output`: A 4-D tensor. The dimension order is determined by the value of
/// `data_format`, see below for details.
class Conv2D {
 public:
  /// Optional attribute setters for Conv2D
  struct Attrs {
    /// Defaults to true
    Attrs UseCudnnOnGpu(bool x) {
      Attrs ret = *this;
      ret.use_cudnn_on_gpu_ = x;
      return ret;
    }

    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, height, width, channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, channels, height, width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    bool use_cudnn_on_gpu_ = true;
    StringPiece data_format_ = "NHWC";
  };
  Conv2D(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
       ::tensorflow::Input filter, const gtl::ArraySlice<int>& strides,
       StringPiece padding);
  Conv2D(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
       ::tensorflow::Input filter, const gtl::ArraySlice<int>& strides,
       StringPiece padding, const Conv2D::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs UseCudnnOnGpu(bool x) {
    return Attrs().UseCudnnOnGpu(x);
  }
  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes the gradients of convolution with respect to the filter.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D with shape `[batch, in_height, in_width, in_channels]`.
/// * filter_sizes: An integer vector representing the tensor shape of `filter`,
/// where `filter` is a 4-D
/// `[filter_height, filter_width, in_channels, out_channels]` tensor.
/// * out_backprop: 4-D with shape `[batch, out_height, out_width, out_channels]`.
/// Gradients w.r.t. the output of the convolution.
/// * strides: The stride of the sliding window for each dimension of the input
/// of the convolution. Must be in the same order as the dimension specified with
/// format.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, in_channels, in_height, in_width].
///
/// Returns:
/// * `Output`: 4-D with shape
/// `[filter_height, filter_width, in_channels, out_channels]`.  Gradient w.r.t.
/// the `filter` input of the convolution.
class Conv2DBackpropFilter {
 public:
  /// Optional attribute setters for Conv2DBackpropFilter
  struct Attrs {
    /// Defaults to true
    Attrs UseCudnnOnGpu(bool x) {
      Attrs ret = *this;
      ret.use_cudnn_on_gpu_ = x;
      return ret;
    }

    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, in_channels, in_height, in_width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    bool use_cudnn_on_gpu_ = true;
    StringPiece data_format_ = "NHWC";
  };
  Conv2DBackpropFilter(const ::tensorflow::Scope& scope, ::tensorflow::Input
                     input, ::tensorflow::Input filter_sizes,
                     ::tensorflow::Input out_backprop, const
                     gtl::ArraySlice<int>& strides, StringPiece padding);
  Conv2DBackpropFilter(const ::tensorflow::Scope& scope, ::tensorflow::Input
                     input, ::tensorflow::Input filter_sizes,
                     ::tensorflow::Input out_backprop, const
                     gtl::ArraySlice<int>& strides, StringPiece padding, const
                     Conv2DBackpropFilter::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs UseCudnnOnGpu(bool x) {
    return Attrs().UseCudnnOnGpu(x);
  }
  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes the gradients of convolution with respect to the input.
///
/// Arguments:
/// * scope: A Scope object
/// * input_sizes: An integer vector representing the shape of `input`,
/// where `input` is a 4-D `[batch, height, width, channels]` tensor.
/// * filter: 4-D with shape
/// `[filter_height, filter_width, in_channels, out_channels]`.
/// * out_backprop: 4-D with shape `[batch, out_height, out_width, out_channels]`.
/// Gradients w.r.t. the output of the convolution.
/// * strides: The stride of the sliding window for each dimension of the input
/// of the convolution. Must be in the same order as the dimension specified with
/// format.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, in_channels, in_height, in_width].
///
/// Returns:
/// * `Output`: 4-D with shape `[batch, in_height, in_width, in_channels]`.  Gradient
/// w.r.t. the input of the convolution.
class Conv2DBackpropInput {
 public:
  /// Optional attribute setters for Conv2DBackpropInput
  struct Attrs {
    /// Defaults to true
    Attrs UseCudnnOnGpu(bool x) {
      Attrs ret = *this;
      ret.use_cudnn_on_gpu_ = x;
      return ret;
    }

    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, in_channels, in_height, in_width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    bool use_cudnn_on_gpu_ = true;
    StringPiece data_format_ = "NHWC";
  };
  Conv2DBackpropInput(const ::tensorflow::Scope& scope, ::tensorflow::Input
                    input_sizes, ::tensorflow::Input filter,
                    ::tensorflow::Input out_backprop, const
                    gtl::ArraySlice<int>& strides, StringPiece padding);
  Conv2DBackpropInput(const ::tensorflow::Scope& scope, ::tensorflow::Input
                    input_sizes, ::tensorflow::Input filter,
                    ::tensorflow::Input out_backprop, const
                    gtl::ArraySlice<int>& strides, StringPiece padding, const
                    Conv2DBackpropInput::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs UseCudnnOnGpu(bool x) {
    return Attrs().UseCudnnOnGpu(x);
  }
  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes a 3-D convolution given 5-D `input` and `filter` tensors.
///
/// In signal processing, cross-correlation is a measure of similarity of
/// two waveforms as a function of a time-lag applied to one of them. This
/// is also known as a sliding dot product or sliding inner-product.
///
/// Our Conv3D implements a form of cross-correlation.
///
/// Arguments:
/// * scope: A Scope object
/// * input: Shape `[batch, in_depth, in_height, in_width, in_channels]`.
/// * filter: Shape `[filter_depth, filter_height, filter_width, in_channels,
/// out_channels]`. `in_channels` must match between `input` and `filter`.
/// * strides: 1-D tensor of length 5. The stride of the sliding window for each
/// dimension of `input`. Must have `strides[0] = strides[4] = 1`.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: The data format of the input and output data. With the
/// default format "NDHWC", the data is stored in the order of:
///     [batch, in_depth, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCDHW", the data storage order is:
///     [batch, in_channels, in_depth, in_height, in_width].
///
/// Returns:
/// * `Output`: The output tensor.
class Conv3D {
 public:
  /// Optional attribute setters for Conv3D
  struct Attrs {
    /// The data format of the input and output data. With the
    /// default format "NDHWC", the data is stored in the order of:
    ///     [batch, in_depth, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCDHW", the data storage order is:
    ///     [batch, in_channels, in_depth, in_height, in_width].
    ///
    /// Defaults to "NDHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NDHWC";
  };
  Conv3D(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
       ::tensorflow::Input filter, const gtl::ArraySlice<int>& strides,
       StringPiece padding);
  Conv3D(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
       ::tensorflow::Input filter, const gtl::ArraySlice<int>& strides,
       StringPiece padding, const Conv3D::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes the gradients of 3-D convolution with respect to the filter.
///
/// Arguments:
/// * scope: A Scope object
/// * input: Shape `[batch, depth, rows, cols, in_channels]`.
/// * filter_sizes: An integer vector representing the tensor shape of `filter`,
/// where `filter` is a 5-D
/// `[filter_depth, filter_height, filter_width, in_channels, out_channels]`
/// tensor.
/// * out_backprop: Backprop signal of shape `[batch, out_depth, out_rows, out_cols,
/// out_channels]`.
/// * strides: 1-D tensor of length 5. The stride of the sliding window for each
/// dimension of `input`. Must have `strides[0] = strides[4] = 1`.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: The data format of the input and output data. With the
/// default format "NDHWC", the data is stored in the order of:
///     [batch, in_depth, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCDHW", the data storage order is:
///     [batch, in_channels, in_depth, in_height, in_width].
///
/// Returns:
/// * `Output`: The output tensor.
class Conv3DBackpropFilterV2 {
 public:
  /// Optional attribute setters for Conv3DBackpropFilterV2
  struct Attrs {
    /// The data format of the input and output data. With the
    /// default format "NDHWC", the data is stored in the order of:
    ///     [batch, in_depth, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCDHW", the data storage order is:
    ///     [batch, in_channels, in_depth, in_height, in_width].
    ///
    /// Defaults to "NDHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NDHWC";
  };
  Conv3DBackpropFilterV2(const ::tensorflow::Scope& scope, ::tensorflow::Input
                       input, ::tensorflow::Input filter_sizes,
                       ::tensorflow::Input out_backprop, const
                       gtl::ArraySlice<int>& strides, StringPiece padding);
  Conv3DBackpropFilterV2(const ::tensorflow::Scope& scope, ::tensorflow::Input
                       input, ::tensorflow::Input filter_sizes,
                       ::tensorflow::Input out_backprop, const
                       gtl::ArraySlice<int>& strides, StringPiece padding,
                       const Conv3DBackpropFilterV2::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes the gradients of 3-D convolution with respect to the input.
///
/// Arguments:
/// * scope: A Scope object
/// * input_sizes: An integer vector representing the tensor shape of `input`,
/// where `input` is a 5-D
/// `[batch, depth, rows, cols, in_channels]` tensor.
/// * filter: Shape `[depth, rows, cols, in_channels, out_channels]`.
/// `in_channels` must match between `input` and `filter`.
/// * out_backprop: Backprop signal of shape `[batch, out_depth, out_rows, out_cols,
/// out_channels]`.
/// * strides: 1-D tensor of length 5. The stride of the sliding window for each
/// dimension of `input`. Must have `strides[0] = strides[4] = 1`.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: The data format of the input and output data. With the
/// default format "NDHWC", the data is stored in the order of:
///     [batch, in_depth, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCDHW", the data storage order is:
///     [batch, in_channels, in_depth, in_height, in_width].
///
/// Returns:
/// * `Output`: The output tensor.
class Conv3DBackpropInputV2 {
 public:
  /// Optional attribute setters for Conv3DBackpropInputV2
  struct Attrs {
    /// The data format of the input and output data. With the
    /// default format "NDHWC", the data is stored in the order of:
    ///     [batch, in_depth, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCDHW", the data storage order is:
    ///     [batch, in_channels, in_depth, in_height, in_width].
    ///
    /// Defaults to "NDHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NDHWC";
  };
  Conv3DBackpropInputV2(const ::tensorflow::Scope& scope, ::tensorflow::Input
                      input_sizes, ::tensorflow::Input filter,
                      ::tensorflow::Input out_backprop, const
                      gtl::ArraySlice<int>& strides, StringPiece padding);
  Conv3DBackpropInputV2(const ::tensorflow::Scope& scope, ::tensorflow::Input
                      input_sizes, ::tensorflow::Input filter,
                      ::tensorflow::Input out_backprop, const
                      gtl::ArraySlice<int>& strides, StringPiece padding, const
                      Conv3DBackpropInputV2::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes a 2-D depthwise convolution given 4-D `input` and `filter` tensors.
///
/// Given an input tensor of shape `[batch, in_height, in_width, in_channels]`
/// and a filter / kernel tensor of shape
/// `[filter_height, filter_width, in_channels, channel_multiplier]`, containing
/// `in_channels` convolutional filters of depth 1, `depthwise_conv2d` applies
/// a different filter to each input channel (expanding from 1 channel to
/// `channel_multiplier` channels for each), then concatenates the results
/// together. Thus, the output has `in_channels * channel_multiplier` channels.
///
/// ```
/// for k in 0..in_channels-1
///   for q in 0..channel_multiplier-1
///     output[b, i, j, k * channel_multiplier + q] =
///       sum_{di, dj} input[b, strides[1] * i + di, strides[2] * j + dj, k] *
///                         filter[di, dj, k, q]
/// ```
///
/// Must have `strides[0] = strides[3] = 1`.  For the most common case of the same
/// horizontal and vertices strides, `strides = [1, stride, stride, 1]`.
///
/// Arguments:
/// * scope: A Scope object
/// * strides: 1-D of length 4.  The stride of the sliding window for each dimension
/// of `input`.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, height, width, channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, channels, height, width].
///
/// Returns:
/// * `Output`: The output tensor.
class DepthwiseConv2dNative {
 public:
  /// Optional attribute setters for DepthwiseConv2dNative
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, height, width, channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, channels, height, width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  DepthwiseConv2dNative(const ::tensorflow::Scope& scope, ::tensorflow::Input
                      input, ::tensorflow::Input filter, const
                      gtl::ArraySlice<int>& strides, StringPiece padding);
  DepthwiseConv2dNative(const ::tensorflow::Scope& scope, ::tensorflow::Input
                      input, ::tensorflow::Input filter, const
                      gtl::ArraySlice<int>& strides, StringPiece padding, const
                      DepthwiseConv2dNative::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes the gradients of depthwise convolution with respect to the filter.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D with shape based on `data_format`.  For example, if
/// `data_format` is 'NHWC' then `input` is a 4-D `[batch, in_height,
/// in_width, in_channels]` tensor.
/// * filter_sizes: An integer vector representing the tensor shape of `filter`,
/// where `filter` is a 4-D
/// `[filter_height, filter_width, in_channels, depthwise_multiplier]` tensor.
/// * out_backprop: 4-D with shape  based on `data_format`.
/// For example, if `data_format` is 'NHWC' then
/// out_backprop shape is `[batch, out_height, out_width, out_channels]`.
/// Gradients w.r.t. the output of the convolution.
/// * strides: The stride of the sliding window for each dimension of the input
/// of the convolution.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, height, width, channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, channels, height, width].
///
/// Returns:
/// * `Output`: 4-D with shape
/// `[filter_height, filter_width, in_channels, out_channels]`.  Gradient w.r.t.
/// the `filter` input of the convolution.
class DepthwiseConv2dNativeBackpropFilter {
 public:
  /// Optional attribute setters for DepthwiseConv2dNativeBackpropFilter
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, height, width, channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, channels, height, width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  DepthwiseConv2dNativeBackpropFilter(const ::tensorflow::Scope& scope,
                                    ::tensorflow::Input input,
                                    ::tensorflow::Input filter_sizes,
                                    ::tensorflow::Input out_backprop, const
                                    gtl::ArraySlice<int>& strides, StringPiece
                                    padding);
  DepthwiseConv2dNativeBackpropFilter(const ::tensorflow::Scope& scope,
                                    ::tensorflow::Input input,
                                    ::tensorflow::Input filter_sizes,
                                    ::tensorflow::Input out_backprop, const
                                    gtl::ArraySlice<int>& strides, StringPiece
                                    padding, const
                                    DepthwiseConv2dNativeBackpropFilter::Attrs&
                                    attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes the gradients of depthwise convolution with respect to the input.
///
/// Arguments:
/// * scope: A Scope object
/// * input_sizes: An integer vector representing the shape of `input`, based
/// on `data_format`.  For example, if `data_format` is 'NHWC' then
///  `input` is a 4-D `[batch, height, width, channels]` tensor.
/// * filter: 4-D with shape
/// `[filter_height, filter_width, in_channels, depthwise_multiplier]`.
/// * out_backprop: 4-D with shape  based on `data_format`.
/// For example, if `data_format` is 'NHWC' then
/// out_backprop shape is `[batch, out_height, out_width, out_channels]`.
/// Gradients w.r.t. the output of the convolution.
/// * strides: The stride of the sliding window for each dimension of the input
/// of the convolution.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, height, width, channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, channels, height, width].
///
/// Returns:
/// * `Output`: 4-D with shape according to `data_format`.  For example, if
/// `data_format` is 'NHWC', output shape is `[batch, in_height,
/// in_width, in_channels]`.  Gradient w.r.t. the input of the
/// convolution.
class DepthwiseConv2dNativeBackpropInput {
 public:
  /// Optional attribute setters for DepthwiseConv2dNativeBackpropInput
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, height, width, channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, channels, height, width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  DepthwiseConv2dNativeBackpropInput(const ::tensorflow::Scope& scope,
                                   ::tensorflow::Input input_sizes,
                                   ::tensorflow::Input filter,
                                   ::tensorflow::Input out_backprop, const
                                   gtl::ArraySlice<int>& strides, StringPiece
                                   padding);
  DepthwiseConv2dNativeBackpropInput(const ::tensorflow::Scope& scope,
                                   ::tensorflow::Input input_sizes,
                                   ::tensorflow::Input filter,
                                   ::tensorflow::Input out_backprop, const
                                   gtl::ArraySlice<int>& strides, StringPiece
                                   padding, const
                                   DepthwiseConv2dNativeBackpropInput::Attrs&
                                   attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes the grayscale dilation of 4-D `input` and 3-D `filter` tensors.
///
/// The `input` tensor has shape `[batch, in_height, in_width, depth]` and the
/// `filter` tensor has shape `[filter_height, filter_width, depth]`, i.e., each
/// input channel is processed independently of the others with its own structuring
/// function. The `output` tensor has shape
/// `[batch, out_height, out_width, depth]`. The spatial dimensions of the output
/// tensor depend on the `padding` algorithm. We currently only support the default
/// "NHWC" `data_format`.
///
/// In detail, the grayscale morphological 2-D dilation is the max-sum correlation
/// (for consistency with `conv2d`, we use unmirrored filters):
///
///     output[b, y, x, c] =
///        max_{dy, dx} input[b,
///                           strides[1] * y + rates[1] * dy,
///                           strides[2] * x + rates[2] * dx,
///                           c] +
///                     filter[dy, dx, c]
///
/// Max-pooling is a special case when the filter has size equal to the pooling
/// kernel size and contains all zeros.
///
/// Note on duality: The dilation of `input` by the `filter` is equal to the
/// negation of the erosion of `-input` by the reflected `filter`.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D with shape `[batch, in_height, in_width, depth]`.
/// * filter: 3-D with shape `[filter_height, filter_width, depth]`.
/// * strides: The stride of the sliding window for each dimension of the input
/// tensor. Must be: `[1, stride_height, stride_width, 1]`.
/// * rates: The input stride for atrous morphological dilation. Must be:
/// `[1, rate_height, rate_width, 1]`.
/// * padding: The type of padding algorithm to use.
///
/// Returns:
/// * `Output`: 4-D with shape `[batch, out_height, out_width, depth]`.
class Dilation2D {
 public:
  Dilation2D(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
           ::tensorflow::Input filter, const gtl::ArraySlice<int>& strides,
           const gtl::ArraySlice<int>& rates, StringPiece padding);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  ::tensorflow::Output output;
};

/// Computes the gradient of morphological 2-D dilation with respect to the filter.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D with shape `[batch, in_height, in_width, depth]`.
/// * filter: 3-D with shape `[filter_height, filter_width, depth]`.
/// * out_backprop: 4-D with shape `[batch, out_height, out_width, depth]`.
/// * strides: 1-D of length 4. The stride of the sliding window for each dimension of
/// the input tensor. Must be: `[1, stride_height, stride_width, 1]`.
/// * rates: 1-D of length 4. The input stride for atrous morphological dilation.
/// Must be: `[1, rate_height, rate_width, 1]`.
/// * padding: The type of padding algorithm to use.
///
/// Returns:
/// * `Output`: 3-D with shape `[filter_height, filter_width, depth]`.
class Dilation2DBackpropFilter {
 public:
  Dilation2DBackpropFilter(const ::tensorflow::Scope& scope, ::tensorflow::Input
                         input, ::tensorflow::Input filter, ::tensorflow::Input
                         out_backprop, const gtl::ArraySlice<int>& strides,
                         const gtl::ArraySlice<int>& rates, StringPiece
                         padding);
  operator ::tensorflow::Output() const { return filter_backprop; }
  operator ::tensorflow::Input() const { return filter_backprop; }
  ::tensorflow::Node* node() const { return filter_backprop.node(); }

  ::tensorflow::Output filter_backprop;
};

/// Computes the gradient of morphological 2-D dilation with respect to the input.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D with shape `[batch, in_height, in_width, depth]`.
/// * filter: 3-D with shape `[filter_height, filter_width, depth]`.
/// * out_backprop: 4-D with shape `[batch, out_height, out_width, depth]`.
/// * strides: 1-D of length 4. The stride of the sliding window for each dimension of
/// the input tensor. Must be: `[1, stride_height, stride_width, 1]`.
/// * rates: 1-D of length 4. The input stride for atrous morphological dilation.
/// Must be: `[1, rate_height, rate_width, 1]`.
/// * padding: The type of padding algorithm to use.
///
/// Returns:
/// * `Output`: 4-D with shape `[batch, in_height, in_width, depth]`.
class Dilation2DBackpropInput {
 public:
  Dilation2DBackpropInput(const ::tensorflow::Scope& scope, ::tensorflow::Input
                        input, ::tensorflow::Input filter, ::tensorflow::Input
                        out_backprop, const gtl::ArraySlice<int>& strides,
                        const gtl::ArraySlice<int>& rates, StringPiece padding);
  operator ::tensorflow::Output() const { return in_backprop; }
  operator ::tensorflow::Input() const { return in_backprop; }
  ::tensorflow::Node* node() const { return in_backprop.node(); }

  ::tensorflow::Output in_backprop;
};

/// Computes exponential linear: `exp(features) - 1` if < 0, `features` otherwise.
///
/// See [Fast and Accurate Deep Network Learning by Exponential Linear Units (ELUs)
/// ](http://arxiv.org/abs/1511.07289)
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The activations tensor.
class Elu {
 public:
  Elu(const ::tensorflow::Scope& scope, ::tensorflow::Input features);
  operator ::tensorflow::Output() const { return activations; }
  operator ::tensorflow::Input() const { return activations; }
  ::tensorflow::Node* node() const { return activations.node(); }

  ::tensorflow::Output activations;
};

/// Performs fractional average pooling on the input.
///
/// Fractional average pooling is similar to Fractional max pooling in the pooling
/// region generation step. The only difference is that after pooling regions are
/// generated, a mean operation is performed instead of a max operation in each
/// pooling region.
///
/// Arguments:
/// * scope: A Scope object
/// * value: 4-D with shape `[batch, height, width, channels]`.
/// * pooling_ratio: Pooling ratio for each dimension of `value`, currently only
/// supports row and col dimension and should be >= 1.0. For example, a valid
/// pooling ratio looks like [1.0, 1.44, 1.73, 1.0]. The first and last elements
/// must be 1.0 because we don't allow pooling on batch and channels
/// dimensions. 1.44 and 1.73 are pooling ratio on height and width dimensions
/// respectively.
///
/// Optional attributes (see `Attrs`):
/// * pseudo_random: When set to True, generates the pooling sequence in a
/// pseudorandom fashion, otherwise, in a random fashion. Check paper [Benjamin
/// Graham, Fractional Max-Pooling](http://arxiv.org/abs/1412.6071) for
/// difference between pseudorandom and random.
/// * overlapping: When set to True, it means when pooling, the values at the boundary
/// of adjacent pooling cells are used by both cells. For example:
///
/// `index  0  1  2  3  4`
///
/// `value  20 5  16 3  7`
///
/// If the pooling sequence is [0, 2, 4], then 16, at index 2 will be used twice.
/// The result would be [41/3, 26/3] for fractional avg pooling.
/// * deterministic: When set to True, a fixed pooling region will be used when
/// iterating over a FractionalAvgPool node in the computation graph. Mainly used
/// in unit test to make FractionalAvgPool deterministic.
/// * seed: If either seed or seed2 are set to be non-zero, the random number
/// generator is seeded by the given seed.  Otherwise, it is seeded by a
/// random seed.
/// * seed2: An second seed to avoid seed collision.
///
/// Returns:
/// * `Output` output: output tensor after fractional avg pooling.
/// * `Output` row_pooling_sequence: row pooling sequence, needed to calculate gradient.
/// * `Output` col_pooling_sequence: column pooling sequence, needed to calculate gradient.
class FractionalAvgPool {
 public:
  /// Optional attribute setters for FractionalAvgPool
  struct Attrs {
    /// When set to True, generates the pooling sequence in a
    /// pseudorandom fashion, otherwise, in a random fashion. Check paper [Benjamin
    /// Graham, Fractional Max-Pooling](http://arxiv.org/abs/1412.6071) for
    /// difference between pseudorandom and random.
    ///
    /// Defaults to false
    Attrs PseudoRandom(bool x) {
      Attrs ret = *this;
      ret.pseudo_random_ = x;
      return ret;
    }

    /// When set to True, it means when pooling, the values at the boundary
    /// of adjacent pooling cells are used by both cells. For example:
    ///
    /// `index  0  1  2  3  4`
    ///
    /// `value  20 5  16 3  7`
    ///
    /// If the pooling sequence is [0, 2, 4], then 16, at index 2 will be used twice.
    /// The result would be [41/3, 26/3] for fractional avg pooling.
    ///
    /// Defaults to false
    Attrs Overlapping(bool x) {
      Attrs ret = *this;
      ret.overlapping_ = x;
      return ret;
    }

    /// When set to True, a fixed pooling region will be used when
    /// iterating over a FractionalAvgPool node in the computation graph. Mainly used
    /// in unit test to make FractionalAvgPool deterministic.
    ///
    /// Defaults to false
    Attrs Deterministic(bool x) {
      Attrs ret = *this;
      ret.deterministic_ = x;
      return ret;
    }

    /// If either seed or seed2 are set to be non-zero, the random number
    /// generator is seeded by the given seed.  Otherwise, it is seeded by a
    /// random seed.
    ///
    /// Defaults to 0
    Attrs Seed(int64 x) {
      Attrs ret = *this;
      ret.seed_ = x;
      return ret;
    }

    /// An second seed to avoid seed collision.
    ///
    /// Defaults to 0
    Attrs Seed2(int64 x) {
      Attrs ret = *this;
      ret.seed2_ = x;
      return ret;
    }

    bool pseudo_random_ = false;
    bool overlapping_ = false;
    bool deterministic_ = false;
    int64 seed_ = 0;
    int64 seed2_ = 0;
  };
  FractionalAvgPool(const ::tensorflow::Scope& scope, ::tensorflow::Input value,
                  const gtl::ArraySlice<float>& pooling_ratio);
  FractionalAvgPool(const ::tensorflow::Scope& scope, ::tensorflow::Input value,
                  const gtl::ArraySlice<float>& pooling_ratio, const
                  FractionalAvgPool::Attrs& attrs);

  static Attrs PseudoRandom(bool x) {
    return Attrs().PseudoRandom(x);
  }
  static Attrs Overlapping(bool x) {
    return Attrs().Overlapping(x);
  }
  static Attrs Deterministic(bool x) {
    return Attrs().Deterministic(x);
  }
  static Attrs Seed(int64 x) {
    return Attrs().Seed(x);
  }
  static Attrs Seed2(int64 x) {
    return Attrs().Seed2(x);
  }

  ::tensorflow::Output output;
  ::tensorflow::Output row_pooling_sequence;
  ::tensorflow::Output col_pooling_sequence;
};

/// Performs fractional max pooling on the input.
///
/// Fractional max pooling is slightly different than regular max pooling.  In
/// regular max pooling, you downsize an input set by taking the maximum value of
/// smaller N x N subsections of the set (often 2x2), and try to reduce the set by
/// a factor of N, where N is an integer.  Fractional max pooling, as you might
/// expect from the word "fractional", means that the overall reduction ratio N
/// does not have to be an integer.
///
/// The sizes of the pooling regions are generated randomly but are fairly uniform.
/// For example, let's look at the height dimension, and the constraints on the
/// list of rows that will be pool boundaries.
///
/// First we define the following:
///
/// 1.  input_row_length : the number of rows from the input set
/// 2.  output_row_length : which will be smaller than the input
/// 3.  alpha = input_row_length / output_row_length : our reduction ratio
/// 4.  K = floor(alpha)
/// 5.  row_pooling_sequence : this is the result list of pool boundary rows
///
/// Then, row_pooling_sequence should satisfy:
///
/// 1.  a[0] = 0 : the first value of the sequence is 0
/// 2.  a[end] = input_row_length : the last value of the sequence is the size
/// 3.  K <= (a[i+1] - a[i]) <= K+1 : all intervals are K or K+1 size
/// 4.  length(row_pooling_sequence) = output_row_length+1
///
/// For more details on fractional max pooling, see this paper:
/// [Benjamin Graham, Fractional Max-Pooling](http://arxiv.org/abs/1412.6071)
///
/// Arguments:
/// * scope: A Scope object
/// * value: 4-D with shape `[batch, height, width, channels]`.
/// * pooling_ratio: Pooling ratio for each dimension of `value`, currently only
/// supports row and col dimension and should be >= 1.0. For example, a valid
/// pooling ratio looks like [1.0, 1.44, 1.73, 1.0]. The first and last elements
/// must be 1.0 because we don't allow pooling on batch and channels
/// dimensions. 1.44 and 1.73 are pooling ratio on height and width dimensions
/// respectively.
///
/// Optional attributes (see `Attrs`):
/// * pseudo_random: When set to True, generates the pooling sequence in a
/// pseudorandom fashion, otherwise, in a random fashion. Check paper [Benjamin
/// Graham, Fractional Max-Pooling](http://arxiv.org/abs/1412.6071) for
/// difference between pseudorandom and random.
/// * overlapping: When set to True, it means when pooling, the values at the boundary
/// of adjacent pooling cells are used by both cells. For example:
///
/// `index  0  1  2  3  4`
///
/// `value  20 5  16 3  7`
///
/// If the pooling sequence is [0, 2, 4], then 16, at index 2 will be used twice.
/// The result would be [20, 16] for fractional max pooling.
/// * deterministic: When set to True, a fixed pooling region will be used when
/// iterating over a FractionalMaxPool node in the computation graph. Mainly used
/// in unit test to make FractionalMaxPool deterministic.
/// * seed: If either seed or seed2 are set to be non-zero, the random number
/// generator is seeded by the given seed.  Otherwise, it is seeded by a
/// random seed.
/// * seed2: An second seed to avoid seed collision.
///
/// Returns:
/// * `Output` output: output tensor after fractional max pooling.
/// * `Output` row_pooling_sequence: row pooling sequence, needed to calculate gradient.
/// * `Output` col_pooling_sequence: column pooling sequence, needed to calculate gradient.
class FractionalMaxPool {
 public:
  /// Optional attribute setters for FractionalMaxPool
  struct Attrs {
    /// When set to True, generates the pooling sequence in a
    /// pseudorandom fashion, otherwise, in a random fashion. Check paper [Benjamin
    /// Graham, Fractional Max-Pooling](http://arxiv.org/abs/1412.6071) for
    /// difference between pseudorandom and random.
    ///
    /// Defaults to false
    Attrs PseudoRandom(bool x) {
      Attrs ret = *this;
      ret.pseudo_random_ = x;
      return ret;
    }

    /// When set to True, it means when pooling, the values at the boundary
    /// of adjacent pooling cells are used by both cells. For example:
    ///
    /// `index  0  1  2  3  4`
    ///
    /// `value  20 5  16 3  7`
    ///
    /// If the pooling sequence is [0, 2, 4], then 16, at index 2 will be used twice.
    /// The result would be [20, 16] for fractional max pooling.
    ///
    /// Defaults to false
    Attrs Overlapping(bool x) {
      Attrs ret = *this;
      ret.overlapping_ = x;
      return ret;
    }

    /// When set to True, a fixed pooling region will be used when
    /// iterating over a FractionalMaxPool node in the computation graph. Mainly used
    /// in unit test to make FractionalMaxPool deterministic.
    ///
    /// Defaults to false
    Attrs Deterministic(bool x) {
      Attrs ret = *this;
      ret.deterministic_ = x;
      return ret;
    }

    /// If either seed or seed2 are set to be non-zero, the random number
    /// generator is seeded by the given seed.  Otherwise, it is seeded by a
    /// random seed.
    ///
    /// Defaults to 0
    Attrs Seed(int64 x) {
      Attrs ret = *this;
      ret.seed_ = x;
      return ret;
    }

    /// An second seed to avoid seed collision.
    ///
    /// Defaults to 0
    Attrs Seed2(int64 x) {
      Attrs ret = *this;
      ret.seed2_ = x;
      return ret;
    }

    bool pseudo_random_ = false;
    bool overlapping_ = false;
    bool deterministic_ = false;
    int64 seed_ = 0;
    int64 seed2_ = 0;
  };
  FractionalMaxPool(const ::tensorflow::Scope& scope, ::tensorflow::Input value,
                  const gtl::ArraySlice<float>& pooling_ratio);
  FractionalMaxPool(const ::tensorflow::Scope& scope, ::tensorflow::Input value,
                  const gtl::ArraySlice<float>& pooling_ratio, const
                  FractionalMaxPool::Attrs& attrs);

  static Attrs PseudoRandom(bool x) {
    return Attrs().PseudoRandom(x);
  }
  static Attrs Overlapping(bool x) {
    return Attrs().Overlapping(x);
  }
  static Attrs Deterministic(bool x) {
    return Attrs().Deterministic(x);
  }
  static Attrs Seed(int64 x) {
    return Attrs().Seed(x);
  }
  static Attrs Seed2(int64 x) {
    return Attrs().Seed2(x);
  }

  ::tensorflow::Output output;
  ::tensorflow::Output row_pooling_sequence;
  ::tensorflow::Output col_pooling_sequence;
};

/// Batch normalization.
///
/// Note that the size of 4D Tensors are defined by either "NHWC" or "NCHW".
/// The size of 1D Tensors matches the dimension C of the 4D Tensors.
///
/// Arguments:
/// * scope: A Scope object
/// * x: A 4D Tensor for input data.
/// * scale: A 1D Tensor for scaling factor, to scale the normalized x.
/// * offset: A 1D Tensor for offset, to shift to the normalized x.
/// * mean: A 1D Tensor for population mean. Used for inference only;
/// must be empty for training.
/// * variance: A 1D Tensor for population variance. Used for inference only;
/// must be empty for training.
///
/// Optional attributes (see `Attrs`):
/// * epsilon: A small float number added to the variance of x.
/// * data_format: The data format for x and y. Either "NHWC" (default) or "NCHW".
/// * is_training: A bool value to indicate the operation is for training (default)
/// or inference.
///
/// Returns:
/// * `Output` y: A 4D Tensor for output data.
/// * `Output` batch_mean: A 1D Tensor for the computed batch mean, to be used by TensorFlow
/// to compute the running mean.
/// * `Output` batch_variance: A 1D Tensor for the computed batch variance, to be used by
/// TensorFlow to compute the running variance.
/// * `Output` reserve_space_1: A 1D Tensor for the computed batch mean, to be reused
/// in the gradient computation.
/// * `Output` reserve_space_2: A 1D Tensor for the computed batch variance (inverted variance
/// in the cuDNN case), to be used in the gradient computation.
class FusedBatchNorm {
 public:
  /// Optional attribute setters for FusedBatchNorm
  struct Attrs {
    /// A small float number added to the variance of x.
    ///
    /// Defaults to 0.0001
    Attrs Epsilon(float x) {
      Attrs ret = *this;
      ret.epsilon_ = x;
      return ret;
    }

    /// The data format for x and y. Either "NHWC" (default) or "NCHW".
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    /// A bool value to indicate the operation is for training (default)
    /// or inference.
    ///
    /// Defaults to true
    Attrs IsTraining(bool x) {
      Attrs ret = *this;
      ret.is_training_ = x;
      return ret;
    }

    float epsilon_ = 0.0001f;
    StringPiece data_format_ = "NHWC";
    bool is_training_ = true;
  };
  FusedBatchNorm(const ::tensorflow::Scope& scope, ::tensorflow::Input x,
               ::tensorflow::Input scale, ::tensorflow::Input offset,
               ::tensorflow::Input mean, ::tensorflow::Input variance);
  FusedBatchNorm(const ::tensorflow::Scope& scope, ::tensorflow::Input x,
               ::tensorflow::Input scale, ::tensorflow::Input offset,
               ::tensorflow::Input mean, ::tensorflow::Input variance, const
               FusedBatchNorm::Attrs& attrs);

  static Attrs Epsilon(float x) {
    return Attrs().Epsilon(x);
  }
  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }
  static Attrs IsTraining(bool x) {
    return Attrs().IsTraining(x);
  }

  ::tensorflow::Output y;
  ::tensorflow::Output batch_mean;
  ::tensorflow::Output batch_variance;
  ::tensorflow::Output reserve_space_1;
  ::tensorflow::Output reserve_space_2;
};

/// Gradient for batch normalization.
///
/// Note that the size of 4D Tensors are defined by either "NHWC" or "NCHW".
/// The size of 1D Tensors matches the dimension C of the 4D Tensors.
///
/// Arguments:
/// * scope: A Scope object
/// * y_backprop: A 4D Tensor for the gradient with respect to y.
/// * x: A 4D Tensor for input data.
/// * scale: A 1D Tensor for scaling factor, to scale the normalized x.
/// * reserve_space_1: A 1D Tensor for the computed batch mean, to be reused
/// in the gradient computation.
/// * reserve_space_2: A 1D Tensor for the computed batch variance (inverted variance
/// in the cuDNN case), to be used in the gradient computation.
///
/// Optional attributes (see `Attrs`):
/// * epsilon: A small float number added to the variance of x.
/// * data_format: The data format for y_backprop, x, x_backprop.
/// Either "NHWC" (default) or "NCHW".
/// * is_training: A bool value to indicate the operation is for training (default)
/// or inference.
///
/// Returns:
/// * `Output` x_backprop: A 4D Tensor for the gradient with respect to x.
/// * `Output` scale_backprop: A 1D Tensor for the gradient with respect to scale.
/// * `Output` offset_backprop: A 1D Tensor for the gradient with respect to offset.
/// * `Output` reserve_space_3: Unused placeholder to match the mean input in FusedBatchNorm.
/// * `Output` reserve_space_4: Unused placeholder to match the variance input
/// in FusedBatchNorm.
class FusedBatchNormGrad {
 public:
  /// Optional attribute setters for FusedBatchNormGrad
  struct Attrs {
    /// A small float number added to the variance of x.
    ///
    /// Defaults to 0.0001
    Attrs Epsilon(float x) {
      Attrs ret = *this;
      ret.epsilon_ = x;
      return ret;
    }

    /// The data format for y_backprop, x, x_backprop.
    /// Either "NHWC" (default) or "NCHW".
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    /// A bool value to indicate the operation is for training (default)
    /// or inference.
    ///
    /// Defaults to true
    Attrs IsTraining(bool x) {
      Attrs ret = *this;
      ret.is_training_ = x;
      return ret;
    }

    float epsilon_ = 0.0001f;
    StringPiece data_format_ = "NHWC";
    bool is_training_ = true;
  };
  FusedBatchNormGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
                   y_backprop, ::tensorflow::Input x, ::tensorflow::Input
                   scale, ::tensorflow::Input reserve_space_1,
                   ::tensorflow::Input reserve_space_2);
  FusedBatchNormGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
                   y_backprop, ::tensorflow::Input x, ::tensorflow::Input
                   scale, ::tensorflow::Input reserve_space_1,
                   ::tensorflow::Input reserve_space_2, const
                   FusedBatchNormGrad::Attrs& attrs);

  static Attrs Epsilon(float x) {
    return Attrs().Epsilon(x);
  }
  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }
  static Attrs IsTraining(bool x) {
    return Attrs().IsTraining(x);
  }

  ::tensorflow::Output x_backprop;
  ::tensorflow::Output scale_backprop;
  ::tensorflow::Output offset_backprop;
  ::tensorflow::Output reserve_space_3;
  ::tensorflow::Output reserve_space_4;
};

/// Performs a padding as a preprocess during a convolution.
///
/// Similar to FusedResizeAndPadConv2d, this op allows for an optimized
/// implementation where the spatial padding transformation stage is fused with the
/// im2col lookup, but in this case without the bilinear filtering required for
/// resizing. Fusing the padding prevents the need to write out the intermediate
/// results as whole tensors, reducing memory pressure, and we can get some latency
/// gains by merging the transformation calculations.
/// The data_format attribute for Conv2D isn't supported by this op, and 'NHWC'
/// order is used instead.
/// Internally this op uses a single per-graph scratch buffer, which means that it
/// will block if multiple versions are being run in parallel. This is because this
/// operator is primarily an optimization to minimize memory usage.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D with shape `[batch, in_height, in_width, in_channels]`.
/// * paddings: A two-column matrix specifying the padding sizes. The number of
/// rows must be the same as the rank of `input`.
/// * filter: 4-D with shape
/// `[filter_height, filter_width, in_channels, out_channels]`.
/// * strides: 1-D of length 4.  The stride of the sliding window for each dimension
/// of `input`. Must be in the same order as the dimension specified with format.
/// * padding: The type of padding algorithm to use.
///
/// Returns:
/// * `Output`: The output tensor.
class FusedPadConv2D {
 public:
  FusedPadConv2D(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
               ::tensorflow::Input paddings, ::tensorflow::Input filter,
               StringPiece mode, const gtl::ArraySlice<int>& strides,
               StringPiece padding);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  ::tensorflow::Output output;
};

/// Performs a resize and padding as a preprocess during a convolution.
///
/// It's often possible to do spatial transformations more efficiently as part of
/// the packing stage of a convolution, so this op allows for an optimized
/// implementation where these stages are fused together. This prevents the need to
/// write out the intermediate results as whole tensors, reducing memory pressure,
/// and we can get some latency gains by merging the transformation calculations.
/// The data_format attribute for Conv2D isn't supported by this op, and defaults to
/// 'NHWC' order.
/// Internally this op uses a single per-graph scratch buffer, which means that it
/// will block if multiple versions are being run in parallel. This is because this
/// operator is primarily an optimization to minimize memory usage.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D with shape `[batch, in_height, in_width, in_channels]`.
/// * size: A 1-D int32 Tensor of 2 elements: `new_height, new_width`.  The
/// new size for the images.
/// * paddings: A two-column matrix specifying the padding sizes. The number of
/// rows must be the same as the rank of `input`.
/// * filter: 4-D with shape
/// `[filter_height, filter_width, in_channels, out_channels]`.
/// * strides: 1-D of length 4.  The stride of the sliding window for each dimension
/// of `input`. Must be in the same order as the dimension specified with format.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * resize_align_corners: If true, rescale input by (new_height - 1) / (height - 1),
/// which exactly aligns the 4 corners of images and resized images. If false, rescale
/// by new_height / height. Treat similarly the width dimension.
///
/// Returns:
/// * `Output`: The output tensor.
class FusedResizeAndPadConv2D {
 public:
  /// Optional attribute setters for FusedResizeAndPadConv2D
  struct Attrs {
    /// If true, rescale input by (new_height - 1) / (height - 1),
    /// which exactly aligns the 4 corners of images and resized images. If false, rescale
    /// by new_height / height. Treat similarly the width dimension.
    ///
    /// Defaults to false
    Attrs ResizeAlignCorners(bool x) {
      Attrs ret = *this;
      ret.resize_align_corners_ = x;
      return ret;
    }

    bool resize_align_corners_ = false;
  };
  FusedResizeAndPadConv2D(const ::tensorflow::Scope& scope, ::tensorflow::Input
                        input, ::tensorflow::Input size, ::tensorflow::Input
                        paddings, ::tensorflow::Input filter, StringPiece mode,
                        const gtl::ArraySlice<int>& strides, StringPiece
                        padding);
  FusedResizeAndPadConv2D(const ::tensorflow::Scope& scope, ::tensorflow::Input
                        input, ::tensorflow::Input size, ::tensorflow::Input
                        paddings, ::tensorflow::Input filter, StringPiece mode,
                        const gtl::ArraySlice<int>& strides, StringPiece
                        padding, const FusedResizeAndPadConv2D::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs ResizeAlignCorners(bool x) {
    return Attrs().ResizeAlignCorners(x);
  }

  ::tensorflow::Output output;
};

/// Says whether the targets are in the top `K` predictions.
///
/// This outputs a `batch_size` bool array, an entry `out[i]` is `true` if the
/// prediction for the target class is among the top `k` predictions among
/// all predictions for example `i`. Note that the behavior of `InTopK` differs
/// from the `TopK` op in its handling of ties; if multiple classes have the
/// same prediction value and straddle the top-`k` boundary, all of those
/// classes are considered to be in the top `k`.
///
/// More formally, let
///
///   \\(predictions_i\\) be the predictions for all classes for example `i`,
///   \\(targets_i\\) be the target class for example `i`,
///   \\(out_i\\) be the output for example `i`,
///
/// $$out_i = predictions_{i, targets_i} \in TopKIncludingTies(predictions_i)$$
///
/// Arguments:
/// * scope: A Scope object
/// * predictions: A `batch_size` x `classes` tensor.
/// * targets: A `batch_size` vector of class ids.
/// * k: Number of top elements to look at for computing precision.
///
/// Returns:
/// * `Output`: Computed Precision at `k` as a `bool Tensor`.
class InTopK {
 public:
  InTopK(const ::tensorflow::Scope& scope, ::tensorflow::Input predictions,
       ::tensorflow::Input targets, int64 k);
  operator ::tensorflow::Output() const { return precision; }
  operator ::tensorflow::Input() const { return precision; }
  ::tensorflow::Node* node() const { return precision.node(); }

  ::tensorflow::Output precision;
};

/// Says whether the targets are in the top `K` predictions.
///
/// This outputs a `batch_size` bool array, an entry `out[i]` is `true` if the
/// prediction for the target class is among the top `k` predictions among
/// all predictions for example `i`. Note that the behavior of `InTopK` differs
/// from the `TopK` op in its handling of ties; if multiple classes have the
/// same prediction value and straddle the top-`k` boundary, all of those
/// classes are considered to be in the top `k`.
///
/// More formally, let
///
///   \\(predictions_i\\) be the predictions for all classes for example `i`,
///   \\(targets_i\\) be the target class for example `i`,
///   \\(out_i\\) be the output for example `i`,
///
/// $$out_i = predictions_{i, targets_i} \in TopKIncludingTies(predictions_i)$$
///
/// Arguments:
/// * scope: A Scope object
/// * predictions: A `batch_size` x `classes` tensor.
/// * targets: A `batch_size` vector of class ids.
/// * k: Number of top elements to look at for computing precision.
///
/// Returns:
/// * `Output`: Computed precision at `k` as a `bool Tensor`.
class InTopKV2 {
 public:
  InTopKV2(const ::tensorflow::Scope& scope, ::tensorflow::Input predictions,
         ::tensorflow::Input targets, ::tensorflow::Input k);
  operator ::tensorflow::Output() const { return precision; }
  operator ::tensorflow::Input() const { return precision; }
  ::tensorflow::Node* node() const { return precision.node(); }

  ::tensorflow::Output precision;
};

/// L2 Loss.
///
/// Computes half the L2 norm of a tensor without the `sqrt`:
///
///     output = sum(t ** 2) / 2
///
/// Arguments:
/// * scope: A Scope object
/// * t: Typically 2-D, but may have any dimensions.
///
/// Returns:
/// * `Output`: 0-D.
class L2Loss {
 public:
  L2Loss(const ::tensorflow::Scope& scope, ::tensorflow::Input t);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  ::tensorflow::Output output;
};

/// Local Response Normalization.
///
/// The 4-D `input` tensor is treated as a 3-D array of 1-D vectors (along the last
/// dimension), and each vector is normalized independently.  Within a given vector,
/// each component is divided by the weighted, squared sum of inputs within
/// `depth_radius`.  In detail,
///
///     sqr_sum[a, b, c, d] =
///         sum(input[a, b, c, d - depth_radius : d + depth_radius + 1] ** 2)
///     output = input / (bias + alpha * sqr_sum) ** beta
///
/// For details, see [Krizhevsky et al., ImageNet classification with deep
/// convolutional neural networks (NIPS 2012)](http://papers.nips.cc/paper/4824-imagenet-classification-with-deep-convolutional-neural-networks).
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D.
///
/// Optional attributes (see `Attrs`):
/// * depth_radius: 0-D.  Half-width of the 1-D normalization window.
/// * bias: An offset (usually positive to avoid dividing by 0).
/// * alpha: A scale factor, usually positive.
/// * beta: An exponent.
///
/// Returns:
/// * `Output`: The output tensor.
class LRN {
 public:
  /// Optional attribute setters for LRN
  struct Attrs {
    /// 0-D.  Half-width of the 1-D normalization window.
    ///
    /// Defaults to 5
    Attrs DepthRadius(int64 x) {
      Attrs ret = *this;
      ret.depth_radius_ = x;
      return ret;
    }

    /// An offset (usually positive to avoid dividing by 0).
    ///
    /// Defaults to 1
    Attrs Bias(float x) {
      Attrs ret = *this;
      ret.bias_ = x;
      return ret;
    }

    /// A scale factor, usually positive.
    ///
    /// Defaults to 1
    Attrs Alpha(float x) {
      Attrs ret = *this;
      ret.alpha_ = x;
      return ret;
    }

    /// An exponent.
    ///
    /// Defaults to 0.5
    Attrs Beta(float x) {
      Attrs ret = *this;
      ret.beta_ = x;
      return ret;
    }

    int64 depth_radius_ = 5;
    float bias_ = 1.0f;
    float alpha_ = 1.0f;
    float beta_ = 0.5f;
  };
  LRN(const ::tensorflow::Scope& scope, ::tensorflow::Input input);
  LRN(const ::tensorflow::Scope& scope, ::tensorflow::Input input, const
    LRN::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DepthRadius(int64 x) {
    return Attrs().DepthRadius(x);
  }
  static Attrs Bias(float x) {
    return Attrs().Bias(x);
  }
  static Attrs Alpha(float x) {
    return Attrs().Alpha(x);
  }
  static Attrs Beta(float x) {
    return Attrs().Beta(x);
  }

  ::tensorflow::Output output;
};

/// Computes log softmax activations.
///
/// For each batch `i` and class `j` we have
///
///     logsoftmax[i, j] = logits[i, j] - log(sum(exp(logits[i])))
///
/// Arguments:
/// * scope: A Scope object
/// * logits: 2-D with shape `[batch_size, num_classes]`.
///
/// Returns:
/// * `Output`: Same shape as `logits`.
class LogSoftmax {
 public:
  LogSoftmax(const ::tensorflow::Scope& scope, ::tensorflow::Input logits);
  operator ::tensorflow::Output() const { return logsoftmax; }
  operator ::tensorflow::Input() const { return logsoftmax; }
  ::tensorflow::Node* node() const { return logsoftmax.node(); }

  ::tensorflow::Output logsoftmax;
};

/// Performs max pooling on the input.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D input to pool over.
/// * ksize: The size of the window for each dimension of the input tensor.
/// * strides: The stride of the sliding window for each dimension of the
/// input tensor.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, in_channels, in_height, in_width].
///
/// Returns:
/// * `Output`: The max pooled output tensor.
class MaxPool {
 public:
  /// Optional attribute setters for MaxPool
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, in_channels, in_height, in_width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  MaxPool(const ::tensorflow::Scope& scope, ::tensorflow::Input input, const
        gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
        StringPiece padding);
  MaxPool(const ::tensorflow::Scope& scope, ::tensorflow::Input input, const
        gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
        StringPiece padding, const MaxPool::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Performs 3D max pooling on the input.
///
/// Arguments:
/// * scope: A Scope object
/// * input: Shape `[batch, depth, rows, cols, channels]` tensor to pool over.
/// * ksize: 1-D tensor of length 5. The size of the window for each dimension of
/// the input tensor. Must have `ksize[0] = ksize[4] = 1`.
/// * strides: 1-D tensor of length 5. The stride of the sliding window for each
/// dimension of `input`. Must have `strides[0] = strides[4] = 1`.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: The data format of the input and output data. With the
/// default format "NDHWC", the data is stored in the order of:
///     [batch, in_depth, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCDHW", the data storage order is:
///     [batch, in_channels, in_depth, in_height, in_width].
///
/// Returns:
/// * `Output`: The max pooled output tensor.
class MaxPool3D {
 public:
  /// Optional attribute setters for MaxPool3D
  struct Attrs {
    /// The data format of the input and output data. With the
    /// default format "NDHWC", the data is stored in the order of:
    ///     [batch, in_depth, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCDHW", the data storage order is:
    ///     [batch, in_channels, in_depth, in_height, in_width].
    ///
    /// Defaults to "NDHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NDHWC";
  };
  MaxPool3D(const ::tensorflow::Scope& scope, ::tensorflow::Input input, const
          gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
          StringPiece padding);
  MaxPool3D(const ::tensorflow::Scope& scope, ::tensorflow::Input input, const
          gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
          StringPiece padding, const MaxPool3D::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes gradients of max pooling function.
///
/// Arguments:
/// * scope: A Scope object
/// * orig_input: The original input tensor.
/// * orig_output: The original output tensor.
/// * grad: Output backprop of shape `[batch, depth, rows, cols, channels]`.
/// * ksize: 1-D tensor of length 5. The size of the window for each dimension of
/// the input tensor. Must have `ksize[0] = ksize[4] = 1`.
/// * strides: 1-D tensor of length 5. The stride of the sliding window for each
/// dimension of `input`. Must have `strides[0] = strides[4] = 1`.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: The data format of the input and output data. With the
/// default format "NDHWC", the data is stored in the order of:
///     [batch, in_depth, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCDHW", the data storage order is:
///     [batch, in_channels, in_depth, in_height, in_width].
///
/// Returns:
/// * `Output`: The output tensor.
class MaxPool3DGrad {
 public:
  /// Optional attribute setters for MaxPool3DGrad
  struct Attrs {
    /// The data format of the input and output data. With the
    /// default format "NDHWC", the data is stored in the order of:
    ///     [batch, in_depth, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCDHW", the data storage order is:
    ///     [batch, in_channels, in_depth, in_height, in_width].
    ///
    /// Defaults to "NDHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NDHWC";
  };
  MaxPool3DGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input orig_input,
              ::tensorflow::Input orig_output, ::tensorflow::Input grad, const
              gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
              StringPiece padding);
  MaxPool3DGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input orig_input,
              ::tensorflow::Input orig_output, ::tensorflow::Input grad, const
              gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>& strides,
              StringPiece padding, const MaxPool3DGrad::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes second-order gradients of the maxpooling function.
///
/// Arguments:
/// * scope: A Scope object
/// * orig_input: The original input tensor.
/// * orig_output: The original output tensor.
/// * grad: Output backprop of shape `[batch, depth, rows, cols, channels]`.
/// * ksize: 1-D tensor of length 5. The size of the window for each dimension of
/// the input tensor. Must have `ksize[0] = ksize[4] = 1`.
/// * strides: 1-D tensor of length 5. The stride of the sliding window for each
/// dimension of `input`. Must have `strides[0] = strides[4] = 1`.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: The data format of the input and output data. With the
/// default format "NDHWC", the data is stored in the order of:
///     [batch, in_depth, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCDHW", the data storage order is:
///     [batch, in_channels, in_depth, in_height, in_width].
///
/// Returns:
/// * `Output`: Gradients of gradients w.r.t. the input to `max_pool`.
class MaxPool3DGradGrad {
 public:
  /// Optional attribute setters for MaxPool3DGradGrad
  struct Attrs {
    /// The data format of the input and output data. With the
    /// default format "NDHWC", the data is stored in the order of:
    ///     [batch, in_depth, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCDHW", the data storage order is:
    ///     [batch, in_channels, in_depth, in_height, in_width].
    ///
    /// Defaults to "NDHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NDHWC";
  };
  MaxPool3DGradGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
                  orig_input, ::tensorflow::Input orig_output,
                  ::tensorflow::Input grad, const gtl::ArraySlice<int>& ksize,
                  const gtl::ArraySlice<int>& strides, StringPiece padding);
  MaxPool3DGradGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
                  orig_input, ::tensorflow::Input orig_output,
                  ::tensorflow::Input grad, const gtl::ArraySlice<int>& ksize,
                  const gtl::ArraySlice<int>& strides, StringPiece padding,
                  const MaxPool3DGradGrad::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes second-order gradients of the maxpooling function.
///
/// Arguments:
/// * scope: A Scope object
/// * orig_input: The original input tensor.
/// * orig_output: The original output tensor.
/// * grad: 4-D.  Gradients of gradients w.r.t. the input of `max_pool`.
/// * ksize: The size of the window for each dimension of the input tensor.
/// * strides: The stride of the sliding window for each dimension of the
/// input tensor.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, in_channels, in_height, in_width].
///
/// Returns:
/// * `Output`: Gradients of gradients w.r.t. the input to `max_pool`.
class MaxPoolGradGrad {
 public:
  /// Optional attribute setters for MaxPoolGradGrad
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, in_channels, in_height, in_width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  MaxPoolGradGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
                orig_input, ::tensorflow::Input orig_output,
                ::tensorflow::Input grad, const gtl::ArraySlice<int>& ksize,
                const gtl::ArraySlice<int>& strides, StringPiece padding);
  MaxPoolGradGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
                orig_input, ::tensorflow::Input orig_output,
                ::tensorflow::Input grad, const gtl::ArraySlice<int>& ksize,
                const gtl::ArraySlice<int>& strides, StringPiece padding, const
                MaxPoolGradGrad::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes second-order gradients of the maxpooling function.
///
/// Arguments:
/// * scope: A Scope object
/// * orig_input: The original input tensor.
/// * orig_output: The original output tensor.
/// * grad: 4-D.  Gradients of gradients w.r.t. the input of `max_pool`.
/// * ksize: The size of the window for each dimension of the input tensor.
/// * strides: The stride of the sliding window for each dimension of the
/// input tensor.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, in_channels, in_height, in_width].
///
/// Returns:
/// * `Output`: Gradients of gradients w.r.t. the input to `max_pool`.
class MaxPoolGradGradV2 {
 public:
  /// Optional attribute setters for MaxPoolGradGradV2
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, in_channels, in_height, in_width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  MaxPoolGradGradV2(const ::tensorflow::Scope& scope, ::tensorflow::Input
                  orig_input, ::tensorflow::Input orig_output,
                  ::tensorflow::Input grad, ::tensorflow::Input ksize,
                  ::tensorflow::Input strides, StringPiece padding);
  MaxPoolGradGradV2(const ::tensorflow::Scope& scope, ::tensorflow::Input
                  orig_input, ::tensorflow::Input orig_output,
                  ::tensorflow::Input grad, ::tensorflow::Input ksize,
                  ::tensorflow::Input strides, StringPiece padding, const
                  MaxPoolGradGradV2::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Computes second-order gradients of the maxpooling function.
///
/// Arguments:
/// * scope: A Scope object
/// * input: The original input.
/// * grad: 4-D with shape `[batch, height, width, channels]`.  Gradients w.r.t. the
/// input of `max_pool`.
/// * argmax: The indices of the maximum values chosen for each output of `max_pool`.
/// * ksize: The size of the window for each dimension of the input tensor.
/// * strides: The stride of the sliding window for each dimension of the
/// input tensor.
/// * padding: The type of padding algorithm to use.
///
/// Returns:
/// * `Output`: Gradients of gradients w.r.t. the input of `max_pool`.
class MaxPoolGradGradWithArgmax {
 public:
  MaxPoolGradGradWithArgmax(const ::tensorflow::Scope& scope, ::tensorflow::Input
                          input, ::tensorflow::Input grad, ::tensorflow::Input
                          argmax, const gtl::ArraySlice<int>& ksize, const
                          gtl::ArraySlice<int>& strides, StringPiece padding);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  ::tensorflow::Output output;
};

/// Computes gradients of the maxpooling function.
///
/// Arguments:
/// * scope: A Scope object
/// * orig_input: The original input tensor.
/// * orig_output: The original output tensor.
/// * grad: 4-D.  Gradients w.r.t. the output of `max_pool`.
/// * ksize: The size of the window for each dimension of the input tensor.
/// * strides: The stride of the sliding window for each dimension of the
/// input tensor.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, in_channels, in_height, in_width].
///
/// Returns:
/// * `Output`: Gradients w.r.t. the input to `max_pool`.
class MaxPoolGradV2 {
 public:
  /// Optional attribute setters for MaxPoolGradV2
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, in_channels, in_height, in_width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  MaxPoolGradV2(const ::tensorflow::Scope& scope, ::tensorflow::Input orig_input,
              ::tensorflow::Input orig_output, ::tensorflow::Input grad,
              ::tensorflow::Input ksize, ::tensorflow::Input strides,
              StringPiece padding);
  MaxPoolGradV2(const ::tensorflow::Scope& scope, ::tensorflow::Input orig_input,
              ::tensorflow::Input orig_output, ::tensorflow::Input grad,
              ::tensorflow::Input ksize, ::tensorflow::Input strides,
              StringPiece padding, const MaxPoolGradV2::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Performs max pooling on the input.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D input to pool over.
/// * ksize: The size of the window for each dimension of the input tensor.
/// * strides: The stride of the sliding window for each dimension of the
/// input tensor.
/// * padding: The type of padding algorithm to use.
///
/// Optional attributes (see `Attrs`):
/// * data_format: Specify the data format of the input and output data. With the
/// default format "NHWC", the data is stored in the order of:
///     [batch, in_height, in_width, in_channels].
/// Alternatively, the format could be "NCHW", the data storage order of:
///     [batch, in_channels, in_height, in_width].
///
/// Returns:
/// * `Output`: The max pooled output tensor.
class MaxPoolV2 {
 public:
  /// Optional attribute setters for MaxPoolV2
  struct Attrs {
    /// Specify the data format of the input and output data. With the
    /// default format "NHWC", the data is stored in the order of:
    ///     [batch, in_height, in_width, in_channels].
    /// Alternatively, the format could be "NCHW", the data storage order of:
    ///     [batch, in_channels, in_height, in_width].
    ///
    /// Defaults to "NHWC"
    Attrs DataFormat(StringPiece x) {
      Attrs ret = *this;
      ret.data_format_ = x;
      return ret;
    }

    StringPiece data_format_ = "NHWC";
  };
  MaxPoolV2(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
          ::tensorflow::Input ksize, ::tensorflow::Input strides, StringPiece
          padding);
  MaxPoolV2(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
          ::tensorflow::Input ksize, ::tensorflow::Input strides, StringPiece
          padding, const MaxPoolV2::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs DataFormat(StringPiece x) {
    return Attrs().DataFormat(x);
  }

  ::tensorflow::Output output;
};

/// Performs max pooling on the input and outputs both max values and indices.
///
/// The indices in `argmax` are flattened, so that a maximum value at position
/// `[b, y, x, c]` becomes flattened index
/// `((b * height + y) * width + x) * channels + c`.
///
/// The indices returned are always in `[0, height) x [0, width)` before flattening,
/// even if padding is involved and the mathematically correct answer is outside
/// (either negative or too large).  This is a bug, but fixing it is difficult to do
/// in a safe backwards compatible way, especially due to flattening.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D with shape `[batch, height, width, channels]`.  Input to pool over.
/// * ksize: The size of the window for each dimension of the input tensor.
/// * strides: The stride of the sliding window for each dimension of the
/// input tensor.
/// * padding: The type of padding algorithm to use.
///
/// Returns:
/// * `Output` output: The max pooled output tensor.
/// * `Output` argmax: 4-D.  The flattened indices of the max values chosen for each output.
class MaxPoolWithArgmax {
 public:
  /// Optional attribute setters for MaxPoolWithArgmax
  struct Attrs {
    /// Defaults to DT_INT64
    Attrs Targmax(DataType x) {
      Attrs ret = *this;
      ret.Targmax_ = x;
      return ret;
    }

    DataType Targmax_ = DT_INT64;
  };
  MaxPoolWithArgmax(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
                  const gtl::ArraySlice<int>& ksize, const
                  gtl::ArraySlice<int>& strides, StringPiece padding);
  MaxPoolWithArgmax(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
                  const gtl::ArraySlice<int>& ksize, const
                  gtl::ArraySlice<int>& strides, StringPiece padding, const
                  MaxPoolWithArgmax::Attrs& attrs);

  static Attrs Targmax(DataType x) {
    return Attrs().Targmax(x);
  }

  ::tensorflow::Output output;
  ::tensorflow::Output argmax;
};

/// Produces the average pool of the input tensor for quantized types.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 4-D with shape `[batch, height, width, channels]`.
/// * min_input: The float value that the lowest quantized input value represents.
/// * max_input: The float value that the highest quantized input value represents.
/// * ksize: The size of the window for each dimension of the input tensor.
/// The length must be 4 to match the number of dimensions of the input.
/// * strides: The stride of the sliding window for each dimension of the input
/// tensor.  The length must be 4 to match the number of dimensions of the input.
/// * padding: The type of padding algorithm to use.
///
/// Returns:
/// * `Output` output
/// * `Output` min_output: The float value that the lowest quantized output value represents.
/// * `Output` max_output: The float value that the highest quantized output value represents.
class QuantizedAvgPool {
 public:
  QuantizedAvgPool(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
                 ::tensorflow::Input min_input, ::tensorflow::Input max_input,
                 const gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>&
                 strides, StringPiece padding);

  ::tensorflow::Output output;
  ::tensorflow::Output min_output;
  ::tensorflow::Output max_output;
};

/// Quantized Batch normalization.
///
/// This op is deprecated and will be removed in the future. Prefer
/// `tf.nn.batch_normalization`.
///
/// Arguments:
/// * scope: A Scope object
/// * t: A 4D input Tensor.
/// * t_min: The value represented by the lowest quantized input.
/// * t_max: The value represented by the highest quantized input.
/// * m: A 1D mean Tensor with size matching the last dimension of t.
/// This is the first output from tf.nn.moments,
/// or a saved moving average thereof.
/// * m_min: The value represented by the lowest quantized mean.
/// * m_max: The value represented by the highest quantized mean.
/// * v: A 1D variance Tensor with size matching the last dimension of t.
/// This is the second output from tf.nn.moments,
/// or a saved moving average thereof.
/// * v_min: The value represented by the lowest quantized variance.
/// * v_max: The value represented by the highest quantized variance.
/// * beta: A 1D beta Tensor with size matching the last dimension of t.
/// An offset to be added to the normalized tensor.
/// * beta_min: The value represented by the lowest quantized offset.
/// * beta_max: The value represented by the highest quantized offset.
/// * gamma: A 1D gamma Tensor with size matching the last dimension of t.
/// If "scale_after_normalization" is true, this tensor will be multiplied
/// with the normalized tensor.
/// * gamma_min: The value represented by the lowest quantized gamma.
/// * gamma_max: The value represented by the highest quantized gamma.
/// * variance_epsilon: A small float number to avoid dividing by 0.
/// * scale_after_normalization: A bool indicating whether the resulted tensor
/// needs to be multiplied with gamma.
///
/// Returns:
/// * `Output` result
/// * `Output` result_min
/// * `Output` result_max
class QuantizedBatchNormWithGlobalNormalization {
 public:
  QuantizedBatchNormWithGlobalNormalization(const ::tensorflow::Scope& scope,
                                          ::tensorflow::Input t,
                                          ::tensorflow::Input t_min,
                                          ::tensorflow::Input t_max,
                                          ::tensorflow::Input m,
                                          ::tensorflow::Input m_min,
                                          ::tensorflow::Input m_max,
                                          ::tensorflow::Input v,
                                          ::tensorflow::Input v_min,
                                          ::tensorflow::Input v_max,
                                          ::tensorflow::Input beta,
                                          ::tensorflow::Input beta_min,
                                          ::tensorflow::Input beta_max,
                                          ::tensorflow::Input gamma,
                                          ::tensorflow::Input gamma_min,
                                          ::tensorflow::Input gamma_max,
                                          DataType out_type, float
                                          variance_epsilon, bool
                                          scale_after_normalization);

  ::tensorflow::Output result;
  ::tensorflow::Output result_min;
  ::tensorflow::Output result_max;
};

/// Adds Tensor 'bias' to Tensor 'input' for Quantized types.
///
/// Broadcasts the values of bias on dimensions 0..N-2 of 'input'.
///
/// Arguments:
/// * scope: A Scope object
/// * bias: A 1D bias Tensor with size matching the last dimension of 'input'.
/// * min_input: The float value that the lowest quantized input value represents.
/// * max_input: The float value that the highest quantized input value represents.
/// * min_bias: The float value that the lowest quantized bias value represents.
/// * max_bias: The float value that the highest quantized bias value represents.
///
/// Returns:
/// * `Output` output
/// * `Output` min_out: The float value that the lowest quantized output value represents.
/// * `Output` max_out: The float value that the highest quantized output value represents.
class QuantizedBiasAdd {
 public:
  QuantizedBiasAdd(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
                 ::tensorflow::Input bias, ::tensorflow::Input min_input,
                 ::tensorflow::Input max_input, ::tensorflow::Input min_bias,
                 ::tensorflow::Input max_bias, DataType out_type);

  ::tensorflow::Output output;
  ::tensorflow::Output min_out;
  ::tensorflow::Output max_out;
};

/// Computes a 2D convolution given quantized 4D input and filter tensors.
///
/// The inputs are quantized tensors where the lowest value represents the real
/// number of the associated minimum, and the highest represents the maximum.
/// This means that you can only interpret the quantized output in the same way, by
/// taking the returned minimum and maximum values into account.
///
/// Arguments:
/// * scope: A Scope object
/// * filter: filter's input_depth dimension must match input's depth dimensions.
/// * min_input: The float value that the lowest quantized input value represents.
/// * max_input: The float value that the highest quantized input value represents.
/// * min_filter: The float value that the lowest quantized filter value represents.
/// * max_filter: The float value that the highest quantized filter value represents.
/// * strides: The stride of the sliding window for each dimension of the input
/// tensor.
/// * padding: The type of padding algorithm to use.
///
/// Returns:
/// * `Output` output
/// * `Output` min_output: The float value that the lowest quantized output value represents.
/// * `Output` max_output: The float value that the highest quantized output value represents.
class QuantizedConv2D {
 public:
  /// Optional attribute setters for QuantizedConv2D
  struct Attrs {
    /// Defaults to DT_QINT32
    Attrs OutType(DataType x) {
      Attrs ret = *this;
      ret.out_type_ = x;
      return ret;
    }

    DataType out_type_ = DT_QINT32;
  };
  QuantizedConv2D(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
                ::tensorflow::Input filter, ::tensorflow::Input min_input,
                ::tensorflow::Input max_input, ::tensorflow::Input min_filter,
                ::tensorflow::Input max_filter, const gtl::ArraySlice<int>&
                strides, StringPiece padding);
  QuantizedConv2D(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
                ::tensorflow::Input filter, ::tensorflow::Input min_input,
                ::tensorflow::Input max_input, ::tensorflow::Input min_filter,
                ::tensorflow::Input max_filter, const gtl::ArraySlice<int>&
                strides, StringPiece padding, const QuantizedConv2D::Attrs&
                attrs);

  static Attrs OutType(DataType x) {
    return Attrs().OutType(x);
  }

  ::tensorflow::Output output;
  ::tensorflow::Output min_output;
  ::tensorflow::Output max_output;
};

/// Produces the max pool of the input tensor for quantized types.
///
/// Arguments:
/// * scope: A Scope object
/// * input: The 4D (batch x rows x cols x depth) Tensor to MaxReduce over.
/// * min_input: The float value that the lowest quantized input value represents.
/// * max_input: The float value that the highest quantized input value represents.
/// * ksize: The size of the window for each dimension of the input tensor.
/// The length must be 4 to match the number of dimensions of the input.
/// * strides: The stride of the sliding window for each dimension of the input
/// tensor. The length must be 4 to match the number of dimensions of the input.
/// * padding: The type of padding algorithm to use.
///
/// Returns:
/// * `Output` output
/// * `Output` min_output: The float value that the lowest quantized output value represents.
/// * `Output` max_output: The float value that the highest quantized output value represents.
class QuantizedMaxPool {
 public:
  QuantizedMaxPool(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
                 ::tensorflow::Input min_input, ::tensorflow::Input max_input,
                 const gtl::ArraySlice<int>& ksize, const gtl::ArraySlice<int>&
                 strides, StringPiece padding);

  ::tensorflow::Output output;
  ::tensorflow::Output min_output;
  ::tensorflow::Output max_output;
};

/// Computes Quantized Rectified Linear: `max(features, 0)`
///
/// Arguments:
/// * scope: A Scope object
/// * min_features: The float value that the lowest quantized value represents.
/// * max_features: The float value that the highest quantized value represents.
///
/// Returns:
/// * `Output` activations: Has the same output shape as "features".
/// * `Output` min_activations: The float value that the lowest quantized value represents.
/// * `Output` max_activations: The float value that the highest quantized value represents.
class QuantizedRelu {
 public:
  /// Optional attribute setters for QuantizedRelu
  struct Attrs {
    /// Defaults to DT_QUINT8
    Attrs OutType(DataType x) {
      Attrs ret = *this;
      ret.out_type_ = x;
      return ret;
    }

    DataType out_type_ = DT_QUINT8;
  };
  QuantizedRelu(const ::tensorflow::Scope& scope, ::tensorflow::Input features,
              ::tensorflow::Input min_features, ::tensorflow::Input
              max_features);
  QuantizedRelu(const ::tensorflow::Scope& scope, ::tensorflow::Input features,
              ::tensorflow::Input min_features, ::tensorflow::Input
              max_features, const QuantizedRelu::Attrs& attrs);

  static Attrs OutType(DataType x) {
    return Attrs().OutType(x);
  }

  ::tensorflow::Output activations;
  ::tensorflow::Output min_activations;
  ::tensorflow::Output max_activations;
};

/// Computes Quantized Rectified Linear 6: `min(max(features, 0), 6)`
///
/// Arguments:
/// * scope: A Scope object
/// * min_features: The float value that the lowest quantized value represents.
/// * max_features: The float value that the highest quantized value represents.
///
/// Returns:
/// * `Output` activations: Has the same output shape as "features".
/// * `Output` min_activations: The float value that the lowest quantized value represents.
/// * `Output` max_activations: The float value that the highest quantized value represents.
class QuantizedRelu6 {
 public:
  /// Optional attribute setters for QuantizedRelu6
  struct Attrs {
    /// Defaults to DT_QUINT8
    Attrs OutType(DataType x) {
      Attrs ret = *this;
      ret.out_type_ = x;
      return ret;
    }

    DataType out_type_ = DT_QUINT8;
  };
  QuantizedRelu6(const ::tensorflow::Scope& scope, ::tensorflow::Input features,
               ::tensorflow::Input min_features, ::tensorflow::Input
               max_features);
  QuantizedRelu6(const ::tensorflow::Scope& scope, ::tensorflow::Input features,
               ::tensorflow::Input min_features, ::tensorflow::Input
               max_features, const QuantizedRelu6::Attrs& attrs);

  static Attrs OutType(DataType x) {
    return Attrs().OutType(x);
  }

  ::tensorflow::Output activations;
  ::tensorflow::Output min_activations;
  ::tensorflow::Output max_activations;
};

/// Computes Quantized Rectified Linear X: `min(max(features, 0), max_value)`
///
/// Arguments:
/// * scope: A Scope object
/// * min_features: The float value that the lowest quantized value represents.
/// * max_features: The float value that the highest quantized value represents.
///
/// Returns:
/// * `Output` activations: Has the same output shape as "features".
/// * `Output` min_activations: The float value that the lowest quantized value represents.
/// * `Output` max_activations: The float value that the highest quantized value represents.
class QuantizedReluX {
 public:
  /// Optional attribute setters for QuantizedReluX
  struct Attrs {
    /// Defaults to DT_QUINT8
    Attrs OutType(DataType x) {
      Attrs ret = *this;
      ret.out_type_ = x;
      return ret;
    }

    DataType out_type_ = DT_QUINT8;
  };
  QuantizedReluX(const ::tensorflow::Scope& scope, ::tensorflow::Input features,
               ::tensorflow::Input max_value, ::tensorflow::Input min_features,
               ::tensorflow::Input max_features);
  QuantizedReluX(const ::tensorflow::Scope& scope, ::tensorflow::Input features,
               ::tensorflow::Input max_value, ::tensorflow::Input min_features,
               ::tensorflow::Input max_features, const QuantizedReluX::Attrs&
               attrs);

  static Attrs OutType(DataType x) {
    return Attrs().OutType(x);
  }

  ::tensorflow::Output activations;
  ::tensorflow::Output min_activations;
  ::tensorflow::Output max_activations;
};

/// Computes rectified linear: `max(features, 0)`.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The activations tensor.
class Relu {
 public:
  Relu(const ::tensorflow::Scope& scope, ::tensorflow::Input features);
  operator ::tensorflow::Output() const { return activations; }
  operator ::tensorflow::Input() const { return activations; }
  ::tensorflow::Node* node() const { return activations.node(); }

  ::tensorflow::Output activations;
};

/// Computes rectified linear 6: `min(max(features, 0), 6)`.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The activations tensor.
class Relu6 {
 public:
  Relu6(const ::tensorflow::Scope& scope, ::tensorflow::Input features);
  operator ::tensorflow::Output() const { return activations; }
  operator ::tensorflow::Input() const { return activations; }
  ::tensorflow::Node* node() const { return activations.node(); }

  ::tensorflow::Output activations;
};

/// Computes scaled exponential linear: `scale * alpha * (exp(features) - 1)`
///
/// if < 0, `scale * features` otherwise.
///
/// See [Self-Normalizing Neural Networks](https://arxiv.org/abs/1706.02515)
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The activations tensor.
class Selu {
 public:
  Selu(const ::tensorflow::Scope& scope, ::tensorflow::Input features);
  operator ::tensorflow::Output() const { return activations; }
  operator ::tensorflow::Input() const { return activations; }
  ::tensorflow::Node* node() const { return activations.node(); }

  ::tensorflow::Output activations;
};

/// Computes softmax activations.
///
/// For each batch `i` and class `j` we have
///
///     softmax[i, j] = exp(logits[i, j]) / sum_j(exp(logits[i, j]))
///
/// Arguments:
/// * scope: A Scope object
/// * logits: 2-D with shape `[batch_size, num_classes]`.
///
/// Returns:
/// * `Output`: Same shape as `logits`.
class Softmax {
 public:
  Softmax(const ::tensorflow::Scope& scope, ::tensorflow::Input logits);
  operator ::tensorflow::Output() const { return softmax; }
  operator ::tensorflow::Input() const { return softmax; }
  ::tensorflow::Node* node() const { return softmax.node(); }

  ::tensorflow::Output softmax;
};

/// Computes softmax cross entropy cost and gradients to backpropagate.
///
/// Inputs are the logits, not probabilities.
///
/// Arguments:
/// * scope: A Scope object
/// * features: batch_size x num_classes matrix
/// * labels: batch_size x num_classes matrix
/// The caller must ensure that each batch of labels represents a valid
/// probability distribution.
///
/// Returns:
/// * `Output` loss: Per example loss (batch_size vector).
/// * `Output` backprop: backpropagated gradients (batch_size x num_classes matrix).
class SoftmaxCrossEntropyWithLogits {
 public:
  SoftmaxCrossEntropyWithLogits(const ::tensorflow::Scope& scope,
                              ::tensorflow::Input features, ::tensorflow::Input
                              labels);

  ::tensorflow::Output loss;
  ::tensorflow::Output backprop;
};

/// Computes softplus: `log(exp(features) + 1)`.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The activations tensor.
class Softplus {
 public:
  Softplus(const ::tensorflow::Scope& scope, ::tensorflow::Input features);
  operator ::tensorflow::Output() const { return activations; }
  operator ::tensorflow::Input() const { return activations; }
  ::tensorflow::Node* node() const { return activations.node(); }

  ::tensorflow::Output activations;
};

/// Computes softsign: `features / (abs(features) + 1)`.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The activations tensor.
class Softsign {
 public:
  Softsign(const ::tensorflow::Scope& scope, ::tensorflow::Input features);
  operator ::tensorflow::Output() const { return activations; }
  operator ::tensorflow::Input() const { return activations; }
  ::tensorflow::Node* node() const { return activations.node(); }

  ::tensorflow::Output activations;
};

/// Computes softmax cross entropy cost and gradients to backpropagate.
///
/// Unlike `SoftmaxCrossEntropyWithLogits`, this operation does not accept
/// a matrix of label probabilities, but rather a single label per row
/// of features.  This label is considered to have probability 1.0 for the
/// given row.
///
/// Inputs are the logits, not probabilities.
///
/// Arguments:
/// * scope: A Scope object
/// * features: batch_size x num_classes matrix
/// * labels: batch_size vector with values in [0, num_classes).
/// This is the label for the given minibatch entry.
///
/// Returns:
/// * `Output` loss: Per example loss (batch_size vector).
/// * `Output` backprop: backpropagated gradients (batch_size x num_classes matrix).
class SparseSoftmaxCrossEntropyWithLogits {
 public:
  SparseSoftmaxCrossEntropyWithLogits(const ::tensorflow::Scope& scope,
                                    ::tensorflow::Input features,
                                    ::tensorflow::Input labels);

  ::tensorflow::Output loss;
  ::tensorflow::Output backprop;
};

/// Finds values and indices of the `k` largest elements for the last dimension.
///
/// If the input is a vector (rank-1), finds the `k` largest entries in the vector
/// and outputs their values and indices as vectors.  Thus `values[j]` is the
/// `j`-th largest entry in `input`, and its index is `indices[j]`.
///
/// For matrices (resp. higher rank input), computes the top `k` entries in each
/// row (resp. vector along the last dimension).  Thus,
///
///     values.shape = indices.shape = input.shape[:-1] + [k]
///
/// If two elements are equal, the lower-index element appears first.
///
/// Arguments:
/// * scope: A Scope object
/// * input: 1-D or higher with last dimension at least `k`.
/// * k: 0-D.  Number of top elements to look for along the last dimension (along each
/// row for matrices).
///
/// Optional attributes (see `Attrs`):
/// * sorted: If true the resulting `k` elements will be sorted by the values in
/// descending order.
///
/// Returns:
/// * `Output` values: The `k` largest elements along each last dimensional slice.
/// * `Output` indices: The indices of `values` within the last dimension of `input`.
class TopK {
 public:
  /// Optional attribute setters for TopK
  struct Attrs {
    /// If true the resulting `k` elements will be sorted by the values in
    /// descending order.
    ///
    /// Defaults to true
    Attrs Sorted(bool x) {
      Attrs ret = *this;
      ret.sorted_ = x;
      return ret;
    }

    bool sorted_ = true;
  };
  TopK(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
     ::tensorflow::Input k);
  TopK(const ::tensorflow::Scope& scope, ::tensorflow::Input input,
     ::tensorflow::Input k, const TopK::Attrs& attrs);

  static Attrs Sorted(bool x) {
    return Attrs().Sorted(x);
  }

  ::tensorflow::Output values;
  ::tensorflow::Output indices;
};

/// @}

}  // namespace ops
}  // namespace tensorflow

#endif  // C__VISUAL_STUDIO______PROJECTS_TENSORFLOW_TENSORFLOW_CONTRIB_CMAKE_BUILD_TENSORFLOW_CC_OPS_NN_OPS_H_