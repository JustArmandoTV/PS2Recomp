#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2FE8
// Address: 0x1b2fe8 - 0x1b3088
void sub_001B2FE8_0x1b2fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2FE8_0x1b2fe8");
#endif

    switch (ctx->pc) {
        case 0x1b3004u: goto label_1b3004;
        case 0x1b3014u: goto label_1b3014;
        case 0x1b3028u: goto label_1b3028;
        case 0x1b303cu: goto label_1b303c;
        case 0x1b3044u: goto label_1b3044;
        case 0x1b3054u: goto label_1b3054;
        case 0x1b3060u: goto label_1b3060;
        default: break;
    }

    ctx->pc = 0x1b2fe8u;

    // 0x1b2fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2fec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b2fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b2ff0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2ffc: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2FFCu;
    SET_GPR_U32(ctx, 31, 0x1B3004u);
    ctx->pc = 0x1B3000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FFCu;
            // 0x1b3000: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3004u; }
        if (ctx->pc != 0x1B3004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3004u; }
        if (ctx->pc != 0x1B3004u) { return; }
    }
    ctx->pc = 0x1B3004u;
label_1b3004:
    // 0x1b3004: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3004u;
    {
        const bool branch_taken_0x1b3004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3004u;
            // 0x1b3008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3004) {
            ctx->pc = 0x1B301Cu;
            goto label_1b301c;
        }
    }
    ctx->pc = 0x1B300Cu;
    // 0x1b300c: 0xc06e382  jal         func_1B8E08
    ctx->pc = 0x1B300Cu;
    SET_GPR_U32(ctx, 31, 0x1B3014u);
    ctx->pc = 0x1B3010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B300Cu;
            // 0x1b3010: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E08u;
    if (runtime->hasFunction(0x1B8E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3014u; }
        if (ctx->pc != 0x1B3014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E08_0x1b8e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3014u; }
        if (ctx->pc != 0x1B3014u) { return; }
    }
    ctx->pc = 0x1B3014u;
label_1b3014:
    // 0x1b3014: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B3014u;
    {
        const bool branch_taken_0x1b3014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3014u;
            // 0x1b3018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3014) {
            ctx->pc = 0x1B3070u;
            goto label_1b3070;
        }
    }
    ctx->pc = 0x1B301Cu;
label_1b301c:
    // 0x1b301c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b301cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3020: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B3020u;
    SET_GPR_U32(ctx, 31, 0x1B3028u);
    ctx->pc = 0x1B3024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3020u;
            // 0x1b3024: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3028u; }
        if (ctx->pc != 0x1B3028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3028u; }
        if (ctx->pc != 0x1B3028u) { return; }
    }
    ctx->pc = 0x1B3028u;
label_1b3028:
    // 0x1b3028: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3028u;
    {
        const bool branch_taken_0x1b3028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3028u;
            // 0x1b302c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3028) {
            ctx->pc = 0x1B3050u;
            goto label_1b3050;
        }
    }
    ctx->pc = 0x1B3030u;
    // 0x1b3030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3034: 0xc06e382  jal         func_1B8E08
    ctx->pc = 0x1B3034u;
    SET_GPR_U32(ctx, 31, 0x1B303Cu);
    ctx->pc = 0x1B3038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3034u;
            // 0x1b3038: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E08u;
    if (runtime->hasFunction(0x1B8E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B303Cu; }
        if (ctx->pc != 0x1B303Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E08_0x1b8e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B303Cu; }
        if (ctx->pc != 0x1B303Cu) { return; }
    }
    ctx->pc = 0x1B303Cu;
label_1b303c:
    // 0x1b303c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B303Cu;
    {
        const bool branch_taken_0x1b303c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B303Cu;
            // 0x1b3040: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b303c) {
            ctx->pc = 0x1B3050u;
            goto label_1b3050;
        }
    }
    ctx->pc = 0x1B3044u;
label_1b3044:
    // 0x1b3044: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B3044u;
    {
        const bool branch_taken_0x1b3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3044u;
            // 0x1b3048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3044) {
            ctx->pc = 0x1B3070u;
            goto label_1b3070;
        }
    }
    ctx->pc = 0x1B304Cu;
    // 0x1b304c: 0x0  nop
    ctx->pc = 0x1b304cu;
    // NOP
label_1b3050:
    // 0x1b3050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3054:
    // 0x1b3054: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b3054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b3058: 0xc069962  jal         func_1A6588
    ctx->pc = 0x1B3058u;
    SET_GPR_U32(ctx, 31, 0x1B3060u);
    ctx->pc = 0x1B305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3058u;
            // 0x1b305c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3060u; }
        if (ctx->pc != 0x1B3060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6588_0x1a6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3060u; }
        if (ctx->pc != 0x1B3060u) { return; }
    }
    ctx->pc = 0x1B3060u;
label_1b3060:
    // 0x1b3060: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B3060u;
    {
        const bool branch_taken_0x1b3060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3060u;
            // 0x1b3064: 0x2e030008  sltiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3060) {
            ctx->pc = 0x1B3044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3044;
        }
    }
    ctx->pc = 0x1B3068u;
    // 0x1b3068: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B3068u;
    {
        const bool branch_taken_0x1b3068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B306Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3068u;
            // 0x1b306c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3068) {
            ctx->pc = 0x1B3054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3054;
        }
    }
    ctx->pc = 0x1B3070u;
label_1b3070:
    // 0x1b3070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b307c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B307Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B307Cu;
            // 0x1b3080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3084u;
    // 0x1b3084: 0x0  nop
    ctx->pc = 0x1b3084u;
    // NOP
}
