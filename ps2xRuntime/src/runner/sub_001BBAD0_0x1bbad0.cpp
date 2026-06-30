#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBAD0
// Address: 0x1bbad0 - 0x1bbb30
void sub_001BBAD0_0x1bbad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBAD0_0x1bbad0");
#endif

    switch (ctx->pc) {
        case 0x1bbaf4u: goto label_1bbaf4;
        case 0x1bbb0cu: goto label_1bbb0c;
        case 0x1bbb18u: goto label_1bbb18;
        default: break;
    }

    ctx->pc = 0x1bbad0u;

    // 0x1bbad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbad4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1bbad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1bbad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbadc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bbadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbae0: 0x2445b190  addiu       $a1, $v0, -0x4E70
    ctx->pc = 0x1bbae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947216));
    // 0x1bbae4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bbae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bbaec: 0xc04b1c6  jal         func_12C718
    ctx->pc = 0x1BBAECu;
    SET_GPR_U32(ctx, 31, 0x1BBAF4u);
    ctx->pc = 0x1BBAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAECu;
            // 0x1bbaf0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C718u;
    if (runtime->hasFunction(0x12C718u)) {
        auto targetFn = runtime->lookupFunction(0x12C718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAF4u; }
        if (ctx->pc != 0x1BBAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C718_0x12c718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAF4u; }
        if (ctx->pc != 0x1BBAF4u) { return; }
    }
    ctx->pc = 0x1BBAF4u;
label_1bbaf4:
    // 0x1bbaf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bbaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbaf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bbaf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbafc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBAFCu;
    {
        const bool branch_taken_0x1bbafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAFCu;
            // 0x1bbb00: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbafc) {
            ctx->pc = 0x1BBB1Cu;
            goto label_1bbb1c;
        }
    }
    ctx->pc = 0x1BBB04u;
    // 0x1bbb04: 0xc06eecc  jal         func_1BBB30
    ctx->pc = 0x1BBB04u;
    SET_GPR_U32(ctx, 31, 0x1BBB0Cu);
    ctx->pc = 0x1BBB30u;
    if (runtime->hasFunction(0x1BBB30u)) {
        auto targetFn = runtime->lookupFunction(0x1BBB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB0Cu; }
        if (ctx->pc != 0x1BBB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBB30_0x1bbb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB0Cu; }
        if (ctx->pc != 0x1BBB0Cu) { return; }
    }
    ctx->pc = 0x1BBB0Cu;
label_1bbb0c:
    // 0x1bbb0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bbb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb10: 0xc06eecc  jal         func_1BBB30
    ctx->pc = 0x1BBB10u;
    SET_GPR_U32(ctx, 31, 0x1BBB18u);
    ctx->pc = 0x1BBB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB10u;
            // 0x1bbb14: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBB30u;
    if (runtime->hasFunction(0x1BBB30u)) {
        auto targetFn = runtime->lookupFunction(0x1BBB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB18u; }
        if (ctx->pc != 0x1BBB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBB30_0x1bbb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB18u; }
        if (ctx->pc != 0x1BBB18u) { return; }
    }
    ctx->pc = 0x1BBB18u;
label_1bbb18:
    // 0x1bbb18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbb1c:
    // 0x1bbb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbb20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbb20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbb24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbb28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB28u;
            // 0x1bbb2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBB30u;
}
