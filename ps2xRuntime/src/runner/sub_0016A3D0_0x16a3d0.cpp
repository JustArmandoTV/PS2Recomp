#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A3D0
// Address: 0x16a3d0 - 0x16a440
void sub_0016A3D0_0x16a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A3D0_0x16a3d0");
#endif

    switch (ctx->pc) {
        case 0x16a40cu: goto label_16a40c;
        case 0x16a41cu: goto label_16a41c;
        case 0x16a424u: goto label_16a424;
        default: break;
    }

    ctx->pc = 0x16a3d0u;

    // 0x16a3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a3dc: 0x805a8ba  j           func_16A2E8
    ctx->pc = 0x16A3DCu;
    ctx->pc = 0x16A3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3DCu;
            // 0x16a3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A2E8u;
    if (runtime->hasFunction(0x16A2E8u)) {
        auto targetFn = runtime->lookupFunction(0x16A2E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016A2E8_0x16a2e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16A3E4u;
    // 0x16a3e4: 0x0  nop
    ctx->pc = 0x16a3e4u;
    // NOP
    // 0x16a3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a3f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16a3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a400: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16a400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16a404: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16A404u;
    SET_GPR_U32(ctx, 31, 0x16A40Cu);
    ctx->pc = 0x16A408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A404u;
            // 0x16a408: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A40Cu; }
        if (ctx->pc != 0x16A40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A40Cu; }
        if (ctx->pc != 0x16A40Cu) { return; }
    }
    ctx->pc = 0x16A40Cu;
label_16a40c:
    // 0x16a40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16a410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a414: 0xc05a910  jal         func_16A440
    ctx->pc = 0x16A414u;
    SET_GPR_U32(ctx, 31, 0x16A41Cu);
    ctx->pc = 0x16A418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A414u;
            // 0x16a418: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A440u;
    if (runtime->hasFunction(0x16A440u)) {
        auto targetFn = runtime->lookupFunction(0x16A440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A41Cu; }
        if (ctx->pc != 0x16A41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A440_0x16a440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A41Cu; }
        if (ctx->pc != 0x16A41Cu) { return; }
    }
    ctx->pc = 0x16A41Cu;
label_16a41c:
    // 0x16a41c: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16A41Cu;
    SET_GPR_U32(ctx, 31, 0x16A424u);
    ctx->pc = 0x16A420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A41Cu;
            // 0x16a420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A424u; }
        if (ctx->pc != 0x16A424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A424u; }
        if (ctx->pc != 0x16A424u) { return; }
    }
    ctx->pc = 0x16A424u;
label_16a424:
    // 0x16a424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a428: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a42c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a434: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16a434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a438: 0x3e00008  jr          $ra
    ctx->pc = 0x16A438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A438u;
            // 0x16a43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A440u;
}
