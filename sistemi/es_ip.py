import math

IP_SBM = "11111111111111111111111111111111"
BIT = 8
SBM = 32

class IPaddres():
    def __init__(self, ip_addres, sm):
        self.ip_decimal = ip_addres
        self.subnet_mask = sm
        self.ip_binary = self.convertBin()
        self.ip_subnet_mask = self.ipSbm()
        self.n_host_collegabili = self.hostCanConect()
        self.ip_rete_binary = self.ipReteBrodcast("0")
        self.ip_brodcast_binary = self.ipReteBrodcast("1")
        self.ip_rete = self.ipConverter(self.ip_rete_binary)
        self.ip_brodcast = self.ipConverter(self.ip_brodcast_binary)


    def toList(self, ip):
        list = ip.split(".")
        return [int(i) for i in list]

    def convertBin(self):
        list = self.toList(self.ip_decimal)
        ip = ""
        
        for i in list:
            tmp = bin(i)[2:]
            tmp = "0" * (BIT - len(tmp)) + tmp
            ip += tmp + "."
        
        return ip[:-1]

    def ipSbm(self):
        tmp = IP_SBM[:len(IP_SBM) - (SBM - int(self.subnet_mask[1:]))]
        tmp += "0" * (len(IP_SBM) - len(tmp))
        
        ip = ""
        for i in range(len(tmp)):
            if(i == 7 or i == 15 or i == 23):
                ip += tmp[i] + "."
            else:
                ip += tmp[i]

        return ip

    def hostCanConect(self):
        return (2 ** (SBM - int(self.subnet_mask[1:])) - 2)

    def convertIpToString(self, ip):
        l = ip.split(".")
        ip = ""
        for i in l:
            ip += i
        return ip

    def ipReteBrodcast(self, b):
        s = self.convertIpToString(self.ip_binary)

        tmp = s[:len(s) - (SBM - int(self.subnet_mask[1:]))]
        tmp += b * (len(s) - len(tmp))

        ip = ""
        for i in range(len(tmp)):
            if (i == 7 or i == 15 or i == 23):
                ip += tmp[i] + "."
            else:
                ip += tmp[i]

        return ip
    
    def binaryToDecimal(self, binary):
        decimal, i = 0, 0

        while (binary != 0):
            decimal = decimal + (binary % 10) * pow(2, i)
            binary = binary//10
            i += 1

        return decimal

    def ipConverter(self, ip):
        l = ip.split(".")
        ip = ""

        for i in l:
            ip += str(self.binaryToDecimal(int(i))) + "."
        return ip[:-1]


def main():
    sbm = "/24"
    ip_addres = IPaddres("10.0.63.124", "/18")

    #print("ip iniziale: ", ip_addres.ip_decimal)
    #print("ip iniziale binario:", ip_addres.ip_binary)
    #print()
    print(ip_addres.ip_subnet_mask)
    #print()

    print("n max host: ", ip_addres.n_host_collegabili)

    #print()
    #print("ip rete bin:", ip_addres.ip_rete_binary)
    #print("ip rete brodcast bin: ", ip_addres.ip_brodcast_binary)
    #print()

    print("ip rete:", ip_addres.ip_rete)
    print("ip brodcast:", ip_addres.ip_brodcast)
    

if __name__ == "__main__":
    main()