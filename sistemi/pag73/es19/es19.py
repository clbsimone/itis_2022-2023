import random

def scriviFile(name_file, alice, bob):
    f = open(name_file, "w")
    
    #for i in range(10):
    #    f.write(f"{alice[i]}, {bob[i]}\n")

    for lancio_alice, lancio_bob in zip(alice, bob):
        f.write(f"{lancio_alice}, {lancio_bob}\n")

    f.close()

def main():
    alice = [random.randint(1, 6) for _ in range(10)]
    bob = [random.randint(1, 6) for _ in range(10)]
    name_file = "file.txt"

    # SB: print(f"Alice: {alice}")
    # SB: print(f"Bob: {bob}")
    
    scriviFile(name_file, alice, bob)

if __name__ == "__main__":
    main()