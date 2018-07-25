import 'package:grinder/grinder.dart';

main(args) => grind(args);

@DefaultTask('Build the project.')
build() {
  runDartScript('tool/generator.dart');
  var moduleName = 'libxl_ext';
  _createLib(moduleName);
  runDartScript('bin/example.dart');
  }

void _createLib(String moduleName) {
  var includeDir = sdkDir.path + '/include';
  run('g++',arguments: ['-fPIC', '-I$includeDir','-Iinclude_c','-DDART_SHARED_LIB','-c','$moduleName.cc']
  , workingDirectory: 'lib/src/c');
  run('gcc',arguments: ['-shared', '-Wl,-soname,lib$moduleName.so','-olib$moduleName.so','$moduleName.o','-lxl']
      , workingDirectory: 'lib/src/c');
}



