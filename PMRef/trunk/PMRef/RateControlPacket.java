// Decompiled by Jad v1.5.8f. Copyright 2001 Pavel Kouznetsov.
// Jad home page: http://www.kpdus.com/jad.html
// Decompiler options: packimports(3) 

package PMRef;

import java.io.IOException;
import java.net.*;

// Referenced classes of package PMRef:
//            dlk7lhz, Constants

class RateControlPacket extends CuseemePacket
        implements Constants
{

    RateControlPacket()
    {
    }

    RateControlPacket(byte abyte0[])
    {
        this(abyte0, true);
    }

    RateControlPacket(byte abyte0[], boolean flag)
    {
        super(abyte0, flag);
        super.buffer = new byte[26 + abyte0.length];
        System.arraycopy(abyte0, 0, super.buffer, 26, abyte0.length);
        setDestFamily(1);
        setSourceFamily(2);
        setSourcePort(7648);
        setSequenceNumber(0L);
        setPacketLength(super.buffer.length);
        setMessageType(0);
        setDataType(CURATECONTROL);
    }

    void bdhb(InetAddress inetaddress, InetAddress inetaddress1, byte abyte0[], int i)
        throws UnknownHostException, SocketException, IOException
    {
        setDestAddr2(inetaddress1);
        setDestport(i);
        setSourceAddr2(abyte0);
        super.sendToAddress(inetaddress, i);
    }

    static final short Bdhb = 110;
}