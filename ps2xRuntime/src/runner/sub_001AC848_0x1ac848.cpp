#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC848
// Address: 0x1ac848 - 0x1ac8e0
void sub_001AC848_0x1ac848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC848_0x1ac848");
#endif

    ctx->pc = 0x1ac848u;

    // 0x1ac848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac84c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ac84cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac850: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ac850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ac854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac858: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AC858u;
    {
        const bool branch_taken_0x1ac858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC858u;
            // 0x1ac85c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac858) {
            ctx->pc = 0x1AC890u;
            goto label_1ac890;
        }
    }
    ctx->pc = 0x1AC860u;
    // 0x1ac860: 0x2862ffff  slti        $v0, $v1, -0x1
    ctx->pc = 0x1ac860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1ac864: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AC864u;
    {
        const bool branch_taken_0x1ac864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC864u;
            // 0x1ac868: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac864) {
            ctx->pc = 0x1AC880u;
            goto label_1ac880;
        }
    }
    ctx->pc = 0x1AC86Cu;
    // 0x1ac86c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AC86Cu;
    {
        const bool branch_taken_0x1ac86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC86Cu;
            // 0x1ac870: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac86c) {
            ctx->pc = 0x1AC8A8u;
            goto label_1ac8a8;
        }
    }
    ctx->pc = 0x1AC874u;
    // 0x1ac874: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1AC874u;
    {
        const bool branch_taken_0x1ac874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC874u;
            // 0x1ac878: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac874) {
            ctx->pc = 0x1AC8C4u;
            goto label_1ac8c4;
        }
    }
    ctx->pc = 0x1AC87Cu;
    // 0x1ac87c: 0x0  nop
    ctx->pc = 0x1ac87cu;
    // NOP
label_1ac880:
    // 0x1ac880: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1AC880u;
    {
        const bool branch_taken_0x1ac880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC880u;
            // 0x1ac884: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac880) {
            ctx->pc = 0x1AC8C0u;
            goto label_1ac8c0;
        }
    }
    ctx->pc = 0x1AC888u;
    // 0x1ac888: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AC888u;
    {
        const bool branch_taken_0x1ac888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC888u;
            // 0x1ac88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac888) {
            ctx->pc = 0x1AC8D4u;
            goto label_1ac8d4;
        }
    }
    ctx->pc = 0x1AC890u;
label_1ac890:
    // 0x1ac890: 0x1cc0000f  bgtz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1AC890u;
    {
        const bool branch_taken_0x1ac890 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1AC894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC890u;
            // 0x1ac894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac890) {
            ctx->pc = 0x1AC8D0u;
            goto label_1ac8d0;
        }
    }
    ctx->pc = 0x1AC898u;
    // 0x1ac898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac89c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AC89Cu;
    ctx->pc = 0x1AC8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC89Cu;
            // 0x1ac8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AC8A4u;
    // 0x1ac8a4: 0x0  nop
    ctx->pc = 0x1ac8a4u;
    // NOP
label_1ac8a8:
    // 0x1ac8a8: 0x1cc00009  bgtz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC8A8u;
    {
        const bool branch_taken_0x1ac8a8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1AC8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8A8u;
            // 0x1ac8ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8a8) {
            ctx->pc = 0x1AC8D0u;
            goto label_1ac8d0;
        }
    }
    ctx->pc = 0x1AC8B0u;
    // 0x1ac8b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac8b4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AC8B4u;
    ctx->pc = 0x1AC8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8B4u;
            // 0x1ac8b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AC8BCu;
    // 0x1ac8bc: 0x0  nop
    ctx->pc = 0x1ac8bcu;
    // NOP
label_1ac8c0:
    // 0x1ac8c0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1ac8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8c4:
    // 0x1ac8c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ac8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac8c8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AC8C8u;
    ctx->pc = 0x1AC8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8C8u;
            // 0x1ac8cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AC8D0u;
label_1ac8d0:
    // 0x1ac8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac8d4:
    // 0x1ac8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8D4u;
            // 0x1ac8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC8DCu;
    // 0x1ac8dc: 0x0  nop
    ctx->pc = 0x1ac8dcu;
    // NOP
}
