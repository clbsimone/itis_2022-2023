class IPaddress():
    def __init__(self, ip_string):
        self.ip_notazione_dec = ip_string
        self.ip_notazione_bin = self.convertBin()
        self.ip_bin = self.convertBinNoPunti()


    def toList(self):
        lista = self.ip_notazione_dec.split(".")
        return [int(i) for i in lista]

    def convertBin(self):
        l = self.toList()
        s = ""

        for i in l:
            temp = bin(i)[2:]
            temp = "0"*(8 - len(temp)) + temp
            s = s + temp + "."

        return s[0:-1]

    def convertBinNoPunti(self):
        l = self.toList()
        s = ""

        for i in l:
            temp = bin(i)[2:]
            temp = "0"*(8 - len(temp)) + temp
            s = s + temp

        return s
    
    def subnetMask(self, subnet_mask):
        sm = "255.255.255.255"
        

    def convertDec(self):
        pass
    def ipBrodcast(self, subnet_mask):
        pass


    

def main():
    indirizzoIP = IPaddress("192.168.0.123")

    print(indirizzoIP.ip_notazione_dec)
    print(indirizzoIP.ip_notazione_bin)
    # SB: print(indirizzoIP.toList())



if __name__ == "__main__":
    main()