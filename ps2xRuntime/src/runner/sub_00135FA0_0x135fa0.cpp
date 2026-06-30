#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135FA0
// Address: 0x135fa0 - 0x136010
void sub_00135FA0_0x135fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135FA0_0x135fa0");
#endif

    switch (ctx->pc) {
        case 0x135fb0u: goto label_135fb0;
        default: break;
    }

    ctx->pc = 0x135fa0u;

    // 0x135fa0: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x135fa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x135fa4: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x135FA4u;
    {
        const bool branch_taken_0x135fa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x135FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135FA4u;
            // 0x135fa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135fa4) {
            ctx->pc = 0x135FF0u;
            goto label_135ff0;
        }
    }
    ctx->pc = 0x135FACu;
    // 0x135fac: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x135facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_135fb0:
    // 0x135fb0: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x135fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x135fb4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x135fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x135fb8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x135fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x135fbc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x135fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135fc0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x135fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135fc4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x135FC4u;
    {
        const bool branch_taken_0x135fc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135fc4) {
            ctx->pc = 0x135FD8u;
            goto label_135fd8;
        }
    }
    ctx->pc = 0x135FCCu;
    // 0x135fcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135FCCu;
    {
        const bool branch_taken_0x135fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135FCCu;
            // 0x135fd0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135fcc) {
            ctx->pc = 0x135FE0u;
            goto label_135fe0;
        }
    }
    ctx->pc = 0x135FD4u;
    // 0x135fd4: 0x0  nop
    ctx->pc = 0x135fd4u;
    // NOP
label_135fd8:
    // 0x135fd8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x135fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135fdc: 0x0  nop
    ctx->pc = 0x135fdcu;
    // NOP
label_135fe0:
    // 0x135fe0: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x135fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x135fe4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x135fe4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x135fe8: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x135FE8u;
    {
        const bool branch_taken_0x135fe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fe8) {
            ctx->pc = 0x135FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135FE8u;
            // 0x135fec: 0x1051821  addu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135fb0;
        }
    }
    ctx->pc = 0x135FF0u;
label_135ff0:
    // 0x135ff0: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x135ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x135ff4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x135ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x135ff8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x135ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x135ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x135FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135FFCu;
            // 0x136000: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136004u;
    // 0x136004: 0x0  nop
    ctx->pc = 0x136004u;
    // NOP
    // 0x136008: 0x0  nop
    ctx->pc = 0x136008u;
    // NOP
    // 0x13600c: 0x0  nop
    ctx->pc = 0x13600cu;
    // NOP
}
