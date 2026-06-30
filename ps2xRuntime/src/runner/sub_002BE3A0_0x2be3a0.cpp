#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BE3A0
// Address: 0x2be3a0 - 0x2be430
void sub_002BE3A0_0x2be3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE3A0_0x2be3a0");
#endif

    switch (ctx->pc) {
        case 0x2be3d0u: goto label_2be3d0;
        case 0x2be3e4u: goto label_2be3e4;
        case 0x2be3f4u: goto label_2be3f4;
        case 0x2be40cu: goto label_2be40c;
        default: break;
    }

    ctx->pc = 0x2be3a0u;

    // 0x2be3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2be3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2be3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2be3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2be3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2be3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2be3b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be3b4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BE3B4u;
    {
        const bool branch_taken_0x2be3b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3B4u;
            // 0x2be3b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3b4) {
            ctx->pc = 0x2BE40Cu;
            goto label_2be40c;
        }
    }
    ctx->pc = 0x2BE3BCu;
    // 0x2be3bc: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2be3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2be3c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE3C0u;
    {
        const bool branch_taken_0x2be3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be3c0) {
            ctx->pc = 0x2BE3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3C0u;
            // 0x2be3c4: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE3D4u;
            goto label_2be3d4;
        }
    }
    ctx->pc = 0x2BE3C8u;
    // 0x2be3c8: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2BE3C8u;
    SET_GPR_U32(ctx, 31, 0x2BE3D0u);
    ctx->pc = 0x2BE3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3C8u;
            // 0x2be3cc: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE3D0u; }
        if (ctx->pc != 0x2BE3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE3D0u; }
        if (ctx->pc != 0x2BE3D0u) { return; }
    }
    ctx->pc = 0x2BE3D0u;
label_2be3d0:
    // 0x2be3d0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2be3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2be3d4:
    // 0x2be3d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE3D4u;
    {
        const bool branch_taken_0x2be3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be3d4) {
            ctx->pc = 0x2BE3E4u;
            goto label_2be3e4;
        }
    }
    ctx->pc = 0x2BE3DCu;
    // 0x2be3dc: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2BE3DCu;
    SET_GPR_U32(ctx, 31, 0x2BE3E4u);
    ctx->pc = 0x2BE3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3DCu;
            // 0x2be3e0: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE3E4u; }
        if (ctx->pc != 0x2BE3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE3E4u; }
        if (ctx->pc != 0x2BE3E4u) { return; }
    }
    ctx->pc = 0x2BE3E4u;
label_2be3e4:
    // 0x2be3e4: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE3E4u;
    {
        const bool branch_taken_0x2be3e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be3e4) {
            ctx->pc = 0x2BE3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3E4u;
            // 0x2be3e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE3F8u;
            goto label_2be3f8;
        }
    }
    ctx->pc = 0x2BE3ECu;
    // 0x2be3ec: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2BE3ECu;
    SET_GPR_U32(ctx, 31, 0x2BE3F4u);
    ctx->pc = 0x2BE3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3ECu;
            // 0x2be3f0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE3F4u; }
        if (ctx->pc != 0x2BE3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE3F4u; }
        if (ctx->pc != 0x2BE3F4u) { return; }
    }
    ctx->pc = 0x2BE3F4u;
label_2be3f4:
    // 0x2be3f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2be3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2be3f8:
    // 0x2be3f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2be3f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2be3fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE3FCu;
    {
        const bool branch_taken_0x2be3fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2be3fc) {
            ctx->pc = 0x2BE400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3FCu;
            // 0x2be400: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE410u;
            goto label_2be410;
        }
    }
    ctx->pc = 0x2BE404u;
    // 0x2be404: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BE404u;
    SET_GPR_U32(ctx, 31, 0x2BE40Cu);
    ctx->pc = 0x2BE408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE404u;
            // 0x2be408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE40Cu; }
        if (ctx->pc != 0x2BE40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE40Cu; }
        if (ctx->pc != 0x2BE40Cu) { return; }
    }
    ctx->pc = 0x2BE40Cu;
label_2be40c:
    // 0x2be40c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2be40cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be410:
    // 0x2be410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2be410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be41c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE41Cu;
            // 0x2be420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE424u;
    // 0x2be424: 0x0  nop
    ctx->pc = 0x2be424u;
    // NOP
    // 0x2be428: 0x0  nop
    ctx->pc = 0x2be428u;
    // NOP
    // 0x2be42c: 0x0  nop
    ctx->pc = 0x2be42cu;
    // NOP
}
