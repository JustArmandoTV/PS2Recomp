#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137960
// Address: 0x137960 - 0x137c50
void sub_00137960_0x137960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137960_0x137960");
#endif

    switch (ctx->pc) {
        case 0x13799cu: goto label_13799c;
        case 0x137a20u: goto label_137a20;
        case 0x137a30u: goto label_137a30;
        case 0x137a40u: goto label_137a40;
        case 0x137a78u: goto label_137a78;
        case 0x137ad0u: goto label_137ad0;
        case 0x137ae0u: goto label_137ae0;
        case 0x137af0u: goto label_137af0;
        case 0x137b20u: goto label_137b20;
        case 0x137b30u: goto label_137b30;
        case 0x137b40u: goto label_137b40;
        case 0x137b70u: goto label_137b70;
        case 0x137b80u: goto label_137b80;
        case 0x137b90u: goto label_137b90;
        case 0x137bc0u: goto label_137bc0;
        case 0x137bd0u: goto label_137bd0;
        case 0x137be0u: goto label_137be0;
        case 0x137bf4u: goto label_137bf4;
        case 0x137c08u: goto label_137c08;
        case 0x137c24u: goto label_137c24;
        default: break;
    }

    ctx->pc = 0x137960u;

    // 0x137960: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x137960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x137964: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x137964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x137968: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x137968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13796c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x137970: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x137970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137974: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x137974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x137978: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x137978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13797c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x137980: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x137980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137984: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137988: 0x2cc10002  sltiu       $at, $a2, 0x2
    ctx->pc = 0x137988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13798c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13798cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x137990: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x137990u;
    {
        const bool branch_taken_0x137990 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x137994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137990u;
            // 0x137994: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137990) {
            ctx->pc = 0x1379D8u;
            goto label_1379d8;
        }
    }
    ctx->pc = 0x137998u;
    // 0x137998: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x137998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_13799c:
    // 0x13799c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x13799cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1379a0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1379a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1379a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1379a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1379a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1379a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1379ac: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1379acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1379b0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1379B0u;
    {
        const bool branch_taken_0x1379b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1379b0) {
            ctx->pc = 0x1379C0u;
            goto label_1379c0;
        }
    }
    ctx->pc = 0x1379B8u;
    // 0x1379b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1379B8u;
    {
        const bool branch_taken_0x1379b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1379BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1379B8u;
            // 0x1379bc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379b8) {
            ctx->pc = 0x1379C8u;
            goto label_1379c8;
        }
    }
    ctx->pc = 0x1379C0u;
label_1379c0:
    // 0x1379c0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1379c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1379c4: 0x0  nop
    ctx->pc = 0x1379c4u;
    // NOP
label_1379c8:
    // 0x1379c8: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x1379c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1379cc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1379ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1379d0: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1379D0u;
    {
        const bool branch_taken_0x1379d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1379d0) {
            ctx->pc = 0x1379D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1379D0u;
            // 0x1379d4: 0xe61021  addu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13799Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13799c;
        }
    }
    ctx->pc = 0x1379D8u;
label_1379d8:
    // 0x1379d8: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1379d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1379dc: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1379dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1379e0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1379e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1379e4: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1379e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1379e8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1379E8u;
    {
        const bool branch_taken_0x1379e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1379e8) {
            ctx->pc = 0x1379ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1379E8u;
            // 0x1379ec: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137A48u;
            goto label_137a48;
        }
    }
    ctx->pc = 0x1379F0u;
    // 0x1379f0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1379f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1379f4: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1379f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1379f8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1379f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1379fc: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1379FCu;
    {
        const bool branch_taken_0x1379fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x137A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1379FCu;
            // 0x137a00: 0x8e47000c  lw          $a3, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379fc) {
            ctx->pc = 0x137A28u;
            goto label_137a28;
        }
    }
    ctx->pc = 0x137A04u;
    // 0x137a04: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x137a08: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137A08u;
    {
        const bool branch_taken_0x137a08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x137a08) {
            ctx->pc = 0x137A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137A08u;
            // 0x137a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137A18u;
            goto label_137a18;
        }
    }
    ctx->pc = 0x137A10u;
    // 0x137a10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137A10u;
    {
        const bool branch_taken_0x137a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A10u;
            // 0x137a14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a10) {
            ctx->pc = 0x137A38u;
            goto label_137a38;
        }
    }
    ctx->pc = 0x137A18u;
