fprintf('\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n U N I N S T A L L   -  InterModuleProtocol\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n');

% Remove directories from MATLAB path
rmpath('lib');
rmpath(['lib' filesep 'driver']);

% Save path
savepath;
fprintf('Uninstallation completed\n');
