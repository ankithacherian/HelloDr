=> [32m#<ActiveRecord::ConnectionAdapters::PostgreSQLAdapter:0x00007ffff7cc70a0[0m
 @config[32m=[0m{[33m:adapter[0m=>[31m[1;31m"[0m[31mpostgresql[1;31m"[0m[31m[0m, [33m:encoding[0m=>[31m[1;31m"[0m[31municode[1;31m"[0m[31m[0m, [33m:pool[0m=>[1;34m5[0m, [33m:database[0m=>[31m[1;31m"[0m[31mHelloDr_development[1;31m"[0m[31m[0m},
 @connection[32m=[0m[32m#<PG::Connection:0x00007ffff7cc9dc8[0m[32m>[0m,
 @connection_parameters[32m=[0m{[33m:dbname[0m=>[31m[1;31m"[0m[31mHelloDr_development[1;31m"[0m[31m[0m},
 @idle_since[32m=[0m[1;35m34593.8396662[0m,
 @instrumenter[32m=[0m
  [32m#<ActiveSupport::Notifications::Instrumenter:0x00007ffff6bbfe38[0m
   @id[32m=[0m[31m[1;31m"[0m[31me14ab48f7f699d65bb28[1;31m"[0m[31m[0m,
   @notifier[32m=[0m
    [32m#<ActiveSupport::Notifications::Fanout:0x00007ff52c390b88[0m
     @_mutex[32m=[0m[32m#<Thread::Mutex:0x00007ff52c390a20[0m[32m>[0m,
     @listeners_for[32m=[0m[32m#<Concurrent::Map:0x00007ff52c390b38 entries=2 default_proc=nil>[0m,
     @subscribers[32m=[0m
      [[32m#<ActiveSupport::Notifications::Fanout::Subscribers::Evented:0x00007ffff7183298[0m
        @can_publish[32m=[0m[1;36mfalse[0m,
        @delegate[32m=[0m[32m#<ActiveRecord::LogSubscriber:0x00007ffff7183608[0m @patterns[32m=[0m[[31m[1;31m"[0m[31msql.active_record[1;31m"[0m[31m[0m], @queue_key[32m=[0m[31m[1;31m"[0m[31mActiveRecord::LogSubscriber-70368669473540[1;31m"[0m[31m[0m[32m>[0m,
        @pattern[32m=[0m[31m[1;31m"[0m[31msql.active_record[1;31m"[0m[31m[0m[32m>[0m,
       [32m#<ActiveSupport::Notifications::Fanout::Subscribers::Evented:0x00007ffff5bb0830[0m
        @can_publish[32m=[0m[1;36mfalse[0m,
        @delegate[32m=[0m
         [32m#<ActionView::LogSubscriber:0x00007ffff5bb1280[0m
          @patterns[32m=[0m[[31m[1;31m"[0m[31mlogger.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_partial.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_template.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_collection.action_view[1;31m"[0m[31m[0m],
          @queue_key[32m=[0m[31m[1;31m"[0m[31mActionView::LogSubscriber-70368658032960[1;31m"[0m[31m[0m,
          @root[32m=[0m[1;36mnil[0m[32m>[0m,
        @pattern[32m=[0m[31m[1;31m"[0m[31mlogger.action_view[1;31m"[0m[31m[0m[32m>[0m,
       [32m#<ActiveSupport::Notifications::Fanout::Subscribers::Evented:0x00007ffff5bb0100[0m
        @can_publish[32m=[0m[1;36mfalse[0m,
        @delegate[32m=[0m
         [32m#<ActionView::LogSubscriber:0x00007ffff5bb1280[0m
          @patterns[32m=[0m[[31m[1;31m"[0m[31mlogger.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_partial.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_template.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_collection.action_view[1;31m"[0m[31m[0m],
          @queue_key[32m=[0m[31m[1;31m"[0m[31mActionView::LogSubscriber-70368658032960[1;31m"[0m[31m[0m,
          @root[32m=[0m[1;36mnil[0m[32m>[0m,
        @pattern[32m=[0m[31m[1;31m"[0m[31mrender_partial.action_view[1;31m"[0m[31m[0m[32m>[0m,
       [32m#<ActiveSupport::Notifications::Fanout::Subscribers::Evented:0x00007ffff5be7d80[0m
        @can_publish[32m=[0m[1;36mfalse[0m,
        @delegate[32m=[0m
         [32m#<ActionView::LogSubscriber:0x00007ffff5bb1280[0m
          @patterns[32m=[0m[[31m[1;31m"[0m[31mlogger.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_partial.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_template.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_collection.action_view[1;31m"[0m[31m[0m],
          @queue_key[32m=[0m[31m[1;31m"[0m[31mActionView::LogSubscriber-70368658032960[1;31m"[0m[31m[0m,
          @root[32m=[0m[1;36mnil[0m[32m>[0m,
        @pattern[32m=[0m[31m[1;31m"[0m[31mrender_template.action_view[1;31m"[0m[31m[0m[32m>[0m,
       [32m#<ActiveSupport::Notifications::Fanout::Subscribers::Evented:0x00007ffff5be77e0[0m
        @can_publish[32m=[0m[1;36mfalse[0m,
        @delegate[32m=[0m
         [32m#<ActionView::LogSubscriber:0x00007ffff5bb1280[0m
          @patterns[32m=[0m[[31m[1;31m"[0m[31mlogger.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_partial.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_template.action_view[1;31m"[0m[31m[0m, [31m[1;31m"[0m[31mrender_collection.action_view[1;31m"[0m[31m[0m],
          @queue_key[32m=[0m[31m[1;31m"[0m[31mActionView::LogSubscriber-70368658032960[1;31m"[0m[31m[0m,
          @root[32m=[0m[1;36mnil[0m[32m>[0m,
        @pattern[32m=[0m[31m[1;31m"[0m[31mrender_collection.action_view[1;31m"[0m[31m[0m[32m>[0m,
       [32m#<ActiveSupport::Notifications::Fanout::Subscribers::Evented:0x00007ffff6fb72c0[0m
        @can_publish[32m=[0m[1;36mfalse[0m,
        @delegate[32m=[0m[32m#<ActiveRecord::ExplainSubscriber:0x00007ffff6fb73b0[0m[32m>[0m,
        @pattern[32m=[0m[31m[1;31m"[0m[31msql.active_record[1;31m"[0m[31m[0m[32m>[0m][32m>[0m[32m>[0m,
 @local_tz[32m=[0m[31m[1;31m"[0m[31mUTC[1;31m"[0m[31m[0m,
 @lock[32m=[0m
  [32m#<ActiveSupport::Concurrency::LoadInterlockAwareMonitor:0x00007ffff7cc9eb8[0m
   @mon_count[32m=[0m[1;34m0[0m,
   @mon_mutex[32m=[0m[32m#<Thread::Mutex:0x00007ffff7cc9e68[0m[32m>[0m,
   @mon_mutex_owner_object_id[32m=[0m[1;34m70368675385180[0m,
   @mon_owner[32m=[0m[1;36mnil[0m[32m>[0m,
 @logger[32m=[0m
  [32m#<ActiveSupport::Logger:0x00007ffff6c79680[0m
   @default_formatter[32m=[0m[32m#<Logger::Formatter:0x00007ffff6c795e0[0m @datetime_format[32m=[0m[1;36mnil[0m[32m>[0m,
   @formatter[32m=[0m[32m#<ActiveSupport::Logger::SimpleFormatter:0x00007ffff6a59a30[0m @datetime_format[32m=[0m[1;36mnil[0m[32m>[0m,
   @level[32m=[0m[1;34m0[0m,
   @local_levels[32m=[0m[32m#<Concurrent::Map:0x00007ffff6c79428 entries=0 default_proc=nil>[0m,
   @logdev[32m=[0m
    [32m#<Logger::LogDevice:0x00007ffff6c79590[0m
     @dev[32m=[0m[32m#<File:/home/ankitha/workspace/HelloDr/log/development.log>[0m,
     @filename[32m=[0m[1;36mnil[0m,
     @mon_count[32m=[0m[1;34m0[0m,
     @mon_mutex[32m=[0m[32m#<Thread::Mutex:0x00007ffff6c79518[0m[32m>[0m,
     @mon_mutex_owner_object_id[32m=[0m[1;34m70368666831560[0m,
     @mon_owner[32m=[0m[1;36mnil[0m,
     @shift_age[32m=[0m[1;36mnil[0m,
     @shift_period_suffix[32m=[0m[1;36mnil[0m,
     @shift_size[32m=[0m[1;36mnil[0m[32m>[0m,
   @progname[32m=[0m[1;36mnil[0m[32m>[0m,
 @max_identifier_length[32m=[0m[1;36mnil[0m,
 @owner[32m=[0m[32m#<Thread:0x00007ffff44d32c0 run>[0m,
 @pool[32m=[0m
  [32m#<ActiveRecord::ConnectionAdapters::ConnectionPool:0x00007ffff7aadfa8[0m
   @automatic_reconnect[32m=[0m[1;36mtrue[0m,
   @available[32m=[0m
    [32m#<ActiveRecord::ConnectionAdapters::ConnectionPool::ConnectionLeasingQueue:0x00007ffff7aadd78[0m
     @cond[32m=[0m
      [32m#<MonitorMixin::ConditionVariable:0x00007ffff7aadd50[0m
       @cond[32m=[0m[32m#<Thread::ConditionVariable:0x00007ffff7aadd28[0m[32m>[0m,
       @monitor[32m=[0m[32m#<ActiveRecord::ConnectionAdapters::ConnectionPool:0x00007ffff7aadfa8[0m ...[32m>[0m[32m>[0m,
     @lock[32m=[0m[32m#<ActiveRecord::ConnectionAdapters::ConnectionPool:0x00007ffff7aadfa8[0m ...[32m>[0m,
     @num_waiting[32m=[0m[1;34m0[0m,
     @queue[32m=[0m[][32m>[0m,
   @checkout_timeout[32m=[0m[1;34m5[0m,
   @connections[32m=[0m[[32m#<ActiveRecord::ConnectionAdapters::PostgreSQLAdapter:0x00007ffff7cc70a0[0m ...[32m>[0m],
   @idle_timeout[32m=[0m[1;35m300.0[0m,
   @lock_thread[32m=[0m[1;36mfalse[0m,
   @mon_count[32m=[0m[1;34m0[0m,
   @mon_mutex[32m=[0m[32m#<Thread::Mutex:0x00007ffff7aadf30[0m[32m>[0m,
   @mon_mutex_owner_object_id[32m=[0m[1;34m70368674279380[0m,
   @mon_owner[32m=[0m[1;36mnil[0m,
   @now_connecting[32m=[0m[1;34m0[0m,
   @query_cache_enabled[32m=[0m
    [32m#<Concurrent::Map:0x00007ffff7aadf08 entries=0 default_proc=#<Proc:0x00007ffff7aade68@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/abstract/query_cache.rb:31>>[0m,
   @reaper[32m=[0m
    [32m#<ActiveRecord::ConnectionAdapters::ConnectionPool::Reaper:0x00007ffff7aadcd8[0m
     @frequency[32m=[0m[1;35m60.0[0m,
     @pool[32m=[0m[32m#<ActiveRecord::ConnectionAdapters::ConnectionPool:0x00007ffff7aadfa8[0m ...[32m>[0m[32m>[0m,
   @size[32m=[0m[1;34m5[0m,
   @spec[32m=[0m
    [32m#<ActiveRecord::ConnectionAdapters::ConnectionSpecification:0x00007ffff7aae200[0m
     @adapter_method[32m=[0m[31m[1;31m"[0m[31mpostgresql_connection[1;31m"[0m[31m[0m,
     @config[32m=[0m{[33m:adapter[0m=>[31m[1;31m"[0m[31mpostgresql[1;31m"[0m[31m[0m, [33m:encoding[0m=>[31m[1;31m"[0m[31municode[1;31m"[0m[31m[0m, [33m:pool[0m=>[1;34m5[0m, [33m:database[0m=>[31m[1;31m"[0m[31mHelloDr_development[1;31m"[0m[31m[0m},
     @name[32m=[0m[31m[1;31m"[0m[31mprimary[1;31m"[0m[31m[0m[32m>[0m,
   @thread_cached_conns[32m=[0m[32m#<Concurrent::Map:0x00007ffff7aade18 entries=1 default_proc=nil>[0m,
   @threads_blocking_new_connections[32m=[0m[1;34m0[0m[32m>[0m,
 @prepared_statements[32m=[0m[1;36mtrue[0m,
 @query_cache[32m=[0m{},
 @query_cache_enabled[32m=[0m[1;36mfalse[0m,
 @quoted_column_names[32m=[0m{},
 @quoted_table_names[32m=[0m{},
 @schema_cache[32m=[0m
  [32m#<ActiveRecord::ConnectionAdapters::SchemaCache:0x00007ffff7cca070[0m
   @columns[32m=[0m{},
   @columns_hash[32m=[0m{},
   @connection[32m=[0m[32m#<ActiveRecord::ConnectionAdapters::PostgreSQLAdapter:0x00007ffff7cc70a0[0m ...[32m>[0m,
   @data_sources[32m=[0m{},
   @primary_keys[32m=[0m{}[32m>[0m,
 @statements[32m=[0m
  [32m#<ActiveRecord::ConnectionAdapters::PostgreSQLAdapter::StatementPool:0x00007ffff7ccfb10[0m
   @cache[32m=[0m{},
   @connection[32m=[0m[32m#<PG::Connection:0x00007ffff7cc9dc8[0m[32m>[0m,
   @counter[32m=[0m[1;34m0[0m,
   @statement_limit[32m=[0m[1;34m1000[0m[32m>[0m,
 @transaction_manager[32m=[0m
  [32m#<ActiveRecord::ConnectionAdapters::TransactionManager:0x00007ffff7cca160[0m
   @connection[32m=[0m[32m#<ActiveRecord::ConnectionAdapters::PostgreSQLAdapter:0x00007ffff7cc70a0[0m ...[32m>[0m,
   @stack[32m=[0m[][32m>[0m,
 @type_map[32m=[0m
  [32m#<ActiveRecord::Type::HashLookupTypeMap:0x00007ffff7cce260[0m
   @cache[32m=[0m
    [32m#<Concurrent::Map:0x00007ffff7cce210 entries=0 default_proc=#<Proc:0x00007ffff7cce0f8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:10>>[0m,
   @mapping[32m=[0m
    {[31m[1;31m"[0m[31mint2[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccdf90@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mint4[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccdd60@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mint8[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccdab8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31moid[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd9f0@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mfloat4[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd978@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mfloat8[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd928@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [31m[1;31m"[0m[31mtext[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd8b0@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mvarchar[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd860@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/abstract_adapter.rb:530>[0m,
     [31m[1;31m"[0m[31mchar[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd810@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [31m[1;31m"[0m[31mname[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd7c0@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [31m[1;31m"[0m[31mbpchar[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd770@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [31m[1;31m"[0m[31mbool[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd6f8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mbit[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd6a8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/abstract_adapter.rb:530>[0m,
     [31m[1;31m"[0m[31mvarbit[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd658@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/abstract_adapter.rb:530>[0m,
     [31m[1;31m"[0m[31mtimestamptz[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd5b8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [31m[1;31m"[0m[31mdate[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd540@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mmoney[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd4c8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mbytea[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd450@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mpoint[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd3d8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mhstore[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd360@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mjson[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd2e8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mjsonb[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd270@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mcidr[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd1f8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31minet[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd180@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31muuid[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd108@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mxml[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccd090@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mtsvector[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7cccff0@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mmacaddr[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7cccf50@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mcitext[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccceb0@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mltree[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7cccde8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mline[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7cccd48@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mlseg[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7cccca8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mbox[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7cccc08@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mpath[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7cccb68@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mpolygon[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7cccac8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31mcircle[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccca00@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [31m[1;31m"[0m[31minterval[1;31m"[0m[31m[0m=>
      [32m#<Proc:0x00007ffff7ccc9b0@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql_adapter.rb:499>[0m,
     [31m[1;31m"[0m[31mtime[1;31m"[0m[31m[0m=>[32m#<Proc:0x00007ffff7ccc960@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/abstract_adapter.rb:537>[0m,
     [31m[1;31m"[0m[31mtimestamp[1;31m"[0m[31m[0m=>
      [32m#<Proc:0x00007ffff7ccc910@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/abstract_adapter.rb:537>[0m,
     [31m[1;31m"[0m[31mnumeric[1;31m"[0m[31m[0m=>
      [32m#<Proc:0x00007ffff7ccc8e8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql_adapter.rb:507>[0m,
     [1;34m16[0m=>[32m#<Proc:0x00007ff508073758@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m17[0m=>[32m#<Proc:0x00007ff508073708@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m18[0m=>[32m#<Proc:0x00007ff5080736b8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m19[0m=>[32m#<Proc:0x00007ff508073668@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m20[0m=>[32m#<Proc:0x00007ff508073618@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m21[0m=>[32m#<Proc:0x00007ff5080735c8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m23[0m=>[32m#<Proc:0x00007ff508073578@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m25[0m=>[32m#<Proc:0x00007ff508073528@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m26[0m=>[32m#<Proc:0x00007ff5080734d8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m114[0m=>[32m#<Proc:0x00007ff508073488@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m142[0m=>[32m#<Proc:0x00007ff508073438@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m600[0m=>[32m#<Proc:0x00007ff5080733e8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m601[0m=>[32m#<Proc:0x00007ff508073348@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m602[0m=>[32m#<Proc:0x00007ff5080732f8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m603[0m=>[32m#<Proc:0x00007ff5080732a8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m604[0m=>[32m#<Proc:0x00007ff508073258@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m628[0m=>[32m#<Proc:0x00007ff508073208@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m700[0m=>[32m#<Proc:0x00007ff5080731b8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m701[0m=>[32m#<Proc:0x00007ff508073168@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m718[0m=>[32m#<Proc:0x00007ff508073118@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m790[0m=>[32m#<Proc:0x00007ff5080730c8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m829[0m=>[32m#<Proc:0x00007ff508073078@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m869[0m=>[32m#<Proc:0x00007ff508073028@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m650[0m=>[32m#<Proc:0x00007ff508072fd8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m1042[0m=>[32m#<Proc:0x00007ff508072f88@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m1043[0m=>[32m#<Proc:0x00007ff508072f38@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m1082[0m=>[32m#<Proc:0x00007ff508072ee8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m1083[0m=>[32m#<Proc:0x00007ff508072e98@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m1114[0m=>[32m#<Proc:0x00007ff508072e48@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m1184[0m=>[32m#<Proc:0x00007ff508072df8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m1186[0m=>[32m#<Proc:0x00007ff508072da8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m1560[0m=>[32m#<Proc:0x00007ff508072d58@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m1562[0m=>[32m#<Proc:0x00007ff508072d08@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m1700[0m=>[32m#<Proc:0x00007ff508072cb8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m2950[0m=>[32m#<Proc:0x00007ff508072c68@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m3614[0m=>[32m#<Proc:0x00007ff508072c18@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m3802[0m=>[32m#<Proc:0x00007ff508072bc8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/hash_lookup_type_map.rb:7>[0m,
     [1;34m12741[0m=>[32m#<Proc:0x00007ff5080728d0@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [1;34m12743[0m=>[32m#<Proc:0x00007ff508072510@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [1;34m12744[0m=>[32m#<Proc:0x00007ff508072100@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [1;34m12748[0m=>[32m#<Proc:0x00007ff508071bd8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [1;34m12749[0m=>[32m#<Proc:0x00007ff508071818@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [1;34m143[0m=>
      [32m#<Proc:0x00007ff508071778@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m199[0m=>
      [32m#<Proc:0x00007ff5080716d8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m629[0m=>
      [32m#<Proc:0x00007ff508071638@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m719[0m=>
      [32m#<Proc:0x00007ff508071598@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m791[0m=>
      [32m#<Proc:0x00007ff5080714f8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1000[0m=>
      [32m#<Proc:0x00007ff508071458@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1001[0m=>
      [32m#<Proc:0x00007ff5080713b8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1002[0m=>
      [32m#<Proc:0x00007ff508071318@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1003[0m=>
      [32m#<Proc:0x00007ff508071278@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1005[0m=>
      [32m#<Proc:0x00007ff5080711d8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1007[0m=>
      [32m#<Proc:0x00007ff508071138@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1009[0m=>
      [32m#<Proc:0x00007ff508071098@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1028[0m=>
      [32m#<Proc:0x00007ff508070ff8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1014[0m=>
      [32m#<Proc:0x00007ff508070f58@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1015[0m=>
      [32m#<Proc:0x00007ff508070eb8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1016[0m=>
      [32m#<Proc:0x00007ff508070e18@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1017[0m=>
      [32m#<Proc:0x00007ff508070d78@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1018[0m=>
      [32m#<Proc:0x00007ff508070cd8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1019[0m=>
      [32m#<Proc:0x00007ff508070c38@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1020[0m=>
      [32m#<Proc:0x00007ff508070b98@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1021[0m=>
      [32m#<Proc:0x00007ff508070af8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1022[0m=>
      [32m#<Proc:0x00007ff508070a58@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1027[0m=>
      [32m#<Proc:0x00007ff5080709b8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1040[0m=>
      [32m#<Proc:0x00007ff508070918@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1041[0m=>
      [32m#<Proc:0x00007ff508070878@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m651[0m=>
      [32m#<Proc:0x00007ff5080707d8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1115[0m=>
      [32m#<Proc:0x00007ff508070738@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1182[0m=>
      [32m#<Proc:0x00007ff508070698@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1183[0m=>
      [32m#<Proc:0x00007ff5080705f8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1185[0m=>
      [32m#<Proc:0x00007ff508070558@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1187[0m=>
      [32m#<Proc:0x00007ff5080704b8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1231[0m=>
      [32m#<Proc:0x00007ff508070418@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1561[0m=>
      [32m#<Proc:0x00007ff508070328@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m1563[0m=>
      [32m#<Proc:0x00007ff508070288@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m2951[0m=>
      [32m#<Proc:0x00007ff5080701e8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m3643[0m=>
      [32m#<Proc:0x00007ff508070148@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m3807[0m=>
      [32m#<Proc:0x00007ff5080700a8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m3904[0m=>
      [32m#<Proc:0x00007ff508070008@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m3906[0m=>
      [32m#<Proc:0x00007ff508077f88@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m3908[0m=>
      [32m#<Proc:0x00007ff508077ee8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m3910[0m=>
      [32m#<Proc:0x00007ff508077e48@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m3912[0m=>
      [32m#<Proc:0x00007ff508077da8@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m3926[0m=>
      [32m#<Proc:0x00007ff508077d08@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/connection_adapters/postgresql/oid/type_map_initializer.rb:97>[0m,
     [1;34m22[0m=>[32m#<Proc:0x00007ff508077998@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m,
     [1;34m30[0m=>[32m#<Proc:0x00007ff508077628@/home/ankitha/.rvm/gems/ruby-2.6.5/gems/activerecord-5.2.4.3/lib/active_record/type/type_map.rb:32>[0m}[32m>[0m,
 @use_insert_returning[32m=[0m[1;36mtrue[0m,
 @visitor[32m=[0m[32m#<Arel::Visitors::PostgreSQL:0x00007ffff7cc9f58[0m @connection[32m=[0m[32m#<ActiveRecord::ConnectionAdapters::PostgreSQLAdapter:0x00007ffff7cc70a0[0m ...[32m>[0m, @dispatch[32m=[0m{}[32m>[0m[32m>[0m
