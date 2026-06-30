#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F8A40
// Address: 0x3f8a40 - 0x3f8c10
void sub_003F8A40_0x3f8a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F8A40_0x3f8a40");
#endif

    switch (ctx->pc) {
        case 0x3f8ab0u: goto label_3f8ab0;
        case 0x3f8ae0u: goto label_3f8ae0;
        case 0x3f8b04u: goto label_3f8b04;
        case 0x3f8b30u: goto label_3f8b30;
        case 0x3f8b54u: goto label_3f8b54;
        case 0x3f8b84u: goto label_3f8b84;
        case 0x3f8bc4u: goto label_3f8bc4;
        case 0x3f8bdcu: goto label_3f8bdc;
        case 0x3f8becu: goto label_3f8bec;
        default: break;
    }

    ctx->pc = 0x3f8a40u;

    // 0x3f8a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f8a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f8a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f8a48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f8a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f8a4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f8a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f8a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f8a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f8a54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f8a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f8a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f8a5c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3f8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3f8a60: 0x8c640d74  lw          $a0, 0xD74($v1)
    ctx->pc = 0x3f8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3444)));
    // 0x3f8a64: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x3f8a64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
    // 0x3f8a68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3f8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8a6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3f8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3f8a70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3f8a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3f8a74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3f8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3f8a78: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3f8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3f8a7c: 0x24500280  addiu       $s0, $v0, 0x280
    ctx->pc = 0x3f8a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x3f8a80: 0x90640281  lbu         $a0, 0x281($v1)
    ctx->pc = 0x3f8a80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
    // 0x3f8a84: 0x90420281  lbu         $v0, 0x281($v0)
    ctx->pc = 0x3f8a84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 641)));
    // 0x3f8a88: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F8A88u;
    {
        const bool branch_taken_0x3f8a88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F8A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8A88u;
            // 0x3f8a8c: 0x24710280  addiu       $s1, $v1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a88) {
            ctx->pc = 0x3F8AE8u;
            goto label_3f8ae8;
        }
    }
    ctx->pc = 0x3F8A90u;
    // 0x3f8a90: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3f8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3f8a94: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3f8a98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f8a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f8a9c: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x3f8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
    // 0x3f8aa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f8aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8aa8: 0xc0408ec  jal         func_1023B0
    ctx->pc = 0x3F8AA8u;
    SET_GPR_U32(ctx, 31, 0x3F8AB0u);
    ctx->pc = 0x3F8AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8AA8u;
            // 0x3f8aac: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023B0u;
    if (runtime->hasFunction(0x1023B0u)) {
        auto targetFn = runtime->lookupFunction(0x1023B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8AB0u; }
        if (ctx->pc != 0x3F8AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023B0_0x1023b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8AB0u; }
        if (ctx->pc != 0x3F8AB0u) { return; }
    }
    ctx->pc = 0x3F8AB0u;
label_3f8ab0:
    // 0x3f8ab0: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x3F8AB0u;
    {
        const bool branch_taken_0x3f8ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8ab0) {
            ctx->pc = 0x3F8AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8AB0u;
            // 0x3f8ab4: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8BA8u;
            goto label_3f8ba8;
        }
    }
    ctx->pc = 0x3F8AB8u;
    // 0x3f8ab8: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x3f8ab8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3f8abc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3f8ac0: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x3f8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
    // 0x3f8ac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f8ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ac8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3f8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3f8acc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3f8accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3f8ad0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f8ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8ad8: 0xc0408c8  jal         func_102320
    ctx->pc = 0x3F8AD8u;
    SET_GPR_U32(ctx, 31, 0x3F8AE0u);
    ctx->pc = 0x3F8ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8AD8u;
            // 0x3f8adc: 0x2459000c  addiu       $t9, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8AE0u; }
        if (ctx->pc != 0x3F8AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8AE0u; }
        if (ctx->pc != 0x3F8AE0u) { return; }
    }
    ctx->pc = 0x3F8AE0u;
label_3f8ae0:
    // 0x3f8ae0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3F8AE0u;
    {
        const bool branch_taken_0x3f8ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8ae0) {
            ctx->pc = 0x3F8BA4u;
            goto label_3f8ba4;
        }
    }
    ctx->pc = 0x3F8AE8u;
