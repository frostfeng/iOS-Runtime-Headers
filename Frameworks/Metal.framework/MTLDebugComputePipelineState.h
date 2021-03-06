/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState {
    MTLComputePipelineDescriptor *_descriptor;
    <MTLFunction> *_function;
    MTLComputePipelineReflection *_reflection;
}

@property (nonatomic, readonly) MTLComputePipelineDescriptor *descriptor;
@property (nonatomic, readonly) <MTLFunction> *function;
@property (nonatomic, readonly) MTLComputePipelineReflection *reflection;

- (void).cxx_destruct;
- (id)description;
- (id)descriptor;
- (id)function;
- (id)getParameter:(id)arg1;
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (id)reflection;

@end
