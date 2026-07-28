# Protocol::Media::Registry

Provides generated, indexed media type registry data for `protocol-media`. It uses a native static index when available and transparently falls back to a generated Ruby index.

``` ruby
require "protocol/media/registry"

record = Protocol::Media::Registry["application/json"]
record.type # => #<Protocol::Media::Type ...>
record.extensions # => ["json", ...]

Protocol::Media::Registry.for_extension("json").type
Protocol::Media::Registry.for_path("document.json").type
```
