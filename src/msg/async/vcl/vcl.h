#ifndef included_vcl_h
#define included_vcl_h

#ifdef __cplusplus
extern "C" {
#endif

extern int ms_vpp_enable;
int vcl_socket (int domain, int type, int protocol);
int vcl_getsockopt (int fd, int level, int optname,
            void *__restrict optval, socklen_t * __restrict optlen);
int vcl_setsockopt (int fd, int level, int optname,
            const void *optval, socklen_t optlen);
int vcl_fcntl (int fd, int cmd, ...);
int vcl_close (int fd);
int vcl_bind (int fd, __CONST_SOCKADDR_ARG addr, socklen_t len);
int vcl_connect (int fd, __CONST_SOCKADDR_ARG addr, socklen_t len);
int vcl_listen (int fd, int n);
ssize_t vcl_read (int fd, void *buf, size_t nbytes);
int vcl_shutdown (int fd, int how);
ssize_t vcl_sendmsg (int fd, const struct msghdr * message, int flags);
int vcl_accept (int fd, __SOCKADDR_ARG addr, socklen_t * __restrict addr_len);

int vcl_epoll_create (int size);
int vcl_epoll_ctl (int epfd, int op, int fd, struct epoll_event *event);
int vcl_epoll_wait (int epfd, struct epoll_event *events, int maxevents, int timeout);

void vcl_ldp_constructor (void);
void vcl_ldp_destructor (void);
#ifdef __cplusplus
}
#endif
#endif