label_137a18:
    // 0x137a18: 0xc04ca64  jal         func_132990
    ctx->pc = 0x137A18u;
    SET_GPR_U32(ctx, 31, 0x137A20u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A20u; }
        if (ctx->pc != 0x137A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A20u; }
        if (ctx->pc != 0x137A20u) { return; }
    }
    ctx->pc = 0x137A20u;
label_137a20:
    // 0x137a20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x137A20u;
    {
        const bool branch_taken_0x137a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a20) {
            ctx->pc = 0x137A40u;
            goto label_137a40;
        }
    }
    ctx->pc = 0x137A28u;
label_137a28:
    // 0x137a28: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x137A28u;
    SET_GPR_U32(ctx, 31, 0x137A30u);
    ctx->pc = 0x137A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137A28u;
            // 0x137a2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A30u; }
        if (ctx->pc != 0x137A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A30u; }
        if (ctx->pc != 0x137A30u) { return; }
    }
    ctx->pc = 0x137A30u;
label_137a30:
    // 0x137a30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137A30u;
    {
        const bool branch_taken_0x137a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a30) {
            ctx->pc = 0x137A40u;
            goto label_137a40;
        }
    }
    ctx->pc = 0x137A38u;
label_137a38:
    // 0x137a38: 0xc04ca18  jal         func_132860
    ctx->pc = 0x137A38u;
    SET_GPR_U32(ctx, 31, 0x137A40u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A40u; }
        if (ctx->pc != 0x137A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A40u; }
        if (ctx->pc != 0x137A40u) { return; }
    }
    ctx->pc = 0x137A40u;
label_137a40:
    // 0x137a40: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x137A40u;
    {
        const bool branch_taken_0x137a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A40u;
            // 0x137a44: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a40) {
            ctx->pc = 0x137C28u;
            goto label_137c28;
        }
    }
    ctx->pc = 0x137A48u;
label_137a48:
    // 0x137a48: 0x50e00009  beql        $a3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x137A48u;
    {
        const bool branch_taken_0x137a48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a48) {
            ctx->pc = 0x137A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137A48u;
            // 0x137a4c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137A70u;
            goto label_137a70;
        }
    }
    ctx->pc = 0x137A50u;
    // 0x137a50: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x137a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x137a54: 0xe2082a  slt         $at, $a3, $v0
    ctx->pc = 0x137a54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137a58: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x137A58u;
    {
        const bool branch_taken_0x137a58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a58) {
            ctx->pc = 0x137A6Cu;
            goto label_137a6c;
        }
    }
    ctx->pc = 0x137A60u;
    // 0x137a60: 0x2642fff0  addiu       $v0, $s2, -0x10
    ctx->pc = 0x137a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x137a64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x137A64u;
    {
        const bool branch_taken_0x137a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A64u;
            // 0x137a68: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a64) {
            ctx->pc = 0x137A80u;
            goto label_137a80;
        }
    }
    ctx->pc = 0x137A6Cu;
label_137a6c:
    // 0x137a6c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x137a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_137a70:
    // 0x137a70: 0xc04dcd8  jal         func_137360
    ctx->pc = 0x137A70u;
    SET_GPR_U32(ctx, 31, 0x137A78u);
    ctx->pc = 0x137A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137A70u;
            // 0x137a74: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137360u;
    if (runtime->hasFunction(0x137360u)) {
        auto targetFn = runtime->lookupFunction(0x137360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A78u; }
        if (ctx->pc != 0x137A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137360_0x137360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A78u; }
        if (ctx->pc != 0x137A78u) { return; }
    }
    ctx->pc = 0x137A78u;
label_137a78:
    // 0x137a78: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x137A78u;
    {
        const bool branch_taken_0x137a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a78) {
            ctx->pc = 0x137C24u;
            goto label_137c24;
        }
    }
    ctx->pc = 0x137A80u;
