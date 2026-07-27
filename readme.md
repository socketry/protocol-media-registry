# Protocol::Media::Data

Provides generated, indexed media type registry data for `protocol-media`. It uses a native static index when available and transparently falls back to a generated Ruby index.

``` ruby
require "protocol/media/data"

record = Protocol::Media::Data["application/json"]
record.type # => #<Protocol::Media::Type ...>
record.extensions # => ["json", ...]

Protocol::Media::Data.for_extension("json").type
Protocol::Media::Data.for_path("document.json").type
```
