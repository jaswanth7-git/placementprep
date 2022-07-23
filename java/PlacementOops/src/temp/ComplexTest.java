package temp;
import Complex;
import org.junit.After;
import org.junit.AfterClass;
import org.junit.Assert;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;


public class ComplexTest {

Complex c1;

Complex c2;

public ComplexTest() {

}

@BeforeClass

public static void setUpClass() {
}

@AfterClass

public static void tearDownClass() {
}

@Before

public void setUp() {
c1 = new Complex(7,3);
c2 = new Complex(12,6);
}


@After

public void tearDown() {
}

/**

Test of Equal method, of class Complex.
*/
@Test
public void testEqual() {
System.out.println("Equal");
assertTrue(!c2.Equal(c1));

assertTrue(c1.Equal(new Complex(7,3)));

}


/**

Test of Add method, of class Complex.
*/
@Test
public void testAdd() {
System.out.println("Add");
Complex result = c1.Add(new Complex(5,3));

assertEquals(result.get_r(),c2.get_r()); assertEquals(result.get_i(),c2.get_i());

}
/**
Test of get_r method, of class Complex.
*/
@Test
public void testGet_r() {
System.out.println("get_r");
Complex instance = new Complex(5,10);
int expResult = 5;
int result = instance.get_r();
assertEquals(expResult, result);

}

/**

Test of get_i method, of class Complex.
*/
@Test
public void testGet_i() {
System.out.println("get_i");
Complex instance = new Complex(5,10);
int expResult = 10;
int result = instance.get_i();
assertEquals(expResult, result);

}

}
