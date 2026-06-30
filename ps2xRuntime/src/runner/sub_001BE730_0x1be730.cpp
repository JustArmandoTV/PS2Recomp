#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE730
// Address: 0x1be730 - 0x1be770
void sub_001BE730_0x1be730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE730_0x1be730");
#endif

    switch (ctx->pc) {
        case 0x1be730u: goto label_1be730;
        case 0x1be734u: goto label_1be734;
        case 0x1be738u: goto label_1be738;
        case 0x1be73cu: goto label_1be73c;
        case 0x1be740u: goto label_1be740;
        case 0x1be744u: goto label_1be744;
        case 0x1be748u: goto label_1be748;
        case 0x1be74cu: goto label_1be74c;
        case 0x1be750u: goto label_1be750;
        case 0x1be754u: goto label_1be754;
        case 0x1be758u: goto label_1be758;
        case 0x1be75cu: goto label_1be75c;
        case 0x1be760u: goto label_1be760;
        case 0x1be764u: goto label_1be764;
        case 0x1be768u: goto label_1be768;
        case 0x1be76cu: goto label_1be76c;
        default: break;
    }

    ctx->pc = 0x1be730u;

label_1be730:
    // 0x1be730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1be734:
    // 0x1be734: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1be734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1be738:
    // 0x1be738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1be73c:
    // 0x1be73c: 0x24429d40  addiu       $v0, $v0, -0x62C0
    ctx->pc = 0x1be73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942016));
label_1be740:
    // 0x1be740: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1be740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1be744:
    // 0x1be744: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1be744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1be748:
    // 0x1be748: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1be748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1be74c:
    // 0x1be74c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1be74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1be750:
    // 0x1be750: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1be750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1be754:
    // 0x1be754: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1be758:
    if (ctx->pc == 0x1BE758u) {
        ctx->pc = 0x1BE758u;
            // 0x1be758: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x1BE75Cu;
        goto label_1be75c;
    }
    ctx->pc = 0x1BE754u;
    {
        const bool branch_taken_0x1be754 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE754u;
            // 0x1be758: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be754) {
            ctx->pc = 0x1BE764u;
            goto label_1be764;
        }
    }
    ctx->pc = 0x1BE75Cu;
label_1be75c:
    // 0x1be75c: 0xc0f809  jalr        $a2
label_1be760:
    if (ctx->pc == 0x1BE760u) {
        ctx->pc = 0x1BE764u;
        goto label_1be764;
    }
    ctx->pc = 0x1BE75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BE764u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE764u; }
            if (ctx->pc != 0x1BE764u) { return; }
        }
        }
    }
    ctx->pc = 0x1BE764u;
label_1be764:
    // 0x1be764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be768:
    // 0x1be768: 0x3e00008  jr          $ra
label_1be76c:
    if (ctx->pc == 0x1BE76Cu) {
        ctx->pc = 0x1BE76Cu;
            // 0x1be76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BE770u;
        goto label_fallthrough_0x1be768;
    }
    ctx->pc = 0x1BE768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE768u;
            // 0x1be76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1be768:
    ctx->pc = 0x1BE770u;
}
