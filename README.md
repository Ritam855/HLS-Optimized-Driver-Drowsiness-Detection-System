# 🚗 Driver Drowsiness Detection System

## 📋 Problem Statement

A **Driver Drowsiness Detection** system has been implemented using a Convolutional Neural Network (CNN) to enhance road safety by monitoring the driver's state of wakefulness. Our task was to apply High-Level Synthesis (HLS) techniques to optimize this CNN-based system for efficient hardware implementation.

### 1️⃣ Execution and Conversion
- Convert the CNN model to C using **Keras2C**.
- Synthesize the generated C files using **Vivado HLS**.

### 2️⃣ Optimization and Analysis
- Apply HLS optimization pragmas to improve the performance of the synthesized C files.
- Analyze and report on synthesis parameters such as **latency** and **resource utilization**.

## ⚙️ HLS Optimization Techniques

During the optimization phase, the following HLS optimization techniques were employed to enhance performance:

- **Loop Unrolling and Partial Loop Unrolling**: This technique increases the parallelism of loops by replicating the loop body multiple times. Partial unrolling allows fine-tuning of the trade-off between performance and resource usage by unrolling only a portion of the loop.

- **Loop Merging**: Combines adjacent loops that iterate over the same range into a single loop, reducing loop overhead and improving execution efficiency.

- **Array Partitioning**: Splits an array into smaller arrays that can be accessed independently, allowing for simultaneous read/write operations and improving memory bandwidth.

- **Loop Tiling**: Breaks down a large loop into smaller blocks or "tiles," enabling more efficient use of the cache by improving data locality and reducing memory access latency.

## 📊 Results

After applying the optimizations, we achieved a significant reduction in latency:

- **Before Optimization**: ⏱️ 4.46 seconds
- **After Optimization**: ⏱️ 0.66 seconds

This reduction highlights the effectiveness of the applied HLS techniques in enhancing the model's performance.

## 🚀 Conclusion

The project successfully demonstrated the conversion and optimization of a deep learning model for hardware implementation using High-Level Synthesis. The optimized model exhibited a substantial decrease in latency, making it more suitable for real-time applications in road safety.
