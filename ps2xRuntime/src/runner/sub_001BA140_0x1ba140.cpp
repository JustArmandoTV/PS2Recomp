#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA140
// Address: 0x1ba140 - 0x1ba190
void sub_001BA140_0x1ba140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA140_0x1ba140");
#endif

    switch (ctx->pc) {
        case 0x1ba168u: goto label_1ba168;
        case 0x1ba174u: goto label_1ba174;
        default: break;
    }

    ctx->pc = 0x1ba140u;

    // 0x1ba140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba144: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ba144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba14c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ba14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba154: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA154u;
    {
        const bool branch_taken_0x1ba154 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA154u;
            // 0x1ba158: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba154) {
            ctx->pc = 0x1BA17Cu;
            goto label_1ba17c;
        }
    }
    ctx->pc = 0x1BA15Cu;
    // 0x1ba15c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ba15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ba168:
    // 0x1ba168: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x1ba168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1ba16c: 0xc06e844  jal         func_1BA110
    ctx->pc = 0x1BA16Cu;
    SET_GPR_U32(ctx, 31, 0x1BA174u);
    ctx->pc = 0x1BA170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA16Cu;
            // 0x1ba170: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA110u;
    if (runtime->hasFunction(0x1BA110u)) {
        auto targetFn = runtime->lookupFunction(0x1BA110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA174u; }
        if (ctx->pc != 0x1BA174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA110_0x1ba110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA174u; }
        if (ctx->pc != 0x1BA174u) { return; }
    }
    ctx->pc = 0x1BA174u;
label_1ba174:
    // 0x1ba174: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1BA174u;
    {
        const bool branch_taken_0x1ba174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA174u;
            // 0x1ba178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba174) {
            ctx->pc = 0x1BA168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba168;
        }
    }
    ctx->pc = 0x1BA17Cu;
label_1ba17c:
    // 0x1ba17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba188: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA188u;
            // 0x1ba18c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA190u;
}