label_137a80:
    // 0x137a80: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x137a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137a84: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x137a84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x137a88: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x137a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137a8c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x137a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x137a90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x137a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x137a94: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x137a94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x137a98: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x137a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x137a9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x137a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x137aa0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x137aa0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x137aa4: 0x0  nop
    ctx->pc = 0x137aa4u;
    // NOP
    // 0x137aa8: 0x0  nop
    ctx->pc = 0x137aa8u;
    // NOP
    // 0x137aac: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137AACu;
    {
        const bool branch_taken_0x137aac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x137aac) {
            ctx->pc = 0x137AD8u;
            goto label_137ad8;
        }
    }
    ctx->pc = 0x137AB4u;
    // 0x137ab4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x137ab8: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137AB8u;
    {
        const bool branch_taken_0x137ab8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x137ab8) {
            ctx->pc = 0x137ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137AB8u;
            // 0x137abc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137AC8u;
            goto label_137ac8;
        }
    }
    ctx->pc = 0x137AC0u;
    // 0x137ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137AC0u;
    {
        const bool branch_taken_0x137ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137AC0u;
            // 0x137ac4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ac0) {
            ctx->pc = 0x137AE8u;
            goto label_137ae8;
        }
    }
    ctx->pc = 0x137AC8u;
label_137ac8:
    // 0x137ac8: 0xc04ca64  jal         func_132990
    ctx->pc = 0x137AC8u;
    SET_GPR_U32(ctx, 31, 0x137AD0u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137AD0u; }
        if (ctx->pc != 0x137AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137AD0u; }
        if (ctx->pc != 0x137AD0u) { return; }
    }
    ctx->pc = 0x137AD0u;
label_137ad0:
    // 0x137ad0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x137AD0u;
    {
        const bool branch_taken_0x137ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137AD0u;
            // 0x137ad4: 0x8e47000c  lw          $a3, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ad0) {
            ctx->pc = 0x137AF4u;
            goto label_137af4;
        }
    }
    ctx->pc = 0x137AD8u;
label_137ad8:
    // 0x137ad8: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x137AD8u;
    SET_GPR_U32(ctx, 31, 0x137AE0u);
    ctx->pc = 0x137ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137AD8u;
            // 0x137adc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137AE0u; }
        if (ctx->pc != 0x137AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137AE0u; }
        if (ctx->pc != 0x137AE0u) { return; }
    }
    ctx->pc = 0x137AE0u;
label_137ae0:
    // 0x137ae0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137AE0u;
    {
        const bool branch_taken_0x137ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137ae0) {
            ctx->pc = 0x137AF0u;
            goto label_137af0;
        }
    }
    ctx->pc = 0x137AE8u;
label_137ae8:
    // 0x137ae8: 0xc04ca18  jal         func_132860
    ctx->pc = 0x137AE8u;
    SET_GPR_U32(ctx, 31, 0x137AF0u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137AF0u; }
        if (ctx->pc != 0x137AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137AF0u; }
        if (ctx->pc != 0x137AF0u) { return; }
    }
    ctx->pc = 0x137AF0u;
label_137af0:
    // 0x137af0: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x137af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_137af4:
    // 0x137af4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x137af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x137af8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x137af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x137afc: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137AFCu;
    {
        const bool branch_taken_0x137afc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x137B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137AFCu;
            // 0x137b00: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137afc) {
            ctx->pc = 0x137B28u;
            goto label_137b28;
        }
    }
    ctx->pc = 0x137B04u;
    // 0x137b04: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x137b08: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137B08u;
    {
        const bool branch_taken_0x137b08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x137b08) {
            ctx->pc = 0x137B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137B08u;
            // 0x137b0c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137B18u;
            goto label_137b18;
        }
    }
    ctx->pc = 0x137B10u;
    // 0x137b10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137B10u;
    {
        const bool branch_taken_0x137b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B10u;
            // 0x137b14: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b10) {
            ctx->pc = 0x137B38u;
            goto label_137b38;
        }
    }
    ctx->pc = 0x137B18u;
label_137b18:
    // 0x137b18: 0xc04ca64  jal         func_132990
    ctx->pc = 0x137B18u;
    SET_GPR_U32(ctx, 31, 0x137B20u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B20u; }
        if (ctx->pc != 0x137B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B20u; }
        if (ctx->pc != 0x137B20u) { return; }
    }
    ctx->pc = 0x137B20u;
label_137b20:
    // 0x137b20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x137B20u;
    {
        const bool branch_taken_0x137b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B20u;
            // 0x137b24: 0x8e27000c  lw          $a3, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b20) {
            ctx->pc = 0x137B44u;
            goto label_137b44;
        }
    }
    ctx->pc = 0x137B28u;
label_137b28:
    // 0x137b28: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x137B28u;
    SET_GPR_U32(ctx, 31, 0x137B30u);
    ctx->pc = 0x137B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137B28u;
            // 0x137b2c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B30u; }
        if (ctx->pc != 0x137B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B30u; }
        if (ctx->pc != 0x137B30u) { return; }
    }
    ctx->pc = 0x137B30u;
