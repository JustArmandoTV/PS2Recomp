#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E3AE0
// Address: 0x3e3ae0 - 0x3e3da0
void sub_003E3AE0_0x3e3ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3AE0_0x3e3ae0");
#endif

    switch (ctx->pc) {
        case 0x3e3b3cu: goto label_3e3b3c;
        case 0x3e3b50u: goto label_3e3b50;
        case 0x3e3b64u: goto label_3e3b64;
        case 0x3e3b78u: goto label_3e3b78;
        case 0x3e3ba8u: goto label_3e3ba8;
        case 0x3e3be8u: goto label_3e3be8;
        case 0x3e3c18u: goto label_3e3c18;
        default: break;
    }

    ctx->pc = 0x3e3ae0u;

    // 0x3e3ae0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3e3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3e3ae4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e3ae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e3ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3e3aec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e3aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e3af0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e3af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3e3af4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e3af8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e3af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e3afc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e3afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3b00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e3b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e3b04: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3e3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e3b08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3e3b08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e3b0c: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x3e3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x3e3b10: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e3b10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3e3b14: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3e3b14u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3e3b18: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e3b18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3e3b1c: 0xa7a300a4  sh          $v1, 0xA4($sp)
    ctx->pc = 0x3e3b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e3b20: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3e3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x3e3b24: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3e3b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x3e3b28: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x3e3b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x3e3b2c: 0xa7a000a0  sh          $zero, 0xA0($sp)
    ctx->pc = 0x3e3b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e3b30: 0xa7a000a2  sh          $zero, 0xA2($sp)
    ctx->pc = 0x3e3b30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e3b34: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3E3B34u;
    SET_GPR_U32(ctx, 31, 0x3E3B3Cu);
    ctx->pc = 0x3E3B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3B34u;
            // 0x3e3b38: 0xa7a000a6  sh          $zero, 0xA6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 166), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3B3Cu; }
        if (ctx->pc != 0x3E3B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3B3Cu; }
        if (ctx->pc != 0x3E3B3Cu) { return; }
    }
    ctx->pc = 0x3E3B3Cu;
label_3e3b3c:
    // 0x3e3b3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e3b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e3b40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e3b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e3b44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e3b44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3e3b48: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3E3B48u;
    SET_GPR_U32(ctx, 31, 0x3E3B50u);
    ctx->pc = 0x3E3B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3B48u;
            // 0x3e3b4c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3B50u; }
        if (ctx->pc != 0x3E3B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3B50u; }
        if (ctx->pc != 0x3E3B50u) { return; }
    }
    ctx->pc = 0x3E3B50u;
label_3e3b50:
    // 0x3e3b50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e3b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e3b54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3e3b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e3b58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e3b58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3e3b5c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3E3B5Cu;
    SET_GPR_U32(ctx, 31, 0x3E3B64u);
    ctx->pc = 0x3E3B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3B5Cu;
            // 0x3e3b60: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3B64u; }
        if (ctx->pc != 0x3E3B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3B64u; }
        if (ctx->pc != 0x3E3B64u) { return; }
    }
    ctx->pc = 0x3E3B64u;
label_3e3b64:
    // 0x3e3b64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e3b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e3b68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3e3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e3b6c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e3b6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3e3b70: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3E3B70u;
    SET_GPR_U32(ctx, 31, 0x3E3B78u);
    ctx->pc = 0x3E3B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3B70u;
            // 0x3e3b74: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3B78u; }
        if (ctx->pc != 0x3E3B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3B78u; }
        if (ctx->pc != 0x3E3B78u) { return; }
    }
    ctx->pc = 0x3E3B78u;
label_3e3b78:
    // 0x3e3b78: 0x924502eb  lbu         $a1, 0x2EB($s2)
    ctx->pc = 0x3e3b78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 747)));
    // 0x3e3b7c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e3b80: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3e3b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3e3b84: 0xa3a500bf  sb          $a1, 0xBF($sp)
    ctx->pc = 0x3e3b84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e3b88: 0x8c830cb4  lw          $v1, 0xCB4($a0)
    ctx->pc = 0x3e3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
    // 0x3e3b8c: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x3e3b8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e3b90: 0x5460007d  bnel        $v1, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x3E3B90u;
    {
        const bool branch_taken_0x3e3b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3b90) {
            ctx->pc = 0x3E3B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3B90u;
            // 0x3e3b94: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3D88u;
            goto label_3e3d88;
        }
    }
    ctx->pc = 0x3E3B98u;
    // 0x3e3b98: 0x8c83077c  lw          $v1, 0x77C($a0)
    ctx->pc = 0x3e3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
    // 0x3e3b9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ba0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3e3ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3e3ba4: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x3e3ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_3e3ba8:
    // 0x3e3ba8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3e3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e3bac: 0x80420e3f  lb          $v0, 0xE3F($v0)
    ctx->pc = 0x3e3bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3647)));
    // 0x3e3bb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3BB0u;
    {
        const bool branch_taken_0x3e3bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3bb0) {
            ctx->pc = 0x3E3BC8u;
            goto label_3e3bc8;
        }
    }
    ctx->pc = 0x3E3BB8u;
    // 0x3e3bb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e3bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e3bbc: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3e3bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e3bc0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E3BC0u;
    {
        const bool branch_taken_0x3e3bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3BC0u;
            // 0x3e3bc4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3bc0) {
            ctx->pc = 0x3E3BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e3ba8;
        }
    }
    ctx->pc = 0x3E3BC8u;
