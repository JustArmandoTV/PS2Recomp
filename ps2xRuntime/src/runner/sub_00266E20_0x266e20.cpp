#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00266E20
// Address: 0x266e20 - 0x266ed0
void sub_00266E20_0x266e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266E20_0x266e20");
#endif

    ctx->pc = 0x266e20u;

    // 0x266e20: 0x8c86006c  lw          $a2, 0x6C($a0)
    ctx->pc = 0x266e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x266e24: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x266e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266e28: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x266e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x266e2c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x266e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x266e30: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x266e30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x266e34: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x266e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x266e38: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x266e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x266e3c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x266e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266e40: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x266e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x266e44: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x266e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266e48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x266e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x266e4c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x266e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266e50: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x266e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x266e54: 0x8c86006c  lw          $a2, 0x6C($a0)
    ctx->pc = 0x266e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x266e58: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x266e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266e5c: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x266e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x266e60: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x266e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x266e64: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x266e64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x266e68: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x266e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x266e6c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x266e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x266e70: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x266e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266e74: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x266e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x266e78: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x266e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266e7c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x266e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x266e80: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x266e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266e84: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x266e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x266e88: 0x8c86006c  lw          $a2, 0x6C($a0)
    ctx->pc = 0x266e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x266e8c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x266e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266e90: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x266e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x266e94: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x266e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x266e98: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x266e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x266e9c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x266e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x266ea0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x266ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x266ea4: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x266ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266ea8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x266ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x266eac: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x266eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266eb0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x266eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x266eb4: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x266eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266eb8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x266eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x266ebc: 0x8c84006c  lw          $a0, 0x6C($a0)
    ctx->pc = 0x266ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x266ec0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x266ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266ec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x266ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x266ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x266EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266EC8u;
            // 0x266ecc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266ED0u;
}
