#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170480
// Address: 0x170480 - 0x1704d0
void sub_00170480_0x170480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170480_0x170480");
#endif

    ctx->pc = 0x170480u;

    // 0x170480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170484: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x170484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x170488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17048c: 0x24632e58  addiu       $v1, $v1, 0x2E58
    ctx->pc = 0x17048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11864));
    // 0x170490: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x170490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170494: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x170494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x170498: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x170498u;
    {
        const bool branch_taken_0x170498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170498u;
            // 0x17049c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170498) {
            ctx->pc = 0x1704C0u;
            goto label_1704c0;
        }
    }
    ctx->pc = 0x1704A0u;
    // 0x1704a0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1704a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1704a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1704a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1704a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1704a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704ac: 0x24842e80  addiu       $a0, $a0, 0x2E80
    ctx->pc = 0x1704acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11904));
    // 0x1704b0: 0x24061040  addiu       $a2, $zero, 0x1040
    ctx->pc = 0x1704b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    // 0x1704b4: 0x804a576  j           func_1295D8
    ctx->pc = 0x1704B4u;
    ctx->pc = 0x1704B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1704B4u;
            // 0x1704b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1704BCu;
    // 0x1704bc: 0x0  nop
    ctx->pc = 0x1704bcu;
    // NOP
label_1704c0:
    // 0x1704c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1704c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1704c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1704C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1704C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1704C4u;
            // 0x1704c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1704CCu;
    // 0x1704cc: 0x0  nop
    ctx->pc = 0x1704ccu;
    // NOP
}
