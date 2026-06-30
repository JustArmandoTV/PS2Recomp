#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175950
// Address: 0x175950 - 0x175980
void sub_00175950_0x175950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175950_0x175950");
#endif

    ctx->pc = 0x175950u;

    // 0x175950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175954: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175954u;
    {
        const bool branch_taken_0x175954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175954u;
            // 0x175958: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175954) {
            ctx->pc = 0x175970u;
            goto label_175970;
        }
    }
    ctx->pc = 0x17595Cu;
    // 0x17595c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17595cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x175960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175964: 0x24844870  addiu       $a0, $a0, 0x4870
    ctx->pc = 0x175964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18544));
    // 0x175968: 0x8059f4e  j           func_167D38
    ctx->pc = 0x175968u;
    ctx->pc = 0x17596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175968u;
            // 0x17596c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175970u;
label_175970:
    // 0x175970: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x175970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x175974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175978: 0x805bfe2  j           func_16FF88
    ctx->pc = 0x175978u;
    ctx->pc = 0x17597Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175978u;
            // 0x17597c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FF88u;
    {
        auto targetFn = runtime->lookupFunction(0x16FF88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x175980u;
}
