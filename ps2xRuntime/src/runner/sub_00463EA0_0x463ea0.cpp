#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463EA0
// Address: 0x463ea0 - 0x463f70
void sub_00463EA0_0x463ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463EA0_0x463ea0");
#endif

    switch (ctx->pc) {
        case 0x463ec4u: goto label_463ec4;
        case 0x463ed0u: goto label_463ed0;
        case 0x463edcu: goto label_463edc;
        case 0x463ee8u: goto label_463ee8;
        case 0x463efcu: goto label_463efc;
        case 0x463f08u: goto label_463f08;
        case 0x463f1cu: goto label_463f1c;
        case 0x463f44u: goto label_463f44;
        case 0x463f50u: goto label_463f50;
        default: break;
    }

    ctx->pc = 0x463ea0u;

    // 0x463ea0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x463ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x463ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x463ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x463ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x463ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x463eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x463eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x463eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x463eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463eb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x463eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463eb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x463eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x463ebc: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x463EBCu;
    SET_GPR_U32(ctx, 31, 0x463EC4u);
    ctx->pc = 0x463EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463EBCu;
            // 0x463ec0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463EC4u; }
        if (ctx->pc != 0x463EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463EC4u; }
        if (ctx->pc != 0x463EC4u) { return; }
    }
    ctx->pc = 0x463EC4u;
label_463ec4:
    // 0x463ec4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x463ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x463ec8: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x463EC8u;
    SET_GPR_U32(ctx, 31, 0x463ED0u);
    ctx->pc = 0x463ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463EC8u;
            // 0x463ecc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463ED0u; }
        if (ctx->pc != 0x463ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463ED0u; }
        if (ctx->pc != 0x463ED0u) { return; }
    }
    ctx->pc = 0x463ED0u;
label_463ed0:
    // 0x463ed0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x463ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x463ed4: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x463ED4u;
    SET_GPR_U32(ctx, 31, 0x463EDCu);
    ctx->pc = 0x463ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463ED4u;
            // 0x463ed8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463EDCu; }
        if (ctx->pc != 0x463EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463EDCu; }
        if (ctx->pc != 0x463EDCu) { return; }
    }
    ctx->pc = 0x463EDCu;
label_463edc:
    // 0x463edc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x463edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x463ee0: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x463EE0u;
    SET_GPR_U32(ctx, 31, 0x463EE8u);
    ctx->pc = 0x463EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463EE0u;
            // 0x463ee4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463EE8u; }
        if (ctx->pc != 0x463EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463EE8u; }
        if (ctx->pc != 0x463EE8u) { return; }
    }
    ctx->pc = 0x463EE8u;
label_463ee8:
    // 0x463ee8: 0x8e220290  lw          $v0, 0x290($s1)
    ctx->pc = 0x463ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x463eec: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x463eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x463ef0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x463ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x463ef4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x463EF4u;
    SET_GPR_U32(ctx, 31, 0x463EFCu);
    ctx->pc = 0x463EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463EF4u;
            // 0x463ef8: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463EFCu; }
        if (ctx->pc != 0x463EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463EFCu; }
        if (ctx->pc != 0x463EFCu) { return; }
    }
    ctx->pc = 0x463EFCu;
label_463efc:
    // 0x463efc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x463efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x463f00: 0xc04cc04  jal         func_133010
    ctx->pc = 0x463F00u;
    SET_GPR_U32(ctx, 31, 0x463F08u);
    ctx->pc = 0x463F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463F00u;
            // 0x463f04: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463F08u; }
        if (ctx->pc != 0x463F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463F08u; }
        if (ctx->pc != 0x463F08u) { return; }
    }
    ctx->pc = 0x463F08u;
label_463f08:
    // 0x463f08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x463f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x463f0c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x463f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x463f10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x463f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463f14: 0xc04cc44  jal         func_133110
    ctx->pc = 0x463F14u;
    SET_GPR_U32(ctx, 31, 0x463F1Cu);
    ctx->pc = 0x463F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463F14u;
            // 0x463f18: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463F1Cu; }
        if (ctx->pc != 0x463F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463F1Cu; }
        if (ctx->pc != 0x463F1Cu) { return; }
    }
    ctx->pc = 0x463F1Cu;
label_463f1c:
    // 0x463f1c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x463f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x463f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463f24: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x463f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463f28: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x463f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x463f2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x463f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x463f30: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x463f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x463f34: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x463f34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x463f38: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x463f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x463f3c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x463F3Cu;
    SET_GPR_U32(ctx, 31, 0x463F44u);
    ctx->pc = 0x463F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463F3Cu;
            // 0x463f40: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463F44u; }
        if (ctx->pc != 0x463F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463F44u; }
        if (ctx->pc != 0x463F44u) { return; }
    }
    ctx->pc = 0x463F44u;
label_463f44:
    // 0x463f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x463f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463f48: 0xc04cc44  jal         func_133110
    ctx->pc = 0x463F48u;
    SET_GPR_U32(ctx, 31, 0x463F50u);
    ctx->pc = 0x463F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463F48u;
            // 0x463f4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463F50u; }
        if (ctx->pc != 0x463F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463F50u; }
        if (ctx->pc != 0x463F50u) { return; }
    }
    ctx->pc = 0x463F50u;
label_463f50:
    // 0x463f50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x463f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x463f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x463f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x463f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x463f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x463f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x463F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463F5Cu;
            // 0x463f60: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x463F64u;
    // 0x463f64: 0x0  nop
    ctx->pc = 0x463f64u;
    // NOP
    // 0x463f68: 0x0  nop
    ctx->pc = 0x463f68u;
    // NOP
    // 0x463f6c: 0x0  nop
    ctx->pc = 0x463f6cu;
    // NOP
}
