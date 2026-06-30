#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5760
// Address: 0x1c5760 - 0x1c5798
void sub_001C5760_0x1c5760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5760_0x1c5760");
#endif

    switch (ctx->pc) {
        case 0x1c5760u: goto label_1c5760;
        case 0x1c5764u: goto label_1c5764;
        case 0x1c5768u: goto label_1c5768;
        case 0x1c576cu: goto label_1c576c;
        case 0x1c5770u: goto label_1c5770;
        case 0x1c5774u: goto label_1c5774;
        case 0x1c5778u: goto label_1c5778;
        case 0x1c577cu: goto label_1c577c;
        case 0x1c5780u: goto label_1c5780;
        case 0x1c5784u: goto label_1c5784;
        case 0x1c5788u: goto label_1c5788;
        case 0x1c578cu: goto label_1c578c;
        case 0x1c5790u: goto label_1c5790;
        case 0x1c5794u: goto label_1c5794;
        default: break;
    }

    ctx->pc = 0x1c5760u;

label_1c5760:
    // 0x1c5760: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c5760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c5764:
    // 0x1c5764: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c5768:
    // 0x1c5768: 0x8c42a5e0  lw          $v0, -0x5A20($v0)
    ctx->pc = 0x1c5768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944224)));
label_1c576c:
    // 0x1c576c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c5770:
    if (ctx->pc == 0x1C5770u) {
        ctx->pc = 0x1C5770u;
            // 0x1c5770: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C5774u;
        goto label_1c5774;
    }
    ctx->pc = 0x1C576Cu;
    {
        const bool branch_taken_0x1c576c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C576Cu;
            // 0x1c5770: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c576c) {
            ctx->pc = 0x1C5788u;
            goto label_1c5788;
        }
    }
    ctx->pc = 0x1C5774u;
label_1c5774:
    // 0x1c5774: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c5774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5778:
    // 0x1c5778: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1c577c:
    if (ctx->pc == 0x1C577Cu) {
        ctx->pc = 0x1C577Cu;
            // 0x1c577c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C5780u;
        goto label_1c5780;
    }
    ctx->pc = 0x1C5778u;
    {
        const bool branch_taken_0x1c5778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5778) {
            ctx->pc = 0x1C577Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5778u;
            // 0x1c577c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C578Cu;
            goto label_1c578c;
        }
    }
    ctx->pc = 0x1C5780u;
label_1c5780:
    // 0x1c5780: 0x40f809  jalr        $v0
label_1c5784:
    if (ctx->pc == 0x1C5784u) {
        ctx->pc = 0x1C5788u;
        goto label_1c5788;
    }
    ctx->pc = 0x1C5780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5788u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C5788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C5788u; }
            if (ctx->pc != 0x1C5788u) { return; }
        }
        }
    }
    ctx->pc = 0x1C5788u;
label_1c5788:
    // 0x1c5788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c578c:
    // 0x1c578c: 0x3e00008  jr          $ra
label_1c5790:
    if (ctx->pc == 0x1C5790u) {
        ctx->pc = 0x1C5790u;
            // 0x1c5790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C5794u;
        goto label_1c5794;
    }
    ctx->pc = 0x1C578Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C578Cu;
            // 0x1c5790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5794u;
label_1c5794:
    // 0x1c5794: 0x0  nop
    ctx->pc = 0x1c5794u;
    // NOP
}
