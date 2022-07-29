// Function with his type 
class Addition {
    setA(a) {

    }
    setB(b) {

    }
    addData() {
        this.c = this.a + this.b;
    }

    showData() {
        console.log("a = " + a);
        console.log("b = " + b);
        console.log("c = " + c);
    }
}

var obj = new Addition();
obj.setA(100);
obj.setB(100);
obj.addData();
obj.showData();
