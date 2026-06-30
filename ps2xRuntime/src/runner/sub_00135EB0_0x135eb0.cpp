#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135EB0
// Address: 0x135eb0 - 0x135f20
void sub_00135EB0_0x135eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135EB0_0x135eb0");
#endif

    switch (ctx->pc) {
        case 0x135ec0u: goto label_135ec0;
        default: break;
    }

    ctx->pc = 0x135eb0u;

    // 0x135eb0: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x135eb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x135eb4: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x135EB4u;
    {
        const bool branch_taken_0x135eb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x135EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135EB4u;
            // 0x135eb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135eb4) {
            ctx->pc = 0x135F00u;
            goto label_135f00;
        }
    }
    ctx->pc = 0x135EBCu;
    // 0x135ebc: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x135ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_135ec0:
    // 0x135ec0: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x135ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x135ec4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x135ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x135ec8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x135ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x135ecc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x135eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135ed0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x135ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135ed4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x135ED4u;
    {
        const bool branch_taken_0x135ed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135ed4) {
            ctx->pc = 0x135EE8u;
            goto label_135ee8;
        }
    }
    ctx->pc = 0x135EDCu;
    // 0x135edc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135EDCu;
    {
        const bool branch_taken_0x135edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135EDCu;
            // 0x135ee0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135edc) {
            ctx->pc = 0x135EF0u;
            goto label_135ef0;
        }
    }
    ctx->pc = 0x135EE4u;
    // 0x135ee4: 0x0  nop
    ctx->pc = 0x135ee4u;
    // NOP
label_135ee8:
    // 0x135ee8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x135ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135eec: 0x0  nop
    ctx->pc = 0x135eecu;
    // NOP
label_135ef0:
    // 0x135ef0: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x135ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x135ef4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x135ef4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x135ef8: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x135EF8u;
    {
        const bool branch_taken_0x135ef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x135ef8) {
            ctx->pc = 0x135EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135EF8u;
            // 0x135efc: 0x1051821  addu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135ec0;
        }
    }
    ctx->pc = 0x135F00u;
label_135f00:
    // 0x135f00: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x135f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x135f04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x135f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x135f08: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x135f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x135F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135F0Cu;
            // 0x135f10: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135F14u;
    // 0x135f14: 0x0  nop
    ctx->pc = 0x135f14u;
    // NOP
    // 0x135f18: 0x0  nop
    ctx->pc = 0x135f18u;
    // NOP
    // 0x135f1c: 0x0  nop
    ctx->pc = 0x135f1cu;
    // NOP
}
