#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5F20
// Address: 0x2a5f20 - 0x2a5fd0
void sub_002A5F20_0x2a5f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5F20_0x2a5f20");
#endif

    switch (ctx->pc) {
        case 0x2a5f40u: goto label_2a5f40;
        case 0x2a5f54u: goto label_2a5f54;
        case 0x2a5f90u: goto label_2a5f90;
        case 0x2a5fb4u: goto label_2a5fb4;
        default: break;
    }

    ctx->pc = 0x2a5f20u;

    // 0x2a5f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a5f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a5f24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a5f28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5f2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a5f30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5f34: 0x8c50e400  lw          $s0, -0x1C00($v0)
    ctx->pc = 0x2a5f34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
    // 0x2a5f38: 0xc040180  jal         func_100600
    ctx->pc = 0x2A5F38u;
    SET_GPR_U32(ctx, 31, 0x2A5F40u);
    ctx->pc = 0x2A5F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F38u;
            // 0x2a5f3c: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F40u; }
        if (ctx->pc != 0x2A5F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F40u; }
        if (ctx->pc != 0x2A5F40u) { return; }
    }
    ctx->pc = 0x2A5F40u;
label_2a5f40:
    // 0x2a5f40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a5f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f44: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5F44u;
    {
        const bool branch_taken_0x2a5f44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5f44) {
            ctx->pc = 0x2A5F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F44u;
            // 0x2a5f48: 0xafb1003c  sw          $s1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5F5Cu;
            goto label_2a5f5c;
        }
    }
    ctx->pc = 0x2A5F4Cu;
    // 0x2a5f4c: 0xc122fe4  jal         func_48BF90
    ctx->pc = 0x2A5F4Cu;
    SET_GPR_U32(ctx, 31, 0x2A5F54u);
    ctx->pc = 0x2A5F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F4Cu;
            // 0x2a5f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48BF90u;
    if (runtime->hasFunction(0x48BF90u)) {
        auto targetFn = runtime->lookupFunction(0x48BF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F54u; }
        if (ctx->pc != 0x2A5F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048BF90_0x48bf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F54u; }
        if (ctx->pc != 0x2A5F54u) { return; }
    }
    ctx->pc = 0x2A5F54u;
label_2a5f54:
    // 0x2a5f54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a5f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f58: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x2a5f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
label_2a5f5c:
    // 0x2a5f5c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2a5f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a5f60: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a5f64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a5f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5f68: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2a5f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2a5f6c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a5f70: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2a5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2a5f74: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2a5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2a5f78: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2a5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2a5f7c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a5f80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a5f84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a5f88: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A5F88u;
    SET_GPR_U32(ctx, 31, 0x2A5F90u);
    ctx->pc = 0x2A5F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F88u;
            // 0x2a5f8c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F90u; }
        if (ctx->pc != 0x2A5F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F90u; }
        if (ctx->pc != 0x2A5F90u) { return; }
    }
    ctx->pc = 0x2A5F90u;
label_2a5f90:
    // 0x2a5f90: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x2a5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x2a5f94: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x2a5f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x2a5f98: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2a5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2a5f9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a5f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5fa0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2a5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2a5fa4: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2a5fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2a5fa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a5fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a5fac: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A5FACu;
    SET_GPR_U32(ctx, 31, 0x2A5FB4u);
    ctx->pc = 0x2A5FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FACu;
            // 0x2a5fb0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FB4u; }
        if (ctx->pc != 0x2A5FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FB4u; }
        if (ctx->pc != 0x2A5FB4u) { return; }
    }
    ctx->pc = 0x2A5FB4u;
label_2a5fb4:
    // 0x2a5fb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a5fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a5fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a5fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FC4u;
            // 0x2a5fc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5FCCu;
    // 0x2a5fcc: 0x0  nop
    ctx->pc = 0x2a5fccu;
    // NOP
}
