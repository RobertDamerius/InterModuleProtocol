fprintf('\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n I N S T A L L   -  InterModuleProtocol\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n');

% Add directories to MATLAB path
addpath('lib');
addpath(['lib' filesep 'src']);

% Compile sources
run(['lib' filesep 'src' filesep 'build.m']);

% Save path
str = input('Save path? [y]:  ','s');
if(strcmp('y',str))
    fprintf('Saving path\n');
    savepath;
else
    fprintf('Path is not saved\n');
end
fprintf('Installation completed\n');
