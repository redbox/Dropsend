#ifndef ENTITYWITHID_H
#define ENTITYWITHID_H

namespace dropsend {
    namespace data {        
        class EntityWithId
        {
        public:
            EntityWithId();
            int getId() const;
        protected:
            int id_;
        };
    }
}
#endif // ENTITYWITHID_H
