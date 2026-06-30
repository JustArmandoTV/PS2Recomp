#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C450
// Address: 0x16c450 - 0x16c4b8
void sub_0016C450_0x16c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C450_0x16c450");
#endif

    ctx->pc = 0x16c450u;

    // 0x16c450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c454: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C454u;
    {
        const bool branch_taken_0x16c454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C454u;
            // 0x16c458: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c454) {
            ctx->pc = 0x16C470u;
            goto label_16c470;
        }
    }
    ctx->pc = 0x16C45Cu;
    // 0x16c45c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16c460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c464: 0x24843e38  addiu       $a0, $a0, 0x3E38
    ctx->pc = 0x16c464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15928));
    // 0x16c468: 0x8059f4e  j           func_167D38
    ctx->pc = 0x16C468u;
    ctx->pc = 0x16C46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C468u;
            // 0x16c46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C470u;
label_16c470:
    // 0x16c470: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x16c470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x16c474: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C474u;
    {
        const bool branch_taken_0x16c474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C474u;
            // 0x16c478: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c474) {
            ctx->pc = 0x16C488u;
            goto label_16c488;
        }
    }
    ctx->pc = 0x16C47Cu;
    // 0x16c47c: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x16c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x16c480: 0x80600d8  j           func_180360
    ctx->pc = 0x16C480u;
    ctx->pc = 0x16C484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C480u;
            // 0x16c484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180360u;
    if (runtime->hasFunction(0x180360u)) {
        auto targetFn = runtime->lookupFunction(0x180360u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180360_0x180360(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C488u;
label_16c488:
    // 0x16c488: 0x3e00008  jr          $ra
    ctx->pc = 0x16C488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C488u;
            // 0x16c48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C490u;
    // 0x16c490: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16c494: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16c494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16c498: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x16c498u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x16c49c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x16c49cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x16c4a0: 0xac44aa10  sw          $a0, -0x55F0($v0)
    ctx->pc = 0x16c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945296), GPR_U32(ctx, 4));
    // 0x16c4a4: 0xac65aa14  sw          $a1, -0x55EC($v1)
    ctx->pc = 0x16c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945300), GPR_U32(ctx, 5));
    // 0x16c4a8: 0xad06aa18  sw          $a2, -0x55E8($t0)
    ctx->pc = 0x16c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294945304), GPR_U32(ctx, 6));
    // 0x16c4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x16C4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C4ACu;
            // 0x16c4b0: 0xad27aa1c  sw          $a3, -0x55E4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294945308), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C4B4u;
    // 0x16c4b4: 0x0  nop
    ctx->pc = 0x16c4b4u;
    // NOP
}
