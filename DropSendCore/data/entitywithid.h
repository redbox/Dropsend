#ifndef ENTITYWITHID_H
#define ENTITYWITHID_H

namespace dropsend {
    namespace data {
        /**
         * @class EntityWithId
         * @brief Base class for all entities. Any class which is used in DAO
         * pattern must be inherited from this. Has server's ID.
         **/
        class EntityWithId
        {
        public:
            /**
             * @brief Initializes a new instance of the dropsend::data::EntityWithId class.
             **/
            EntityWithId();

            /**
             * @brief Gets entity's ID.
             * @returns Entity's ID.
             **/
            int getId() const;
        protected:
            /**
             * @brief Entity's server's ID.
             **/
            int id_;
        };
    }
}
#endif // ENTITYWITHID_H
