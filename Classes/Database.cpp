#include "Database.h"

Database::~Database() {
	for (Base* obj : objects) {
		delete obj;
	}

}

void Database::Create(Base::eType type) {
	Base* obj = nullptr;
	switch (type) {
	case Base::eType::FOX: obj = new Fox; break;
	case Base::eType::CAT: obj = new Cat; break;
	}
	if (obj) {
		obj->Read(cout, cin);
		objects.push_back(obj);
	}
}

void Database::DisplayAll() {
	for (Base* obj : objects) {
		obj->Write(cout);
		cout << "----" << endl;
	}
}

void Database::Display(const string& name) {
	for (Base* obj : objects) {
		if (obj->GetName() == name) {
			obj->Write(cout);
		}
	}
}

void Database::Display(Base::eType type) {
	for (Base* obj : objects) {
		if (obj->GetType() == type) {
			obj->Write(cout);
		}
	}
}
