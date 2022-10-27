function makeInfo = rtwmakecfg()
%RTWMAKECFG adds include and source directories to the make files.
%    makeInfo=
%    Simulink version    : 10.6 (R2022b) 13-May-2022
%    MATLAB file generated on : 27-Oct-2022 13:38:18

% Verify the Simulink version
verify_simulink_version();

% Get the current directory
currDir = pwd;

% Get the MATLAB search path, remove the toolbox sub-directories except LCT demos
matlabPath = legacycode.lct.util.getSearchPath();

% Declare cell arrays for storing the paths
allIncPaths = {};
allSrcPaths = {};

% Get the build type
isSimTarget = is_simulation_target();
% Get the serialized paths information
info = get_serialized_info();

% Get all S-Function's name in the current model
sfunNames = {};
if ~isempty(bdroot)
    sfunBlks = find_system(bdroot,...
        'MatchFilter', @Simulink.match.allVariants, ...
        'LookUnderMasks', 'all',...
        'FollowLinks', 'on',...
        'BlockType', 'S-Function'...
    );
    sfunNames = get_param(sfunBlks, 'FunctionName');
end

for ii = 1:numel(info)
    sfunInfo = info(ii);
    % If the S-Function isn't part of the current build then skip its path info
    if ~any(strcmp(sfunInfo.SFunctionName, sfunNames))
        continue
    end

    % Call the helper
    pathInfo = legacycode.lct.util.resolvePaths(sfunInfo, isSimTarget==1, currDir, matlabPath);

    % Concatenate known include and source directories
    allIncPaths = RTW.uniquePath([allIncPaths pathInfo.IncPaths(:)']);
    allSrcPaths = RTW.uniquePath([allSrcPaths pathInfo.SrcPaths(:)']);
end

% Additional include directories
makeInfo.includePath = correct_path_name(allIncPaths);

% Additional source directories
makeInfo.sourcePath = correct_path_name(allSrcPaths);

%% ------------------------------------------------------------------------
function info = get_serialized_info()

% Allocate the output structure array
info(1:14) = struct(...
    'SFunctionName', '',...
    'IncPaths', {{}},...
    'SrcPaths', {{}},...
    'LibPaths', {{}},...
    'SourceFiles', {{}},...
    'HostLibFiles', {{}},...
    'TargetLibFiles', {{}},...
    'singleCPPMexFile', false,...
    'Language', ''...
    );

info(1).SFunctionName = 'SFunctionIMPDriverInfoRequestEncode';
info(1).IncPaths = {'../../source/InterModuleProtocol'};
info(1).SrcPaths = {'../../source/InterModuleProtocol'};
info(1).SourceFiles = {'IMP_DriverInfoRequestEncode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(1).Language = 'C++';

info(2).SFunctionName = 'SFunctionIMPDriverInfoRequestDecode';
info(2).IncPaths = {'../../source/InterModuleProtocol'};
info(2).SrcPaths = {'../../source/InterModuleProtocol'};
info(2).SourceFiles = {'IMP_DriverInfoRequestDecode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(2).Language = 'C++';

info(3).SFunctionName = 'SFunctionIMPDriverInfoResponseEncode';
info(3).IncPaths = {'../../source/InterModuleProtocol'};
info(3).SrcPaths = {'../../source/InterModuleProtocol'};
info(3).SourceFiles = {'IMP_DriverInfoResponseEncode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(3).Language = 'C++';

info(4).SFunctionName = 'SFunctionIMPDriverInfoResponseDecode';
info(4).IncPaths = {'../../source/InterModuleProtocol'};
info(4).SrcPaths = {'../../source/InterModuleProtocol'};
info(4).SourceFiles = {'IMP_DriverInfoResponseDecode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(4).Language = 'C++';

info(5).SFunctionName = 'SFunctionIMPDriverGuidanceEncode';
info(5).IncPaths = {'../../source/InterModuleProtocol'};
info(5).SrcPaths = {'../../source/InterModuleProtocol'};
info(5).SourceFiles = {'IMP_DriverGuidanceEncode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(5).Language = 'C++';

info(6).SFunctionName = 'SFunctionIMPDriverGuidanceDecode';
info(6).IncPaths = {'../../source/InterModuleProtocol'};
info(6).SrcPaths = {'../../source/InterModuleProtocol'};
info(6).SourceFiles = {'IMP_DriverGuidanceDecode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(6).Language = 'C++';

info(7).SFunctionName = 'SFunctionIMPDriverLogEncode';
info(7).IncPaths = {'../../source/InterModuleProtocol'};
info(7).SrcPaths = {'../../source/InterModuleProtocol'};
info(7).SourceFiles = {'IMP_DriverLogEncode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(7).Language = 'C++';

info(8).SFunctionName = 'SFunctionIMPDriverLogDecode';
info(8).IncPaths = {'../../source/InterModuleProtocol'};
info(8).SrcPaths = {'../../source/InterModuleProtocol'};
info(8).SourceFiles = {'IMP_DriverLogDecode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(8).Language = 'C++';

info(9).SFunctionName = 'SFunctionIMPDriverNavigationEncode';
info(9).IncPaths = {'../../source/InterModuleProtocol'};
info(9).SrcPaths = {'../../source/InterModuleProtocol'};
info(9).SourceFiles = {'IMP_DriverNavigationEncode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(9).Language = 'C++';

info(10).SFunctionName = 'SFunctionIMPDriverNavigationDecode';
info(10).IncPaths = {'../../source/InterModuleProtocol'};
info(10).SrcPaths = {'../../source/InterModuleProtocol'};
info(10).SourceFiles = {'IMP_DriverNavigationDecode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(10).Language = 'C++';

info(11).SFunctionName = 'SFunctionIMPDriverConvexPolygonEncode';
info(11).IncPaths = {'../../source/InterModuleProtocol'};
info(11).SrcPaths = {'../../source/InterModuleProtocol'};
info(11).SourceFiles = {'IMP_DriverConvexPolygonEncode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(11).Language = 'C++';

info(12).SFunctionName = 'SFunctionIMPDriverConvexPolygonDecode';
info(12).IncPaths = {'../../source/InterModuleProtocol'};
info(12).SrcPaths = {'../../source/InterModuleProtocol'};
info(12).SourceFiles = {'IMP_DriverConvexPolygonDecode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(12).Language = 'C++';

info(13).SFunctionName = 'SFunctionIMPDriverGuidanceTrajectoryEncode';
info(13).IncPaths = {'../../source/InterModuleProtocol'};
info(13).SrcPaths = {'../../source/InterModuleProtocol'};
info(13).SourceFiles = {'IMP_DriverGuidanceTrajectoryEncode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(13).Language = 'C++';

info(14).SFunctionName = 'SFunctionIMPDriverGuidanceTrajectoryDecode';
info(14).IncPaths = {'../../source/InterModuleProtocol'};
info(14).SrcPaths = {'../../source/InterModuleProtocol'};
info(14).SourceFiles = {'IMP_DriverGuidanceTrajectoryDecode.cpp', 'InterModuleProtocol.cpp', 'IMPConvexPolygon.cpp', 'IMPState.cpp', 'IMPStateConfiguration.cpp'};
info(14).Language = 'C++';

%% ------------------------------------------------------------------------
function verify_simulink_version()

% Retrieve Simulink version
slVerStruct = ver('simulink');
slVer = str2double(strsplit(slVerStruct.Version,'.'));
% Verify that the actual platform supports the function used
if slVer(1)<8 || (slVer(1)==8 && slVer(2)<7)
    DAStudio.error('Simulink:tools:LCTErrorBadSimulinkVersion', slVerStruct.Version)
end

%% ------------------------------------------------------------------------
function pathSet = correct_path_name(pathSet)

for ii = 1:numel(pathSet)
    pathSet{ii} = coder.make.internal.transformPaths(pathSet{ii});
end
pathSet = RTW.uniquePath(pathSet);

%% ------------------------------------------------------------------------
function isSimTarget = is_simulation_target()

% Default output value
isSimTarget = 0;

% Get the current model and the code generation type to decide
% if we must link with the host libraries or with the target libraries
try
    modelName = get_param(0, 'CurrentSystem');
    if ~isempty(modelName)
        modelName = bdroot(modelName);
        sysTarget = get_param(modelName, 'RTWSystemTargetFile');
        isSimTarget = ~isempty([strfind(sysTarget, 'rtwsfcn') strfind(sysTarget, 'accel')]);

        mdlRefSimTarget = get_param(modelName,'ModelReferenceTargetType');
        isSimTarget = strcmpi(mdlRefSimTarget, 'SIM') || isSimTarget;

        % Verify again it's not Accelerator
        if ~isSimTarget
            simMode = get_param(modelName, 'SimulationMode');
            simStat = get_param(modelName, 'SimulationStatus');
            isSimTarget = strcmp(simStat, 'initializing') & strcmp(simMode, 'accelerator');
        end
    end
catch
end
