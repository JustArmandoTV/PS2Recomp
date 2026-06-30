#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E97D0
// Address: 0x2e97d0 - 0x2e9870
void sub_002E97D0_0x2e97d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E97D0_0x2e97d0");
#endif

    switch (ctx->pc) {
        case 0x2e982cu: goto label_2e982c;
        case 0x2e9858u: goto label_2e9858;
        default: break;
    }

    ctx->pc = 0x2e97d0u;

    // 0x2e97d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e97d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e97d4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2e97d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e97d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e97d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e97dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e97e0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x2e97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x2e97e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2e97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e97e8: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x2e97e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x2e97ec: 0x10a40011  beq         $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E97ECu;
    {
        const bool branch_taken_0x2e97ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e97ec) {
            ctx->pc = 0x2E9834u;
            goto label_2e9834;
        }
    }
    ctx->pc = 0x2E97F4u;
    // 0x2e97f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e97f8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E97F8u;
    {
        const bool branch_taken_0x2e97f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e97f8) {
            ctx->pc = 0x2E9808u;
            goto label_2e9808;
        }
    }
    ctx->pc = 0x2E9800u;
    // 0x2e9800: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E9800u;
    {
        const bool branch_taken_0x2e9800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9800u;
            // 0x2e9804: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9800) {
            ctx->pc = 0x2E985Cu;
            goto label_2e985c;
        }
    }
    ctx->pc = 0x2E9808u;
label_2e9808:
    // 0x2e9808: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e980c: 0x90e411aa  lbu         $a0, 0x11AA($a3)
    ctx->pc = 0x2e980cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4522)));
    // 0x2e9810: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9814: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x2e9814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
    // 0x2e9818: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2e9818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2e981c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e981cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9820: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x2e9820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
    // 0x2e9824: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E9824u;
    SET_GPR_U32(ctx, 31, 0x2E982Cu);
    ctx->pc = 0x2E9828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9824u;
            // 0x2e9828: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E982Cu; }
        if (ctx->pc != 0x2E982Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E982Cu; }
        if (ctx->pc != 0x2E982Cu) { return; }
    }
    ctx->pc = 0x2E982Cu;
label_2e982c:
    // 0x2e982c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E982Cu;
    {
        const bool branch_taken_0x2e982c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e982c) {
            ctx->pc = 0x2E9858u;
            goto label_2e9858;
        }
    }
    ctx->pc = 0x2E9834u;
label_2e9834:
    // 0x2e9834: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9838: 0x90e411aa  lbu         $a0, 0x11AA($a3)
    ctx->pc = 0x2e9838u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4522)));
    // 0x2e983c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e983cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9840: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x2e9840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
    // 0x2e9844: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2e9844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2e9848: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e984c: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x2e984cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
    // 0x2e9850: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E9850u;
    SET_GPR_U32(ctx, 31, 0x2E9858u);
    ctx->pc = 0x2E9854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9850u;
            // 0x2e9854: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9858u; }
        if (ctx->pc != 0x2E9858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9858u; }
        if (ctx->pc != 0x2E9858u) { return; }
    }
    ctx->pc = 0x2E9858u;
label_2e9858:
    // 0x2e9858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e985c:
    // 0x2e985c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E985Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E985Cu;
            // 0x2e9860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9864u;
    // 0x2e9864: 0x0  nop
    ctx->pc = 0x2e9864u;
    // NOP
    // 0x2e9868: 0x0  nop
    ctx->pc = 0x2e9868u;
    // NOP
    // 0x2e986c: 0x0  nop
    ctx->pc = 0x2e986cu;
    // NOP
}
