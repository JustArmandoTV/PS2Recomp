#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102320
// Address: 0x102320 - 0x102360
void sub_00102320_0x102320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102320_0x102320");
#endif

    switch (ctx->pc) {
        case 0x102320u: goto label_102320;
        case 0x102324u: goto label_102324;
        case 0x102328u: goto label_102328;
        case 0x10232cu: goto label_10232c;
        case 0x102330u: goto label_102330;
        case 0x102334u: goto label_102334;
        case 0x102338u: goto label_102338;
        case 0x10233cu: goto label_10233c;
        case 0x102340u: goto label_102340;
        case 0x102344u: goto label_102344;
        case 0x102348u: goto label_102348;
        case 0x10234cu: goto label_10234c;
        case 0x102350u: goto label_102350;
        case 0x102354u: goto label_102354;
        case 0x102358u: goto label_102358;
        case 0x10235cu: goto label_10235c;
        default: break;
    }

    ctx->pc = 0x102320u;

label_102320:
    // 0x102320: 0x8f210000  lw          $at, 0x0($t9)
    ctx->pc = 0x102320u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_102324:
    // 0x102324: 0x8f380004  lw          $t8, 0x4($t9)
    ctx->pc = 0x102324u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
label_102328:
    // 0x102328: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x102328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10232c:
    // 0x10232c: 0x7000007  bltz        $t8, . + 4 + (0x7 << 2)
label_102330:
    if (ctx->pc == 0x102330u) {
        ctx->pc = 0x102330u;
            // 0x102330: 0x812021  addu        $a0, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->pc = 0x102334u;
        goto label_102334;
    }
    ctx->pc = 0x10232Cu;
    {
        const bool branch_taken_0x10232c = (GPR_S32(ctx, 24) < 0);
        ctx->pc = 0x102330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10232Cu;
            // 0x102330: 0x812021  addu        $a0, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10232c) {
            ctx->pc = 0x10234Cu;
            goto label_10234c;
        }
    }
    ctx->pc = 0x102334u;
label_102334:
    // 0x102334: 0x99c821  addu        $t9, $a0, $t9
    ctx->pc = 0x102334u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
label_102338:
    // 0x102338: 0x8f390000  lw          $t9, 0x0($t9)
    ctx->pc = 0x102338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_10233c:
    // 0x10233c: 0x0  nop
    ctx->pc = 0x10233cu;
    // NOP
label_102340:
    // 0x102340: 0x338c821  addu        $t9, $t9, $t8
    ctx->pc = 0x102340u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
label_102344:
    // 0x102344: 0x8f390000  lw          $t9, 0x0($t9)
    ctx->pc = 0x102344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_102348:
    // 0x102348: 0x0  nop
    ctx->pc = 0x102348u;
    // NOP
label_10234c:
    // 0x10234c: 0x3200008  jr          $t9
label_102350:
    if (ctx->pc == 0x102350u) {
        ctx->pc = 0x102354u;
        goto label_102354;
    }
    ctx->pc = 0x10234Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102354u;
label_102354:
    // 0x102354: 0x0  nop
    ctx->pc = 0x102354u;
    // NOP
label_102358:
    // 0x102358: 0x0  nop
    ctx->pc = 0x102358u;
    // NOP
label_10235c:
    // 0x10235c: 0x0  nop
    ctx->pc = 0x10235cu;
    // NOP
}
