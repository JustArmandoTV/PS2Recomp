#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C78B0
// Address: 0x1c78b0 - 0x1c7940
void sub_001C78B0_0x1c78b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C78B0_0x1c78b0");
#endif

    switch (ctx->pc) {
        case 0x1c78e8u: goto label_1c78e8;
        case 0x1c790cu: goto label_1c790c;
        case 0x1c7918u: goto label_1c7918;
        default: break;
    }

    ctx->pc = 0x1c78b0u;

    // 0x1c78b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c78b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c78b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c78b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c78bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c78c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c78c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c78c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c78c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c78c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c78ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c78d0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1c78d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c78d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c78d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c78d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c78dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c78dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c78e0: 0xc071716  jal         func_1C5C58
    ctx->pc = 0x1C78E0u;
    SET_GPR_U32(ctx, 31, 0x1C78E8u);
    ctx->pc = 0x1C78E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C78E0u;
            // 0x1c78e4: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5C58u;
    if (runtime->hasFunction(0x1C5C58u)) {
        auto targetFn = runtime->lookupFunction(0x1C5C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78E8u; }
        if (ctx->pc != 0x1C78E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5C58_0x1c5c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78E8u; }
        if (ctx->pc != 0x1C78E8u) { return; }
    }
    ctx->pc = 0x1C78E8u;
label_1c78e8:
    // 0x1c78e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c78e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c78f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c78f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c78f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78fc: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C78FCu;
    {
        const bool branch_taken_0x1c78fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C78FCu;
            // 0x1c7900: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78fc) {
            ctx->pc = 0x1C7910u;
            goto label_1c7910;
        }
    }
    ctx->pc = 0x1C7904u;
    // 0x1c7904: 0xc071dae  jal         func_1C76B8
    ctx->pc = 0x1C7904u;
    SET_GPR_U32(ctx, 31, 0x1C790Cu);
    ctx->pc = 0x1C76B8u;
    if (runtime->hasFunction(0x1C76B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C76B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C790Cu; }
        if (ctx->pc != 0x1C790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C76B8_0x1c76b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C790Cu; }
        if (ctx->pc != 0x1C790Cu) { return; }
    }
    ctx->pc = 0x1C790Cu;
label_1c790c:
    // 0x1c790c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c790cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7910:
    // 0x1c7910: 0xc07172a  jal         func_1C5CA8
    ctx->pc = 0x1C7910u;
    SET_GPR_U32(ctx, 31, 0x1C7918u);
    ctx->pc = 0x1C5CA8u;
    if (runtime->hasFunction(0x1C5CA8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7918u; }
        if (ctx->pc != 0x1C7918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5CA8_0x1c5ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7918u; }
        if (ctx->pc != 0x1C7918u) { return; }
    }
    ctx->pc = 0x1C7918u;
label_1c7918:
    // 0x1c7918: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1c7918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c791c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c791cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7924: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c7924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7928: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c7928u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c792c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c792cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7930: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c7930u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c7934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c7934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7938: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7938u;
            // 0x1c793c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7940u;
}
