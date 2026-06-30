#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032E050
// Address: 0x32e050 - 0x32e0d0
void sub_0032E050_0x32e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E050_0x32e050");
#endif

    switch (ctx->pc) {
        case 0x32e074u: goto label_32e074;
        case 0x32e0b0u: goto label_32e0b0;
        case 0x32e0c0u: goto label_32e0c0;
        default: break;
    }

    ctx->pc = 0x32e050u;

    // 0x32e050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32e054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32e058: 0x8c830ca4  lw          $v1, 0xCA4($a0)
    ctx->pc = 0x32e058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3236)));
    // 0x32e05c: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x32E05Cu;
    {
        const bool branch_taken_0x32e05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e05c) {
            ctx->pc = 0x32E060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E05Cu;
            // 0x32e060: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E0C4u;
            goto label_32e0c4;
        }
    }
    ctx->pc = 0x32E064u;
    // 0x32e064: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x32e064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x32e068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32e068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e06c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32e06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e070: 0x24a50e80  addiu       $a1, $a1, 0xE80
    ctx->pc = 0x32e070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3712));
label_32e074:
    // 0x32e074: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x32e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32e078: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x32e078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x32e07c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x32e07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x32e080: 0x58400003  blezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32E080u;
    {
        const bool branch_taken_0x32e080 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32e080) {
            ctx->pc = 0x32E084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E080u;
            // 0x32e084: 0x8c820780  lw          $v0, 0x780($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E090u;
            goto label_32e090;
        }
    }
    ctx->pc = 0x32E088u;
    // 0x32e088: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32E088u;
    {
        const bool branch_taken_0x32e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E088u;
            // 0x32e08c: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e088) {
            ctx->pc = 0x32E0A0u;
            goto label_32e0a0;
        }
    }
    ctx->pc = 0x32E090u;
label_32e090:
    // 0x32e090: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32e090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32e094: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x32e094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32e098: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x32E098u;
    {
        const bool branch_taken_0x32e098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E098u;
            // 0x32e09c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e098) {
            ctx->pc = 0x32E074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32e074;
        }
    }
    ctx->pc = 0x32E0A0u;
label_32e0a0:
    // 0x32e0a0: 0x50e00005  beql        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32E0A0u;
    {
        const bool branch_taken_0x32e0a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e0a0) {
            ctx->pc = 0x32E0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32E0A0u;
            // 0x32e0a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E0B8u;
            goto label_32e0b8;
        }
    }
    ctx->pc = 0x32E0A8u;
    // 0x32e0a8: 0xc10c9d8  jal         func_432760
    ctx->pc = 0x32E0A8u;
    SET_GPR_U32(ctx, 31, 0x32E0B0u);
    ctx->pc = 0x32E0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32E0A8u;
            // 0x32e0ac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0B0u; }
        if (ctx->pc != 0x32E0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0B0u; }
        if (ctx->pc != 0x32E0B0u) { return; }
    }
    ctx->pc = 0x32E0B0u;
label_32e0b0:
    // 0x32e0b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32E0B0u;
    {
        const bool branch_taken_0x32e0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e0b0) {
            ctx->pc = 0x32E0C0u;
            goto label_32e0c0;
        }
    }
    ctx->pc = 0x32E0B8u;
label_32e0b8:
    // 0x32e0b8: 0xc10c9b4  jal         func_4326D0
    ctx->pc = 0x32E0B8u;
    SET_GPR_U32(ctx, 31, 0x32E0C0u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0C0u; }
        if (ctx->pc != 0x32E0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E0C0u; }
        if (ctx->pc != 0x32E0C0u) { return; }
    }
    ctx->pc = 0x32E0C0u;
label_32e0c0:
    // 0x32e0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32e0c4:
    // 0x32e0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x32E0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E0C4u;
            // 0x32e0c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32E0CCu;
    // 0x32e0cc: 0x0  nop
    ctx->pc = 0x32e0ccu;
    // NOP
}