label_3f8ae8:
    // 0x3f8ae8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3f8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3f8aec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3f8af0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f8af4: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x3f8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
    // 0x3f8af8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f8af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f8afc: 0xc0408ec  jal         func_1023B0
    ctx->pc = 0x3F8AFCu;
    SET_GPR_U32(ctx, 31, 0x3F8B04u);
    ctx->pc = 0x3F8B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8AFCu;
            // 0x3f8b00: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023B0u;
    if (runtime->hasFunction(0x1023B0u)) {
        auto targetFn = runtime->lookupFunction(0x1023B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8B04u; }
        if (ctx->pc != 0x3F8B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023B0_0x1023b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8B04u; }
        if (ctx->pc != 0x3F8B04u) { return; }
    }
    ctx->pc = 0x3F8B04u;
label_3f8b04:
    // 0x3f8b04: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3F8B04u;
    {
        const bool branch_taken_0x3f8b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8b04) {
            ctx->pc = 0x3F8B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8B04u;
            // 0x3f8b08: 0x92040001  lbu         $a0, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8B34u;
            goto label_3f8b34;
        }
    }
    ctx->pc = 0x3F8B0Cu;
    // 0x3f8b0c: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x3f8b0cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3f8b10: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3f8b14: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x3f8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
    // 0x3f8b18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f8b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b1c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3f8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3f8b20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3f8b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3f8b24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f8b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f8b28: 0xc0408c8  jal         func_102320
    ctx->pc = 0x3F8B28u;
    SET_GPR_U32(ctx, 31, 0x3F8B30u);
    ctx->pc = 0x3F8B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8B28u;
            // 0x3f8b2c: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8B30u; }
        if (ctx->pc != 0x3F8B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8B30u; }
        if (ctx->pc != 0x3F8B30u) { return; }
    }
    ctx->pc = 0x3F8B30u;
label_3f8b30:
    // 0x3f8b30: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x3f8b30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3f8b34:
    // 0x3f8b34: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3f8b38: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x3f8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
    // 0x3f8b3c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3f8b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3f8b40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f8b44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f8b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f8b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8b4c: 0xc0408ec  jal         func_1023B0
    ctx->pc = 0x3F8B4Cu;
    SET_GPR_U32(ctx, 31, 0x3F8B54u);
    ctx->pc = 0x3F8B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8B4Cu;
            // 0x3f8b50: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023B0u;
    if (runtime->hasFunction(0x1023B0u)) {
        auto targetFn = runtime->lookupFunction(0x1023B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8B54u; }
        if (ctx->pc != 0x3F8B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023B0_0x1023b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8B54u; }
        if (ctx->pc != 0x3F8B54u) { return; }
    }
    ctx->pc = 0x3F8B54u;
label_3f8b54:
    // 0x3f8b54: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3F8B54u;
    {
        const bool branch_taken_0x3f8b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8b54) {
            ctx->pc = 0x3F8B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8B54u;
            // 0x3f8b58: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8B88u;
            goto label_3f8b88;
        }
    }
    ctx->pc = 0x3F8B5Cu;
    // 0x3f8b5c: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x3f8b5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f8b60: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3f8b64: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x3f8b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
    // 0x3f8b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f8b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8b6c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3f8b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3f8b70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3f8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3f8b74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f8b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8b7c: 0xc0408c8  jal         func_102320
    ctx->pc = 0x3F8B7Cu;
    SET_GPR_U32(ctx, 31, 0x3F8B84u);
    ctx->pc = 0x3F8B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8B7Cu;
            // 0x3f8b80: 0x24590018  addiu       $t9, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8B84u; }
        if (ctx->pc != 0x3F8B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8B84u; }
        if (ctx->pc != 0x3F8B84u) { return; }
    }
    ctx->pc = 0x3F8B84u;
