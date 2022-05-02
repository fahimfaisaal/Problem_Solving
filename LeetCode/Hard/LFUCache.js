class FrequencyMap extends Map {
  static get [Symbol.species]() { return Map; }

  refreshNode(oldNode) {
    const { frequency } = oldNode;
    const freqSet = this.get(frequency);
    freqSet.delete(oldNode)

    oldNode.frequency++

    this.insertNode(oldNode)
  }

  insertNode(node) {
    const { frequency } = node;

    if (!this.has(frequency)) {
      this.set(frequency, new Set())
    }

    this.get(frequency).add(node)
  }
}

class LFUCache {
  constructor(capacity) {
    this.freqCache = new FrequencyMap()
    this.cache = new Map()
    this.capacity = capacity
  }

  get(key) {
    if (this.cache.has(key)) {
      const oldNode = this.cache.get(key)
      this.freqCache.refreshNode(oldNode)

      return oldNode.value;
    }

    return -1
  }

  put(key, value) {
    if (this.capacity === 0) {
      return this
    }

    if (this.cache.has(key)) {
      const oldNode = this.cache.get(key)
      oldNode.value = value

      this.freqCache.refreshNode(oldNode)

      return this
    }

    // if the cache size is full, then it's delete the Least Frequency Used node
    if (this.capacity === this.cache.size) {
      const freqCacheIterator = this.freqCache.keys()
      let leastFrequency = freqCacheIterator.next().value;

      // select the non-empty frequency set
      while (this.freqCache.get(leastFrequency).size === 0) {
        leastFrequency = freqCacheIterator.next().value
      }

      const leastFreqSet = this.freqCache.get(leastFrequency)
      // Select the least recently used node from the least Frequency set
      const LRUNode = leastFreqSet.values().next().value

      leastFreqSet.delete(LRUNode)
      this.cache.delete(LRUNode.key)
    }

    const newNode = { key, value, frequency: 1 }

    this.cache.set(key, newNode)
    this.freqCache.insertNode(newNode)

    return this
  }

  toString(indent = 2) {
    const replacer = (_, value) => {
      if (value instanceof Set) {
        return [...value]
      }

      if (value instanceof Map) {
        return Object.fromEntries(value)
      }

      return value
    }

    return JSON.stringify(this, replacer, indent)
  }
}
