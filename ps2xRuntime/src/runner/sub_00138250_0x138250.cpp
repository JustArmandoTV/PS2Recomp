#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138250
// Address: 0x138250 - 0x1382c0
void sub_00138250_0x138250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138250_0x138250");
#endif

    switch (ctx->pc) {
        case 0x138260u: goto label_138260;
        default: break;
    }

    ctx->pc = 0x138250u;

    // 0x138250: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x138250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138254: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x138254u;
    {
        const bool branch_taken_0x138254 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x138258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138254u;
            // 0x138258: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138254) {
            ctx->pc = 0x1382A0u;
            goto label_1382a0;
        }
    }
    ctx->pc = 0x13825Cu;
    // 0x13825c: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x13825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_138260:
    // 0x138260: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x138260u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x138264: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x138264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x138268: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x138268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13826c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138270: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x138270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138274: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x138274u;
    {
        const bool branch_taken_0x138274 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138274) {
            ctx->pc = 0x138288u;
            goto label_138288;
        }
    }
    ctx->pc = 0x13827Cu;
    // 0x13827c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13827Cu;
    {
        const bool branch_taken_0x13827c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13827Cu;
            // 0x138280: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13827c) {
            ctx->pc = 0x138290u;
            goto label_138290;
        }
    }
    ctx->pc = 0x138284u;
    // 0x138284: 0x0  nop
    ctx->pc = 0x138284u;
    // NOP
label_138288:
    // 0x138288: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x138288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13828c: 0x0  nop
    ctx->pc = 0x13828cu;
    // NOP
label_138290:
    // 0x138290: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x138290u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x138294: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x138294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138298: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x138298u;
    {
        const bool branch_taken_0x138298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138298) {
            ctx->pc = 0x13829Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138298u;
            // 0x13829c: 0x1051821  addu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_138260;
        }
    }
    ctx->pc = 0x1382A0u;
label_1382a0:
    // 0x1382a0: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1382a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1382a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1382a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1382a8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1382a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1382ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1382ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1382B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1382ACu;
            // 0x1382b0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1382B4u;
    // 0x1382b4: 0x0  nop
    ctx->pc = 0x1382b4u;
    // NOP
    // 0x1382b8: 0x0  nop
    ctx->pc = 0x1382b8u;
    // NOP
    // 0x1382bc: 0x0  nop
    ctx->pc = 0x1382bcu;
    // NOP
}
