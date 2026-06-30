#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2540
// Address: 0x1c2540 - 0x1c2588
void sub_001C2540_0x1c2540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2540_0x1c2540");
#endif

    switch (ctx->pc) {
        case 0x1c2540u: goto label_1c2540;
        case 0x1c2544u: goto label_1c2544;
        case 0x1c2548u: goto label_1c2548;
        case 0x1c254cu: goto label_1c254c;
        case 0x1c2550u: goto label_1c2550;
        case 0x1c2554u: goto label_1c2554;
        case 0x1c2558u: goto label_1c2558;
        case 0x1c255cu: goto label_1c255c;
        case 0x1c2560u: goto label_1c2560;
        case 0x1c2564u: goto label_1c2564;
        case 0x1c2568u: goto label_1c2568;
        case 0x1c256cu: goto label_1c256c;
        case 0x1c2570u: goto label_1c2570;
        case 0x1c2574u: goto label_1c2574;
        case 0x1c2578u: goto label_1c2578;
        case 0x1c257cu: goto label_1c257c;
        case 0x1c2580u: goto label_1c2580;
        case 0x1c2584u: goto label_1c2584;
        default: break;
    }

    ctx->pc = 0x1c2540u;

label_1c2540:
    // 0x1c2540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c2544:
    // 0x1c2544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c2544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2548:
    // 0x1c2548: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1c254c:
    if (ctx->pc == 0x1C254Cu) {
        ctx->pc = 0x1C254Cu;
            // 0x1c254c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C2550u;
        goto label_1c2550;
    }
    ctx->pc = 0x1C2548u;
    {
        const bool branch_taken_0x1c2548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2548u;
            // 0x1c254c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2548) {
            ctx->pc = 0x1C257Cu;
            goto label_1c257c;
        }
    }
    ctx->pc = 0x1C2550u;
label_1c2550:
    // 0x1c2550: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c2550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c2554:
    // 0x1c2554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2558:
    // 0x1c2558: 0x8c47a4d8  lw          $a3, -0x5B28($v0)
    ctx->pc = 0x1c2558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
label_1c255c:
    // 0x1c255c: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x1c255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_1c2560:
    // 0x1c2560: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c2560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c2564:
    // 0x1c2564: 0x40f809  jalr        $v0
label_1c2568:
    if (ctx->pc == 0x1C2568u) {
        ctx->pc = 0x1C2568u;
            // 0x1c2568: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C256Cu;
        goto label_1c256c;
    }
    ctx->pc = 0x1C2564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C256Cu);
        ctx->pc = 0x1C2568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2564u;
            // 0x1c2568: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C256Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C256Cu; }
            if (ctx->pc != 0x1C256Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C256Cu;
label_1c256c:
    // 0x1c256c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1c256cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1c2570:
    // 0x1c2570: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c2570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1c2574:
    // 0x1c2574: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c2574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1c2578:
    // 0x1c2578: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c2578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c257c:
    // 0x1c257c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c257cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2580:
    // 0x1c2580: 0x3e00008  jr          $ra
label_1c2584:
    if (ctx->pc == 0x1C2584u) {
        ctx->pc = 0x1C2584u;
            // 0x1c2584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C2588u;
        goto label_fallthrough_0x1c2580;
    }
    ctx->pc = 0x1C2580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2580u;
            // 0x1c2584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c2580:
    ctx->pc = 0x1C2588u;
}
