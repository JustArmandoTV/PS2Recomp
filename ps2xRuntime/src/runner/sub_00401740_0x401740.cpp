#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00401740
// Address: 0x401740 - 0x401810
void sub_00401740_0x401740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401740_0x401740");
#endif

    ctx->pc = 0x401740u;

    // 0x401740: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x401740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x401744: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x401744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401748: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x401748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x40174c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x40174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x401750: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x401750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x401754: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x401754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x401758: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x401758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x40175c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x40175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401760: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x401760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x401764: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x401764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x401768: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x401768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x40176c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x40176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x401770: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x401770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x401774: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x401774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x401778: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x401778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x40177c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x40177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401780: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x401780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x401784: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x401784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x401788: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x401788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x40178c: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x40178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x401790: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x401790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x401794: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x401794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x401798: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x401798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x40179c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x40179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4017a0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x4017a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x4017a4: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x4017a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4017a8: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x4017a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x4017ac: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x4017acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x4017b0: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x4017b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x4017b4: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x4017b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x4017b8: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x4017b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x4017bc: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x4017bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4017c0: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x4017c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x4017c4: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x4017c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x4017c8: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x4017c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x4017cc: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x4017ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x4017d0: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x4017d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x4017d4: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x4017d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x4017d8: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x4017d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x4017dc: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x4017dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4017e0: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x4017e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x4017e4: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x4017e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x4017e8: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x4017e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x4017ec: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x4017ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4017f0: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x4017f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x4017f4: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x4017f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x4017f8: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x4017f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x4017fc: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x4017fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401800: 0x3e00008  jr          $ra
    ctx->pc = 0x401800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x401804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401800u;
            // 0x401804: 0xe480005c  swc1        $f0, 0x5C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x401808u;
    // 0x401808: 0x0  nop
    ctx->pc = 0x401808u;
    // NOP
    // 0x40180c: 0x0  nop
    ctx->pc = 0x40180cu;
    // NOP
}
