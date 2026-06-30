#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CA80
// Address: 0x21ca80 - 0x21cb60
void sub_0021CA80_0x21ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CA80_0x21ca80");
#endif

    ctx->pc = 0x21ca80u;

    // 0x21ca80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ca84: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x21ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x21ca88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ca8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x21ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x21ca90: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x21ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ca94: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x21ca94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x21ca98: 0x3c19006f  lui         $t9, 0x6F
    ctx->pc = 0x21ca98u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)111 << 16));
    // 0x21ca9c: 0x3c18006f  lui         $t8, 0x6F
    ctx->pc = 0x21ca9cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)111 << 16));
    // 0x21caa0: 0x3c0f006f  lui         $t7, 0x6F
    ctx->pc = 0x21caa0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)111 << 16));
    // 0x21caa4: 0x3c0e006f  lui         $t6, 0x6F
    ctx->pc = 0x21caa4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)111 << 16));
    // 0x21caa8: 0xe480e7c0  swc1        $f0, -0x1840($a0)
    ctx->pc = 0x21caa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961088), bits); }
    // 0x21caac: 0x3c0d006f  lui         $t5, 0x6F
    ctx->pc = 0x21caacu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)111 << 16));
    // 0x21cab0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x21cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cab4: 0x3c0c006f  lui         $t4, 0x6F
    ctx->pc = 0x21cab4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)111 << 16));
    // 0x21cab8: 0x3c0b006f  lui         $t3, 0x6F
    ctx->pc = 0x21cab8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)111 << 16));
    // 0x21cabc: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x21cabcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x21cac0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x21cac0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x21cac4: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x21cac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x21cac8: 0xe460e7c4  swc1        $f0, -0x183C($v1)
    ctx->pc = 0x21cac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961092), bits); }
    // 0x21cacc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x21caccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x21cad0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x21cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cad4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x21cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x21cad8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x21cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x21cadc: 0xe600e7c8  swc1        $f0, -0x1838($s0)
    ctx->pc = 0x21cadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294961096), bits); }
    // 0x21cae0: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x21cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cae4: 0xe720e7cc  swc1        $f0, -0x1834($t9)
    ctx->pc = 0x21cae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294961100), bits); }
    // 0x21cae8: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x21cae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21caec: 0xe700e7d0  swc1        $f0, -0x1830($t8)
    ctx->pc = 0x21caecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294961104), bits); }
    // 0x21caf0: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x21caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21caf4: 0xe5e0e7d4  swc1        $f0, -0x182C($t7)
    ctx->pc = 0x21caf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294961108), bits); }
    // 0x21caf8: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x21caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cafc: 0xe5c0e7d8  swc1        $f0, -0x1828($t6)
    ctx->pc = 0x21cafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294961112), bits); }
    // 0x21cb00: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x21cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb04: 0xe5a0e7dc  swc1        $f0, -0x1824($t5)
    ctx->pc = 0x21cb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294961116), bits); }
    // 0x21cb08: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x21cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb0c: 0xe580e7e0  swc1        $f0, -0x1820($t4)
    ctx->pc = 0x21cb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294961120), bits); }
    // 0x21cb10: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x21cb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb14: 0xe560e7e4  swc1        $f0, -0x181C($t3)
    ctx->pc = 0x21cb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294961124), bits); }
    // 0x21cb18: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x21cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb1c: 0xe540e7e8  swc1        $f0, -0x1818($t2)
    ctx->pc = 0x21cb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294961128), bits); }
    // 0x21cb20: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x21cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb24: 0xe500e7ec  swc1        $f0, -0x1814($t0)
    ctx->pc = 0x21cb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294961132), bits); }
    // 0x21cb28: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x21cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb2c: 0xe4c0e7f0  swc1        $f0, -0x1810($a2)
    ctx->pc = 0x21cb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294961136), bits); }
    // 0x21cb30: 0xc5200014  lwc1        $f0, 0x14($t1)
    ctx->pc = 0x21cb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb34: 0xe4a0e7f4  swc1        $f0, -0x180C($a1)
    ctx->pc = 0x21cb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961140), bits); }
    // 0x21cb38: 0xc5200018  lwc1        $f0, 0x18($t1)
    ctx->pc = 0x21cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb3c: 0xe480e7f8  swc1        $f0, -0x1808($a0)
    ctx->pc = 0x21cb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961144), bits); }
    // 0x21cb40: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x21cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb44: 0xe460e7fc  swc1        $f0, -0x1804($v1)
    ctx->pc = 0x21cb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961148), bits); }
    // 0x21cb48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21cb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x21CB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB4Cu;
            // 0x21cb50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CB54u;
    // 0x21cb54: 0x0  nop
    ctx->pc = 0x21cb54u;
    // NOP
    // 0x21cb58: 0x0  nop
    ctx->pc = 0x21cb58u;
    // NOP
    // 0x21cb5c: 0x0  nop
    ctx->pc = 0x21cb5cu;
    // NOP
}
