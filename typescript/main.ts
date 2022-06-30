const t = (n: bigint): bigint => {
  if (n == 1n) return n

  if (n % 2n == 0n) return t(n / 2n)
  else return t(n * 3n + 1n)
}

let i: bigint = 1n
while (true) {
  i += 1n
  console.log(`${i} -`, t(i))
}
