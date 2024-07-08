const Moduleonly = require('./NativeModuleonly').default;

export function multiply(a: number, b: number): number {
  return Moduleonly.multiply(a, b);
}
