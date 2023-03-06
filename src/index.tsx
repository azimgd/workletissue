const Workletissue = require('./NativeWorkletissue').default;

export function multiply(a: number, b: number): number {
  return Workletissue.multiply(a, b);
}
