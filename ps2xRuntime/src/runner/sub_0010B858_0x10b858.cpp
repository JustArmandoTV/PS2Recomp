#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B858
// Address: 0x10b858 - 0x10b8b0
void sub_0010B858_0x10b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B858_0x10b858");
#endif

    switch (ctx->pc) {
        case 0x10b890u: goto label_10b890;
        case 0x10b8a0u: goto label_10b8a0;
        default: break;
    }

    ctx->pc = 0x10b858u;

    // 0x10b858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b85c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b860: 0x8c830868  lw          $v1, 0x868($a0)
    ctx->pc = 0x10b860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2152)));
    // 0x10b864: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10B864u;
    {
        const bool branch_taken_0x10b864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b864) {
            ctx->pc = 0x10B898u;
            goto label_10b898;
        }
    }
    ctx->pc = 0x10B86Cu;
    // 0x10b86c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B86Cu;
    {
        const bool branch_taken_0x10b86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b86c) {
            ctx->pc = 0x10B898u;
            goto label_10b898;
        }
    }
    ctx->pc = 0x10B874u;
    // 0x10b874: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x10b874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10b878: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B878u;
    {
        const bool branch_taken_0x10b878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B878u;
            // 0x10b87c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b878) {
            ctx->pc = 0x10B898u;
            goto label_10b898;
        }
    }
    ctx->pc = 0x10B880u;
    // 0x10b880: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x10b880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10b884: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10b884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10b888: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x10B888u;
    SET_GPR_U32(ctx, 31, 0x10B890u);
    ctx->pc = 0x10B88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B888u;
            // 0x10b88c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B890u; }
        if (ctx->pc != 0x10B890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B890u; }
        if (ctx->pc != 0x10B890u) { return; }
    }
    ctx->pc = 0x10B890u;
label_10b890:
    // 0x10b890: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10B890u;
    {
        const bool branch_taken_0x10b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B890u;
            // 0x10b894: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b890) {
            ctx->pc = 0x10B8A4u;
            goto label_10b8a4;
        }
    }
    ctx->pc = 0x10B898u;
label_10b898:
    // 0x10b898: 0xc042db8  jal         func_10B6E0
    ctx->pc = 0x10B898u;
    SET_GPR_U32(ctx, 31, 0x10B8A0u);
    ctx->pc = 0x10B89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B898u;
            // 0x10b89c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B6E0u;
    if (runtime->hasFunction(0x10B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x10B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8A0u; }
        if (ctx->pc != 0x10B8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B6E0_0x10b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8A0u; }
        if (ctx->pc != 0x10B8A0u) { return; }
    }
    ctx->pc = 0x10B8A0u;
label_10b8a0:
    // 0x10b8a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10b8a4:
    // 0x10b8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8A4u;
            // 0x10b8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B8ACu;
    // 0x10b8ac: 0x0  nop
    ctx->pc = 0x10b8acu;
    // NOP
}
