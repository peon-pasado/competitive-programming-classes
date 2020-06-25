# Competitive Programming UNI - Resto del mundo

## Requisites
- R (rmarkdown library)
- pandoc

## How to write a class
```bash
# Example: Create class number 30.
# First, get the structure of the classes from a previous class
cp class-21.Rmd class-30.Rmd
# Then, write the content in class-30.Rmd
# Add the links to class-30.Rmd in index.Rmd
vim index.Rmd
# Add the links to class-30.Rmd in _site.yml
vim _site.yml
```

## Build a single class

```bash
# Compile the class
bash compile.sh class-21.Rmd
# Compile the new index page
bash compile.sh index.Rmd
# Copy the htmls generated to the web/ directory
mv class-21.html web/
mv index.html web/
# Now, you can open the html's in the /web directory in your browser and check the results
xdg-open web/class-21.html
```

## Build the entire web
Build the web
```bash
bash build.sh
```

**Important:** Do not run the above program until the issues get fixed.
