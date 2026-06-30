#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500650
// Address: 0x500650 - 0x500720
void sub_00500650_0x500650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500650_0x500650");
#endif

    ctx->pc = 0x500650u;

    // 0x500650: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x500650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x500654: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x500654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500658: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x500658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x50065c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x50065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x500660: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x500660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500664: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x500664u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x500668: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x500668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x50066c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x50066cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x500670: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x500670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x500674: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x500674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x500678: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x500678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x50067c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x50067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x500680: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x500680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500684: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x500684u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x500688: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x500688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x50068c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x50068cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x500690: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x500690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x500694: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x500694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x500698: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x500698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x50069c: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x50069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5006a0: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x5006a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5006a4: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x5006a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x5006a8: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x5006a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x5006ac: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x5006acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x5006b0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x5006b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x5006b4: 0xc4a30030  lwc1        $f3, 0x30($a1)
    ctx->pc = 0x5006b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x5006b8: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x5006b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x5006bc: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x5006bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5006c0: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x5006c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5006c4: 0xe4830030  swc1        $f3, 0x30($a0)
    ctx->pc = 0x5006c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x5006c8: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x5006c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x5006cc: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x5006ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x5006d0: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x5006d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x5006d4: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x5006d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x5006d8: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x5006d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x5006dc: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x5006dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5006e0: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x5006e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x5006e4: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x5006e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5006e8: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x5006e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x5006ec: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x5006ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5006f0: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x5006f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x5006f4: 0x94a30050  lhu         $v1, 0x50($a1)
    ctx->pc = 0x5006f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x5006f8: 0xa4830050  sh          $v1, 0x50($a0)
    ctx->pc = 0x5006f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x5006fc: 0x94a30052  lhu         $v1, 0x52($a1)
    ctx->pc = 0x5006fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 82)));
    // 0x500700: 0xa4830052  sh          $v1, 0x52($a0)
    ctx->pc = 0x500700u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x500704: 0x84a30054  lh          $v1, 0x54($a1)
    ctx->pc = 0x500704u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x500708: 0xa4830054  sh          $v1, 0x54($a0)
    ctx->pc = 0x500708u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x50070c: 0x94a30056  lhu         $v1, 0x56($a1)
    ctx->pc = 0x50070cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 86)));
    // 0x500710: 0x3e00008  jr          $ra
    ctx->pc = 0x500710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500710u;
            // 0x500714: 0xa4830056  sh          $v1, 0x56($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500718u;
    // 0x500718: 0x0  nop
    ctx->pc = 0x500718u;
    // NOP
    // 0x50071c: 0x0  nop
    ctx->pc = 0x50071cu;
    // NOP
}