label_137b30:
    // 0x137b30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137B30u;
    {
        const bool branch_taken_0x137b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137b30) {
            ctx->pc = 0x137B40u;
            goto label_137b40;
        }
    }
    ctx->pc = 0x137B38u;
label_137b38:
    // 0x137b38: 0xc04ca18  jal         func_132860
    ctx->pc = 0x137B38u;
    SET_GPR_U32(ctx, 31, 0x137B40u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B40u; }
        if (ctx->pc != 0x137B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B40u; }
        if (ctx->pc != 0x137B40u) { return; }
    }
    ctx->pc = 0x137B40u;
label_137b40:
    // 0x137b40: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x137b40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_137b44:
    // 0x137b44: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x137b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x137b48: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x137b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x137b4c: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137B4Cu;
    {
        const bool branch_taken_0x137b4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x137B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B4Cu;
            // 0x137b50: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b4c) {
            ctx->pc = 0x137B78u;
            goto label_137b78;
        }
    }
    ctx->pc = 0x137B54u;
    // 0x137b54: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x137b58: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137B58u;
    {
        const bool branch_taken_0x137b58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x137b58) {
            ctx->pc = 0x137B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137B58u;
            // 0x137b5c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137B68u;
            goto label_137b68;
        }
    }
    ctx->pc = 0x137B60u;
    // 0x137b60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137B60u;
    {
        const bool branch_taken_0x137b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B60u;
            // 0x137b64: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b60) {
            ctx->pc = 0x137B88u;
            goto label_137b88;
        }
    }
    ctx->pc = 0x137B68u;
label_137b68:
    // 0x137b68: 0xc04ca64  jal         func_132990
    ctx->pc = 0x137B68u;
    SET_GPR_U32(ctx, 31, 0x137B70u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B70u; }
        if (ctx->pc != 0x137B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B70u; }
        if (ctx->pc != 0x137B70u) { return; }
    }
    ctx->pc = 0x137B70u;
label_137b70:
    // 0x137b70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x137B70u;
    {
        const bool branch_taken_0x137b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B70u;
            // 0x137b74: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b70) {
            ctx->pc = 0x137B94u;
            goto label_137b94;
        }
    }
    ctx->pc = 0x137B78u;
label_137b78:
    // 0x137b78: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x137B78u;
    SET_GPR_U32(ctx, 31, 0x137B80u);
    ctx->pc = 0x137B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137B78u;
            // 0x137b7c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B80u; }
        if (ctx->pc != 0x137B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B80u; }
        if (ctx->pc != 0x137B80u) { return; }
    }
    ctx->pc = 0x137B80u;
label_137b80:
    // 0x137b80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137B80u;
    {
        const bool branch_taken_0x137b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137b80) {
            ctx->pc = 0x137B90u;
            goto label_137b90;
        }
    }
    ctx->pc = 0x137B88u;
label_137b88:
    // 0x137b88: 0xc04ca18  jal         func_132860
    ctx->pc = 0x137B88u;
    SET_GPR_U32(ctx, 31, 0x137B90u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B90u; }
        if (ctx->pc != 0x137B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B90u; }
        if (ctx->pc != 0x137B90u) { return; }
    }
    ctx->pc = 0x137B90u;
label_137b90:
    // 0x137b90: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x137b90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_137b94:
    // 0x137b94: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x137b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x137b98: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x137b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137b9c: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137B9Cu;
    {
        const bool branch_taken_0x137b9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x137BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B9Cu;
            // 0x137ba0: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b9c) {
            ctx->pc = 0x137BC8u;
            goto label_137bc8;
        }
    }
    ctx->pc = 0x137BA4u;
    // 0x137ba4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x137ba8: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137BA8u;
    {
        const bool branch_taken_0x137ba8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x137ba8) {
            ctx->pc = 0x137BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137BA8u;
            // 0x137bac: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137BB8u;
            goto label_137bb8;
        }
    }
    ctx->pc = 0x137BB0u;
    // 0x137bb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137BB0u;
    {
        const bool branch_taken_0x137bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BB0u;
            // 0x137bb4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bb0) {
            ctx->pc = 0x137BD8u;
            goto label_137bd8;
        }
    }
    ctx->pc = 0x137BB8u;
