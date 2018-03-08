# Tomcat Environment Set Up

In brief, there are at least three different ways you can set up a Tomcat
applications on your local computer environment.

While you may find one way more convenient than the other, it's good to know
different approaches so you can exchange them according to the situation.

Those three ways are:

1. Running Tomcat binary directly
2. Running Tomcat with Eclipse
3. Running Tomcat/Gretty with Gradle

They are sorted from the less abstraction to more abstraction (layers between the
user – you – to the Tomcat application)

## Running Tomcat locally

To run the Tomcat binary directly, you have to ensure a couple manual operations
are done correctly as followed:

1. Download Tomcat from the official website http://tomcat.apache.org/
2. Put compiled source under `webapps` folder
    * `*.class -> webapps/ROOT/WEB-INF/classes`
    * `web.xml -> webapps/ROOT/WEB-INF/`
    * `*.jsp -> webapps/ROOT/WEB-INF/`
3. Run `./bin/startup.sh` or `./bin/catalina.sh start`
4. open up http://localhost:8080

> Note that the `ROOT` is a special name of application. It means the application
> is now running as the "root" of the project. You can certainly name you
> application differently by putting the compiled code into different folder
> under `webapps`

## Running Tomcat in Eclipse

See Dr. Sun's amazing tutorial:

https://csns.calstatela.edu/wiki/content/cysun/course_materials/eclipse

## Running Tomcat with Gradle

To run a Tomcat application in Gradle, you will need to set up Gradle task in
`build.gradle` similar to below:

```gradle
apply plugin: 'java'
apply plugin: 'war'
apply from: 'https://raw.github.com/akhikhl/gretty/master/pluginScripts/gretty.plugin'

// In this section you declare where to find the dependencies of your project
repositories {
    // Use 'jcenter' for resolving your dependencies.
    // You can declare any Maven/Ivy/file repository here.
    jcenter()
}

// In this section you declare the dependencies for your production and test code
dependencies {
    // The production code uses the SLF4J logging API at compile time
    compile 'org.slf4j:slf4j-api:1.7.25'
    // Servlet
    compile group: 'javax.servlet', name: 'javax.servlet-api', version: '3.1.0'
    // JSTL
    compile group: 'javax.servlet.jsp', name: 'javax.servlet.jsp-api', version: '2.3.1'
    // MySQL JDBC
    compile group: 'mysql', name: 'mysql-connector-java', version: '5.1.45'

    // Declare the dependency for your favourite test framework you want to use in your tests.
    // TestNG is also supported by the Gradle Test task. Just change the
    // testCompile dependency to testCompile 'org.testng:testng:6.8.1' and add
    // 'test.useTestNG()' to your build script.
    testCompile 'junit:junit:4.12'
}

gretty {
    httpPort = 8080
    contextPath = '/'
}
```

And then you can run the following task (assuming you already have the Java code
following the Gradle convention under `src/main/java`)

* `./gradlew appRun`
* open up http://localhost:8080

