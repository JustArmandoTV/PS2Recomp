#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001863E8
// Address: 0x1863e8 - 0x186440
void sub_001863E8_0x1863e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001863E8_0x1863e8");
#endif

    switch (ctx->pc) {
        case 0x18640cu: goto label_18640c;
        case 0x18641cu: goto label_18641c;
        case 0x186424u: goto label_186424;
        default: break;
    }

    ctx->pc = 0x1863e8u;

    // 0x1863e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1863e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1863ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1863ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1863f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1863f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1863f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1863f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1863f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1863fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x186400: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x186400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x186404: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x186404u;
    SET_GPR_U32(ctx, 31, 0x18640Cu);
    ctx->pc = 0x186408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186404u;
            // 0x186408: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18640Cu; }
        if (ctx->pc != 0x18640Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18640Cu; }
        if (ctx->pc != 0x18640Cu) { return; }
    }
    ctx->pc = 0x18640Cu;
label_18640c:
    // 0x18640c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186414: 0xc061910  jal         func_186440
    ctx->pc = 0x186414u;
    SET_GPR_U32(ctx, 31, 0x18641Cu);
    ctx->pc = 0x186418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186414u;
            // 0x186418: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186440u;
    if (runtime->hasFunction(0x186440u)) {
        auto targetFn = runtime->lookupFunction(0x186440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18641Cu; }
        if (ctx->pc != 0x18641Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186440_0x186440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18641Cu; }
        if (ctx->pc != 0x18641Cu) { return; }
    }
    ctx->pc = 0x18641Cu;
label_18641c:
    // 0x18641c: 0xc061282  jal         func_184A08
    ctx->pc = 0x18641Cu;
    SET_GPR_U32(ctx, 31, 0x186424u);
    ctx->pc = 0x186420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18641Cu;
            // 0x186420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186424u; }
        if (ctx->pc != 0x186424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186424u; }
        if (ctx->pc != 0x186424u) { return; }
    }
    ctx->pc = 0x186424u;
label_186424:
    // 0x186424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186428: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18642c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18642cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186434: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x186434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x186438: 0x3e00008  jr          $ra
    ctx->pc = 0x186438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186438u;
            // 0x18643c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186440u;
}
