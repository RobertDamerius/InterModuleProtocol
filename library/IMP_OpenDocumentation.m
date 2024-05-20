function IMP_OpenDocumentation(anchor)
    if nargin < 1
        anchor = '';
    end
    page = strcat('InterModuleProtocol.html',anchor);
    thisDirectory = extractBefore(mfilename('fullpath'),strlength(mfilename('fullpath')) - strlength(mfilename) + 1);
    htmlFile = fullfile(thisDirectory, '..', 'documentation', page);
    web(htmlFile);
end

