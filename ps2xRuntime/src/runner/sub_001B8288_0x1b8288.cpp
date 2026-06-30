#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8288
// Address: 0x1b8288 - 0x1b8320
void sub_001B8288_0x1b8288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8288_0x1b8288");
#endif

    switch (ctx->pc) {
        case 0x1b82acu: goto label_1b82ac;
        case 0x1b82fcu: goto label_1b82fc;
        default: break;
    }

    ctx->pc = 0x1b8288u;

    // 0x1b8288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b828c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b8290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8294: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b8294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b8298: 0x8e021350  lw          $v0, 0x1350($s0)
    ctx->pc = 0x1b8298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4944)));
    // 0x1b829c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B829Cu;
    {
        const bool branch_taken_0x1b829c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B829Cu;
            // 0x1b82a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b829c) {
            ctx->pc = 0x1B8308u;
            goto label_1b8308;
        }
    }
    ctx->pc = 0x1B82A4u;
    // 0x1b82a4: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B82A4u;
    SET_GPR_U32(ctx, 31, 0x1B82ACu);
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82ACu; }
        if (ctx->pc != 0x1B82ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82ACu; }
        if (ctx->pc != 0x1B82ACu) { return; }
    }
    ctx->pc = 0x1B82ACu;
label_1b82ac:
    // 0x1b82ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b82acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b82b0: 0x8e061358  lw          $a2, 0x1358($s0)
    ctx->pc = 0x1b82b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4952)));
    // 0x1b82b4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B82B4u;
    {
        const bool branch_taken_0x1b82b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B82B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82B4u;
            // 0x1b82b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82b4) {
            ctx->pc = 0x1B82C8u;
            goto label_1b82c8;
        }
    }
    ctx->pc = 0x1B82BCu;
    // 0x1b82bc: 0xae001358  sw          $zero, 0x1358($s0)
    ctx->pc = 0x1b82bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4952), GPR_U32(ctx, 0));
    // 0x1b82c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b82c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82c4: 0xae001354  sw          $zero, 0x1354($s0)
    ctx->pc = 0x1b82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4948), GPR_U32(ctx, 0));
label_1b82c8:
    // 0x1b82c8: 0x8e031354  lw          $v1, 0x1354($s0)
    ctx->pc = 0x1b82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4948)));
    // 0x1b82cc: 0x8e051350  lw          $a1, 0x1350($s0)
    ctx->pc = 0x1b82ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4944)));
    // 0x1b82d0: 0x8e02134c  lw          $v0, 0x134C($s0)
    ctx->pc = 0x1b82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4940)));
    // 0x1b82d4: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x1b82d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b82d8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1b82d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b82dc: 0x70c21018  mult1       $v0, $a2, $v0
    ctx->pc = 0x1b82dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b82e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b82e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b82e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B82E4u;
    {
        const bool branch_taken_0x1b82e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b82e4) {
            ctx->pc = 0x1B82E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82E4u;
            // 0x1b82e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B82F4u;
            goto label_1b82f4;
        }
    }
    ctx->pc = 0x1B82ECu;
    // 0x1b82ec: 0xae071354  sw          $a3, 0x1354($s0)
    ctx->pc = 0x1b82ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4948), GPR_U32(ctx, 7));
    // 0x1b82f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b82f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b82f4:
    // 0x1b82f4: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B82F4u;
    SET_GPR_U32(ctx, 31, 0x1B82FCu);
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82FCu; }
        if (ctx->pc != 0x1B82FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82FCu; }
        if (ctx->pc != 0x1B82FCu) { return; }
    }
    ctx->pc = 0x1B82FCu;
label_1b82fc:
    // 0x1b82fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B82FCu;
    {
        const bool branch_taken_0x1b82fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82FCu;
            // 0x1b8300: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82fc) {
            ctx->pc = 0x1B8310u;
            goto label_1b8310;
        }
    }
    ctx->pc = 0x1B8304u;
    // 0x1b8304: 0x0  nop
    ctx->pc = 0x1b8304u;
    // NOP
label_1b8308:
    // 0x1b8308: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b8308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b830c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b830cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8310:
    // 0x1b8310: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b8310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8314: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b8314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b8318: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8318u;
            // 0x1b831c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8320u;
}
