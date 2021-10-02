import 'dart:async';

///
/// How to use looping with asynchronus like Stream and using Timer
/// for iterate through time
///
/// Author : Danar Putra
///

void main() {
  final _controller = StreamController<int>();

  Timer.periodic(Duration(seconds: 2), (timer) {
    _controller.sink.add(timer.tick);

    /// After reached 100 looping with sleep 2 second
    /// we should cancel it to avoid infinity looping
    if (timer.tick == 100) {
      timer.cancel();
      _controller.close();
    }
  });
}
