import { createClient } from '@supabase/supabase-js'

const supabaseUrl = 'https://yhhrmdeedhxdzwxoeolh.supabase.co'
const supabaseKey = 'eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6InloaHJtZGVlZGh4ZHp3eG9lb2xoIiwicm9sZSI6ImFub24iLCJpYXQiOjE3Nzk5NjcyMDUsImV4cCI6MjA5NTU0MzIwNX0.4JdDDpmZ2caq13XRp34K7g46Egm95Ozlu7HcdxRmXxs'

export const supabase = createClient(
  supabaseUrl,
  supabaseKey
)