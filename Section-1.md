# From README.md
- So about those transistors -- Course overview. Describe how FPGAs are buildable using transistors, and that ICs are just collections of transistors in a nice reliable package. Understand the LUTs and stuff. Talk briefly about the theory of transistors, but all projects must build on each other so we can’t build one.

# Main quest:
1. Describe how FPGAs are buildable using transistors.
2. Describe how ICs are just a collection of transistors in a nice reliable package.
3. Understand LUTs and stuff(?).
4. Describe the theory of transistors.(CLEAR)

## Notes
- BEFORE RESEARCH.
1. I have heard, but never really thought about transistors. I believe they are like a light swtich, something can turn off and on.
2. There are different types of transistors. Like Chemical ones and analog ones.
3. I know that in information theory we need some kind of gates to model logic, so I assume that these gates are modeled via transistors.
4. I never heard about FPGAs.
5. Never heard about a LUT and a IC.

- STUPID QUESTION CORNER:
1. Are transistor called because they transist?
(Maybe no connection with the word transist; maybe connection with transfer and resist)
2. What does transisting even mean?
--> Oxford Dict:
transist is the process of being moced or carried from one place to another.
2.1 What is getting carried in a transistor? 2.3 From where to where?(Input --> Output | My guess)

- AFTER RESEARCH.
  - Source: https://en.wikipedia.org/wiki/Transistorhttps://en.wikipedia.org/wiki/Transistor

  - A transistor is a semiconductor device used to amplify or switch electrical signals.
  - What is a semiconductor? And what is a semiconductor device?
  - --> Semiocnductor is a material that conducts electrical charge between conductor and insulator.
  - --> Semiconductor device, is a compoonent that uses semiconductor material.
  - There are  different ypes of divces:
    - Diode, Transistor,  Field-effect transistor, and MOSFET.
  - Transistor as switch for logic gates, they can be in two states, thus we can model information logic, AND, OR , etc. with them. How? We have the current switched, the voltage ahndled and the switching speed. Having an open circut is the state OFF, the short circut is state ON. And an instantatneos transition between the two states.