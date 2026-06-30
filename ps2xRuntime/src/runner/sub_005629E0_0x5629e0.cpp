#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005629E0
// Address: 0x5629e0 - 0x562b40
void sub_005629E0_0x5629e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005629E0_0x5629e0");
#endif

    switch (ctx->pc) {
        case 0x562a34u: goto label_562a34;
        case 0x562a64u: goto label_562a64;
        case 0x562a98u: goto label_562a98;
        case 0x562adcu: goto label_562adc;
        case 0x562af4u: goto label_562af4;
        case 0x562b04u: goto label_562b04;
        default: break;
    }

    ctx->pc = 0x5629e0u;

    // 0x5629e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x5629e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x5629e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5629e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5629e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x5629e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x5629ec: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x5629ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x5629f0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x5629f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x5629f4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x5629f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x5629f8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x5629f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5629fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x5629fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x562a00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x562a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x562a04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x562a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x562a08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x562a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x562a0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x562a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x562a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x562a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x562a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x562a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x562a18: 0x8c543ff0  lw          $s4, 0x3FF0($v0)
    ctx->pc = 0x562a18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16368)));
    // 0x562a1c: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x562a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x562a20: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x562a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x562a24: 0x8e9700c8  lw          $s7, 0xC8($s4)
    ctx->pc = 0x562a24u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x562a28: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x562a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x562a2c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x562A2Cu;
    {
        const bool branch_taken_0x562a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x562A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562A2Cu;
            // 0x562a30: 0x249002c0  addiu       $s0, $a0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562a2c) {
            ctx->pc = 0x562A50u;
            goto label_562a50;
        }
    }
    ctx->pc = 0x562A34u;
label_562a34:
    // 0x562a34: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x562a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x562a38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x562a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x562a3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x562a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x562a40: 0x0  nop
    ctx->pc = 0x562a40u;
    // NOP
    // 0x562a44: 0x0  nop
    ctx->pc = 0x562a44u;
    // NOP
    // 0x562a48: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x562A48u;
    {
        const bool branch_taken_0x562a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x562a48) {
            ctx->pc = 0x562A34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_562a34;
        }
    }
    ctx->pc = 0x562A50u;
label_562a50:
    // 0x562a50: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x562a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
    // 0x562a54: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x562a54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562a58: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x562a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x562a5c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x562a5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562a60: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x562a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_562a64:
    // 0x562a64: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x562a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x562a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x562a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562a6c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x562a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x562a70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x562a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x562a74: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x562a74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x562a78: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x562a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x562a7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x562a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562a80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x562a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x562a84: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x562a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x562a88: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x562a88u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x562a8c: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x562a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x562a90: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x562A90u;
    SET_GPR_U32(ctx, 31, 0x562A98u);
    ctx->pc = 0x562A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562A90u;
            // 0x562a94: 0x245100b8  addiu       $s1, $v0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562A98u; }
        if (ctx->pc != 0x562A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562A98u; }
        if (ctx->pc != 0x562A98u) { return; }
    }
    ctx->pc = 0x562A98u;
label_562a98:
    // 0x562a98: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x562a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x562a9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x562a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x562aa0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x562AA0u;
    {
        const bool branch_taken_0x562aa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x562aa0) {
            ctx->pc = 0x562AB8u;
            goto label_562ab8;
        }
    }
    ctx->pc = 0x562AA8u;
    // 0x562aa8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x562aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x562aac: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x562aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x562ab0: 0xac5300b0  sw          $s3, 0xB0($v0)
    ctx->pc = 0x562ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 19));
    // 0x562ab4: 0x0  nop
    ctx->pc = 0x562ab4u;
    // NOP
label_562ab8:
    // 0x562ab8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x562ab8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x562abc: 0x2d7102b  sltu        $v0, $s6, $s7
    ctx->pc = 0x562abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x562ac0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x562AC0u;
    {
        const bool branch_taken_0x562ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x562AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562AC0u;
            // 0x562ac4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562ac0) {
            ctx->pc = 0x562A64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_562a64;
        }
    }
    ctx->pc = 0x562AC8u;
    // 0x562ac8: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x562ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x562acc: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x562ACCu;
    {
        const bool branch_taken_0x562acc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x562acc) {
            ctx->pc = 0x562AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562ACCu;
            // 0x562ad0: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562AE4u;
            goto label_562ae4;
        }
    }
    ctx->pc = 0x562AD4u;
    // 0x562ad4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x562AD4u;
    SET_GPR_U32(ctx, 31, 0x562ADCu);
    ctx->pc = 0x562AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562AD4u;
            // 0x562ad8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562ADCu; }
        if (ctx->pc != 0x562ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562ADCu; }
        if (ctx->pc != 0x562ADCu) { return; }
    }
    ctx->pc = 0x562ADCu;
label_562adc:
    // 0x562adc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x562ADCu;
    {
        const bool branch_taken_0x562adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562ADCu;
            // 0x562ae0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562adc) {
            ctx->pc = 0x562B08u;
            goto label_562b08;
        }
    }
    ctx->pc = 0x562AE4u;
label_562ae4:
    // 0x562ae4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x562AE4u;
    {
        const bool branch_taken_0x562ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x562ae4) {
            ctx->pc = 0x562AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562AE4u;
            // 0x562ae8: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562AFCu;
            goto label_562afc;
        }
    }
    ctx->pc = 0x562AECu;
    // 0x562aec: 0xc04cc04  jal         func_133010
    ctx->pc = 0x562AECu;
    SET_GPR_U32(ctx, 31, 0x562AF4u);
    ctx->pc = 0x562AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562AECu;
            // 0x562af0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562AF4u; }
        if (ctx->pc != 0x562AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562AF4u; }
        if (ctx->pc != 0x562AF4u) { return; }
    }
    ctx->pc = 0x562AF4u;
label_562af4:
    // 0x562af4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x562AF4u;
    {
        const bool branch_taken_0x562af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x562af4) {
            ctx->pc = 0x562B04u;
            goto label_562b04;
        }
    }
    ctx->pc = 0x562AFCu;
label_562afc:
    // 0x562afc: 0xc158ad0  jal         func_562B40
    ctx->pc = 0x562AFCu;
    SET_GPR_U32(ctx, 31, 0x562B04u);
    ctx->pc = 0x562B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562AFCu;
            // 0x562b00: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x562B40u;
    if (runtime->hasFunction(0x562B40u)) {
        auto targetFn = runtime->lookupFunction(0x562B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562B04u; }
        if (ctx->pc != 0x562B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00562B40_0x562b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562B04u; }
        if (ctx->pc != 0x562B04u) { return; }
    }
    ctx->pc = 0x562B04u;
label_562b04:
    // 0x562b04: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x562b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_562b08:
    // 0x562b08: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x562b08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x562b0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x562b0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x562b10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x562b10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x562b14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x562b14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x562b18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x562b18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x562b1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x562b1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x562b20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x562b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x562b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x562b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x562b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x562b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x562b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x562B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562B2Cu;
            // 0x562b30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562B34u;
    // 0x562b34: 0x0  nop
    ctx->pc = 0x562b34u;
    // NOP
    // 0x562b38: 0x0  nop
    ctx->pc = 0x562b38u;
    // NOP
    // 0x562b3c: 0x0  nop
    ctx->pc = 0x562b3cu;
    // NOP
}
