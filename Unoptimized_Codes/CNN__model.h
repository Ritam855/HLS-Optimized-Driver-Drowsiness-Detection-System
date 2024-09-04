#pragma once 
#include "./include/k2c_tensor_include.h" 
//void CNN__model(k2c_tensor* conv2d_input_input, k2c_tensor* dense_2_output); 
void CNN__model(float conv2d_input_input_array[], size_t conv2d_input_input_ndim, size_t conv2d_input_input_numel, size_t conv2d_input_input_shape[], 
               float dense2_output_array[], size_t dense2_output_ndim, size_t dense2_output_numel, size_t dense2_output_shape[]);
void CNN__model_initialize(); 
void CNN__model_terminate(); 
