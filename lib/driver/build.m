defs = [];
directorySource = ['..' filesep '..' filesep 'source' filesep 'InterModuleProtocol'];


% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% Driver: Info Request Encode
% ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def = legacy_code('initialize');
def.SFunctionName = 'SFunctionDriverInfoRequestEncode';
def.StartFcnSpec  = 'void CreateDriverInfoRequestEncode()';
def.OutputFcnSpec = 'void OutputDriverInfoRequestEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1)';
def.TerminateFcnSpec = 'void DeleteDriverInfoRequestEncode()';
def.HeaderFiles   = {'DriverInfoRequestEncode.h'};
def.SourceFiles   = {'DriverInfoRequestEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverInfoRequestDecode';
def.StartFcnSpec  = 'void CreateDriverInfoRequestDecode()';
def.OutputFcnSpec = 'void OutputDriverInfoRequestDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1])';
def.TerminateFcnSpec = 'void DeleteDriverInfoRequestDecode()';
def.HeaderFiles   = {'DriverInfoRequestDecode.h'};
def.SourceFiles   = {'DriverInfoRequestDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverInfoResponseEncode';
def.StartFcnSpec  = 'void CreateDriverInfoResponseEncode()';
def.OutputFcnSpec = 'void OutputDriverInfoResponseEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, double u2[3], double u3[3], uint8 u4[p2], uint32 u5, uint8 u6[p2], uint32 u7, uint32 p2)';
def.TerminateFcnSpec = 'void DeleteDriverInfoResponseEncode()';
def.HeaderFiles   = {'DriverInfoResponseEncode.h'};
def.SourceFiles   = {'DriverInfoResponseEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverInfoResponseDecode';
def.StartFcnSpec  = 'void CreateDriverInfoResponseDecode()';
def.OutputFcnSpec = 'void OutputDriverInfoResponseDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], double y3[3], double y4[3], uint8 y5[p1], uint8 y6[p1], uint32 p1)';
def.TerminateFcnSpec = 'void DeleteDriverInfoResponseDecode()';
def.HeaderFiles   = {'DriverInfoResponseDecode.h'};
def.SourceFiles   = {'DriverInfoResponseDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverGuidanceEncode';
def.StartFcnSpec  = 'void CreateDriverGuidanceEncode()';
def.OutputFcnSpec = 'void OutputDriverGuidanceEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, uint8 u2[11], uint8 u3[13], double u4[32])';
def.TerminateFcnSpec = 'void DeleteDriverGuidanceEncode()';
def.HeaderFiles   = {'DriverGuidanceEncode.h'};
def.SourceFiles   = {'DriverGuidanceEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverGuidanceDecode';
def.StartFcnSpec  = 'void CreateDriverGuidanceDecode()';
def.OutputFcnSpec = 'void OutputDriverGuidanceDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], uint8 y3[11], uint8 y4[13], double y5[32])';
def.TerminateFcnSpec = 'void DeleteDriverGuidanceDecode()';
def.HeaderFiles   = {'DriverGuidanceDecode.h'};
def.SourceFiles   = {'DriverGuidanceDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverLogEncode';
def.StartFcnSpec  = 'void CreateDriverLogEncode()';
def.OutputFcnSpec = 'void OutputDriverLogEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, uint8 u2[3], uint8 u3[p2], uint32 p2, uint32 u4)';
def.TerminateFcnSpec = 'void DeleteDriverLogEncode()';
def.HeaderFiles   = {'DriverLogEncode.h'};
def.SourceFiles   = {'DriverLogEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverLogDecode';
def.StartFcnSpec  = 'void CreateDriverLogDecode()';
def.OutputFcnSpec = 'void OutputDriverLogDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], uint8 y3[3], uint8 y4[p1], uint32 p1)';
def.TerminateFcnSpec = 'void DeleteDriverLogDecode()';
def.HeaderFiles   = {'DriverLogDecode.h'};
def.SourceFiles   = {'DriverLogDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverNavigationEncode';
def.StartFcnSpec  = 'void CreateDriverNavigationEncode()';
def.OutputFcnSpec = 'void OutputDriverNavigationEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, uint8 u2[11], uint8 u3[13], double u4[32])';
def.TerminateFcnSpec = 'void DeleteDriverNavigationEncode()';
def.HeaderFiles   = {'DriverNavigationEncode.h'};
def.SourceFiles   = {'DriverNavigationEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverNavigationDecode';
def.StartFcnSpec  = 'void CreateDriverNavigationDecode()';
def.OutputFcnSpec = 'void OutputDriverNavigationDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], uint8 y3[11], uint8 y4[13], double y5[32])';
def.TerminateFcnSpec = 'void DeleteDriverNavigationDecode()';
def.HeaderFiles   = {'DriverNavigationDecode.h'};
def.SourceFiles   = {'DriverNavigationDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverConvexPolygonEncode';
def.StartFcnSpec  = 'void CreateDriverConvexPolygonEncode()';
def.OutputFcnSpec = 'void OutputDriverConvexPolygonEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, uint8 u2, uint8 u3, double u4[3], double u5[2*255*p2], uint16 p2, uint8 u6[p2], uint16 u7[p2], uint8 u8[p2], double u9[p2], double u10[p2], double u11[p2], uint16 u12)';
def.TerminateFcnSpec = 'void DeleteDriverConvexPolygonEncode()';
def.HeaderFiles   = {'DriverConvexPolygonEncode.h'};
def.SourceFiles   = {'DriverConvexPolygonEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverConvexPolygonDecode';
def.StartFcnSpec  = 'void CreateDriverConvexPolygonDecode()';
def.OutputFcnSpec = 'void OutputDriverConvexPolygonDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], uint8 y3[1], uint8 y4[1], double y5[3], double y6[2*255*p1], uint16 p1, uint8 y7[p1], uint16 y8[p1], uint8 y9[p1], double y10[p1], double y11[p1], double y12[p1], uint16 y13[1])';
def.TerminateFcnSpec = 'void DeleteDriverConvexPolygonDecode()';
def.HeaderFiles   = {'DriverConvexPolygonDecode.h'};
def.SourceFiles   = {'DriverConvexPolygonDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverGuidanceTrajectoryEncode';
def.StartFcnSpec  = 'void CreateDriverGuidanceTrajectoryEncode()';
def.OutputFcnSpec = 'void OutputDriverGuidanceTrajectoryEncode(uint8 y1[p1], uint32 y2[1], uint32 p1, double u1, int32 u2, int32 u3, int32 u4, double u5, double u6, uint8 u7[11], uint8 u8[13], double u9[32*p2], uint32 p2, uint32 u10)';
def.TerminateFcnSpec = 'void DeleteDriverGuidanceTrajectoryEncode()';
def.HeaderFiles   = {'DriverGuidanceTrajectoryEncode.h'};
def.SourceFiles   = {'DriverGuidanceTrajectoryEncode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
def.SFunctionName = 'SFunctionDriverGuidanceTrajectoryDecode';
def.StartFcnSpec  = 'void CreateDriverGuidanceTrajectoryDecode()';
def.OutputFcnSpec = 'void OutputDriverGuidanceTrajectoryDecode(uint8 u1[], uint32 u2, int32 y1[1], double y2[1], int32 y3[1], int32 y4[1], int32 y5[1], double y6[1], double y7[1], uint8 y8[11], uint8 y9[13], double y10[32*p1], uint32 p1, uint32 y11[1])';
def.TerminateFcnSpec = 'void DeleteDriverGuidanceTrajectoryDecode()';
def.HeaderFiles   = {'DriverGuidanceTrajectoryDecode.h'};
def.SourceFiles   = {'DriverGuidanceTrajectoryDecode.cpp','InterModuleProtocol.cpp','IMPConvexPolygon.cpp','IMPState.cpp','IMPStateConfiguration.cpp'};
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
