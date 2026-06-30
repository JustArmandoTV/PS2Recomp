#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6FD0
// Address: 0x1a6fd0 - 0x1a7068
void sub_001A6FD0_0x1a6fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6FD0_0x1a6fd0");
#endif

    switch (ctx->pc) {
        case 0x1a6ff8u: goto label_1a6ff8;
        case 0x1a701cu: goto label_1a701c;
        case 0x1a703cu: goto label_1a703c;
        case 0x1a7044u: goto label_1a7044;
        default: break;
    }

    ctx->pc = 0x1a6fd0u;

    // 0x1a6fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a6fd4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a6fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a6fd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fdc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a6fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a6fe0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a6fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fe4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a6fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a6fe8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1a6fec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a6fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a6ff0: 0xc064ae6  jal         func_192B98
    ctx->pc = 0x1A6FF0u;
    SET_GPR_U32(ctx, 31, 0x1A6FF8u);
    ctx->pc = 0x1A6FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FF0u;
            // 0x1a6ff4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B98u;
    if (runtime->hasFunction(0x192B98u)) {
        auto targetFn = runtime->lookupFunction(0x192B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FF8u; }
        if (ctx->pc != 0x1A6FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B98_0x192b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FF8u; }
        if (ctx->pc != 0x1A6FF8u) { return; }
    }
    ctx->pc = 0x1A6FF8u;
label_1a6ff8:
    // 0x1a6ff8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ffc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1a6ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a7000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7004: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a7004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a700c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1A700Cu;
    {
        const bool branch_taken_0x1a700c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A700Cu;
            // 0x1a7010: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a700c) {
            ctx->pc = 0x1A704Cu;
            goto label_1a704c;
        }
    }
    ctx->pc = 0x1A7014u;
    // 0x1a7014: 0xc064224  jal         func_190890
    ctx->pc = 0x1A7014u;
    SET_GPR_U32(ctx, 31, 0x1A701Cu);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A701Cu; }
        if (ctx->pc != 0x1A701Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190890_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A701Cu; }
        if (ctx->pc != 0x1A701Cu) { return; }
    }
    ctx->pc = 0x1A701Cu;
label_1a701c:
    // 0x1a701c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a701cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a7020: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1a7020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a7024: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a7024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7028: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a7028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a702c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A702Cu;
    {
        const bool branch_taken_0x1a702c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A702Cu;
            // 0x1a7030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a702c) {
            ctx->pc = 0x1A704Cu;
            goto label_1a704c;
        }
    }
    ctx->pc = 0x1A7034u;
    // 0x1a7034: 0xc06497a  jal         func_1925E8
    ctx->pc = 0x1A7034u;
    SET_GPR_U32(ctx, 31, 0x1A703Cu);
    ctx->pc = 0x1925E8u;
    if (runtime->hasFunction(0x1925E8u)) {
        auto targetFn = runtime->lookupFunction(0x1925E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A703Cu; }
        if (ctx->pc != 0x1A703Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001925E8_0x1925e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A703Cu; }
        if (ctx->pc != 0x1A703Cu) { return; }
    }
    ctx->pc = 0x1A703Cu;
label_1a703c:
    // 0x1a703c: 0xc064b4e  jal         func_192D38
    ctx->pc = 0x1A703Cu;
    SET_GPR_U32(ctx, 31, 0x1A7044u);
    ctx->pc = 0x1A7040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A703Cu;
            // 0x1a7040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D38u;
    if (runtime->hasFunction(0x192D38u)) {
        auto targetFn = runtime->lookupFunction(0x192D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7044u; }
        if (ctx->pc != 0x1A7044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D38_0x192d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7044u; }
        if (ctx->pc != 0x1A7044u) { return; }
    }
    ctx->pc = 0x1A7044u;
label_1a7044:
    // 0x1a7044: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1a7044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1a7048: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1a7048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1a704c:
    // 0x1a704c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a704cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7050: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a7050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a7054: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a7054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7058: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a7058u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a705c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a705cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7060: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7060u;
            // 0x1a7064: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7068u;
}
