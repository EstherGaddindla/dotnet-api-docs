            ' Make key1 dependent on a file.
            Dim dependency as new CacheDependency(Server.MapPath("isbn.xml"))

            Cache.Insert("key1", "Value 1", dependency)
        End If