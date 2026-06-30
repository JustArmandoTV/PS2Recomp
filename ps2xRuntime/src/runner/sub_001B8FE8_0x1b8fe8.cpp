#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8FE8
// Address: 0x1b8fe8 - 0x1b9040
void sub_001B8FE8_0x1b8fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8FE8_0x1b8fe8");
#endif

    switch (ctx->pc) {
        case 0x1b9014u: goto label_1b9014;
        case 0x1b9020u: goto label_1b9020;
        default: break;
    }

    ctx->pc = 0x1b8fe8u;

    // 0x1b8fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b8ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8ffc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b9000: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B9000u;
    {
        const bool branch_taken_0x1b9000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9000u;
            // 0x1b9004: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9000) {
            ctx->pc = 0x1B902Cu;
            goto label_1b902c;
        }
    }
    ctx->pc = 0x1B9008u;
    // 0x1b9008: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x1b9008u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b900c: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1B900Cu;
    SET_GPR_U32(ctx, 31, 0x1B9014u);
    ctx->pc = 0x1B9010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B900Cu;
            // 0x1b9010: 0xde040130  ld          $a0, 0x130($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9014u; }
        if (ctx->pc != 0x1B9014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9014u; }
        if (ctx->pc != 0x1B9014u) { return; }
    }
    ctx->pc = 0x1B9014u;
label_1b9014:
    // 0x1b9014: 0xde250008  ld          $a1, 0x8($s1)
    ctx->pc = 0x1b9014u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b9018: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1B9018u;
    SET_GPR_U32(ctx, 31, 0x1B9020u);
    ctx->pc = 0x1B901Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9018u;
            // 0x1b901c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9020u; }
        if (ctx->pc != 0x1B9020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9020u; }
        if (ctx->pc != 0x1B9020u) { return; }
    }
    ctx->pc = 0x1B9020u;
label_1b9020:
    // 0x1b9020: 0xde030128  ld          $v1, 0x128($s0)
    ctx->pc = 0x1b9020u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1b9024: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x1b9024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1b9028: 0xfe030128  sd          $v1, 0x128($s0)
    ctx->pc = 0x1b9028u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 3));
label_1b902c:
    // 0x1b902c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b902cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9038: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B903Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9038u;
            // 0x1b903c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9040u;
}
