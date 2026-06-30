#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6758
// Address: 0x1a6758 - 0x1a6790
void sub_001A6758_0x1a6758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6758_0x1a6758");
#endif

    switch (ctx->pc) {
        case 0x1a6758u: goto label_1a6758;
        case 0x1a675cu: goto label_1a675c;
        case 0x1a6760u: goto label_1a6760;
        case 0x1a6764u: goto label_1a6764;
        case 0x1a6768u: goto label_1a6768;
        case 0x1a676cu: goto label_1a676c;
        case 0x1a6770u: goto label_1a6770;
        case 0x1a6774u: goto label_1a6774;
        case 0x1a6778u: goto label_1a6778;
        case 0x1a677cu: goto label_1a677c;
        case 0x1a6780u: goto label_1a6780;
        case 0x1a6784u: goto label_1a6784;
        case 0x1a6788u: goto label_1a6788;
        case 0x1a678cu: goto label_1a678c;
        default: break;
    }

    ctx->pc = 0x1a6758u;

label_1a6758:
    // 0x1a6758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a675c:
    // 0x1a675c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6760:
    // 0x1a6760: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a6760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6764:
    // 0x1a6764: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a6764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a6768:
    // 0x1a6768: 0x40f809  jalr        $v0
label_1a676c:
    if (ctx->pc == 0x1A676Cu) {
        ctx->pc = 0x1A6770u;
        goto label_1a6770;
    }
    ctx->pc = 0x1A6768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6770u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6770u; }
            if (ctx->pc != 0x1A6770u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6770u;
label_1a6770:
    // 0x1a6770: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1a6770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
label_1a6774:
    // 0x1a6774: 0x8c64beb0  lw          $a0, -0x4150($v1)
    ctx->pc = 0x1a6774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950576)));
label_1a6778:
    // 0x1a6778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a677c:
    // 0x1a677c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1a677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_1a6780:
    // 0x1a6780: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a6784:
    // 0x1a6784: 0x3e00008  jr          $ra
label_1a6788:
    if (ctx->pc == 0x1A6788u) {
        ctx->pc = 0x1A6788u;
            // 0x1a6788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A678Cu;
        goto label_1a678c;
    }
    ctx->pc = 0x1A6784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6784u;
            // 0x1a6788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A678Cu;
label_1a678c:
    // 0x1a678c: 0x0  nop
    ctx->pc = 0x1a678cu;
    // NOP
}
