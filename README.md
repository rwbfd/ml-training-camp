# ML-Training-Camp: A course on Predictive Tabular Data Mining and Deep Learning in Tabular Data

## Introduction
### Aims
This is a course offered by GeekBang training platform, in one of the three series, with the second being Natural Language Modeling, the third being Computational Version and Reinforcement learning, emphasizing Auto Driving. The core aim of the course is to introduce machine learning that matters. 

### Course Material Update
The course is scheduled every week, and the whole series will take about a year to finish the course material of three series. The contributors are from mostly MSRA, DeepMind, Facebook AI Research, Tsinghua University, Beijing University, and the University of Amsterdam. 

### Course Language
Unfortunately, the original target audience is Chinese; therefore a Chinese version is first derived. An English version of the lecture notes will soon follow. 

## Course Outline (Planned; continuously updated)
### Chapter 01: Python 
Colab and Jupyter Notebook. 
How to set up a deep learning working environment.
A brief review of Python and R.
Exceptional handling with an emphasis on functional programming techniques.
Functional programming in Python.
Decorator.
Dataclass and docstring. 

### Chapter 02: Speed up Python code. 
Optimization work-flow. The pitfalls and the experiences. 
General Profiling Methods with cProfile, line profiler, and intel Vtune.
Cython and C. How to write bridge the gap between Python and the C world. What are good habits. 
Parallel programming with an emphasis on Ray and Cython Openmp.
Exercises: Optimize Target Encoding.

### Chapter 03: Data Manipulation and Visualization
Basics of Numpy. Except for common functionality, we will emphasize Broadcast, einsum, and take function. 
Use Jax to Speed up Numpy. The difference between Jax's functional programming methods and Numpy; How to use JIT, Scan, and PyTree. 
Pandas basics.
'dplyr' in R. 
Matplotlib and TensorBoard introduction. 
### (Optional Chapter 3.5): Advanced Techniques in Speeding up Your Programming
The primary CPU hardware architecture and how it affects your performance. 
How these techniques will be reflected by Vtune and how to change your code (Similar to the VTune Cookbook). 
Template Meta-Programing. Boost MPL and Hana. CRTP and SFIANE, and how to use this to achieve "static polymorphism".
Use Template Meta-Programming to write lazy evaluation in the form of Eigen. 
Use OpenMP SIMD.
Use oneTPP to build complex dependency graph. 
### Chapter 04: Machine Learning Basics
Different views on Machine Learning: Practical, Statistical, Optimization.
The common practice of developing machine learning algorithms. 
Review of standard probability theory. 
Maximum likelihood estimation and EM Algorithm.
Bayesian estimation and Variational inference. 

### (Optional Chapter 4.5) Advanced Theory for Theories That Matters.
Why unifying GAN, VAE, and RL using probability networks. 
The limitation of the current application of optimal transport theory. Why it is useful and but not that useful. 
What is the advantage of optimal transport comparing to Le Cam theory. 
How one might change optimal transport theory using the idea of Le Cam Theory and why it matters. 
The three advance toolboxes for abstract mathematics and why it is useful.
The Geometry Toolbox: General Topology and Uniform Space, Topological space and general duality. Reproducing Hilbert Space. Differential Geometry and Riemannian modeled on Infinite Dimensional Space.
The Algebra Toolbox: Operator Algebra and Spectral Theory, Lattice  Theory. Unbounded Operator. Ergodic Theory. 
Abstract Probabilistic Framework: Semimarting and Convergence of Stochastic Processes, Empirical Processes, Probability on Banach Spaces. Markov transition and Dynamic Systems. Stochastic Analysis on Manifolds. Probability in Banach Spaces. 
The Dirty ToolBox Inequalities. General tricks to derive ad-hoc inequalities from inequality in analysis and inequality in probability. The advanced methods that are based on the concentration of measure tricks, chaining tricks etc.  
How to study these: Which book should be read carefully and which book should occur only by reference. 

## FAQ
### How to Contribute
All contributions are welcome. Especially more explanations. To contribute, raise an issue first, and we will go from there. 

### Can I get the Latex Source code.
Unfortunately no. There have been instances where the other institute stole the slides and then marked them as their own. So no. However, if you want something to be changed. Please raise it in the issues.
 
### Can I use your material
If you are an education institute, such as a university. Or you are using it as inside training, you are always free to do so. I will be glad if you use it (and mention me) so that as a community, to make it better.

However, if you are a profitable organization that steals others' work and claim as their own to make money, we will file a lawsuit. 

### Can I get the videos?
I would like to. However, this is a paid course in GeekBang. The fact that they would agree to share these materials are already very generous. Also, I do this for a very modest sum of compensation. Therefore, if you like the content and want me to contribute now, the best thing is to buy their course so I don't have to work till 2 am to pay for the house loan. 
