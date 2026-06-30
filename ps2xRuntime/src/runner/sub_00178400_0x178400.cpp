#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178400
// Address: 0x178400 - 0x178488
void sub_00178400_0x178400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178400_0x178400");
#endif

    switch (ctx->pc) {
        case 0x178400u: goto label_178400;
        case 0x178404u: goto label_178404;
        case 0x178408u: goto label_178408;
        case 0x17840cu: goto label_17840c;
        case 0x178410u: goto label_178410;
        case 0x178414u: goto label_178414;
        case 0x178418u: goto label_178418;
        case 0x17841cu: goto label_17841c;
        case 0x178420u: goto label_178420;
        case 0x178424u: goto label_178424;
        case 0x178428u: goto label_178428;
        case 0x17842cu: goto label_17842c;
        case 0x178430u: goto label_178430;
        case 0x178434u: goto label_178434;
        case 0x178438u: goto label_178438;
        case 0x17843cu: goto label_17843c;
        case 0x178440u: goto label_178440;
        case 0x178444u: goto label_178444;
        case 0x178448u: goto label_178448;
        case 0x17844cu: goto label_17844c;
        case 0x178450u: goto label_178450;
        case 0x178454u: goto label_178454;
        case 0x178458u: goto label_178458;
        case 0x17845cu: goto label_17845c;
        case 0x178460u: goto label_178460;
        case 0x178464u: goto label_178464;
        case 0x178468u: goto label_178468;
        case 0x17846cu: goto label_17846c;
        case 0x178470u: goto label_178470;
        case 0x178474u: goto label_178474;
        case 0x178478u: goto label_178478;
        case 0x17847cu: goto label_17847c;
        case 0x178480u: goto label_178480;
        case 0x178484u: goto label_178484;
        default: break;
    }

    ctx->pc = 0x178400u;

label_178400:
    // 0x178400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178404:
    // 0x178404: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x178404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178408:
    // 0x178408: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_17840c:
    if (ctx->pc == 0x17840Cu) {
        ctx->pc = 0x17840Cu;
            // 0x17840c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x178410u;
        goto label_178410;
    }
    ctx->pc = 0x178408u;
    {
        const bool branch_taken_0x178408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17840Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178408u;
            // 0x17840c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178408) {
            ctx->pc = 0x178428u;
            goto label_178428;
        }
    }
    ctx->pc = 0x178410u;
label_178410:
    // 0x178410: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178414:
    // 0x178414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178418:
    // 0x178418: 0x24844b28  addiu       $a0, $a0, 0x4B28
    ctx->pc = 0x178418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19240));
label_17841c:
    // 0x17841c: 0x805e0a6  j           func_178298
label_178420:
    if (ctx->pc == 0x178420u) {
        ctx->pc = 0x178420u;
            // 0x178420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178424u;
        goto label_178424;
    }
    ctx->pc = 0x17841Cu;
    ctx->pc = 0x178420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17841Cu;
            // 0x178420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x178424u;
label_178424:
    // 0x178424: 0x0  nop
    ctx->pc = 0x178424u;
    // NOP
label_178428:
    // 0x178428: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_17842c:
    if (ctx->pc == 0x17842Cu) {
        ctx->pc = 0x17842Cu;
            // 0x17842c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x178430u;
        goto label_178430;
    }
    ctx->pc = 0x178428u;
    {
        const bool branch_taken_0x178428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178428u;
            // 0x17842c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178428) {
            ctx->pc = 0x178440u;
            goto label_178440;
        }
    }
    ctx->pc = 0x178430u;
label_178430:
    // 0x178430: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178434:
    // 0x178434: 0x24844b50  addiu       $a0, $a0, 0x4B50
    ctx->pc = 0x178434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
label_178438:
    // 0x178438: 0x805e0a6  j           func_178298
label_17843c:
    if (ctx->pc == 0x17843Cu) {
        ctx->pc = 0x17843Cu;
            // 0x17843c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178440u;
        goto label_178440;
    }
    ctx->pc = 0x178438u;
    ctx->pc = 0x17843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178438u;
            // 0x17843c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x178440u;
label_178440:
    // 0x178440: 0xc05e122  jal         func_178488
label_178444:
    if (ctx->pc == 0x178444u) {
        ctx->pc = 0x178448u;
        goto label_178448;
    }
    ctx->pc = 0x178440u;
    SET_GPR_U32(ctx, 31, 0x178448u);
    ctx->pc = 0x178488u;
    if (runtime->hasFunction(0x178488u)) {
        auto targetFn = runtime->lookupFunction(0x178488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178448u; }
        if (ctx->pc != 0x178448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178488_0x178488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178448u; }
        if (ctx->pc != 0x178448u) { return; }
    }
    ctx->pc = 0x178448u;
label_178448:
    // 0x178448: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17844c:
    // 0x17844c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_178450:
    if (ctx->pc == 0x178450u) {
        ctx->pc = 0x178450u;
            // 0x178450: 0x24844b78  addiu       $a0, $a0, 0x4B78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19320));
        ctx->pc = 0x178454u;
        goto label_178454;
    }
    ctx->pc = 0x17844Cu;
    {
        const bool branch_taken_0x17844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17844Cu;
            // 0x178450: 0x24844b78  addiu       $a0, $a0, 0x4B78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17844c) {
            ctx->pc = 0x178460u;
            goto label_178460;
        }
    }
    ctx->pc = 0x178454u;
label_178454:
    // 0x178454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178458:
    // 0x178458: 0x805e0a6  j           func_178298
label_17845c:
    if (ctx->pc == 0x17845Cu) {
        ctx->pc = 0x17845Cu;
            // 0x17845c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178460u;
        goto label_178460;
    }
    ctx->pc = 0x178458u;
    ctx->pc = 0x17845Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178458u;
            // 0x17845c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x178460u;
label_178460:
    // 0x178460: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x178460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_178464:
    // 0x178464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_178468:
    if (ctx->pc == 0x178468u) {
        ctx->pc = 0x178468u;
            // 0x178468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17846Cu;
        goto label_17846c;
    }
    ctx->pc = 0x178464u;
    {
        const bool branch_taken_0x178464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178464u;
            // 0x178468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178464) {
            ctx->pc = 0x178478u;
            goto label_178478;
        }
    }
    ctx->pc = 0x17846Cu;
label_17846c:
    // 0x17846c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17846cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
label_178470:
    // 0x178470: 0x40f809  jalr        $v0
label_178474:
    if (ctx->pc == 0x178474u) {
        ctx->pc = 0x178474u;
            // 0x178474: 0x24848268  addiu       $a0, $a0, -0x7D98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935144));
        ctx->pc = 0x178478u;
        goto label_178478;
    }
    ctx->pc = 0x178470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178478u);
        ctx->pc = 0x178474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178470u;
            // 0x178474: 0x24848268  addiu       $a0, $a0, -0x7D98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178478u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178478u; }
            if (ctx->pc != 0x178478u) { return; }
        }
        }
    }
    ctx->pc = 0x178478u;
label_178478:
    // 0x178478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17847c:
    // 0x17847c: 0x3e00008  jr          $ra
label_178480:
    if (ctx->pc == 0x178480u) {
        ctx->pc = 0x178480u;
            // 0x178480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178484u;
        goto label_178484;
    }
    ctx->pc = 0x17847Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17847Cu;
            // 0x178480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178484u;
label_178484:
    // 0x178484: 0x0  nop
    ctx->pc = 0x178484u;
    // NOP
}
