#define MAX_SUPER_BLOCK 8
#define NULL (void *)0

struct super_block *fs_type[MAX_SUPER_BLOCK];
unsigned int current_dir_inode;

int register_file_system(struct super_block *type,unsigned int id)
{
	if(fs_type[id]==NULL){
		fs_type[id]=type;
		return 0;
	}
	return -1;
}

void unregister_file_system(struct super_block *type,unsigned int id)
{
	fs_type[id]=NULL;
}