label_3f8b84:
    // 0x3f8b84: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3f8b84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_3f8b88:
    // 0x3f8b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f8b8c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F8B8Cu;
    {
        const bool branch_taken_0x3f8b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f8b8c) {
            ctx->pc = 0x3F8BA4u;
            goto label_3f8ba4;
        }
    }
    ctx->pc = 0x3F8B94u;
    // 0x3f8b94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3f8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3f8b98: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F8B98u;
    {
        const bool branch_taken_0x3f8b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f8b98) {
            ctx->pc = 0x3F8BA4u;
            goto label_3f8ba4;
        }
    }
    ctx->pc = 0x3F8BA0u;
    // 0x3f8ba0: 0xa2400028  sb          $zero, 0x28($s2)
    ctx->pc = 0x3f8ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 0));
label_3f8ba4:
    // 0x3f8ba4: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3f8ba4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_3f8ba8:
    // 0x3f8ba8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3f8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3f8bac: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F8BACu;
    {
        const bool branch_taken_0x3f8bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f8bac) {
            ctx->pc = 0x3F8BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8BACu;
            // 0x3f8bb0: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8BCCu;
            goto label_3f8bcc;
        }
    }
    ctx->pc = 0x3F8BB4u;
    // 0x3f8bb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f8bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8bb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f8bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8bbc: 0xc0fe058  jal         func_3F8160
    ctx->pc = 0x3F8BBCu;
    SET_GPR_U32(ctx, 31, 0x3F8BC4u);
    ctx->pc = 0x3F8BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8BBCu;
            // 0x3f8bc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F8160u;
    if (runtime->hasFunction(0x3F8160u)) {
        auto targetFn = runtime->lookupFunction(0x3F8160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8BC4u; }
        if (ctx->pc != 0x3F8BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F8160_0x3f8160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8BC4u; }
        if (ctx->pc != 0x3F8BC4u) { return; }
    }
    ctx->pc = 0x3F8BC4u;
label_3f8bc4:
    // 0x3f8bc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3F8BC4u;
    {
        const bool branch_taken_0x3f8bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8BC4u;
            // 0x3f8bc8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8bc4) {
            ctx->pc = 0x3F8BF0u;
            goto label_3f8bf0;
        }
    }
    ctx->pc = 0x3F8BCCu;
label_3f8bcc:
    // 0x3f8bcc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F8BCCu;
    {
        const bool branch_taken_0x3f8bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8bcc) {
            ctx->pc = 0x3F8BECu;
            goto label_3f8bec;
        }
    }
    ctx->pc = 0x3F8BD4u;
    // 0x3f8bd4: 0xc10c9fc  jal         func_4327F0
    ctx->pc = 0x3F8BD4u;
    SET_GPR_U32(ctx, 31, 0x3F8BDCu);
    ctx->pc = 0x4327F0u;
    if (runtime->hasFunction(0x4327F0u)) {
        auto targetFn = runtime->lookupFunction(0x4327F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8BDCu; }
        if (ctx->pc != 0x3F8BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004327F0_0x4327f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8BDCu; }
        if (ctx->pc != 0x3F8BDCu) { return; }
    }
    ctx->pc = 0x3F8BDCu;
label_3f8bdc:
    // 0x3f8bdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F8BDCu;
    {
        const bool branch_taken_0x3f8bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8bdc) {
            ctx->pc = 0x3F8BECu;
            goto label_3f8bec;
        }
    }
    ctx->pc = 0x3F8BE4u;
    // 0x3f8be4: 0xc10c9b4  jal         func_4326D0
    ctx->pc = 0x3F8BE4u;
    SET_GPR_U32(ctx, 31, 0x3F8BECu);
    ctx->pc = 0x3F8BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8BE4u;
            // 0x3f8be8: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8BECu; }
        if (ctx->pc != 0x3F8BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8BECu; }
        if (ctx->pc != 0x3F8BECu) { return; }
    }
    ctx->pc = 0x3F8BECu;
label_3f8bec:
    // 0x3f8bec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f8becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f8bf0:
    // 0x3f8bf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f8bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f8bf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f8bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f8bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f8bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f8bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F8BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F8C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8BFCu;
            // 0x3f8c00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F8C04u;
    // 0x3f8c04: 0x0  nop
    ctx->pc = 0x3f8c04u;
    // NOP
    // 0x3f8c08: 0x0  nop
    ctx->pc = 0x3f8c08u;
    // NOP
    // 0x3f8c0c: 0x0  nop
    ctx->pc = 0x3f8c0cu;
    // NOP
}
