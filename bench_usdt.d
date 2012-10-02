btree$target:::add_begin
{
	self->ts = timestamp;
}

btree$target:::add_end
{
	self->tsdif = timestamp - self->ts;
	@a["avg"] = avg(self->tsdif);
	@q["qtz"] = quantize(self->tsdif);
}
