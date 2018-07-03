namespace cpp KC_GenID

struct Z_idGen{
	1: i32 errorCode,
	2: i64 data	
}

struct Z_rangeId{
	1: i32 errorCode,
	2: i64 data
}

struct Z_idValue{
	1: i32 errorCode,
	2: i64 data
}

service KC_GenID {
	Z_idGen genId(1: string idType),
	Z_rangeId getRangeId(1: string idType, 2: i64 rangeId),
	Z_idValue getIdValue(1: string idType,)
}
