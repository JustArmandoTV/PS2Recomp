#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE3B0
// Address: 0x2ce3b0 - 0x2ce430
void sub_002CE3B0_0x2ce3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE3B0_0x2ce3b0");
#endif

    switch (ctx->pc) {
        case 0x2ce3d0u: goto label_2ce3d0;
        case 0x2ce3dcu: goto label_2ce3dc;
        case 0x2ce3e4u: goto label_2ce3e4;
        case 0x2ce3f0u: goto label_2ce3f0;
        case 0x2ce3fcu: goto label_2ce3fc;
        case 0x2ce410u: goto label_2ce410;
        default: break;
    }

    ctx->pc = 0x2ce3b0u;

    // 0x2ce3b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ce3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ce3b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ce3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ce3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce3bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce3c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ce3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ce3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3c8: 0xc0b3960  jal         func_2CE580
    ctx->pc = 0x2CE3C8u;
    SET_GPR_U32(ctx, 31, 0x2CE3D0u);
    ctx->pc = 0x2CE3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3C8u;
            // 0x2ce3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE580u;
    if (runtime->hasFunction(0x2CE580u)) {
        auto targetFn = runtime->lookupFunction(0x2CE580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3D0u; }
        if (ctx->pc != 0x2CE3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE580_0x2ce580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3D0u; }
        if (ctx->pc != 0x2CE3D0u) { return; }
    }
    ctx->pc = 0x2CE3D0u;
label_2ce3d0:
    // 0x2ce3d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3d4: 0xc0b3958  jal         func_2CE560
    ctx->pc = 0x2CE3D4u;
    SET_GPR_U32(ctx, 31, 0x2CE3DCu);
    ctx->pc = 0x2CE3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3D4u;
            // 0x2ce3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE560u;
    if (runtime->hasFunction(0x2CE560u)) {
        auto targetFn = runtime->lookupFunction(0x2CE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3DCu; }
        if (ctx->pc != 0x2CE3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE560_0x2ce560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3DCu; }
        if (ctx->pc != 0x2CE3DCu) { return; }
    }
    ctx->pc = 0x2CE3DCu;
label_2ce3dc:
    // 0x2ce3dc: 0xc0b389c  jal         func_2CE270
    ctx->pc = 0x2CE3DCu;
    SET_GPR_U32(ctx, 31, 0x2CE3E4u);
    ctx->pc = 0x2CE3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3DCu;
            // 0x2ce3e0: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE270u;
    if (runtime->hasFunction(0x2CE270u)) {
        auto targetFn = runtime->lookupFunction(0x2CE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3E4u; }
        if (ctx->pc != 0x2CE3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE270_0x2ce270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3E4u; }
        if (ctx->pc != 0x2CE3E4u) { return; }
    }
    ctx->pc = 0x2CE3E4u;
label_2ce3e4:
    // 0x2ce3e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ce3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce3e8: 0xc0b394c  jal         func_2CE530
    ctx->pc = 0x2CE3E8u;
    SET_GPR_U32(ctx, 31, 0x2CE3F0u);
    ctx->pc = 0x2CE3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3E8u;
            // 0x2ce3ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE530u;
    if (runtime->hasFunction(0x2CE530u)) {
        auto targetFn = runtime->lookupFunction(0x2CE530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3F0u; }
        if (ctx->pc != 0x2CE3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE530_0x2ce530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3F0u; }
        if (ctx->pc != 0x2CE3F0u) { return; }
    }
    ctx->pc = 0x2CE3F0u;
label_2ce3f0:
    // 0x2ce3f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ce3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3f4: 0xc0b3934  jal         func_2CE4D0
    ctx->pc = 0x2CE3F4u;
    SET_GPR_U32(ctx, 31, 0x2CE3FCu);
    ctx->pc = 0x2CE3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3F4u;
            // 0x2ce3f8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE4D0u;
    if (runtime->hasFunction(0x2CE4D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3FCu; }
        if (ctx->pc != 0x2CE3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE4D0_0x2ce4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3FCu; }
        if (ctx->pc != 0x2CE3FCu) { return; }
    }
    ctx->pc = 0x2CE3FCu;
label_2ce3fc:
    // 0x2ce3fc: 0x83a7005c  lb          $a3, 0x5C($sp)
    ctx->pc = 0x2ce3fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2ce400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce404: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ce404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce408: 0xc0b390c  jal         func_2CE430
    ctx->pc = 0x2CE408u;
    SET_GPR_U32(ctx, 31, 0x2CE410u);
    ctx->pc = 0x2CE40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE408u;
            // 0x2ce40c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE430u;
    if (runtime->hasFunction(0x2CE430u)) {
        auto targetFn = runtime->lookupFunction(0x2CE430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE410u; }
        if (ctx->pc != 0x2CE410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE430_0x2ce430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE410u; }
        if (ctx->pc != 0x2CE410u) { return; }
    }
    ctx->pc = 0x2CE410u;
label_2ce410:
    // 0x2ce410: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ce410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce414: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ce414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce41c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce420: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE420u;
            // 0x2ce424: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE428u;
    // 0x2ce428: 0x0  nop
    ctx->pc = 0x2ce428u;
    // NOP
    // 0x2ce42c: 0x0  nop
    ctx->pc = 0x2ce42cu;
    // NOP
}