label_3e3bc8:
    // 0x3e3bc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e3bcc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3e3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e3bd0: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x3e3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
    // 0x3e3bd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e3bd8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3e3bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3e3bdc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3e3bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e3be0: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x3E3BE0u;
    SET_GPR_U32(ctx, 31, 0x3E3BE8u);
    ctx->pc = 0x3E3BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3BE0u;
            // 0x3e3be4: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3BE8u; }
        if (ctx->pc != 0x3E3BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3BE8u; }
        if (ctx->pc != 0x3E3BE8u) { return; }
    }
    ctx->pc = 0x3E3BE8u;
label_3e3be8:
    // 0x3e3be8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3e3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3e3bec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3e3becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3bf0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e3bf0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3e3bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e3bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3bf8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3e3bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e3bfc: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3e3bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3e3c00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e3c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e3c04: 0x260703d0  addiu       $a3, $s0, 0x3D0
    ctx->pc = 0x3e3c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    // 0x3e3c08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e3c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3c0c: 0x27a900bf  addiu       $t1, $sp, 0xBF
    ctx->pc = 0x3e3c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 191));
    // 0x3e3c10: 0xc0b8704  jal         func_2E1C10
    ctx->pc = 0x3E3C10u;
    SET_GPR_U32(ctx, 31, 0x3E3C18u);
    ctx->pc = 0x3E3C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3C10u;
            // 0x3e3c14: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3C18u; }
        if (ctx->pc != 0x3E3C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3C18u; }
        if (ctx->pc != 0x3E3C18u) { return; }
    }
    ctx->pc = 0x3E3C18u;
label_3e3c18:
    // 0x3e3c18: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x3e3c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3e3c1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3c20: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3C20u;
    {
        const bool branch_taken_0x3e3c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E3C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3C20u;
            // 0x3e3c24: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c20) {
            ctx->pc = 0x3E3C38u;
            goto label_3e3c38;
        }
    }
    ctx->pc = 0x3E3C28u;
    // 0x3e3c28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e3c2c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E3C2Cu;
    {
        const bool branch_taken_0x3e3c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e3c2c) {
            ctx->pc = 0x3E3C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3C2Cu;
            // 0x3e3c30: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3C3Cu;
            goto label_3e3c3c;
        }
    }
    ctx->pc = 0x3E3C34u;
    // 0x3e3c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c38:
    // 0x3e3c38: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3e3c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3e3c3c:
    // 0x3e3c3c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e3c40: 0x8e4502c4  lw          $a1, 0x2C4($s2)
    ctx->pc = 0x3e3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 708)));
    // 0x3e3c44: 0x24849d60  addiu       $a0, $a0, -0x62A0
    ctx->pc = 0x3e3c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942048));
    // 0x3e3c48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e3c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e3c4c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x3e3c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e3c50: 0x28a50003  slti        $a1, $a1, 0x3
    ctx->pc = 0x3e3c50u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e3c54: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3e3c54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3e3c58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e3c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e3c5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e3c60: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3e3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3c64: 0xc6410184  lwc1        $f1, 0x184($s2)
    ctx->pc = 0x3e3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3c68: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3e3c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e3c6c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3C6Cu;
    {
        const bool branch_taken_0x3e3c6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E3C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3C6Cu;
            // 0x3e3c70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c6c) {
            ctx->pc = 0x3E3C78u;
            goto label_3e3c78;
        }
    }
    ctx->pc = 0x3E3C74u;
    // 0x3e3c74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e3c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c78:
    // 0x3e3c78: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3e3c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e3c7c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x3e3c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3e3c80: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3C80u;
    {
        const bool branch_taken_0x3e3c80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E3C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3C80u;
            // 0x3e3c84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c80) {
            ctx->pc = 0x3E3C8Cu;
            goto label_3e3c8c;
        }
    }
    ctx->pc = 0x3E3C88u;
    // 0x3e3c88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e3c88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c8c:
    // 0x3e3c8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e3c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e3c90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3e3c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3e3c94: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3E3C94u;
    {
        const bool branch_taken_0x3e3c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3c94) {
            ctx->pc = 0x3E3C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3C94u;
            // 0x3e3c98: 0x3c033eed  lui         $v1, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3CC8u;
            goto label_3e3cc8;
        }
    }
    ctx->pc = 0x3E3C9Cu;
    // 0x3e3c9c: 0x97a400a6  lhu         $a0, 0xA6($sp)
    ctx->pc = 0x3e3c9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 166)));
    // 0x3e3ca0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3e3ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e3ca4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e3ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3ca8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3CA8u;
    {
        const bool branch_taken_0x3e3ca8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E3CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3CA8u;
            // 0x3e3cac: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3ca8) {
            ctx->pc = 0x3E3CB4u;
            goto label_3e3cb4;
        }
    }
    ctx->pc = 0x3E3CB0u;
    // 0x3e3cb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e3cb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e3cb4:
    // 0x3e3cb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e3cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e3cb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e3cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e3cbc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3CBCu;
    {
        const bool branch_taken_0x3e3cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3cbc) {
            ctx->pc = 0x3E3CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3CBCu;
            // 0x3e3cc0: 0x3c0342f0  lui         $v1, 0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3CDCu;
            goto label_3e3cdc;
        }
    }
    ctx->pc = 0x3E3CC4u;
    // 0x3e3cc4: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x3e3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_3e3cc8:
    // 0x3e3cc8: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x3e3cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
    // 0x3e3ccc: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x3e3cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e3cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e3cd4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3E3CD4u;
    {
        const bool branch_taken_0x3e3cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3CD4u;
            // 0x3e3cd8: 0x460100c0  add.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3cd4) {
            ctx->pc = 0x3E3D80u;
            goto label_3e3d80;
        }
    }
    ctx->pc = 0x3E3CDCu;
