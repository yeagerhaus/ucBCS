template <class T,
          class Container = vector<T>,
          class Compare = less<typename Container::value_type> >
class priority_queue {
 public:
    typedef typename Container::value_type value_type;
    typedef typename Container::reference reference;
    typedef typename Container::const_reference const_reference;
    typedef typename Container::size_type size_type;
    typedef Container container_type;
 protected:
    Container c;
    Compare comp;
 public:
    priority_queue(const Compare& x, const Container&);
    explicit priority_queue(const Compare& x = Compare(), Container&& = Container());
    template <class InputIterator>
    priority_queue(InputIterator first, InputIterator last,
                       const Compare& x, const Container&);
    template <class InputIterator>
    priority_queue(InputIterator first, InputIterator last,
                   const Compare& x = Compare(), Container&& = Container());
    template <class Alloc> explicit priority_queue(const Alloc&);
    template <class Alloc> priority_queue(const Compare&, const Alloc&);
    template <class Alloc> priority_queue(const Compare&,
                                          const Container&, const Alloc&);
    template <class Alloc> priority_queue(const Compare&,
                                          Container&&, const Alloc&);
    template <class Alloc> priority_queue(const priority_queue&, const Alloc&);
    template <class Alloc> priority_queue(priority_queue&&, const Alloc&);
 
    bool empty() const {
        return c.empty();
    }
    size_type size() const {
        return c.size();
    }
    const_reference top() const {
        return c.front();
    }
    void push(const value_type& x);
    void push(value_type&& x);
    template <class... Args> void emplace(Args&&... args);
    void pop();
    void swap(priority_queue& q) noexcept( noexcept(swap(c, q.c))
                                        && noexcept(swap(comp, q.comp))) {
        using std::swap;
        swap(c, q.c);
        swap(comp, q.comp);
    }
};
