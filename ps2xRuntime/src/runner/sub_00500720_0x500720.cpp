#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500720
// Address: 0x500720 - 0x500830
void sub_00500720_0x500720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500720_0x500720");
#endif

    switch (ctx->pc) {
        case 0x50072cu: goto label_50072c;
        default: break;
    }

    ctx->pc = 0x500720u;

    // 0x500720: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x500720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x500724: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x500724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500728: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x500728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50072c:
    // 0x50072c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x50072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x500730: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x500730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x500734: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x500734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x500738: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x500738u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x50073c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x50073cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x500740: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x500740u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x500744: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x500744u;
    {
        const bool branch_taken_0x500744 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x500748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500744u;
            // 0x500748: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500744) {
            ctx->pc = 0x50072Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50072c;
        }
    }
    ctx->pc = 0x50074Cu;
    // 0x50074c: 0xc4a30040  lwc1        $f3, 0x40($a1)
    ctx->pc = 0x50074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x500750: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x500750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500754: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x500754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x500758: 0xc4a10048  lwc1        $f1, 0x48($a1)
    ctx->pc = 0x500758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x50075c: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x50075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500760: 0xe4830040  swc1        $f3, 0x40($a0)
    ctx->pc = 0x500760u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x500764: 0xe4820044  swc1        $f2, 0x44($a0)
    ctx->pc = 0x500764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x500768: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x500768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x50076c: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x50076cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x500770: 0xc4a30050  lwc1        $f3, 0x50($a1)
    ctx->pc = 0x500770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x500774: 0xc4a20054  lwc1        $f2, 0x54($a1)
    ctx->pc = 0x500774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x500778: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x500778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x50077c: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x50077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500780: 0xe4830050  swc1        $f3, 0x50($a0)
    ctx->pc = 0x500780u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x500784: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x500784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x500788: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x500788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x50078c: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x50078cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x500790: 0xc4a30060  lwc1        $f3, 0x60($a1)
    ctx->pc = 0x500790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x500794: 0xc4a20064  lwc1        $f2, 0x64($a1)
    ctx->pc = 0x500794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x500798: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x500798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x50079c: 0xc4a0006c  lwc1        $f0, 0x6C($a1)
    ctx->pc = 0x50079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5007a0: 0xe4830060  swc1        $f3, 0x60($a0)
    ctx->pc = 0x5007a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x5007a4: 0xe4820064  swc1        $f2, 0x64($a0)
    ctx->pc = 0x5007a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x5007a8: 0xe4810068  swc1        $f1, 0x68($a0)
    ctx->pc = 0x5007a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x5007ac: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x5007acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x5007b0: 0xc4a30070  lwc1        $f3, 0x70($a1)
    ctx->pc = 0x5007b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x5007b4: 0xc4a20074  lwc1        $f2, 0x74($a1)
    ctx->pc = 0x5007b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x5007b8: 0xc4a10078  lwc1        $f1, 0x78($a1)
    ctx->pc = 0x5007b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5007bc: 0xc4a0007c  lwc1        $f0, 0x7C($a1)
    ctx->pc = 0x5007bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5007c0: 0xe4830070  swc1        $f3, 0x70($a0)
    ctx->pc = 0x5007c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x5007c4: 0xe4820074  swc1        $f2, 0x74($a0)
    ctx->pc = 0x5007c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x5007c8: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x5007c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x5007cc: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x5007ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x5007d0: 0xc4a30080  lwc1        $f3, 0x80($a1)
    ctx->pc = 0x5007d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x5007d4: 0xc4a20084  lwc1        $f2, 0x84($a1)
    ctx->pc = 0x5007d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x5007d8: 0xc4a10088  lwc1        $f1, 0x88($a1)
    ctx->pc = 0x5007d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5007dc: 0xc4a0008c  lwc1        $f0, 0x8C($a1)
    ctx->pc = 0x5007dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5007e0: 0xe4830080  swc1        $f3, 0x80($a0)
    ctx->pc = 0x5007e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x5007e4: 0xe4820084  swc1        $f2, 0x84($a0)
    ctx->pc = 0x5007e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x5007e8: 0xe4810088  swc1        $f1, 0x88($a0)
    ctx->pc = 0x5007e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x5007ec: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x5007ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x5007f0: 0xc4a00090  lwc1        $f0, 0x90($a1)
    ctx->pc = 0x5007f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5007f4: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x5007f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x5007f8: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x5007f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5007fc: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x5007fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x500800: 0x90a30098  lbu         $v1, 0x98($a1)
    ctx->pc = 0x500800u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 152)));
    // 0x500804: 0xa0830098  sb          $v1, 0x98($a0)
    ctx->pc = 0x500804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x500808: 0xc4a0009c  lwc1        $f0, 0x9C($a1)
    ctx->pc = 0x500808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50080c: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x50080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x500810: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x500810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500814: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x500814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x500818: 0xc4a000a4  lwc1        $f0, 0xA4($a1)
    ctx->pc = 0x500818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50081c: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x50081cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x500820: 0xc4a000a8  lwc1        $f0, 0xA8($a1)
    ctx->pc = 0x500820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500824: 0x3e00008  jr          $ra
    ctx->pc = 0x500824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500824u;
            // 0x500828: 0xe48000a8  swc1        $f0, 0xA8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50082Cu;
    // 0x50082c: 0x0  nop
    ctx->pc = 0x50082cu;
    // NOP
}
