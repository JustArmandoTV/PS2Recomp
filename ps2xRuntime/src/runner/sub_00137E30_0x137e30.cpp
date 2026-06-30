#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137E30
// Address: 0x137e30 - 0x137ec0
void sub_00137E30_0x137e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137E30_0x137e30");
#endif

    switch (ctx->pc) {
        case 0x137e40u: goto label_137e40;
        default: break;
    }

    ctx->pc = 0x137e30u;

    // 0x137e30: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x137e30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137e34: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x137E34u;
    {
        const bool branch_taken_0x137e34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x137E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E34u;
            // 0x137e38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e34) {
            ctx->pc = 0x137E88u;
            goto label_137e88;
        }
    }
    ctx->pc = 0x137E3Cu;
    // 0x137e3c: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x137e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_137e40:
    // 0x137e40: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x137e40u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x137e44: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x137e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x137e48: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x137e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x137e4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x137e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137e50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x137e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x137e54: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x137e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137e58: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x137e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137e5c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x137E5Cu;
    {
        const bool branch_taken_0x137e5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137e5c) {
            ctx->pc = 0x137E70u;
            goto label_137e70;
        }
    }
    ctx->pc = 0x137E64u;
    // 0x137e64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x137E64u;
    {
        const bool branch_taken_0x137e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E64u;
            // 0x137e68: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e64) {
            ctx->pc = 0x137E78u;
            goto label_137e78;
        }
    }
    ctx->pc = 0x137E6Cu;
    // 0x137e6c: 0x0  nop
    ctx->pc = 0x137e6cu;
    // NOP
label_137e70:
    // 0x137e70: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x137e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e74: 0x0  nop
    ctx->pc = 0x137e74u;
    // NOP
label_137e78:
    // 0x137e78: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x137e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x137e7c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x137e7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137e80: 0x5020ffef  beql        $at, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x137E80u;
    {
        const bool branch_taken_0x137e80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e80) {
            ctx->pc = 0x137E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137E80u;
            // 0x137e84: 0x1051821  addu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137e40;
        }
    }
    ctx->pc = 0x137E88u;
label_137e88:
    // 0x137e88: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x137e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x137e8c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x137e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x137e90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x137e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137e94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x137e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x137e98: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x137e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137e9c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x137e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x137ea0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x137ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137ea4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x137ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x137ea8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x137ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137eac: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x137eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x137eb0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x137eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x137EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137EB4u;
            // 0x137eb8: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137EBCu;
    // 0x137ebc: 0x0  nop
    ctx->pc = 0x137ebcu;
    // NOP
}
