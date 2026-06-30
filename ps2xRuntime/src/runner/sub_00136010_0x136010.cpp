#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136010
// Address: 0x136010 - 0x136090
void sub_00136010_0x136010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136010_0x136010");
#endif

    switch (ctx->pc) {
        case 0x136020u: goto label_136020;
        default: break;
    }

    ctx->pc = 0x136010u;

    // 0x136010: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x136010u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136014: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x136014u;
    {
        const bool branch_taken_0x136014 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x136018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136014u;
            // 0x136018: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136014) {
            ctx->pc = 0x136060u;
            goto label_136060;
        }
    }
    ctx->pc = 0x13601Cu;
    // 0x13601c: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x13601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_136020:
    // 0x136020: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x136020u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x136024: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x136024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x136028: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x136028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13602c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136030: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x136030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136034: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x136034u;
    {
        const bool branch_taken_0x136034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136034) {
            ctx->pc = 0x136048u;
            goto label_136048;
        }
    }
    ctx->pc = 0x13603Cu;
    // 0x13603c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13603Cu;
    {
        const bool branch_taken_0x13603c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13603Cu;
            // 0x136040: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13603c) {
            ctx->pc = 0x136050u;
            goto label_136050;
        }
    }
    ctx->pc = 0x136044u;
    // 0x136044: 0x0  nop
    ctx->pc = 0x136044u;
    // NOP
label_136048:
    // 0x136048: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x136048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13604c: 0x0  nop
    ctx->pc = 0x13604cu;
    // NOP
label_136050:
    // 0x136050: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x136050u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x136054: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x136054u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136058: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x136058u;
    {
        const bool branch_taken_0x136058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136058) {
            ctx->pc = 0x13605Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136058u;
            // 0x13605c: 0x1051821  addu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136020;
        }
    }
    ctx->pc = 0x136060u;
label_136060:
    // 0x136060: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x136060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x136064: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x136064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136068: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x136068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13606c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x13606cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x136070: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x136070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x136074: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x136074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x136078: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x136078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13607c: 0x3e00008  jr          $ra
    ctx->pc = 0x13607Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13607Cu;
            // 0x136080: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136084u;
    // 0x136084: 0x0  nop
    ctx->pc = 0x136084u;
    // NOP
    // 0x136088: 0x0  nop
    ctx->pc = 0x136088u;
    // NOP
    // 0x13608c: 0x0  nop
    ctx->pc = 0x13608cu;
    // NOP
}
