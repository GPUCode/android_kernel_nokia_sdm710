#ifndef __FIH_TOUCH_H
#define __FIH_TOUCH_H

void fih_info_set_touch(char *info);

struct fih_touch_cb {
	void (*touch_selftest)(void);
	int (*touch_selftest_result)(void);
	void (*touch_tpfwver_read)(char *);
	void (*touch_tpfwimver_read)(char *);
	void (*touch_fwupgrade)(int);
	void (*touch_fwupgrade_read)(char *);
	void (*touch_vendor_read)(char *);
	unsigned int (*touch_double_tap_read)(void);	//SW4-HL-Touch-ImplementDoubleTap-00+_20170623
	int (*touch_double_tap_write)(unsigned int);	//SW4-HL-Touch-ImplementDoubleTap-00+_20170623
	void (*touch_alt_rst)(void);
	int (*touch_alt_st_count)(void);
	void (*touch_alt_st_enable)(int);
};

#endif /* __FIH_TOUCH_H */
