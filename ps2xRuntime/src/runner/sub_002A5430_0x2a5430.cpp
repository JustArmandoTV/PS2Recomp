#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5430
// Address: 0x2a5430 - 0x2a5490
void sub_002A5430_0x2a5430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5430_0x2a5430");
#endif

    switch (ctx->pc) {
        case 0x2a5430u: goto label_2a5430;
        case 0x2a5434u: goto label_2a5434;
        case 0x2a5438u: goto label_2a5438;
        case 0x2a543cu: goto label_2a543c;
        case 0x2a5440u: goto label_2a5440;
        case 0x2a5444u: goto label_2a5444;
        case 0x2a5448u: goto label_2a5448;
        case 0x2a544cu: goto label_2a544c;
        case 0x2a5450u: goto label_2a5450;
        case 0x2a5454u: goto label_2a5454;
        case 0x2a5458u: goto label_2a5458;
        case 0x2a545cu: goto label_2a545c;
        case 0x2a5460u: goto label_2a5460;
        case 0x2a5464u: goto label_2a5464;
        case 0x2a5468u: goto label_2a5468;
        case 0x2a546cu: goto label_2a546c;
        case 0x2a5470u: goto label_2a5470;
        case 0x2a5474u: goto label_2a5474;
        case 0x2a5478u: goto label_2a5478;
        case 0x2a547cu: goto label_2a547c;
        case 0x2a5480u: goto label_2a5480;
        case 0x2a5484u: goto label_2a5484;
        case 0x2a5488u: goto label_2a5488;
        case 0x2a548cu: goto label_2a548c;
        default: break;
    }

    ctx->pc = 0x2a5430u;

label_2a5430:
    // 0x2a5430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a5434:
    // 0x2a5434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a5438:
    // 0x2a5438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a543c:
    // 0x2a543c: 0x8c8301c8  lw          $v1, 0x1C8($a0)
    ctx->pc = 0x2a543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
label_2a5440:
    // 0x2a5440: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_2a5444:
    if (ctx->pc == 0x2A5444u) {
        ctx->pc = 0x2A5444u;
            // 0x2a5444: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2A5448u;
        goto label_2a5448;
    }
    ctx->pc = 0x2A5440u;
    {
        const bool branch_taken_0x2a5440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5440) {
            ctx->pc = 0x2A5444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5440u;
            // 0x2a5444: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5480u;
            goto label_2a5480;
        }
    }
    ctx->pc = 0x2A5448u;
label_2a5448:
    // 0x2a5448: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2a5448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a544c:
    // 0x2a544c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a5450:
    if (ctx->pc == 0x2A5450u) {
        ctx->pc = 0x2A5450u;
            // 0x2a5450: 0x8c700018  lw          $s0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->pc = 0x2A5454u;
        goto label_2a5454;
    }
    ctx->pc = 0x2A544Cu;
    {
        const bool branch_taken_0x2a544c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A544Cu;
            // 0x2a5450: 0x8c700018  lw          $s0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a544c) {
            ctx->pc = 0x2A5464u;
            goto label_2a5464;
        }
    }
    ctx->pc = 0x2A5454u;
label_2a5454:
    // 0x2a5454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a5454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a5458:
    // 0x2a5458: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a5458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a545c:
    // 0x2a545c: 0x320f809  jalr        $t9
label_2a5460:
    if (ctx->pc == 0x2A5460u) {
        ctx->pc = 0x2A5464u;
        goto label_2a5464;
    }
    ctx->pc = 0x2A545Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A5464u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A5464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A5464u; }
            if (ctx->pc != 0x2A5464u) { return; }
        }
        }
    }
    ctx->pc = 0x2A5464u;
label_2a5464:
    // 0x2a5464: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2a5468:
    if (ctx->pc == 0x2A5468u) {
        ctx->pc = 0x2A546Cu;
        goto label_2a546c;
    }
    ctx->pc = 0x2A5464u;
    {
        const bool branch_taken_0x2a5464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5464) {
            ctx->pc = 0x2A547Cu;
            goto label_2a547c;
        }
    }
    ctx->pc = 0x2A546Cu;
label_2a546c:
    // 0x2a546c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2a546cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a5470:
    // 0x2a5470: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a5470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a5474:
    // 0x2a5474: 0x320f809  jalr        $t9
label_2a5478:
    if (ctx->pc == 0x2A5478u) {
        ctx->pc = 0x2A5478u;
            // 0x2a5478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A547Cu;
        goto label_2a547c;
    }
    ctx->pc = 0x2A5474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A547Cu);
        ctx->pc = 0x2A5478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5474u;
            // 0x2a5478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A547Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A547Cu; }
            if (ctx->pc != 0x2A547Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A547Cu;
label_2a547c:
    // 0x2a547c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a547cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5480:
    // 0x2a5480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5484:
    // 0x2a5484: 0x3e00008  jr          $ra
label_2a5488:
    if (ctx->pc == 0x2A5488u) {
        ctx->pc = 0x2A5488u;
            // 0x2a5488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A548Cu;
        goto label_2a548c;
    }
    ctx->pc = 0x2A5484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5484u;
            // 0x2a5488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A548Cu;
label_2a548c:
    // 0x2a548c: 0x0  nop
    ctx->pc = 0x2a548cu;
    // NOP
}
