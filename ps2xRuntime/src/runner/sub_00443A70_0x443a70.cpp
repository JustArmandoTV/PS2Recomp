#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443A70
// Address: 0x443a70 - 0x443b70
void sub_00443A70_0x443a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443A70_0x443a70");
#endif

    switch (ctx->pc) {
        case 0x443a94u: goto label_443a94;
        case 0x443b0cu: goto label_443b0c;
        case 0x443b14u: goto label_443b14;
        case 0x443b4cu: goto label_443b4c;
        case 0x443b5cu: goto label_443b5c;
        default: break;
    }

    ctx->pc = 0x443a70u;

    // 0x443a70: 0x3e00008  jr          $ra
    ctx->pc = 0x443A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443A70u;
            // 0x443a74: 0x8c8200d4  lw          $v0, 0xD4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443A78u;
    // 0x443a78: 0x0  nop
    ctx->pc = 0x443a78u;
    // NOP
    // 0x443a7c: 0x0  nop
    ctx->pc = 0x443a7cu;
    // NOP
    // 0x443a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x443a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x443a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x443a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x443a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x443a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x443a8c: 0xc0e34b0  jal         func_38D2C0
    ctx->pc = 0x443A8Cu;
    SET_GPR_U32(ctx, 31, 0x443A94u);
    ctx->pc = 0x443A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443A8Cu;
            // 0x443a90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443A94u; }
        if (ctx->pc != 0x443A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443A94u; }
        if (ctx->pc != 0x443A94u) { return; }
    }
    ctx->pc = 0x443A94u;
label_443a94:
    // 0x443a94: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x443a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x443a98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x443a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x443a9c: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x443A9Cu;
    {
        const bool branch_taken_0x443a9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x443a9c) {
            ctx->pc = 0x443AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x443A9Cu;
            // 0x443aa0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x443AB0u;
            goto label_443ab0;
        }
    }
    ctx->pc = 0x443AA4u;
    // 0x443aa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x443aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x443aa8: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x443aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x443aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x443aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_443ab0:
    // 0x443ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x443ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x443AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443AB4u;
            // 0x443ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443ABCu;
    // 0x443abc: 0x0  nop
    ctx->pc = 0x443abcu;
    // NOP
    // 0x443ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x443ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x443ac4: 0x3c02ff1e  lui         $v0, 0xFF1E
    ctx->pc = 0x443ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65310 << 16));
    // 0x443ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x443ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x443acc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x443accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x443ad0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x443ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x443ad4: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x443ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x443ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x443ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443adc: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x443adcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x443ae0: 0x3444fe7f  ori         $a0, $v0, 0xFE7F
    ctx->pc = 0x443ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65151);
    // 0x443ae4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x443ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
    // 0x443ae8: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x443ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
    // 0x443aec: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x443aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x443af0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x443af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x443af4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x443af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x443af8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x443af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x443afc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x443afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x443b00: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x443b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x443b04: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x443B04u;
    SET_GPR_U32(ctx, 31, 0x443B0Cu);
    ctx->pc = 0x443B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443B04u;
            // 0x443b08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443B0Cu; }
        if (ctx->pc != 0x443B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443B0Cu; }
        if (ctx->pc != 0x443B0Cu) { return; }
    }
    ctx->pc = 0x443B0Cu;
label_443b0c:
    // 0x443b0c: 0xc122c94  jal         func_48B250
    ctx->pc = 0x443B0Cu;
    SET_GPR_U32(ctx, 31, 0x443B14u);
    ctx->pc = 0x443B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443B0Cu;
            // 0x443b10: 0x8e04029c  lw          $a0, 0x29C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443B14u; }
        if (ctx->pc != 0x443B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443B14u; }
        if (ctx->pc != 0x443B14u) { return; }
    }
    ctx->pc = 0x443B14u;
label_443b14:
    // 0x443b14: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x443b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x443b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x443b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x443b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443b20: 0x3e00008  jr          $ra
    ctx->pc = 0x443B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443B20u;
            // 0x443b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443B28u;
    // 0x443b28: 0x0  nop
    ctx->pc = 0x443b28u;
    // NOP
    // 0x443b2c: 0x0  nop
    ctx->pc = 0x443b2cu;
    // NOP
    // 0x443b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x443b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x443b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x443b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x443b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x443b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x443b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x443b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x443b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443b44: 0xc0baaa0  jal         func_2EAA80
    ctx->pc = 0x443B44u;
    SET_GPR_U32(ctx, 31, 0x443B4Cu);
    ctx->pc = 0x443B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443B44u;
            // 0x443b48: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443B4Cu; }
        if (ctx->pc != 0x443B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443B4Cu; }
        if (ctx->pc != 0x443B4Cu) { return; }
    }
    ctx->pc = 0x443B4Cu;
label_443b4c:
    // 0x443b4c: 0x8e04029c  lw          $a0, 0x29C($s0)
    ctx->pc = 0x443b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x443b50: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x443b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x443b54: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x443B54u;
    SET_GPR_U32(ctx, 31, 0x443B5Cu);
    ctx->pc = 0x443B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443B54u;
            // 0x443b58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443B5Cu; }
        if (ctx->pc != 0x443B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443B5Cu; }
        if (ctx->pc != 0x443B5Cu) { return; }
    }
    ctx->pc = 0x443B5Cu;
label_443b5c:
    // 0x443b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x443b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x443b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443b64: 0x3e00008  jr          $ra
    ctx->pc = 0x443B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443B64u;
            // 0x443b68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443B6Cu;
    // 0x443b6c: 0x0  nop
    ctx->pc = 0x443b6cu;
    // NOP
}
