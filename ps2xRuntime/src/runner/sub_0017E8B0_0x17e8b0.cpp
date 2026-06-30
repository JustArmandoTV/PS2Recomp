#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E8B0
// Address: 0x17e8b0 - 0x17e938
void sub_0017E8B0_0x17e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E8B0_0x17e8b0");
#endif

    switch (ctx->pc) {
        case 0x17e8ccu: goto label_17e8cc;
        case 0x17e8dcu: goto label_17e8dc;
        case 0x17e8e8u: goto label_17e8e8;
        case 0x17e8fcu: goto label_17e8fc;
        case 0x17e90cu: goto label_17e90c;
        case 0x17e918u: goto label_17e918;
        default: break;
    }

    ctx->pc = 0x17e8b0u;

    // 0x17e8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e8b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e8b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17e8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e8c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e8c4: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E8C4u;
    SET_GPR_U32(ctx, 31, 0x17E8CCu);
    ctx->pc = 0x17E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8C4u;
            // 0x17e8c8: 0x24044700  addiu       $a0, $zero, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8CCu; }
        if (ctx->pc != 0x17E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8CCu; }
        if (ctx->pc != 0x17E8CCu) { return; }
    }
    ctx->pc = 0x17E8CCu;
label_17e8cc:
    // 0x17e8cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8d4: 0xc05edb2  jal         func_17B6C8
    ctx->pc = 0x17E8D4u;
    SET_GPR_U32(ctx, 31, 0x17E8DCu);
    ctx->pc = 0x17E8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8D4u;
            // 0x17e8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B6C8u;
    if (runtime->hasFunction(0x17B6C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8DCu; }
        if (ctx->pc != 0x17E8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B6C8_0x17b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8DCu; }
        if (ctx->pc != 0x17E8DCu) { return; }
    }
    ctx->pc = 0x17E8DCu;
label_17e8dc:
    // 0x17e8dc: 0x24044701  addiu       $a0, $zero, 0x4701
    ctx->pc = 0x17e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18177));
    // 0x17e8e0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E8E0u;
    SET_GPR_U32(ctx, 31, 0x17E8E8u);
    ctx->pc = 0x17E8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8E0u;
            // 0x17e8e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8E8u; }
        if (ctx->pc != 0x17E8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8E8u; }
        if (ctx->pc != 0x17E8E8u) { return; }
    }
    ctx->pc = 0x17E8E8u;
label_17e8e8:
    // 0x17e8e8: 0x24044800  addiu       $a0, $zero, 0x4800
    ctx->pc = 0x17e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
    // 0x17e8ec: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x17E8ECu;
    {
        const bool branch_taken_0x17e8ec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x17E8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8ECu;
            // 0x17e8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8ec) {
            ctx->pc = 0x17E924u;
            goto label_17e924;
        }
    }
    ctx->pc = 0x17E8F4u;
    // 0x17e8f4: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E8F4u;
    SET_GPR_U32(ctx, 31, 0x17E8FCu);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8FCu; }
        if (ctx->pc != 0x17E8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8FCu; }
        if (ctx->pc != 0x17E8FCu) { return; }
    }
    ctx->pc = 0x17E8FCu;
label_17e8fc:
    // 0x17e8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e904: 0xc05edb2  jal         func_17B6C8
    ctx->pc = 0x17E904u;
    SET_GPR_U32(ctx, 31, 0x17E90Cu);
    ctx->pc = 0x17E908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E904u;
            // 0x17e908: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B6C8u;
    if (runtime->hasFunction(0x17B6C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E90Cu; }
        if (ctx->pc != 0x17E90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B6C8_0x17b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E90Cu; }
        if (ctx->pc != 0x17E90Cu) { return; }
    }
    ctx->pc = 0x17E90Cu;
label_17e90c:
    // 0x17e90c: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x17e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x17e910: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E910u;
    SET_GPR_U32(ctx, 31, 0x17E918u);
    ctx->pc = 0x17E914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E910u;
            // 0x17e914: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E918u; }
        if (ctx->pc != 0x17E918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E918u; }
        if (ctx->pc != 0x17E918u) { return; }
    }
    ctx->pc = 0x17E918u;
label_17e918:
    // 0x17e918: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x17e918u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17e91c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e920: 0x203100a  movz        $v0, $s0, $v1
    ctx->pc = 0x17e920u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_17e924:
    // 0x17e924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e92c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e930: 0x3e00008  jr          $ra
    ctx->pc = 0x17E930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E930u;
            // 0x17e934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E938u;
}
