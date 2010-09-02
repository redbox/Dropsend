#ifndef ENTITYWITHID_H
#define ENTITYWITHID_H

namespace dropsend {
    namespace data {

        // Base class for business entities
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
