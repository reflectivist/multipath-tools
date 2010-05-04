int cli_list_paths (void * v, char ** reply, int * len, void * data);
int cli_list_paths_fmt (void * v, char ** reply, int * len, void * data);
int cli_list_status (void * v, char ** reply, int * len, void * data);
int cli_list_daemon (void * v, char ** reply, int * len, void * data);
int cli_list_maps (void * v, char ** reply, int * len, void * data);
int cli_list_maps_fmt (void * v, char ** reply, int * len, void * data);
int cli_list_maps_status (void * v, char ** reply, int * len, void * data);
int cli_list_maps_stats (void * v, char ** reply, int * len, void * data);
int cli_list_map_topology (void * v, char ** reply, int * len, void * data);
int cli_list_maps_topology (void * v, char ** reply, int * len, void * data);
int cli_list_config (void * v, char ** reply, int * len, void * data);
int cli_list_blacklist (void * v, char ** reply, int * len, void * data);
int cli_list_devices (void * v, char ** reply, int * len, void * data);
int cli_list_wildcards (void * v, char ** reply, int * len, void * data);
int cli_add_path (void * v, char ** reply, int * len, void * data);
int cli_del_path (void * v, char ** reply, int * len, void * data);
int cli_add_map (void * v, char ** reply, int * len, void * data);
int cli_del_map (void * v, char ** reply, int * len, void * data);
int cli_switch_group(void * v, char ** reply, int * len, void * data);
int cli_reconfigure(void * v, char ** reply, int * len, void * data);
int cli_resize(void * v, char ** reply, int * len, void * data);
int cli_disable_queueing(void * v, char ** reply, int * len, void * data);
int cli_disable_all_queueing(void * v, char ** reply, int * len, void * data);
int cli_restore_queueing(void * v, char ** reply, int * len, void * data);
int cli_restore_all_queueing(void * v, char ** reply, int * len, void * data);
int cli_reload(void * v, char ** reply, int * len, void * data);
int cli_suspend(void * v, char ** reply, int * len, void * data);
int cli_resume(void * v, char ** reply, int * len, void * data);
int cli_reinstate(void * v, char ** reply, int * len, void * data);
int cli_fail(void * v, char ** reply, int * len, void * data);
int cli_quit(void * v, char ** reply, int * len, void * data);
int cli_shutdown(void * v, char ** reply, int * len, void * data);
int cli_reset_log(void * v, char ** reply, int * len, void * data);
int cli_wait_event(void * v, char ** reply, int * len, void * data);
int cli_reassign (void * v, char ** reply, int * len, void * data);
