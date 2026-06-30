#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139BF0
// Address: 0x139bf0 - 0x139c40
void sub_00139BF0_0x139bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139BF0_0x139bf0");
#endif

    switch (ctx->pc) {
        case 0x139c1cu: goto label_139c1c;
        default: break;
    }

    ctx->pc = 0x139bf0u;

    // 0x139bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139bf4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x139bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x139bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139bfc: 0x8c634fcc  lw          $v1, 0x4FCC($v1)
    ctx->pc = 0x139bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20428)));
    // 0x139c00: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x139C00u;
    {
        const bool branch_taken_0x139c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139c00) {
            ctx->pc = 0x139C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139C00u;
            // 0x139c04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139C38u;
            goto label_139c38;
        }
    }
    ctx->pc = 0x139C08u;
    // 0x139c08: 0x8f83801c  lw          $v1, -0x7FE4($gp)
    ctx->pc = 0x139c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x139c0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139C0Cu;
    {
        const bool branch_taken_0x139c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139c0c) {
            ctx->pc = 0x139C1Cu;
            goto label_139c1c;
        }
    }
    ctx->pc = 0x139C14u;
    // 0x139c14: 0xc04e6c8  jal         func_139B20
    ctx->pc = 0x139C14u;
    SET_GPR_U32(ctx, 31, 0x139C1Cu);
    ctx->pc = 0x139B20u;
    if (runtime->hasFunction(0x139B20u)) {
        auto targetFn = runtime->lookupFunction(0x139B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C1Cu; }
        if (ctx->pc != 0x139C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139B20_0x139b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C1Cu; }
        if (ctx->pc != 0x139C1Cu) { return; }
    }
    ctx->pc = 0x139C1Cu;
label_139c1c:
    // 0x139c1c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x139c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x139c20: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x139c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x139c24: 0xac604fc0  sw          $zero, 0x4FC0($v1)
    ctx->pc = 0x139c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20416), GPR_U32(ctx, 0));
    // 0x139c28: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x139c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x139c2c: 0xac804fc4  sw          $zero, 0x4FC4($a0)
    ctx->pc = 0x139c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20420), GPR_U32(ctx, 0));
    // 0x139c30: 0xac604fcc  sw          $zero, 0x4FCC($v1)
    ctx->pc = 0x139c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20428), GPR_U32(ctx, 0));
    // 0x139c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139c38:
    // 0x139c38: 0x3e00008  jr          $ra
    ctx->pc = 0x139C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C38u;
            // 0x139c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139C40u;
}
