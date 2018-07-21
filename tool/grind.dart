import 'package:grinder/grinder.dart';

main(args) => grind(args);

@DefaultTask('Build the project.')
build() {
  var moduleName = 'libxl_ext';
  _createLib(moduleName);
  runDartScript('bin/example.dart');
  }

void _createLib(String moduleName) {
  var includeDir = sdkDir.path + '/include';
  run('g++',arguments: ['-fPIC', '-I$includeDir','-Iinclude_cpp','-DDART_SHARED_LIB','-c','$moduleName.cc']
  , workingDirectory: 'lib');
  run('gcc',arguments: ['-shared', '-Wl,-soname,lib$moduleName.so','-olib$moduleName.so','$moduleName.o','-lxl']
      , workingDirectory: 'lib');
}



