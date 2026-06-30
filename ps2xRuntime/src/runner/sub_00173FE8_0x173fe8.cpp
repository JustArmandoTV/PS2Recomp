#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173FE8
// Address: 0x173fe8 - 0x174018
void sub_00173FE8_0x173fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173FE8_0x173fe8");
#endif

    switch (ctx->pc) {
        case 0x174000u: goto label_174000;
        default: break;
    }

    ctx->pc = 0x173fe8u;

    // 0x173fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173fec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173FECu;
    {
        const bool branch_taken_0x173fec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FECu;
            // 0x173ff0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fec) {
            ctx->pc = 0x174008u;
            goto label_174008;
        }
    }
    ctx->pc = 0x173FF4u;
    // 0x173ff4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x173ff8: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x173FF8u;
    SET_GPR_U32(ctx, 31, 0x174000u);
    ctx->pc = 0x173FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173FF8u;
            // 0x173ffc: 0x248443c8  addiu       $a0, $a0, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174000u; }
        if (ctx->pc != 0x174000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174000u; }
        if (ctx->pc != 0x174000u) { return; }
    }
    ctx->pc = 0x174000u;
label_174000:
    // 0x174000: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174000u;
    {
        const bool branch_taken_0x174000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174000u;
            // 0x174004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174000) {
            ctx->pc = 0x17400Cu;
            goto label_17400c;
        }
    }
    ctx->pc = 0x174008u;
label_174008:
    // 0x174008: 0x84820046  lh          $v0, 0x46($a0)
    ctx->pc = 0x174008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_17400c:
    // 0x17400c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17400cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174010: 0x3e00008  jr          $ra
    ctx->pc = 0x174010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174010u;
            // 0x174014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174018u;
}
