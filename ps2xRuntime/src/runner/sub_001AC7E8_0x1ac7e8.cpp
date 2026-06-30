#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC7E8
// Address: 0x1ac7e8 - 0x1ac830
void sub_001AC7E8_0x1ac7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC7E8_0x1ac7e8");
#endif

    switch (ctx->pc) {
        case 0x1ac810u: goto label_1ac810;
        default: break;
    }

    ctx->pc = 0x1ac7e8u;

    // 0x1ac7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac7ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ac7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ac7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac7f4: 0x28a50005  slti        $a1, $a1, 0x5
    ctx->pc = 0x1ac7f4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ac7f8: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC7F8u;
    {
        const bool branch_taken_0x1ac7f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AC7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC7F8u;
            // 0x1ac7fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7f8) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC800u;
    // 0x1ac800: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AC800u;
    {
        const bool branch_taken_0x1ac800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac800) {
            ctx->pc = 0x1AC804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC800u;
            // 0x1ac804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC808u;
    // 0x1ac808: 0xc06b20c  jal         func_1AC830
    ctx->pc = 0x1AC808u;
    SET_GPR_U32(ctx, 31, 0x1AC810u);
    ctx->pc = 0x1AC830u;
    if (runtime->hasFunction(0x1AC830u)) {
        auto targetFn = runtime->lookupFunction(0x1AC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC810u; }
        if (ctx->pc != 0x1AC810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC830_0x1ac830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC810u; }
        if (ctx->pc != 0x1AC810u) { return; }
    }
    ctx->pc = 0x1AC810u;
label_1ac810:
    // 0x1ac810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac814: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC814u;
    {
        const bool branch_taken_0x1ac814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AC818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC814u;
            // 0x1ac818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac814) {
            ctx->pc = 0x1AC824u;
            goto label_1ac824;
        }
    }
    ctx->pc = 0x1AC81Cu;
    // 0x1ac81c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac820:
    // 0x1ac820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac824:
    // 0x1ac824: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC824u;
            // 0x1ac828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC82Cu;
    // 0x1ac82c: 0x0  nop
    ctx->pc = 0x1ac82cu;
    // NOP
}
