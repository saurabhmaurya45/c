class Book:
    def __init__(self, id, name, description, isbn, page_count, issued, author, year):
        self.id = id
        self.name = name
        self.description = description
        self.isbn = isbn
        self.page_count = page_count
        self.issued = issued
        self.author = author
        self.year = year
    # to_dict_method

    def to_dict(self):
        dictionary = {
            "id" : self.id,
            "name" : self.name,
            "author" : self.author,
            "description" : self.description,
            "isbn" : self.isbn,
            "page_count" : self.page_count,
            "issued" : self.issued,
            "year" : self.year
        }
        return dictionary


book = Book(12,'automic book',"THis is new book",'124-547-5784',445,"yes","Danish Ritche","20/03/2020")
print(book.to_dict())