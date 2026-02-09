using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Graph
{
    public class Range : IEnumerable<int>
    {
        private readonly int _start;
        private readonly int _count;

        public Range(int start, int count)
        {
            _start = start;
            _count = count;
        }

        public IEnumerator<int> GetEnumerator()
        {
            return new RangeEnumerator(_start, _count);
        }

        IEnumerator IEnumerable.GetEnumerator() => GetEnumerator();

        private class RangeEnumerator : IEnumerator<int>
        {
            private readonly int _start;
            private readonly int _count;
            private int _index = -1;

            public RangeEnumerator(int start, int count)
            {
                _start = start;
                _count = count;
            }

            public int Current => _start + _index;
            object IEnumerator.Current => Current;

            public bool MoveNext()
            {
                _index++;
                return _index < _count;
            }

            public void Reset()
            {
                _index = -1;
            }

            public void Dispose() { }
        }
    }

}
