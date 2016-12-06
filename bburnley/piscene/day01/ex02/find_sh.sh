find . -name "*\.sh" | tr "/" "\n" | grep ".sh" | sed "s/...$//"
