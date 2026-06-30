#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171918
// Address: 0x171918 - 0x1719a0
void sub_00171918_0x171918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171918_0x171918");
#endif

    switch (ctx->pc) {
        case 0x17192cu: goto label_17192c;
        case 0x171948u: goto label_171948;
        case 0x17196cu: goto label_17196c;
        case 0x17197cu: goto label_17197c;
        case 0x171984u: goto label_171984;
        default: break;
    }

    ctx->pc = 0x171918u;

    // 0x171918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17191c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171920: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171924: 0xc05c30c  jal         func_170C30
    ctx->pc = 0x171924u;
    SET_GPR_U32(ctx, 31, 0x17192Cu);
    ctx->pc = 0x171928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171924u;
            // 0x171928: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C30u;
    if (runtime->hasFunction(0x170C30u)) {
        auto targetFn = runtime->lookupFunction(0x170C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17192Cu; }
        if (ctx->pc != 0x17192Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C30_0x170c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17192Cu; }
        if (ctx->pc != 0x17192Cu) { return; }
    }
    ctx->pc = 0x17192Cu;
label_17192c:
    // 0x17192c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17192cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x171930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171938: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17193c: 0x3e00008  jr          $ra
    ctx->pc = 0x17193Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17193Cu;
            // 0x171940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171944u;
    // 0x171944: 0x0  nop
    ctx->pc = 0x171944u;
    // NOP
label_171948:
    // 0x171948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17194c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17194cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171954: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171958: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x171958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17195c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17195cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171960: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x171960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x171964: 0xc05c846  jal         func_172118
    ctx->pc = 0x171964u;
    SET_GPR_U32(ctx, 31, 0x17196Cu);
    ctx->pc = 0x171968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171964u;
            // 0x171968: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17196Cu; }
        if (ctx->pc != 0x17196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17196Cu; }
        if (ctx->pc != 0x17196Cu) { return; }
    }
    ctx->pc = 0x17196Cu;
label_17196c:
    // 0x17196c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x171970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171974: 0xc05c668  jal         func_1719A0
    ctx->pc = 0x171974u;
    SET_GPR_U32(ctx, 31, 0x17197Cu);
    ctx->pc = 0x171978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171974u;
            // 0x171978: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719A0u;
    if (runtime->hasFunction(0x1719A0u)) {
        auto targetFn = runtime->lookupFunction(0x1719A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17197Cu; }
        if (ctx->pc != 0x17197Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001719A0_0x1719a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17197Cu; }
        if (ctx->pc != 0x17197Cu) { return; }
    }
    ctx->pc = 0x17197Cu;
label_17197c:
    // 0x17197c: 0xc05c84c  jal         func_172130
    ctx->pc = 0x17197Cu;
    SET_GPR_U32(ctx, 31, 0x171984u);
    ctx->pc = 0x171980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17197Cu;
            // 0x171980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171984u; }
        if (ctx->pc != 0x171984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171984u; }
        if (ctx->pc != 0x171984u) { return; }
    }
    ctx->pc = 0x171984u;
label_171984:
    // 0x171984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171988: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17198c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17198cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171994: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x171994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171998: 0x3e00008  jr          $ra
    ctx->pc = 0x171998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17199Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171998u;
            // 0x17199c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1719A0u;
}
