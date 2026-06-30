#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170430
// Address: 0x170430 - 0x170480
void sub_00170430_0x170430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170430_0x170430");
#endif

    switch (ctx->pc) {
        case 0x170468u: goto label_170468;
        default: break;
    }

    ctx->pc = 0x170430u;

    // 0x170430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170434: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x170434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x170438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17043c: 0x24422e58  addiu       $v0, $v0, 0x2E58
    ctx->pc = 0x17043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11864));
    // 0x170440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170444: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x170444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170448: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x170448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17044c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17044Cu;
    {
        const bool branch_taken_0x17044c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x170450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17044Cu;
            // 0x170450: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17044c) {
            ctx->pc = 0x170468u;
            goto label_170468;
        }
    }
    ctx->pc = 0x170454u;
    // 0x170454: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x170454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x170458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17045c: 0x24842e80  addiu       $a0, $a0, 0x2E80
    ctx->pc = 0x17045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11904));
    // 0x170460: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x170460u;
    SET_GPR_U32(ctx, 31, 0x170468u);
    ctx->pc = 0x170464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170460u;
            // 0x170464: 0x24061040  addiu       $a2, $zero, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170468u; }
        if (ctx->pc != 0x170468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170468u; }
        if (ctx->pc != 0x170468u) { return; }
    }
    ctx->pc = 0x170468u;
label_170468:
    // 0x170468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17046c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170470: 0x3e00008  jr          $ra
    ctx->pc = 0x170470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170470u;
            // 0x170474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170478u;
    // 0x170478: 0x3e00008  jr          $ra
    ctx->pc = 0x170478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170480u;
}
