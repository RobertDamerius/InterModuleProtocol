% Add directories to MATLAB path
addpath('lib');
addpath(['lib' filesep 'driver']);

% Save path settings
savepath;

% Compile sources
run(['lib' filesep 'driver' filesep 'build.m']);
