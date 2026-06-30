#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE918
// Address: 0x1be918 - 0x1be998
void sub_001BE918_0x1be918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE918_0x1be918");
#endif

    switch (ctx->pc) {
        case 0x1be948u: goto label_1be948;
        case 0x1be950u: goto label_1be950;
        case 0x1be958u: goto label_1be958;
        case 0x1be960u: goto label_1be960;
        case 0x1be968u: goto label_1be968;
        case 0x1be980u: goto label_1be980;
        default: break;
    }

    ctx->pc = 0x1be918u;

    // 0x1be918: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1be918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1be91c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be920: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1be920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be924: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE924u;
    {
        const bool branch_taken_0x1be924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be924) {
            ctx->pc = 0x1BE928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE924u;
            // 0x1be928: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE938u;
            goto label_1be938;
        }
    }
    ctx->pc = 0x1BE92Cu;
    // 0x1be92c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1be92cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1be930: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE930u;
            // 0x1be934: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE938u;
label_1be938:
    // 0x1be938: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1be938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1be93c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1be93cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1be940: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE940u;
            // 0x1be944: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE948u;
label_1be948:
    // 0x1be948: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE948u;
            // 0x1be94c: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE950u;
label_1be950:
    // 0x1be950: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE950u;
            // 0x1be954: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE958u;
label_1be958:
    // 0x1be958: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE958u;
            // 0x1be95c: 0xac85002c  sw          $a1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE960u;
label_1be960:
    // 0x1be960: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE960u;
            // 0x1be964: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE968u;
label_1be968:
    // 0x1be968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be96c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be970: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1be970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1be974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be978: 0x806fd6a  j           func_1BF5A8
    ctx->pc = 0x1BE978u;
    ctx->pc = 0x1BE97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE978u;
            // 0x1be97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF5A8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BF5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BE980u;
label_1be980:
    // 0x1be980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be988: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1be988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1be98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be990: 0x806fd90  j           func_1BF640
    ctx->pc = 0x1BE990u;
    ctx->pc = 0x1BE994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE990u;
            // 0x1be994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF640u;
    {
        auto targetFn = runtime->lookupFunction(0x1BF640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BE998u;
}
