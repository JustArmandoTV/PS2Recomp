#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175028
// Address: 0x175028 - 0x175058
void sub_00175028_0x175028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175028_0x175028");
#endif

    switch (ctx->pc) {
        case 0x175040u: goto label_175040;
        default: break;
    }

    ctx->pc = 0x175028u;

    // 0x175028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17502c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17502Cu;
    {
        const bool branch_taken_0x17502c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17502Cu;
            // 0x175030: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17502c) {
            ctx->pc = 0x175048u;
            goto label_175048;
        }
    }
    ctx->pc = 0x175034u;
    // 0x175034: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x175034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x175038: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x175038u;
    SET_GPR_U32(ctx, 31, 0x175040u);
    ctx->pc = 0x17503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175038u;
            // 0x17503c: 0x24844738  addiu       $a0, $a0, 0x4738 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175040u; }
        if (ctx->pc != 0x175040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175040u; }
        if (ctx->pc != 0x175040u) { return; }
    }
    ctx->pc = 0x175040u;
label_175040:
    // 0x175040: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175040u;
    {
        const bool branch_taken_0x175040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175040u;
            // 0x175044: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175040) {
            ctx->pc = 0x17504Cu;
            goto label_17504c;
        }
    }
    ctx->pc = 0x175048u;
label_175048:
    // 0x175048: 0x80820071  lb          $v0, 0x71($a0)
    ctx->pc = 0x175048u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
label_17504c:
    // 0x17504c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17504cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175050: 0x3e00008  jr          $ra
    ctx->pc = 0x175050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175050u;
            // 0x175054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175058u;
}
