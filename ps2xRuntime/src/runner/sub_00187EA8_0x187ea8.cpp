#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187EA8
// Address: 0x187ea8 - 0x187f00
void sub_00187EA8_0x187ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187EA8_0x187ea8");
#endif

    switch (ctx->pc) {
        case 0x187ec0u: goto label_187ec0;
        default: break;
    }

    ctx->pc = 0x187ea8u;

    // 0x187ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187eac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x187eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x187eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187eb8: 0x8061f50  j           func_187D40
    ctx->pc = 0x187EB8u;
    ctx->pc = 0x187EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187EB8u;
            // 0x187ebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187D40u;
    {
        auto targetFn = runtime->lookupFunction(0x187D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x187EC0u;
label_187ec0:
    // 0x187ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187ec4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x187ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x187ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187ed0: 0x8061f50  j           func_187D40
    ctx->pc = 0x187ED0u;
    ctx->pc = 0x187ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187ED0u;
            // 0x187ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187D40u;
    {
        auto targetFn = runtime->lookupFunction(0x187D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x187ED8u;
    // 0x187ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187edc: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x187edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x187ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187ee8: 0x8061f50  j           func_187D40
    ctx->pc = 0x187EE8u;
    ctx->pc = 0x187EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187EE8u;
            // 0x187eec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187D40u;
    {
        auto targetFn = runtime->lookupFunction(0x187D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x187EF0u;
    // 0x187ef0: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x187ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x187ef4: 0x24636914  addiu       $v1, $v1, 0x6914
    ctx->pc = 0x187ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26900));
    // 0x187ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x187EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187EF8u;
            // 0x187efc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187F00u;
}
