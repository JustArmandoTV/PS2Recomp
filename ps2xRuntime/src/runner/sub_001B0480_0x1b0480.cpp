#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0480
// Address: 0x1b0480 - 0x1b0540
void sub_001B0480_0x1b0480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0480_0x1b0480");
#endif

    switch (ctx->pc) {
        case 0x1b04b0u: goto label_1b04b0;
        case 0x1b04d0u: goto label_1b04d0;
        case 0x1b04fcu: goto label_1b04fc;
        case 0x1b0514u: goto label_1b0514;
        default: break;
    }

    ctx->pc = 0x1b0480u;

    // 0x1b0480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b0480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b0484: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b0484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b0488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b048c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0490: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b0490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b0494: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b0498: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b0498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1b049c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1b049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1b04a0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1b04a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1b04a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b04a8: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B04A8u;
    SET_GPR_U32(ctx, 31, 0x1B04B0u);
    ctx->pc = 0x1B04ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04A8u;
            // 0x1b04ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B04B0u; }
        if (ctx->pc != 0x1B04B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B04B0u; }
        if (ctx->pc != 0x1B04B0u) { return; }
    }
    ctx->pc = 0x1B04B0u;
label_1b04b0:
    // 0x1b04b0: 0x8e022030  lw          $v0, 0x2030($s0)
    ctx->pc = 0x1b04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
    // 0x1b04b4: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x1b04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x1b04b8: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B04B8u;
    {
        const bool branch_taken_0x1b04b8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B04BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04B8u;
            // 0x1b04bc: 0x24500180  addiu       $s0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04b8) {
            ctx->pc = 0x1B050Cu;
            goto label_1b050c;
        }
    }
    ctx->pc = 0x1B04C0u;
    // 0x1b04c0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1b04c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04c4: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1b04c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b04c8: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x1b04c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b04cc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1b04ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b04d0:
    // 0x1b04d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b04d4: 0x50550004  beql        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B04D4u;
    {
        const bool branch_taken_0x1b04d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1b04d4) {
            ctx->pc = 0x1B04D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04D4u;
            // 0x1b04d8: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B04E8u;
            goto label_1b04e8;
        }
    }
    ctx->pc = 0x1B04DCu;
    // 0x1b04dc: 0x54540009  bnel        $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B04DCu;
    {
        const bool branch_taken_0x1b04dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1b04dc) {
            ctx->pc = 0x1B04E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04DCu;
            // 0x1b04e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0504u;
            goto label_1b0504;
        }
    }
    ctx->pc = 0x1B04E4u;
    // 0x1b04e4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1b04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1b04e8:
    // 0x1b04e8: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B04E8u;
    {
        const bool branch_taken_0x1b04e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1b04e8) {
            ctx->pc = 0x1B04ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04E8u;
            // 0x1b04ec: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0504u;
            goto label_1b0504;
        }
    }
    ctx->pc = 0x1B04F0u;
    // 0x1b04f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b04f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04f4: 0xc06c23e  jal         func_1B08F8
    ctx->pc = 0x1B04F4u;
    SET_GPR_U32(ctx, 31, 0x1B04FCu);
    ctx->pc = 0x1B04F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04F4u;
            // 0x1b04f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B08F8u;
    if (runtime->hasFunction(0x1B08F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B08F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B04FCu; }
        if (ctx->pc != 0x1B04FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B08F8_0x1b08f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B04FCu; }
        if (ctx->pc != 0x1B04FCu) { return; }
    }
    ctx->pc = 0x1B04FCu;
label_1b04fc:
    // 0x1b04fc: 0x202900b  movn        $s2, $s0, $v0
    ctx->pc = 0x1b04fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
    // 0x1b0500: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b0500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b0504:
    // 0x1b0504: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1B0504u;
    {
        const bool branch_taken_0x1b0504 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0504u;
            // 0x1b0508: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0504) {
            ctx->pc = 0x1B04D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b04d0;
        }
    }
    ctx->pc = 0x1B050Cu;
label_1b050c:
    // 0x1b050c: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B050Cu;
    SET_GPR_U32(ctx, 31, 0x1B0514u);
    ctx->pc = 0x1B0510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B050Cu;
            // 0x1b0510: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0514u; }
        if (ctx->pc != 0x1B0514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0514u; }
        if (ctx->pc != 0x1B0514u) { return; }
    }
    ctx->pc = 0x1B0514u;
label_1b0514:
    // 0x1b0514: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b0514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0518: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b0518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b051c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b051cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0520: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0524: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b0524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b0528: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1b0528u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b052c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1b052cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b0530: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b0530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0534: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0534u;
            // 0x1b0538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B053Cu;
    // 0x1b053c: 0x0  nop
    ctx->pc = 0x1b053cu;
    // NOP
}
