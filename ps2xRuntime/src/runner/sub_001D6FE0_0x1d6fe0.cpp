#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D6FE0
// Address: 0x1d6fe0 - 0x1d7060
void sub_001D6FE0_0x1d6fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6FE0_0x1d6fe0");
#endif

    switch (ctx->pc) {
        case 0x1d7024u: goto label_1d7024;
        case 0x1d7030u: goto label_1d7030;
        case 0x1d7048u: goto label_1d7048;
        default: break;
    }

    ctx->pc = 0x1d6fe0u;

    // 0x1d6fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d6fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d6fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d6fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d6ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ff4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D6FF4u;
    {
        const bool branch_taken_0x1d6ff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6FF4u;
            // 0x1d6ff8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ff4) {
            ctx->pc = 0x1D7048u;
            goto label_1d7048;
        }
    }
    ctx->pc = 0x1D6FFCu;
    // 0x1d6ffc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d7000: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x1d7000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x1d7004: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7004u;
    {
        const bool branch_taken_0x1d7004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7004u;
            // 0x1d7008: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7004) {
            ctx->pc = 0x1D7030u;
            goto label_1d7030;
        }
    }
    ctx->pc = 0x1D700Cu;
    // 0x1d700c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d700cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d7010: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x1d7010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1d7014: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x1d7014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1d7018: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d7018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d701c: 0xc075c18  jal         func_1D7060
    ctx->pc = 0x1D701Cu;
    SET_GPR_U32(ctx, 31, 0x1D7024u);
    ctx->pc = 0x1D7020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D701Cu;
            // 0x1d7020: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7060u;
    if (runtime->hasFunction(0x1D7060u)) {
        auto targetFn = runtime->lookupFunction(0x1D7060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7024u; }
        if (ctx->pc != 0x1D7024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7060_0x1d7060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7024u; }
        if (ctx->pc != 0x1D7024u) { return; }
    }
    ctx->pc = 0x1D7024u;
label_1d7024:
    // 0x1d7024: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1d7024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1d7028: 0xc057f1c  jal         func_15FC70
    ctx->pc = 0x1D7028u;
    SET_GPR_U32(ctx, 31, 0x1D7030u);
    ctx->pc = 0x1D702Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7028u;
            // 0x1d702c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FC70u;
    if (runtime->hasFunction(0x15FC70u)) {
        auto targetFn = runtime->lookupFunction(0x15FC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7030u; }
        if (ctx->pc != 0x1D7030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FC70_0x15fc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7030u; }
        if (ctx->pc != 0x1D7030u) { return; }
    }
    ctx->pc = 0x1D7030u;
label_1d7030:
    // 0x1d7030: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d7030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d7034: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d7034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7038: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7038u;
    {
        const bool branch_taken_0x1d7038 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d7038) {
            ctx->pc = 0x1D703Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7038u;
            // 0x1d703c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D704Cu;
            goto label_1d704c;
        }
    }
    ctx->pc = 0x1D7040u;
    // 0x1d7040: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1D7040u;
    SET_GPR_U32(ctx, 31, 0x1D7048u);
    ctx->pc = 0x1D7044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7040u;
            // 0x1d7044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7048u; }
        if (ctx->pc != 0x1D7048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7048u; }
        if (ctx->pc != 0x1D7048u) { return; }
    }
    ctx->pc = 0x1D7048u;
label_1d7048:
    // 0x1d7048: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d7048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d704c:
    // 0x1d704c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d704cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7058: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7058u;
            // 0x1d705c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7060u;
}
