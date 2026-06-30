#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00568000
// Address: 0x568000 - 0x568070
void sub_00568000_0x568000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00568000_0x568000");
#endif

    switch (ctx->pc) {
        case 0x568040u: goto label_568040;
        case 0x568058u: goto label_568058;
        default: break;
    }

    ctx->pc = 0x568000u;

    // 0x568000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x568000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x568004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x568004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x568008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x568008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x56800c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x568010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x568010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x568014: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x568014u;
    {
        const bool branch_taken_0x568014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x568018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568014u;
            // 0x568018: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568014) {
            ctx->pc = 0x568058u;
            goto label_568058;
        }
    }
    ctx->pc = 0x56801Cu;
    // 0x56801c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x56801Cu;
    {
        const bool branch_taken_0x56801c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x56801c) {
            ctx->pc = 0x568020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56801Cu;
            // 0x568020: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x568044u;
            goto label_568044;
        }
    }
    ctx->pc = 0x568024u;
    // 0x568024: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x568024u;
    {
        const bool branch_taken_0x568024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x568024) {
            ctx->pc = 0x568040u;
            goto label_568040;
        }
    }
    ctx->pc = 0x56802Cu;
    // 0x56802c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x56802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x568030: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x568030u;
    {
        const bool branch_taken_0x568030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x568030) {
            ctx->pc = 0x568040u;
            goto label_568040;
        }
    }
    ctx->pc = 0x568038u;
    // 0x568038: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x568038u;
    SET_GPR_U32(ctx, 31, 0x568040u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568040u; }
        if (ctx->pc != 0x568040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568040u; }
        if (ctx->pc != 0x568040u) { return; }
    }
    ctx->pc = 0x568040u;
label_568040:
    // 0x568040: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x568040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_568044:
    // 0x568044: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x568044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x568048: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x568048u;
    {
        const bool branch_taken_0x568048 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x568048) {
            ctx->pc = 0x56804Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568048u;
            // 0x56804c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56805Cu;
            goto label_56805c;
        }
    }
    ctx->pc = 0x568050u;
    // 0x568050: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x568050u;
    SET_GPR_U32(ctx, 31, 0x568058u);
    ctx->pc = 0x568054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568050u;
            // 0x568054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568058u; }
        if (ctx->pc != 0x568058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568058u; }
        if (ctx->pc != 0x568058u) { return; }
    }
    ctx->pc = 0x568058u;
label_568058:
    // 0x568058: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x568058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56805c:
    // 0x56805c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x56805cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x568060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x568060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x568064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x568064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x568068: 0x3e00008  jr          $ra
    ctx->pc = 0x568068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568068u;
            // 0x56806c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x568070u;
}
