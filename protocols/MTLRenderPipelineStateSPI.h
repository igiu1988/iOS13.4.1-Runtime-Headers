/* Generated by EzioChiu.
 */

@protocol MTLRenderPipelineStateSPI <MTLRenderPipelineState>

@required

- (MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
- (unsigned int)getFragmentShaderTelemetryID;
- (unsigned int)getVertexShaderTelemetryID;
- (NSData *)newFragmentShaderDebugInfo;
- (NSData *)newVertexShaderDebugInfo;
- (unsigned long long)uniqueIdentifier;
- (MTLDebugInstrumentationData *)vertexDebugInstrumentationData;

@optional

- (unsigned long long)resourceIndex;
- (void)setResourceIndex:(unsigned long long)arg1;

@end
