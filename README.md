bridgebuilder
=============

BridgeBuilder efficiently remaps BAM/SAM reads to a new reference by first building a "bridge" reference, first mapping to that bridge, and then remapping only a subset of reads to the full new reference. 


The [BridgeBuilder System] [1] consists of several components, including [Baker] [2], [Binnie] [3], [Brunel] [4], & [Brindley] [5] and also relies on [samtools/htslib] [6] for SAM/BAM manipulations and is currently tested using [bwa] [7] for mapping (although it could potentially be useful for other aligners as well).

![BridgeBuilder System Diagram][1]


Note: The usage of a range of years within a copyright statement contained within this distribution should be interpreted as being equivalent to a list of years including the first and last year specified and all consecutive years between them. For example, a copyright statement that reads 'Copyright (c) 2005, 2007- 2009, 2011-2012' should be interpreted as being identical to a statement that reads 'Copyright (c) 2005, 2007, 2008, 2009, 2011, 2012' and a copyright statement that reads "Copyright (c) 2005-2012' should be interpreted as being identical to a statement that reads 'Copyright (c) 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012'."


[1]: docs/bridge_builder_v1.png           "BridgeBuilder System Diagram"
[2]: baker/README.md                      "Baker"
[3]: binnie/README.md                     "Binnie"
[4]: brunel/README.md                     "Brunel"
[5]: brindley/README.md                   "Brindley"
[6]: http://www.htslib.org/               "samtools/htslib"
[7]: https://github.com/lh3/bwa           "Burrows-Wheeler Aligner"

