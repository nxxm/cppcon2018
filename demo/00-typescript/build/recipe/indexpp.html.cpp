/*<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" ng-app="examplesApp" lang="en-us"><head>
  <link href="http://gmpg.org/xfn/11" rel="profile">
  <meta http-equiv="content-type" content="text/html; charset=UTF-8">
  <meta name="description" content="TypeScript brings you optional static type-checking along with the latest ECMAScript features.">
  <meta name="keywords" content="type checker, javascript, transpiler, compiler, static types">

  <!-- Enable responsiveness on mobile devices-->
  <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1">

  <title>
    
      TypeScript - JavaScript that scales.
    
  </title>

  <!-- CSS -->
  <link rel="stylesheet" href="index_files/vendor.css">

  <link rel="stylesheet" href="index_files/style.css">

  <!-- Icons --> <!-- TODO: Check that these all wok -->
  <link rel="apple-touch-icon" sizes="57x57" href="https://www.typescriptlang.org/assets/images/icons/apple-touch-icon-57x57.png">
  <link rel="apple-touch-icon" sizes="60x60" href="https://www.typescriptlang.org/assets/images/icons/apple-touch-icon-60x60.png">
  <link rel="apple-touch-icon" sizes="72x72" href="https://www.typescriptlang.org/assets/images/icons/apple-touch-icon-72x72.png">
  <link rel="apple-touch-icon" sizes="76x76" href="https://www.typescriptlang.org/assets/images/icons/apple-touch-icon-76x76.png">
  <link rel="apple-touch-icon" sizes="114x114" href="https://www.typescriptlang.org/assets/images/icons/apple-touch-icon-114x114.png">
  <link rel="apple-touch-icon" sizes="120x120" href="https://www.typescriptlang.org/assets/images/icons/apple-touch-icon-120x120.png">
  <link rel="apple-touch-icon" sizes="144x144" href="https://www.typescriptlang.org/assets/images/icons/apple-touch-icon-144x144.png">
  <link rel="apple-touch-icon" sizes="152x152" href="https://www.typescriptlang.org/assets/images/icons/apple-touch-icon-152x152.png">
  <link rel="apple-touch-icon" sizes="180x180" href="https://www.typescriptlang.org/assets/images/icons/apple-touch-icon-180x180.png">
  <link rel="icon" type="image/png" href="https://www.typescriptlang.org/assets/images/icons/favicon-32x32.png" sizes="32x32">
  <link rel="icon" type="image/png" href="https://www.typescriptlang.org/assets/images/icons/android-chrome-192x192.png" sizes="192x192">
  <link rel="icon" type="image/png" href="https://www.typescriptlang.org/assets/images/icons/favicon-96x96.png" sizes="96x96">
  <link rel="icon" type="image/png" href="https://www.typescriptlang.org/assets/images/icons/favicon-16x16.png" sizes="16x16">
  <link rel="manifest" href="https://www.typescriptlang.org/assets/images/icons/manifest.json">
  <link rel="mask-icon" href="https://www.typescriptlang.org/assets/images/icons/safari-pinned-tab.svg" color="#5bbad5">
  <link rel="shortcut icon" href="https://www.typescriptlang.org/assets/images/icons/favicon.ico">
  <meta name="msapplication-TileColor" content="#da532c">
  <meta name="msapplication-TileImage" content="/assets/images/icons/mstile-144x144.png">
  <meta name="msapplication-config" content="/assets/images/icons/browserconfig.xml">
  <meta name="theme-color" content="#ffffff">

  <!-- JS -->
  <script async="" src="index_files/analytics.js"></script><script src="index_files/vendors.js"></script>

  <!-- JS -->
  <script src="index_files/all.js"></script>

  <!-- RSS -->
  <link rel="alternate" type="application/rss+xml" title="RSS" href="https://www.typescriptlang.org/atom.xml">

</head>
<body>
	<a href="#main-content" class="main-content-skip" tabindex="0">
    Skip to main content
</a>
    <header role="banner" style="display:none;">
    <nav role="navigation" class="navbar navbar-default navbar-fixed-top">
         <div class="container-fluid">
            <!-- Contains the logo and a toggle button for smaller screen sizes. -->
            <div class="navbar-header">
              <!-- Toggles the visibility of the nav area on smaller screen sizes. -->
              <button type="button" class="navbar-toggle pull-left collapsed" data-toggle="collapse" data-target="#navbar-collapse-div">
                <span class="sr-only">Toggle navigation</span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
              </button>

              <!-- Top-left logo. -->
              <a class="navbar-brand" href="https://www.typescriptlang.org/index.html" aria-label="TypeScript Home Page">
                <img class="navbar-logo" src="index_files/logo_nocircle.svg">
              </a>
            </div>

            <!-- The navigation items. -->
            <div class="collapse navbar-collapse centered-navbar" id="navbar-collapse-div">
              <ul class="nav navbar-nav">
                <li class=""><a href="https://www.typescriptlang.org/samples/index.html">Quick Start</a></li>
                <li class=""><a href="https://www.typescriptlang.org/docs/index.html">Documentation </a></li>
                <li><a href="https://www.typescriptlang.org/index.html#download-links">Download</a></li>
                <li class=""><a href="https://www.typescriptlang.org/community/index.html">Connect</a></li>
                <li class=""><a href="https://www.typescriptlang.org/play/index.html">Playground</a></li>
              </ul>
            </div>

            <!-- The "Fork Me on GitHub!" ribbon. -->
            <a class="fork-me-ribbon pull-right hidden-xs" href="https://github.com/Microsoft/TypeScript">
              <img src="index_files/fork_me_ribbon.svg" alt="Fork TypeScript on GitHub">
            </a>
        </div>
    </nav>
</header>

	<main id="main-content" class="content">
	<div class="home">
    <div class="drawer-overlay"></div>
    <!-- content -->
    <div class="container-fluid skyline-container">
        <div class="row top_section">
            <div id="banner_ts" class="col-md-12 column bannerContainer">
                <div class="skyline-img-background"></div>
                <div class="skyline-img-foreground"></div>
                <div class="banner">
                    <img class="bannerLogo  center-block hidden-xs" src="index_files/logo.svg">
                    <div class="bannerText">
                        <div class="bannerTextHeadline">
                            JavaScript that scales.
                        </div>
                        <p>TypeScript is a typed superset of JavaScript that compiles to plain JavaScript.</p>
                        <p>Any browser. Any host. Any OS. Open source.</p>
                    </div>
                </div>
                <div class="row btn-group btn-group-lg bannerButtons">
                    <div class="col-sm-6">
                        <a class="btn" href="#download-links" aria-label="Jump to Downloads">
                            Download
                        </a>
                    </div>
                    <div class="col-sm-6">
                        <a class="btn" href="https://www.typescriptlang.org/docs/index.html">
                            Documentation
                        </a>
                    </div>
                </div>
            </div>
            <div id="banner_cpp" class="col-md-12 column bannerContainer" style="opacity:0;display:none;">
                <div class="skyline-img-background-cpp">
                  <div class="banner">
                      <img class="bannerLogo  center-block hidden-xs" src="index_files/cpp_logo.svg" style="width:18rem;">
                      <div class="bannerText">
                          <div class="bannerTextHeadline" >
                            <span style="border-radius: 0.1em 0.5em; background: white; padding: 0.3em;">WebApps in C++ ?</span>
                          </div>
                          <p>Any browser. Any host. Any OS. Open source.</p>
                      </div>
                  </div> 
               
                  <div class="row btn-group btn-group-lg bannerButtons">
                      <div class="col-sm-6">
                          <a class="btn" href="#download-links" aria-label="Jump to Downloads">
                              Download
                          </a>
                      </div>
                      <div class="col-sm-6">
                          <a class="btn" href="https://www.typescriptlang.org/docs/index.html">
                              Documentation
                          </a>
                      </div>
                  </div>

                </div>
            </div>
        </div> <!-- End of skyline section -->

        <div class="container-fluid swimlane-alternate swimlane-carousel">
            <div class="container">
                <div class="row">
                    <h2 class="hashtag centered"><a href="https://twitter.com/intent/tweet?text=%23iHeartTypeScript">#iHeartTypeScript</a></h2>
                    <div class="col-sm-12">
                        <div id="social-proof-carousel" class="carousel slide">
                            <a class="left carousel-control" href="#social-proof-carousel" role="button" data-slide="prev">
                                <span class="glyphicon glyphicon-chevron-left" aria-hidden="true"></span>
                                <span class="sr-only">Previous</span>
                            </a>
                            <div class="carousel-inner" role="listbox">
                                
                                
                                <div class="item active">
                                    <div class="container-fluid">
                                        <div class="row tweets">
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-0_0-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/littlecalculist.jpg')" href="https://twitter.com/littlecalculist/status/857464401569357824" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-0_0-name">Dave Herman </span><span class="twitter-handle">@littlecalculist </span>
                                                <p dir="ltr" lang="en">I ported my first nontrivial JS lib to <a href="https://twitter.com/typescriptlang">@typescriptlang</a> and it was a pure joy. What a lovely piece of technology.</p>
                                                </blockquote>
                                            </div>
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-0_1-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/Kappyh.jpg')" href="https://twitter.com/Kappyh/status/822247462232530945" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-0_1-name">Gabriela Mendes </span><span class="twitter-handle">@Kappyh </span>
                                                <p dir="ltr" lang="en"><a href="https://twitter.com/typescriptlang">@typescriptlang</a> is really awesome O-O'</p>
                                                </blockquote>
                                            </div>
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-0_2-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/thiagoviski.jpg')" href="https://twitter.com/thiagoviski/status/857024764992475142" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-0_2-name">Thiago Script 🌴😎🏖 </span><span class="twitter-handle">@thiagoviski </span>
                                                <p dir="ltr" lang="en"><a href="https://twitter.com/hashtag/TypeScript?src=hash">#TypeScript</a> is really awesome! I'm glad to see people are using it in some of <a href="https://twitter.com/hashtag/Preact?src=hash">#Preact</a> projects. <a href="https://twitter.com/hashtag/FrontEnd?src=hash">#FrontEnd</a> <a href="https://twitter.com/hashtag/Webpack?src=hash">#Webpack</a> <a href="https://twitter.com/hashtag/Programming?src=hash">#Programming</a></p>
                                                </blockquote>
                                            </div>
                                            
                                        </div>
                                    </div>
                                </div>
                                
                                
                                <div class="item ">
                                    <div class="container-fluid">
                                        <div class="row tweets">
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-1_0-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/mweststrate.jpg')" href="https://twitter.com/mweststrate/status/861743269255839744" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-1_0-name">Michel Weststrate </span><span class="twitter-handle">@mweststrate </span>
                                                <p dir="ltr" lang="en">I'm highly impressed with <a href="https://twitter.com/typescriptlang">@typescriptlang</a> 2.3; powerful enough for meta programming; mobx-state-tree has its type-system 90% expressed in TS <a href="https://t.co/618W3JVTbV">pic.twitter.com/618W3JVTbV</a></p>
                                                </blockquote>
                                            </div>
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-1_1-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/_Tx3.jpg')" href="https://twitter.com/_Tx3/status/858029580585754624" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-1_1-name">Tatu Tamminen </span><span class="twitter-handle">@_Tx3 </span>
                                                <p dir="ltr" lang="en">Microsoft has really done great things with <a href="https://twitter.com/typescriptlang">@typescriptlang</a> and <a href="https://twitter.com/code">@code</a>. TypeScript gets really nice features and VS Code is stable and fast</p>
                                                </blockquote>
                                            </div>
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-1_2-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/carlymho.jpg')" href="https://twitter.com/carlymho/status/858360973786312704" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-1_2-name">Carly Ho </span><span class="twitter-handle">@carlymho </span>
                                                <p dir="ltr" lang="en">typescript has some really great, useful error messages that give you feedback on allowed types, etc.</p>
                                                </blockquote>
                                            </div>
                                            
                                        </div>
                                    </div>
                                </div>
                                
                                
                                <div class="item ">
                                    <div class="container-fluid">
                                        <div class="row tweets">
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-2_0-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/micahgodbolt.jpg')" href="https://twitter.com/micahgodbolt/status/857301600351600640" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-2_0-name">Micah Godbolt </span><span class="twitter-handle">@micahgodbolt </span>
                                                <p dir="ltr" lang="en">Typescript
 + Intellisense is a game changer. I don't want to work without them 
ever again. Projects are easier to pick up, have less errors <a href="https://t.co/YqUGdSgUiY">https://t.co/YqUGdSgUiY</a></p>
                                                </blockquote>
                                            </div>
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-2_1-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/v2r_red.jpg')" href="https://twitter.com/v2r_red/status/859327297765036032" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-2_1-name">Tung Nguyen </span><span class="twitter-handle">@v2r_red </span>
                                                <p dir="ltr" lang="en"><a href="https://twitter.com/hashtag/TypeScript?src=hash">#TypeScript</a> + <a href="https://twitter.com/hashtag/vscode?src=hash">#vscode</a> =&gt; a great combination 😍 Awesome works 👍<br>Why TypeScript Is Growing More Popular <a href="https://t.co/WqYMzzXjDP">https://t.co/WqYMzzXjDP</a></p>
                                                </blockquote>
                                            </div>
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-2_2-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/tomdale.png')" href="https://twitter.com/tomdale/status/842882958855831557" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-2_2-name">Tom Dale </span><span class="twitter-handle">@tomdale </span>
                                                <p dir="ltr" lang="en">But
 seriously, in every project I've converted, TypeScript has found bugs. 
And rationalizing the types leads to much clearer code.</p>
                                                </blockquote>
                                            </div>
                                            
                                        </div>
                                    </div>
                                </div>
                                
                                
                                <div class="item ">
                                    <div class="container-fluid">
                                        <div class="row tweets">
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-3_0-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/timruffles.jpg')" href="https://twitter.com/timruffles/status/859711691856195584" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-3_0-name">Tim Ruffles </span><span class="twitter-handle">@timruffles </span>
                                                <p dir="ltr" lang="en"><a href="https://twitter.com/typescriptlang">@typescriptlang</a> is like having a extra colleague noticing dumb mistakes and doing grunt work. If you’ve not tried it yet, get in there!</p>
                                                </blockquote>
                                            </div>
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-3_1-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/OweR_ReLoaDeD.jpg')" href="https://twitter.com/OweR_ReLoaDeD/status/844124971270131714" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-3_1-name">Remo H. Jansen </span><span class="twitter-handle">@OweR_ReLoaDeD </span>
                                                <p dir="ltr" lang="en">I just completed a huge refactoring in a <a href="https://twitter.com/hashtag/node?src=hash">#node</a> app. It took me two hours thanks to <a href="https://twitter.com/hashtag/TypeScript?src=hash">#TypeScript</a>. It would have taken me days without it...😊</p>
                                                </blockquote>
                                            </div>
                                            
                                            
                                            
                                            <div class="col-md-4">
                                                <blockquote class="twitter-tweet" data-lang="en">
                                                <a class="twitter-profile-image" role="img" aria-labelledby="tweet-3_2-name" style="background-image: url('/assets/images/socialproof/twitterprofiles/MrJamesHenry.jpg')" href="https://twitter.com/MrJamesHenry/status/855523875261689856" target="_blank"></a>
                                                <span class="twitter-name" id="tweet-3_2-name">James Henry </span><span class="twitter-handle">@MrJamesHenry </span>
                                                <p dir="ltr" lang="en">It’s truly incredible how far <a href="https://twitter.com/typescriptlang">@typescriptlang</a> has come in the last 9-12 months! Unhappy with 1.8? Take another look - 2.x is another level 🚀</p>
                                                </blockquote>
                                            </div>
                                            
                                        </div>
                                    </div>
                                </div>
                                
                            </div>
                        </div>
                        <a class="right carousel-control" href="#social-proof-carousel" role="button" data-slide="next">
                            <span class="glyphicon glyphicon-chevron-right" aria-hidden="true"></span>
                            <span class="sr-only">Next</span>
                        </a>
                    </div>
                </div>
            </div>
        </div>
    </div>

    <div class="container-fluid value-props">
        <div class="container">
            <div class="row clearfix ">
                <div class="row box-highlight-containers">
                    <div class="col-md-4">
                        <div class="box-headline-img js-icon center-block">
                            <img src="index_files/startsAndEndsWithJavascript.png">
                        </div>
                        <div class="box-text">
                            <h3>
                                <span class="line">Starts and ends with</span>
                                <span class="line">JavaScript</span>
                            </h3>
                            <p>TypeScript starts from the same syntax 
and semantics that millions of JavaScript developers know today.
                            Use existing JavaScript code, incorporate 
popular JavaScript libraries, and call TypeScript code from JavaScript.</p>
                            <p>TypeScript compiles to clean, simple 
JavaScript code which runs on any browser, in Node.js, or in any 
JavaScript engine that supports ECMAScript 3 (or newer).</p>
                        </div>
                    </div>
                    <div class="col-md-4">
                        <div class="box-headline-img crane-icon center-block">
                            <img src="index_files/crane.png">
                        </div>
                        <div class="box-text middle-box">
                            <h3>
                                <span class="line">Strong tools for</span>
                                <span class="line">large apps</span>
                            </h3>
                            <p>
                                Types enable JavaScript developers to 
use highly-productive development tools and practices like static 
checking and code refactoring when developing JavaScript applications.
                            </p>
                            <p>
                                Types are optional, and type inference 
allows a few type annotations to make a big difference to the static 
verification of your code. Types let you define interfaces between 
software components and gain insights into the behavior of existing 
JavaScript libraries.
                            </p>
                        </div>
                    </div>
                    <div class="col-md-4">
                        <div class="box-headline-img soa-icon center-block">
                            <img src="index_files/stateOfTheArtJavascript_16x.svg">
                        </div>
                        <div class="box-text">
                            <h3>
                                <span class="line">State of the art</span>
                                <span class="line">JavaScript</span>
                            </h3>
                            <p>TypeScript offers support for the latest 
and evolving JavaScript features, including those from ECMAScript 2015 
and future proposals, like async functions and decorators, to help build
 robust components.</p>
                            <p>These features are available at 
development time for high-confidence app development, but are compiled 
into simple JavaScript that targets ECMAScript 3 (or newer) 
environments.</p>
                        </div>
                    </div>
                </div>
            </div>
        </div>
        <div class="container-fluid">
            <div class="row">
                <div class="col-sm-12 girder-background">
                    <div class="btn-group btn-group-lg center-block">
                        <div class="btn-vert-block">
                            <a href="https://www.typescriptlang.org/docs/index.html" class="btn center-block">
                                Learn it fast
                            </a>
                        </div>
                    </div>
                    <div id="download-links"></div>
                </div>
            </div>
        </div>
    </div>



    <div class="container-fluid light-theme row-download-typescript">
        <div class="container">
            <div class="row">
                <div class="col-xs-12">
                    <h1>Get TypeScript</h1>
                </div>
            </div>
            <div class="row">
                <div class="col-md-4 col-sm-6">
                    <h3>Node.js</h3>
                    <p>The command-line TypeScript compiler can be installed as a Node.js package.</p>
                    <div class="node-samples">
                        <dl class="clearfix">
                            <dt>Install</dt>
                            <dd>npm install -g typescript</dd>
                        </dl>
                        <dl class="clearfix">
                            <dt>Compile</dt>
                            <dd>tsc helloworld.ts</dd>
                        </dl>
                    </div>
                </div>
                <div class="col-md-3 col-sm-6">
                    <h3>Visual Studio</h3>
                    <ul class="IDE-native">
                        <li class="visualstudio-2017"><a target="_blank" href="https://www.microsoft.com/en-us/download/details.aspx?id=55258">Visual Studio 2017</a></li>
                        <li class="vscode"><a target="_blank" href="https://code.visualstudio.com/">Visual Studio Code</a></li>
                        <li class="visualstudio-2015"><a target="_blank" href="https://www.microsoft.com/en-us/download/details.aspx?id=48593">Visual Studio 2015</a></li>
                    </ul>
                </div>
                <div class="col-md-5 col-sm-8 col-xs-9 others">
                    <div class="row">
                        <h3>And More...</h3>
                        <div class="col-xs-6">
                            <ul class="IDE-plugins">
                                <li class="sublime"><a target="_blank" href="https://github.com/Microsoft/TypeScript-Sublime-Plugin">Sublime Text</a></li>
                                <li class="atom"><a target="_blank" href="https://atom.io/packages/atom-typescript">Atom</a></li>
                                <li class="eclipse"><a target="_blank" href="https://github.com/palantir/eclipse-typescript">Eclipse</a></li>
                            </ul>
                        </div>
                        <div class="col-xs-6">
                            <ul class="IDE-plugins">
                                <li class="emacs"><a target="_blank" href="https://github.com/ananthakumaran/tide">Emacs</a></li>
                                <li class="webstorm"><a target="_blank" href="https://www.jetbrains.com/webstorm/">WebStorm</a></li>
                                <li class="vim"><a target="_blank" href="https://github.com/Microsoft/TypeScript/wiki/TypeScript-Editor-Support#vim">Vim</a></li>
                            </ul>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <div class="container-fluid swimlane-alternate">
        <div class="container">
            <div class="row">
                <h1>See TypeScript in Action</h1>
                
                <a target="_blank" href="https://channel9.msdn.com/Events/Build/2017/B8088/" aria-label="Watch a video of TypeScript in action."><img src="index_files/anders-video.png" class="video"></a>
            </div>
        </div>
    </div>
    <div class="container-fluid middle-row">
        <div class="container">
            <div class="row">
                <div class="col-md-12">
                    <h1>Open Source</h1>

                    <p>TypeScript is being developed on GitHub. The 
TypeScript compiler is implemented in TypeScript and can be used in any 
JavaScript host.</p>

                    <ul class="opensource-list">
                        <li><p>
                            Read
                            <a href="https://github.com/Microsoft/TypeScript/blob/master/doc/spec.md">the specification on GitHub</a> or download it as a
                            <a href="https://github.com/Microsoft/TypeScript/blob/master/doc/TypeScript%20Language%20Specification.docx?raw=true">docx</a> or
                            <a href="https://github.com/Microsoft/TypeScript/blob/master/doc/TypeScript%20Language%20Specification.pdf?raw=true">pdf</a>.
                        </p></li>
                        <li><p>Play with the <a href="#download-links">bits</a> and <a href="https://github.com/Microsoft/TypeScript/issues" target="_blank">file bugs</a>.</p></li>
                        <li><p>Join the <a href="https://twitter.com/search?q=%23typescript" target="_blank">#typescript</a> Twitter discussion and <a onclick="reportAction('Download', 'source', {'location': '/'})" href="https://github.com/Microsoft/TypeScript">follow the GitHub project</a>.</p></li>
                    </ul>

                    <a class="btn" href="https://github.com/Microsoft/TypeScript" onclick="reportAction('Download', 'source', {'location': '/'})">
                        Get the source code
                    </a>
                </div>
            </div>
        </div>
    </div>

    <div class="container-fluid swimlane-alternate swimlane-carousel">
        <div class="container">
            <div class="row">
                <div class="col-sm-12">
                    <h1>Why TypeScript?</h1>
                    <div id="friend-carousel" class="carousel slide" data-ride="carousel">
                        <!-- Back control -->
                        <a class="left carousel-control" href="#friend-carousel" role="button" data-slide="prev">
                            <span class="glyphicon glyphicon-chevron-left" aria-hidden="true"></span>
                            <span class="sr-only">Previous</span>
                        </a>

                        <!-- Wrapper for slides -->
                        <div class="carousel-inner" role="listbox">
                            <!-- SLIDE START -->
                            <div class="item active">
                                <div class="friend-container">
                                    <div class="friend-item">
                                        <div class="image-container">
                                            <a href="https://www.typescriptlang.org/community/friends.html" aria-label="Angular and other friends of TypeScript">
                                                <img src="index_files/logo.png" class="friend-logo">
                                            </a>
                                        </div>
                                        <div class="quote-container">
                                            <p><em>We love TypeScript for many things… With TypeScript, several of our team members have said things like '<strong>I now actually understand most of our own code!</strong>' because they can easily traverse it and understand relationships much better. And we’ve <strong>found several bugs via TypeScript’s checks</strong>.”</em></p>
                                        </div>
                                        <div class="author-container">
                                            <p><em>— Brad Green, Engineering Director - AngularJS</em></p>
                                        </div>
                                    </div>
                                </div>
                            </div>
                            <div class="item">
                                <div class="friend-container">
                                    <div class="friend-item">
                                        <div class="image-container">
                                            <a href="https://www.typescriptlang.org/community/friends.html" aria-label="Ionic and other friends of TypeScript">
                                                <img src="index_files/logo_005.png" class="friend-logo">
                                            </a>
                                        </div>
                                        <div class="quote-container">
                                            <p><em>“One of Ionic's main goals is to <strong>make app development as quick and easy as possible</strong>, and the <strong>tooling support TypeScript gives us with autocompletion, type checking and source documentation</strong> really aligns with that.”</em></p>
                                        </div>
                                        <div class="author-container">
                                            <p><em>— Tim Lancina, Tooling Developer - Ionic</em></p>
                                        </div>
                                    </div>
                                </div>
                            </div>
                            <div class="item">
                                <div class="friend-container">
                                    <div class="friend-item">
                                        <div class="image-container">
                                            <a href="https://www.typescriptlang.org/community/friends.html" aria-label="NativeScript and other friends of TypeScript">
                                                <img src="index_files/logo_006.png" class="friend-logo">
                                            </a>
                                        </div>
                                        <div class="quote-container">
                                            <p><em>“TypeScript helped us to <strong>reuse the team’s knowledge</strong> and to <strong>keep the same team velocity</strong> by providing the same excellent developer experience as C# ... A huge improvement over plain JavaScript.”</em></p>
                                        </div>
                                        <div class="author-container">
                                            <p><em>— Valio Stoychev, PM Lead - NativeScript</em></p>
                                        </div>
                                    </div>
                                </div>
                            </div>
                            <div class="item">
                                <div class="friend-container">
                                    <div class="friend-item">
                                        <div class="image-container">
                                            <a href="https://www.typescriptlang.org/community/friends.html" aria-label="Aurelia and other friends of TypeScript">
                                                <img src="index_files/logo_004.png" class="friend-logo">
                                            </a>
                                        </div>
                                        <div class="quote-container">
                                            <p><em>“By combining Aurelia with TypeScript for modern web, mobile and desktop development, we've seen what is perhaps the <strong>most beautiful and elegant app development workflow to date</strong>.”</em></p>
                                        </div>
                                        <div class="author-container">
                                            <p><em>— Rob Eisenberg, Architect - Aurelia</em></p>
                                        </div>
                                    </div>
                                </div>
                            </div>
                            <div class="item">
                                <div class="friend-container">
                                    <div class="friend-item">
                                        <div class="image-container">
                                            <a href="https://www.typescriptlang.org/community/friends.html" aria-label="Dojo and other friends of TypeScript">
                                                <img src="index_files/logo_003.png" class="friend-logo">
                                            </a>
                                        </div>
                                        <div class="quote-container">
                                            <p><em>TypeScript has helped ensure that Dojo 2 will be built on rock solid foundations, which <strong>will make enterprise development better</strong>. TypeScript gives us <strong>all the benefits of ES6, plus more productivity</strong>, … and <strong>responsive support from the TypeScript team</strong>.”</em></p>
                                        </div>
                                        <div class="author-container">
                                            <p><em>— Dylan Schiemann, Co-founder - Dojo Toolkit, CEO - SitePen</em></p>
                                        </div>
                                    </div>
                                </div>
                            </div>
                            <div class="item">
                                <div class="friend-container">
                                    <div class="friend-item">
                                        <div class="image-container">
                                            <a href="https://www.typescriptlang.org/community/friends.html" aria-label="Epic and other friends of TypeScript">
                                                <img src="index_files/logo_002.png" class="friend-logo">
                                            </a>
                                        </div>
                                        <div class="quote-container">
                                            <p><em>“TypeScript is a <strong>smart choice when writing a modern web- or JavaScript-based application</strong>. TypeScript’s carefully considered language features and functionality, and its consistently improving tools, result in a <strong>terrifically productive development experience</strong>.”</em></p>
                                        </div>
                                        <div class="author-container">
                                            <p><em>— Aaron Cornelius, Research Fellow - Epic</em></p>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>

                        <!-- Forward control -->
                        <a class="right carousel-control" href="#friend-carousel" role="button" data-slide="next">
                            <span class="glyphicon glyphicon-chevron-right" aria-hidden="true"></span>
                            <span class="sr-only">Next</span>
                        </a>

                    <!-- END OF CAROUSEL -->
                    </div>

                    <a class="more-friends" href="https://www.typescriptlang.org/community/friends.html"><p class="text-center">See more friends of TypeScript</p></a>

                </div>
            </div>
        </div>
    </div>

</div>

<div class="container-fluid next-steps-container">
    <div class="container ">
        <div class="row">
            <div class="col-sm-6">
                <div class="value-prop-1">
                    <div class="next-step-header">Contribute</div>
                    <div class="content">
                        <div class="spacer"></div>
                        <div>
                            Help shape the future of TypeScript by joining our community today
                            and send us pull requests via our <a href="https://github.com/Microsoft/TypeScript">GitHub repository</a>!
                        </div>
                    </div>
                </div>
            </div>
            <div class="col-sm-6">
                <div class="value-prop-2">
                    <div class="separator hidden-xs"></div>
                    <div class="next-step-header">Learn</div>
                    <div class="content">
                        <div class="spacer"></div>
                        <div>
                            <div><a href="https://www.typescriptlang.org/docs/">Docs</a> &amp; <a href="https://www.typescriptlang.org/samples/">Quick Starts</a> - To help you get started</div>
                            <div><a href="https://github.com/Microsoft/TypeScript" target="_blank">Github</a> &amp; <a href="https://stackoverflow.com/questions/tagged/typescript" target="_blank">Stack Overflow</a> - File and discuss issues</div>
                            <div><a href="http://blogs.msdn.com/b/typescript/" target="_blank">Blog</a> &amp; <a href="https://twitter.com/typescriptlang/" target="_blank">Twitter</a> - Stay up to date</div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>

<script>
 $(document).ready(function () {

    $(".video-btn").each(function () {
        $(this).magnificPopup({
            items: {
                src: '<video class="video-content" src="' + this.href + '" controls="controls" autoplay="autoplay">' + '</video>',
                type: 'inline'
            },
            disableOn: 700,
            mainClass: 'mfp-fade',
            showCloseBtn: true,
            callbacks: {
                open: function () {
                    $(this.content[0]).on('play', function () {
                        reportAction('video', 'play');
                    });

                    $(this.content[0]).on('pause', function () {
                        reportAction('video', 'pause');
                    });

                    $(this.content[0]).on('ended', function () {
                        reportAction('video', 'ended');
                    });
                }
            }
        });
    });
});
</script>

	</main>
	<footer role="contentinfo">
    <div class="container-fluid signature-container">
        <div class="container">
            <div class="row signature">
                <div class="col-sm-7 col-xs-12">
                    <p class="pull-left">Made with <span class="glyphicon glyphicon-heart"></span> in Redmond</p>
                    <div class="twitter-buttons pull-left">
                        <a class="twitter-follow-button" href="https://twitter.com/typescriptlang">Follow @Typescriptlang</a>
                    </div>
                    <div class="github-buttons pull-left" role="link" onkeypress="window.location.href = 'https://github.com/Microsoft/TypeScript'" tabindex="0" aria-label="Star TypeScript on GitHub">
                        <iframe allowtransparency="true" scrolling="no" tabindex="-1" style="width: 1px; height: 0px; border: medium none;" src="index_files/buttons.html" frameborder="0"></iframe>
                    </div>
                </div>
                <div class="col-sm-5 col-xs-12">
                    <img class="ms-logo-footer pull-right" src="index_files/Microsoft-logo_rgb_c-gray.svg">
                    <p class="copyright pull-right">©2012-2018 Microsoft</p>
                    <p class="privacy pull-right"><a href="https://go.microsoft.com/fwlink/?LinkId=521839" data-mscc-ic="false">Privacy</a></p>
                </div>
            </div>
        </div>
    </div>
</footer>



<script src="index_files/cc.js"></script>


<script type="text/c++">*/

  #include <belle/vue/dom.hxx>
  #include <belle/vue/fx.hxx>

  int main() {

    using namespace belle::vue;

    auto banner_ts = get_element_by_id("banner_ts");
    auto banner_cpp = get_element_by_id("banner_cpp");
    
    fx::fade_out(banner_ts, [=]() mutable {

      banner_ts.setAttribute("style", "display:none;");
      banner_cpp.setAttribute("style", "display:visible;");
      fx::fade_in(banner_cpp);

    });
      

    return 0;
  }

/*</script>


</body></html>
*/