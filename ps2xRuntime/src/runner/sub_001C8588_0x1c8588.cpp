#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8588
// Address: 0x1c8588 - 0x1c85d0
void sub_001C8588_0x1c8588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8588_0x1c8588");
#endif

    switch (ctx->pc) {
        case 0x1c8588u: goto label_1c8588;
        case 0x1c858cu: goto label_1c858c;
        case 0x1c8590u: goto label_1c8590;
        case 0x1c8594u: goto label_1c8594;
        case 0x1c8598u: goto label_1c8598;
        case 0x1c859cu: goto label_1c859c;
        case 0x1c85a0u: goto label_1c85a0;
        case 0x1c85a4u: goto label_1c85a4;
        case 0x1c85a8u: goto label_1c85a8;
        case 0x1c85acu: goto label_1c85ac;
        case 0x1c85b0u: goto label_1c85b0;
        case 0x1c85b4u: goto label_1c85b4;
        case 0x1c85b8u: goto label_1c85b8;
        case 0x1c85bcu: goto label_1c85bc;
        case 0x1c85c0u: goto label_1c85c0;
        case 0x1c85c4u: goto label_1c85c4;
        case 0x1c85c8u: goto label_1c85c8;
        case 0x1c85ccu: goto label_1c85cc;
        default: break;
    }

    ctx->pc = 0x1c8588u;

label_1c8588:
    // 0x1c8588: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1c8588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c858c:
    // 0x1c858c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1c858cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c8590:
    // 0x1c8590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c8594:
    // 0x1c8594: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x1c8594u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c8598:
    // 0x1c8598: 0x2c630009  sltiu       $v1, $v1, 0x9
    ctx->pc = 0x1c8598u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1c859c:
    // 0x1c859c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c85a0:
    // 0x1c85a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1c85a4:
    if (ctx->pc == 0x1C85A4u) {
        ctx->pc = 0x1C85A4u;
            // 0x1c85a4: 0x2402fc18  addiu       $v0, $zero, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
        ctx->pc = 0x1C85A8u;
        goto label_1c85a8;
    }
    ctx->pc = 0x1C85A0u;
    {
        const bool branch_taken_0x1c85a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C85A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C85A0u;
            // 0x1c85a4: 0x2402fc18  addiu       $v0, $zero, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85a0) {
            ctx->pc = 0x1C85C0u;
            goto label_1c85c0;
        }
    }
    ctx->pc = 0x1C85A8u;
label_1c85a8:
    // 0x1c85a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c85ac:
    // 0x1c85ac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1c85acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1c85b0:
    // 0x1c85b0: 0x8c42a6c8  lw          $v0, -0x5938($v0)
    ctx->pc = 0x1c85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944456)));
label_1c85b4:
    // 0x1c85b4: 0x40f809  jalr        $v0
label_1c85b8:
    if (ctx->pc == 0x1C85B8u) {
        ctx->pc = 0x1C85BCu;
        goto label_1c85bc;
    }
    ctx->pc = 0x1C85B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C85BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C85BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C85BCu; }
            if (ctx->pc != 0x1C85BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1C85BCu;
label_1c85bc:
    // 0x1c85bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c85bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c85c0:
    // 0x1c85c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c85c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c85c4:
    // 0x1c85c4: 0x3e00008  jr          $ra
label_1c85c8:
    if (ctx->pc == 0x1C85C8u) {
        ctx->pc = 0x1C85C8u;
            // 0x1c85c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C85CCu;
        goto label_1c85cc;
    }
    ctx->pc = 0x1C85C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C85C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C85C4u;
            // 0x1c85c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C85CCu;
label_1c85cc:
    // 0x1c85cc: 0x0  nop
    ctx->pc = 0x1c85ccu;
    // NOP
}
