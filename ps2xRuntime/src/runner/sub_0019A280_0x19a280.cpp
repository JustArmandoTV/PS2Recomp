#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A280
// Address: 0x19a280 - 0x19a338
void sub_0019A280_0x19a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A280_0x19a280");
#endif

    switch (ctx->pc) {
        case 0x19a2a0u: goto label_19a2a0;
        case 0x19a2e8u: goto label_19a2e8;
        case 0x19a2f4u: goto label_19a2f4;
        case 0x19a308u: goto label_19a308;
        default: break;
    }

    ctx->pc = 0x19a280u;

    // 0x19a280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a284: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19a288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a28c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19a290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19a294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a298: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19A298u;
    SET_GPR_U32(ctx, 31, 0x19A2A0u);
    ctx->pc = 0x19A29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A298u;
            // 0x19a29c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2A0u; }
        if (ctx->pc != 0x19A2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2A0u; }
        if (ctx->pc != 0x19A2A0u) { return; }
    }
    ctx->pc = 0x19A2A0u;
label_19a2a0:
    // 0x19a2a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a2a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a2a8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19A2A8u;
    {
        const bool branch_taken_0x19a2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19A2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2A8u;
            // 0x19a2ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2a8) {
            ctx->pc = 0x19A2D8u;
            goto label_19a2d8;
        }
    }
    ctx->pc = 0x19A2B0u;
    // 0x19a2b0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19a2b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a2b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a2bc: 0x24848d38  addiu       $a0, $a0, -0x72C8
    ctx->pc = 0x19a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937912));
    // 0x19a2c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19a2c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a2c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19a2c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a2c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a2cc: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19A2CCu;
    ctx->pc = 0x19A2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2CCu;
            // 0x19a2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19A2D4u;
    // 0x19a2d4: 0x0  nop
    ctx->pc = 0x19a2d4u;
    // NOP
label_19a2d8:
    // 0x19a2d8: 0x8e71008c  lw          $s1, 0x8C($s3)
    ctx->pc = 0x19a2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x19a2dc: 0x8e700090  lw          $s0, 0x90($s3)
    ctx->pc = 0x19a2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x19a2e0: 0xc0666b2  jal         func_199AC8
    ctx->pc = 0x19A2E0u;
    SET_GPR_U32(ctx, 31, 0x19A2E8u);
    ctx->pc = 0x19A2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2E0u;
            // 0x19a2e4: 0x8e720088  lw          $s2, 0x88($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199AC8u;
    if (runtime->hasFunction(0x199AC8u)) {
        auto targetFn = runtime->lookupFunction(0x199AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2E8u; }
        if (ctx->pc != 0x19A2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199AC8_0x199ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2E8u; }
        if (ctx->pc != 0x19A2E8u) { return; }
    }
    ctx->pc = 0x19A2E8u;
label_19a2e8:
    // 0x19a2e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2ec: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19A2ECu;
    SET_GPR_U32(ctx, 31, 0x19A2F4u);
    ctx->pc = 0x19A2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2ECu;
            // 0x19a2f0: 0x211802a  slt         $s0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2F4u; }
        if (ctx->pc != 0x19A2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2F4u; }
        if (ctx->pc != 0x19A2F4u) { return; }
    }
    ctx->pc = 0x19A2F4u;
label_19a2f4:
    // 0x19a2f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19a2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2f8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A2F8u;
    {
        const bool branch_taken_0x19a2f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2F8u;
            // 0x19a2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2f8) {
            ctx->pc = 0x19A318u;
            goto label_19a318;
        }
    }
    ctx->pc = 0x19A300u;
    // 0x19a300: 0xc06d25e  jal         func_1B4978
    ctx->pc = 0x19A300u;
    SET_GPR_U32(ctx, 31, 0x19A308u);
    ctx->pc = 0x1B4978u;
    if (runtime->hasFunction(0x1B4978u)) {
        auto targetFn = runtime->lookupFunction(0x1B4978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A308u; }
        if (ctx->pc != 0x19A308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4978_0x1b4978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A308u; }
        if (ctx->pc != 0x19A308u) { return; }
    }
    ctx->pc = 0x19A308u;
label_19a308:
    // 0x19a308: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x19a308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x19a30c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a310: 0xae63008c  sw          $v1, 0x8C($s3)
    ctx->pc = 0x19a310u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 3));
    // 0x19a314: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x19a314u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_19a318:
    // 0x19a318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a31c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a31cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a320: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19a320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a324: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19a324u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a328: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a32c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A32Cu;
            // 0x19a330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A334u;
    // 0x19a334: 0x0  nop
    ctx->pc = 0x19a334u;
    // NOP
}
