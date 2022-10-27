defs = [];
directorySource = ['..' filesep '..' filesep 'source' filesep 'InterModuleProtocol'];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Info Request Encode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverInfoRequestEncode';
def.StartFcnSpec  = 'void IMP_CreateDriverInfoRequestEncode()';
def.OutputFcnSpec = 'void IMP_OutputDriverInfoRequestEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1)';
def.TerminateFcnSpec = 'void IMP_DeleteDriverInfoRequestEncode()';
def.HeaderFiles   = {'IMP_DriverInfoRequestEncode.h'};
def.SourceFiles   = {'IMP_DriverInfoRequestEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Info Request Decode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverInfoRequestDecode';
def.StartFcnSpec  = 'void IMP_CreateDriverInfoRequestDecode()';
def.OutputFcnSpec = 'void IMP_OutputDriverInfoRequestDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1])';
def.TerminateFcnSpec = 'void IMP_DeleteDriverInfoRequestDecode()';
def.HeaderFiles   = {'IMP_DriverInfoRequestDecode.h'};
def.SourceFiles   = {'IMP_DriverInfoRequestDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Info Response Encode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverInfoResponseEncode';
def.StartFcnSpec  = 'void IMP_CreateDriverInfoResponseEncode()';
def.OutputFcnSpec = 'void IMP_OutputDriverInfoResponseEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, double u2[3], double u3[3], uint8 u4[p2], uint32 u5, uint8 u6[p2], uint32 u7, uint32 p2)';
def.TerminateFcnSpec = 'void IMP_DeleteDriverInfoResponseEncode()';
def.HeaderFiles   = {'IMP_DriverInfoResponseEncode.h'};
def.SourceFiles   = {'IMP_DriverInfoResponseEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Info Response Decode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverInfoResponseDecode';
def.StartFcnSpec  = 'void IMP_CreateDriverInfoResponseDecode()';
def.OutputFcnSpec = 'void IMP_OutputDriverInfoResponseDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], double y3[3], double y4[3], uint8 y5[p1], uint8 y6[p1], uint32 p1)';
def.TerminateFcnSpec = 'void IMP_DeleteDriverInfoResponseDecode()';
def.HeaderFiles   = {'IMP_DriverInfoResponseDecode.h'};
def.SourceFiles   = {'IMP_DriverInfoResponseDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Guidance Encode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverGuidanceEncode';
def.StartFcnSpec  = 'void IMP_CreateDriverGuidanceEncode()';
def.OutputFcnSpec = 'void IMP_OutputDriverGuidanceEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, uint8 u2[11], uint8 u3[13], double u4[32])';
def.TerminateFcnSpec = 'void IMP_DeleteDriverGuidanceEncode()';
def.HeaderFiles   = {'IMP_DriverGuidanceEncode.h'};
def.SourceFiles   = {'IMP_DriverGuidanceEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Guidance Decode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverGuidanceDecode';
def.StartFcnSpec  = 'void IMP_CreateDriverGuidanceDecode()';
def.OutputFcnSpec = 'void IMP_OutputDriverGuidanceDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], uint8 y3[11], uint8 y4[13], double y5[32])';
def.TerminateFcnSpec = 'void IMP_DeleteDriverGuidanceDecode()';
def.HeaderFiles   = {'IMP_DriverGuidanceDecode.h'};
def.SourceFiles   = {'IMP_DriverGuidanceDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Log Encode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverLogEncode';
def.StartFcnSpec  = 'void IMP_CreateDriverLogEncode()';
def.OutputFcnSpec = 'void IMP_OutputDriverLogEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, uint8 u2[3], uint8 u3[p2], uint32 p2, uint32 u4)';
def.TerminateFcnSpec = 'void IMP_DeleteDriverLogEncode()';
def.HeaderFiles   = {'IMP_DriverLogEncode.h'};
def.SourceFiles   = {'IMP_DriverLogEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Log Decode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverLogDecode';
def.StartFcnSpec  = 'void IMP_CreateDriverLogDecode()';
def.OutputFcnSpec = 'void IMP_OutputDriverLogDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], uint8 y3[3], uint8 y4[p1], uint32 p1)';
def.TerminateFcnSpec = 'void IMP_DeleteDriverLogDecode()';
def.HeaderFiles   = {'IMP_DriverLogDecode.h'};
def.SourceFiles   = {'IMP_DriverLogDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Navigation Encode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverNavigationEncode';
def.StartFcnSpec  = 'void IMP_CreateDriverNavigationEncode()';
def.OutputFcnSpec = 'void IMP_OutputDriverNavigationEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, uint8 u2[11], uint8 u3[13], double u4[32])';
def.TerminateFcnSpec = 'void IMP_DeleteDriverNavigationEncode()';
def.HeaderFiles   = {'IMP_DriverNavigationEncode.h'};
def.SourceFiles   = {'IMP_DriverNavigationEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Navigation Decode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverNavigationDecode';
def.StartFcnSpec  = 'void IMP_CreateDriverNavigationDecode()';
def.OutputFcnSpec = 'void IMP_OutputDriverNavigationDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], uint8 y3[11], uint8 y4[13], double y5[32])';
def.TerminateFcnSpec = 'void IMP_DeleteDriverNavigationDecode()';
def.HeaderFiles   = {'IMP_DriverNavigationDecode.h'};
def.SourceFiles   = {'IMP_DriverNavigationDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Convex Polygon Encode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverConvexPolygonEncode';
def.StartFcnSpec  = 'void IMP_CreateDriverConvexPolygonEncode()';
def.OutputFcnSpec = 'void IMP_OutputDriverConvexPolygonEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, uint8 u2, uint8 u3, double u4[3], double u5[2*255*p2], uint16 p2, uint8 u6[p2], uint16 u7[p2], uint8 u8[p2], double u9[p2], double u10[p2], double u11[p2], uint16 u12)';
def.TerminateFcnSpec = 'void IMP_DeleteDriverConvexPolygonEncode()';
def.HeaderFiles   = {'IMP_DriverConvexPolygonEncode.h'};
def.SourceFiles   = {'IMP_DriverConvexPolygonEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Convex Polygon Decode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverConvexPolygonDecode';
def.StartFcnSpec  = 'void IMP_CreateDriverConvexPolygonDecode()';
def.OutputFcnSpec = 'void IMP_OutputDriverConvexPolygonDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], uint8 y3[1], uint8 y4[1], double y5[3], double y6[2*255*p1], uint16 p1, uint8 y7[p1], uint16 y8[p1], uint8 y9[p1], double y10[p1], double y11[p1], double y12[p1], uint16 y13[1])';
def.TerminateFcnSpec = 'void IMP_DeleteDriverConvexPolygonDecode()';
def.HeaderFiles   = {'IMP_DriverConvexPolygonDecode.h'};
def.SourceFiles   = {'IMP_DriverConvexPolygonDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Guidance Trajectory Encode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverGuidanceTrajectoryEncode';
def.StartFcnSpec  = 'void IMP_CreateDriverGuidanceTrajectoryEncode()';
def.OutputFcnSpec = 'void IMP_OutputDriverGuidanceTrajectoryEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, int32 u2, int32 u3, int32 u4, double u5, double u6, uint8 u7[11], uint8 u8[13], double u9[32*p2], uint32 p2, uint32 u10)';
def.TerminateFcnSpec = 'void IMP_DeleteDriverGuidanceTrajectoryEncode()';
def.HeaderFiles   = {'IMP_DriverGuidanceTrajectoryEncode.h'};
def.SourceFiles   = {'IMP_DriverGuidanceTrajectoryEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Guidance Trajectory Decode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionIMPDriverGuidanceTrajectoryDecode';
def.StartFcnSpec  = 'void IMP_CreateDriverGuidanceTrajectoryDecode()';
def.OutputFcnSpec = 'void IMP_OutputDriverGuidanceTrajectoryDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], int32 y3[1], int32 y4[1], int32 y5[1], double y6[1], double y7[1], uint8 y8[11], uint8 y9[13], double y10[32*p1], uint32 p1, uint32 y11[1])';
def.TerminateFcnSpec = 'void IMP_DeleteDriverGuidanceTrajectoryDecode()';
def.HeaderFiles   = {'IMP_DriverGuidanceTrajectoryDecode.h'};
def.SourceFiles   = {'IMP_DriverGuidanceTrajectoryDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
def.IncPaths      = {directorySource};
def.SrcPaths      = {directorySource};
def.Options.language = 'C++';
def.Options.useTlcWithAccel = false;
def.SampleTime = 'parameterized';
defs = [defs; def];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Compile and generate all required files (ends up with simulink blocks)
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Generate SFunctions
legacy_code('sfcn_cmex_generate', defs);

% Compile
if(ispc())
    includes = {''};
    libraries = {'-DIMP_DONT_INCLUDE_NETWORK_HEADERS'};
elseif(isunix())
    includes = {''};
    libraries = {''};
else
    warning('Compiling may not work for your operating system!');
    includes = {''};
    libraries = {''};
end
legacy_code('compile', defs, {includes{:}, libraries{:}});

% Generate TLC
legacy_code('sfcn_tlc_generate', defs);

% Generate RTWMAKECFG
legacy_code('rtwmakecfg_generate', defs);

% Generate Simulink blocks
% legacy_code('slblock_generate', defs);

% Clean up
clear def defs directorySource includes libraries;
