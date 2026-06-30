#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051D7C0
// Address: 0x51d7c0 - 0x51d860
void sub_0051D7C0_0x51d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051D7C0_0x51d7c0");
#endif

    switch (ctx->pc) {
        case 0x51d7e4u: goto label_51d7e4;
        case 0x51d7f4u: goto label_51d7f4;
        case 0x51d804u: goto label_51d804;
        case 0x51d81cu: goto label_51d81c;
        case 0x51d834u: goto label_51d834;
        case 0x51d850u: goto label_51d850;
        default: break;
    }

    ctx->pc = 0x51d7c0u;

    // 0x51d7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51d7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x51d7c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x51d7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51d7c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51d7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51d7cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x51d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x51d7d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51d7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51d7d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x51d7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51d7d8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x51d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x51d7dc: 0xc04cc90  jal         func_133240
    ctx->pc = 0x51D7DCu;
    SET_GPR_U32(ctx, 31, 0x51D7E4u);
    ctx->pc = 0x51D7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D7DCu;
            // 0x51d7e0: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D7E4u; }
        if (ctx->pc != 0x51D7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D7E4u; }
        if (ctx->pc != 0x51D7E4u) { return; }
    }
    ctx->pc = 0x51D7E4u;
label_51d7e4:
    // 0x51d7e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x51d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x51d7e8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x51d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x51d7ec: 0xc04cc44  jal         func_133110
    ctx->pc = 0x51D7ECu;
    SET_GPR_U32(ctx, 31, 0x51D7F4u);
    ctx->pc = 0x51D7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D7ECu;
            // 0x51d7f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D7F4u; }
        if (ctx->pc != 0x51D7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D7F4u; }
        if (ctx->pc != 0x51D7F4u) { return; }
    }
    ctx->pc = 0x51D7F4u;
label_51d7f4:
    // 0x51d7f4: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x51d7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x51d7f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x51d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x51d7fc: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x51D7FCu;
    SET_GPR_U32(ctx, 31, 0x51D804u);
    ctx->pc = 0x51D800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D7FCu;
            // 0x51d800: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D804u; }
        if (ctx->pc != 0x51D804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D804u; }
        if (ctx->pc != 0x51D804u) { return; }
    }
    ctx->pc = 0x51D804u;
label_51d804:
    // 0x51d804: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x51d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51d808: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x51d808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    // 0x51d80c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x51d80cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x51d810: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x51d810u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x51d814: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x51D814u;
    SET_GPR_U32(ctx, 31, 0x51D81Cu);
    ctx->pc = 0x51D818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D814u;
            // 0x51d818: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D81Cu; }
        if (ctx->pc != 0x51D81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D81Cu; }
        if (ctx->pc != 0x51D81Cu) { return; }
    }
    ctx->pc = 0x51D81Cu;
label_51d81c:
    // 0x51d81c: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x51d81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x51d820: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51d820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x51d824: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x51d824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x51d828: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x51d828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x51d82c: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x51D82Cu;
    SET_GPR_U32(ctx, 31, 0x51D834u);
    ctx->pc = 0x51D830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D82Cu;
            // 0x51d830: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D834u; }
        if (ctx->pc != 0x51D834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D834u; }
        if (ctx->pc != 0x51D834u) { return; }
    }
    ctx->pc = 0x51D834u;
label_51d834:
    // 0x51d834: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x51d834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x51d838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51d838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x51d83c: 0x26060560  addiu       $a2, $s0, 0x560
    ctx->pc = 0x51d83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x51d840: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x51d840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x51d844: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51d844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51d848: 0xc0c6250  jal         func_318940
    ctx->pc = 0x51D848u;
    SET_GPR_U32(ctx, 31, 0x51D850u);
    ctx->pc = 0x51D84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D848u;
            // 0x51d84c: 0x24650080  addiu       $a1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D850u; }
        if (ctx->pc != 0x51D850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D850u; }
        if (ctx->pc != 0x51D850u) { return; }
    }
    ctx->pc = 0x51D850u;
label_51d850:
    // 0x51d850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51d850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51d854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51d854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51d858: 0x3e00008  jr          $ra
    ctx->pc = 0x51D858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51D85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D858u;
            // 0x51d85c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51D860u;
}
