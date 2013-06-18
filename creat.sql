create table children(
	 childno int(11) not null auto_increment,
	 fname varchar(30),
	 age int(11),
	 primary key (childno)
);

insert into children values(1, 'Jenny', 17);
insert into children values(2, 'Andrew', 13);
