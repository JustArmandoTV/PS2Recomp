#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D9F20
// Address: 0x1d9f20 - 0x1d9fc0
void sub_001D9F20_0x1d9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9F20_0x1d9f20");
#endif

    switch (ctx->pc) {
        case 0x1d9f40u: goto label_1d9f40;
        case 0x1d9f4cu: goto label_1d9f4c;
        case 0x1d9f5cu: goto label_1d9f5c;
        case 0x1d9f74u: goto label_1d9f74;
        case 0x1d9f88u: goto label_1d9f88;
        case 0x1d9f98u: goto label_1d9f98;
        default: break;
    }

    ctx->pc = 0x1d9f20u;

    // 0x1d9f20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d9f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d9f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d9f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f38: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x1D9F38u;
    SET_GPR_U32(ctx, 31, 0x1D9F40u);
    ctx->pc = 0x1D9F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F38u;
            // 0x1d9f3c: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F40u; }
        if (ctx->pc != 0x1D9F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F40u; }
        if (ctx->pc != 0x1D9F40u) { return; }
    }
    ctx->pc = 0x1D9F40u;
label_1d9f40:
    // 0x1d9f40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d9f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d9f44: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x1D9F44u;
    SET_GPR_U32(ctx, 31, 0x1D9F4Cu);
    ctx->pc = 0x1D9F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F44u;
            // 0x1d9f48: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F4Cu; }
        if (ctx->pc != 0x1D9F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F4Cu; }
        if (ctx->pc != 0x1D9F4Cu) { return; }
    }
    ctx->pc = 0x1D9F4Cu;
label_1d9f4c:
    // 0x1d9f4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d9f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f50: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d9f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d9f54: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1D9F54u;
    SET_GPR_U32(ctx, 31, 0x1D9F5Cu);
    ctx->pc = 0x1D9F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F54u;
            // 0x1d9f58: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F5Cu; }
        if (ctx->pc != 0x1D9F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F5Cu; }
        if (ctx->pc != 0x1D9F5Cu) { return; }
    }
    ctx->pc = 0x1D9F5Cu;
label_1d9f5c:
    // 0x1d9f5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1d9f60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d9f64: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1d9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x1d9f68: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x1d9f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9f6c: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x1D9F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D9F74u);
    ctx->pc = 0x1D9F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F6Cu;
            // 0x1d9f70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F74u; }
        if (ctx->pc != 0x1D9F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F74u; }
        if (ctx->pc != 0x1D9F74u) { return; }
    }
    ctx->pc = 0x1D9F74u;
label_1d9f74:
    // 0x1d9f74: 0xc7ad0044  lwc1        $f13, 0x44($sp)
    ctx->pc = 0x1d9f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9f78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d9f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d9f7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9f80: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x1D9F80u;
    SET_GPR_U32(ctx, 31, 0x1D9F88u);
    ctx->pc = 0x1D9F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F80u;
            // 0x1d9f84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F88u; }
        if (ctx->pc != 0x1D9F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F88u; }
        if (ctx->pc != 0x1D9F88u) { return; }
    }
    ctx->pc = 0x1D9F88u;
label_1d9f88:
    // 0x1d9f88: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x1d9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x1d9f8c: 0x262507e0  addiu       $a1, $s1, 0x7E0
    ctx->pc = 0x1d9f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    // 0x1d9f90: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1D9F90u;
    SET_GPR_U32(ctx, 31, 0x1D9F98u);
    ctx->pc = 0x1D9F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F90u;
            // 0x1d9f94: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F98u; }
        if (ctx->pc != 0x1D9F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F98u; }
        if (ctx->pc != 0x1D9F98u) { return; }
    }
    ctx->pc = 0x1D9F98u;
label_1d9f98:
    // 0x1d9f98: 0xae20068c  sw          $zero, 0x68C($s1)
    ctx->pc = 0x1d9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 0));
    // 0x1d9f9c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1d9f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9fa0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1d9fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1d9fa4: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x1d9fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
    // 0x1d9fa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9fac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9FB4u;
            // 0x1d9fb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9FBCu;
    // 0x1d9fbc: 0x0  nop
    ctx->pc = 0x1d9fbcu;
    // NOP
}
