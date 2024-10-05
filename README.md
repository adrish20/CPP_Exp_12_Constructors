<h1>Aim</h1>
<p>To study and implement C++ constructors and destructors.</p>
<hr>
<h1>Software required</h1>
<p>VScode</p>
<hr>
<h1>Theory</h1>
<p>In C++, <strong>constructors</strong> are special member functions of a class that are automatically invoked when an object is created. Their main purpose is to initialize the object, often by setting initial values for its data members. Constructors can be overloaded, allowing multiple ways to initialize objects with different inputs. <strong>Destructors</strong>, on the other hand, are special member functions that are automatically called when an object goes out of scope or is explicitly deleted. Destructors are used to perform cleanup tasks like releasing resources (e.g., memory, file handles). Unlike constructors, destructors cannot be overloaded and always have the same name as the class, prefixed with a tilde (`~`).</p>
<hr>
<h1>Algorithms</h1>
<h2>Basic constructor</h2>
<ol>
        <li>Start.</li>
        <li>Define a class <strong>date</strong>.
            <ul>
                <li>Declare private variables: <strong>d</strong>, <strong>m</strong>, and <strong>y</strong>.</li>
                <li>Define a constructor for the class:
                    <ul>
                        <li>Print the message: <em>"Constructor called"</em>.</li>
                        <li>Initialize the variables <strong>d = 4</strong>, <strong>m = 9</strong>, and <strong>y = 2024</strong>.</li>
                    </ul>
                </li>
                <li>Define the method <strong>display()</strong>:
                    <ul>
                        <li>Print the values of <strong>d</strong>, <strong>m</strong>, and <strong>y</strong>.</li>
                    </ul>
                </li>
            </ul>
        </li>
        <li>Create the <strong>main()</strong> function.</li>
        <li>Inside the <strong>main()</strong> function:
            <ul>
                <li>Declare an object <strong>obj</strong> of class <strong>date</strong>.</li>
                <li>Call the method <strong>display()</strong> on the object <strong>obj</strong> to print the date.</li>
            </ul>
        </li>
        <li>End.</li>
    </ol>
<h2>Copy constructor</h2>
    <ol>
        <li>Start.</li>
        <li>Define a class <strong>Wall</strong>.
            <ul>
                <li>Declare private variables: <strong>length</strong> and <strong>height</strong>.</li>
                <li>Define a parameterized constructor:
                    <ul>
                        <li>Take two parameters: <strong>len</strong> (length) and <strong>hgt</strong> (height).</li>
                        <li>Assign <strong>length = len</strong> and <strong>height = hgt</strong>.</li>
                    </ul>
                </li>
                <li>Define a copy constructor:
                    <ul>
                        <li>Take an object <strong>obj</strong> of the class <strong>Wall</strong> as a parameter.</li>
                        <li>Assign <strong>length = obj.length</strong> and <strong>height = obj.height</strong>.</li>
                    </ul>
                </li>
                <li>Define a method <strong>calculateArea()</strong> to return the area as <em>length * height</em>.</li>
            </ul>
        </li>
        <li>Create the <strong>main()</strong> function.</li>
        <li>Inside the <strong>main()</strong> function:
            <ul>
                <li>Create an object <strong>wall1</strong> using the parameterized constructor with values <em>10.3</em> for length and <em>5.6</em> for height.</li>
                <li>Create another object <strong>wall2</strong> using the copy constructor to copy values from <strong>wall1</strong>.</li>
                <li>Call the method <strong>calculateArea()</strong> for <strong>wall1</strong> and print the result.</li>
                <li>Call the method <strong>calculateArea()</strong> for <strong>wall2</strong> and print the result.</li>
            </ul>
        </li>
        <li>End.</li>
    </ol>
<h2>Destructor</h2>
    <ol>
        <li>Start.</li>
        <li>Declare a global integer variable <strong>count</strong> initialized to 0.</li>
        <li>Define a class <strong>Student</strong>.
            <ul>
                <li>Define a constructor:
                    <ul>
                        <li>Increment the global variable <strong>count</strong> by 1.</li>
                        <li>Print the message: <em>"No. of objects created = "</em> followed by the value of <strong>count</strong>.</li>
                    </ul>
                </li>
                <li>Define a destructor:
                    <ul>
                        <li>Print the message: <em>"No. of objects destroyed: "</em> followed by the value of <strong>count</strong>.</li>
                        <li>Decrement the global variable <strong>count</strong> by 1.</li>
                    </ul>
                </li>
            </ul>
        </li>
        <li>Create the <strong>main()</strong> function.</li>
        <li>Inside the <strong>main()</strong> function:
            <ul>
                <li>Declare three objects <strong>s1</strong>, <strong>s2</strong>, and <strong>s3</strong> of class <strong>Student</strong>.</li>
                <li>The constructor is called for each object, and the object count is incremented and printed.</li>
                <li>When the objects go out of scope, the destructor is called, and the object count is decremented and printed.</li>
            </ul>
        </li>
        <li>End.</li>
    </ol>
<hr>
<h1>Conclusion</h1>
<p>In conclusion, through this experiment we have learnt about constructors and destructors and various programs related to them.</p>
