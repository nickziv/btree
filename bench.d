pid$target::btree_insert_key:entry
{
	self->ts = timestamp;
}

pid$target::btree_insert_key:return
{
	self->tsdif = timestamp - self->ts;
	@a["avg", probefunc] = avg(self->tsdif);
	@q["qtz", probefunc] = quantize(self->tsdif);
}
