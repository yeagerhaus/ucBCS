template <class T, class Container = deque<T> >
class queue {
 public:
    typedef typename Container::value_type value_type;
    typedef typename Container::reference reference;
    typedef typename Container::const_reference const_reference;
    typedef typename Container::size_type size_type;
    typedef Container container_type;
 protected:
    Container c;
 public:
    explicit queue(const Container&);
    explicit queue(Container&& = Container());
    template <class Alloc> explicit queue(const Alloc&);
    template <class Alloc> queue(const Container&, const Alloc&);
    template <class Alloc> queue(Container&&, const Alloc&);
    template <class Alloc> queue(const queue&, const Alloc&);
    template <class Alloc> queue(queue&&, const Alloc&);
 
    bool empty() const {
        return c.empty();
    }
    size_type size() const {
        return c.size();
    }
    reference front() {
        return c.front();
    }
    const_reference front() const {
        return c.front();
    }
    reference back() {
        return c.back();
    }
    const_reference back() const {
        return c.back();
    }
    void push(const value_type& x) {
        c.push_back(x);
    }
    void push(value_type&& x) {
        c.push_back(std::move(x));
    }
    template <class... Args> void emplace(Args&&... args) {
        c.emplace_back(std::forward<Args>(args)...);
    }
    void pop() {
        c.pop_front();
    }
    void swap(queue& q) noexcept(noexcept(swap(c, q.c))) {
        using std::swap;
        swap(c, q.c);
    }
};