label_137bb8:
    // 0x137bb8: 0xc04ca64  jal         func_132990
    ctx->pc = 0x137BB8u;
    SET_GPR_U32(ctx, 31, 0x137BC0u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BC0u; }
        if (ctx->pc != 0x137BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BC0u; }
        if (ctx->pc != 0x137BC0u) { return; }
    }
    ctx->pc = 0x137BC0u;
label_137bc0:
    // 0x137bc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x137BC0u;
    {
        const bool branch_taken_0x137bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BC0u;
            // 0x137bc4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bc0) {
            ctx->pc = 0x137BE4u;
            goto label_137be4;
        }
    }
    ctx->pc = 0x137BC8u;
label_137bc8:
    // 0x137bc8: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x137BC8u;
    SET_GPR_U32(ctx, 31, 0x137BD0u);
    ctx->pc = 0x137BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137BC8u;
            // 0x137bcc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BD0u; }
        if (ctx->pc != 0x137BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BD0u; }
        if (ctx->pc != 0x137BD0u) { return; }
    }
    ctx->pc = 0x137BD0u;
label_137bd0:
    // 0x137bd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137BD0u;
    {
        const bool branch_taken_0x137bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137bd0) {
            ctx->pc = 0x137BE0u;
            goto label_137be0;
        }
    }
    ctx->pc = 0x137BD8u;
label_137bd8:
    // 0x137bd8: 0xc04ca18  jal         func_132860
    ctx->pc = 0x137BD8u;
    SET_GPR_U32(ctx, 31, 0x137BE0u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BE0u; }
        if (ctx->pc != 0x137BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BE0u; }
        if (ctx->pc != 0x137BE0u) { return; }
    }
    ctx->pc = 0x137BE0u;
label_137be0:
    // 0x137be0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137be4:
    // 0x137be4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x137be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x137be8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x137be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137bec: 0xc04c7dc  jal         func_131F70
    ctx->pc = 0x137BECu;
    SET_GPR_U32(ctx, 31, 0x137BF4u);
    ctx->pc = 0x137BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137BECu;
            // 0x137bf0: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131F70u;
    if (runtime->hasFunction(0x131F70u)) {
        auto targetFn = runtime->lookupFunction(0x131F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BF4u; }
        if (ctx->pc != 0x137BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131F70_0x131f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BF4u; }
        if (ctx->pc != 0x137BF4u) { return; }
    }
    ctx->pc = 0x137BF4u;
label_137bf4:
    // 0x137bf4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137bf8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x137bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137bfc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x137bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x137c00: 0xc04c7dc  jal         func_131F70
    ctx->pc = 0x137C00u;
    SET_GPR_U32(ctx, 31, 0x137C08u);
    ctx->pc = 0x137C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C00u;
            // 0x137c04: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131F70u;
    if (runtime->hasFunction(0x131F70u)) {
        auto targetFn = runtime->lookupFunction(0x131F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C08u; }
        if (ctx->pc != 0x137C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131F70_0x131f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C08u; }
        if (ctx->pc != 0x137C08u) { return; }
    }
    ctx->pc = 0x137C08u;
label_137c08:
    // 0x137c08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x137c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c0c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x137c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137c10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x137c10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x137c14: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x137c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137c18: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x137c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137c1c: 0xc04c940  jal         func_132500
    ctx->pc = 0x137C1Cu;
    SET_GPR_U32(ctx, 31, 0x137C24u);
    ctx->pc = 0x137C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C1Cu;
            // 0x137c20: 0x27a800a0  addiu       $t0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132500u;
    if (runtime->hasFunction(0x132500u)) {
        auto targetFn = runtime->lookupFunction(0x132500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C24u; }
        if (ctx->pc != 0x137C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132500_0x132500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C24u; }
        if (ctx->pc != 0x137C24u) { return; }
    }
    ctx->pc = 0x137C24u;
label_137c24:
    // 0x137c24: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x137c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_137c28:
    // 0x137c28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x137c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137c2c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x137c2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137c30: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x137c30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137c34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x137c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137c38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x137c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137c3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137c40: 0x3e00008  jr          $ra
    ctx->pc = 0x137C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C40u;
            // 0x137c44: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137C48u;
    // 0x137c48: 0x0  nop
    ctx->pc = 0x137c48u;
    // NOP
    // 0x137c4c: 0x0  nop
    ctx->pc = 0x137c4cu;
    // NOP
}