label_3e3cdc:
    // 0x3e3cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e3cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e3ce0: 0x0  nop
    ctx->pc = 0x3e3ce0u;
    // NOP
    // 0x3e3ce4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3e3ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e3ce8: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x3E3CE8u;
    {
        const bool branch_taken_0x3e3ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e3ce8) {
            ctx->pc = 0x3E3CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3CE8u;
            // 0x3e3cec: 0x3c033eed  lui         $v1, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3D78u;
            goto label_3e3d78;
        }
    }
    ctx->pc = 0x3E3CF0u;
    // 0x3e3cf0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3e3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x3e3cf4: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x3e3cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3e3cf8: 0x3c033d3d  lui         $v1, 0x3D3D
    ctx->pc = 0x3e3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15677 << 16));
    // 0x3e3cfc: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3e3cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
    // 0x3e3d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e3d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e3d04: 0xc6430280  lwc1        $f3, 0x280($s2)
    ctx->pc = 0x3e3d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e3d08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e3d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e3d0c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3e3d0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e3d10: 0x0  nop
    ctx->pc = 0x3e3d10u;
    // NOP
    // 0x3e3d14: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3e3d14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3e3d18: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x3e3d18u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3e3d1c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x3e3d1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e3d20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3D20u;
    {
        const bool branch_taken_0x3e3d20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E3D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3D20u;
            // 0x3e3d24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3d20) {
            ctx->pc = 0x3E3D2Cu;
            goto label_3e3d2c;
        }
    }
    ctx->pc = 0x3E3D28u;
    // 0x3e3d28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e3d28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e3d2c:
    // 0x3e3d2c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3D2Cu;
    {
        const bool branch_taken_0x3e3d2c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e3d2c) {
            ctx->pc = 0x3E3D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3D2Cu;
            // 0x3e3d30: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3D40u;
            goto label_3e3d40;
        }
    }
    ctx->pc = 0x3E3D34u;
    // 0x3e3d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e3d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e3d38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3D38u;
    {
        const bool branch_taken_0x3e3d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3D38u;
            // 0x3e3d3c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3d38) {
            ctx->pc = 0x3E3D58u;
            goto label_3e3d58;
        }
    }
    ctx->pc = 0x3E3D40u;
label_3e3d40:
    // 0x3e3d40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3e3d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3e3d44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e3d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e3d48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e3d48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e3d4c: 0x0  nop
    ctx->pc = 0x3e3d4cu;
    // NOP
    // 0x3e3d50: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3e3d50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e3d54: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3e3d54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3e3d58:
    // 0x3e3d58: 0x3c033d3d  lui         $v1, 0x3D3D
    ctx->pc = 0x3e3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15677 << 16));
    // 0x3e3d5c: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3e3d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
    // 0x3e3d60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e3d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e3d64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e3d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e3d68: 0x0  nop
    ctx->pc = 0x3e3d68u;
    // NOP
    // 0x3e3d6c: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3e3d6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3e3d70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E3D70u;
    {
        const bool branch_taken_0x3e3d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3D70u;
            // 0x3e3d74: 0x460208dc  madd.s      $f3, $f1, $f2 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3d70) {
            ctx->pc = 0x3E3D80u;
            goto label_3e3d80;
        }
    }
    ctx->pc = 0x3E3D78u;
label_3e3d78:
    // 0x3e3d78: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x3e3d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
    // 0x3e3d7c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e3d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3e3d80:
    // 0x3e3d80: 0xe6430280  swc1        $f3, 0x280($s2)
    ctx->pc = 0x3e3d80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
    // 0x3e3d84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e3d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3e3d88:
    // 0x3e3d88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3e3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e3d8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e3d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e3d90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e3d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e3d94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e3d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e3d98: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3D98u;
            // 0x3e3d9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E3DA0u;
}
