#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0B10
// Address: 0x2e0b10 - 0x2e0e30
void sub_002E0B10_0x2e0b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0B10_0x2e0b10");
#endif

    switch (ctx->pc) {
        case 0x2e0b88u: goto label_2e0b88;
        case 0x2e0ba4u: goto label_2e0ba4;
        case 0x2e0bb4u: goto label_2e0bb4;
        case 0x2e0bd8u: goto label_2e0bd8;
        case 0x2e0be4u: goto label_2e0be4;
        case 0x2e0bfcu: goto label_2e0bfc;
        case 0x2e0c08u: goto label_2e0c08;
        case 0x2e0c1cu: goto label_2e0c1c;
        case 0x2e0c54u: goto label_2e0c54;
        case 0x2e0c68u: goto label_2e0c68;
        case 0x2e0c78u: goto label_2e0c78;
        case 0x2e0cccu: goto label_2e0ccc;
        case 0x2e0cd8u: goto label_2e0cd8;
        case 0x2e0ce4u: goto label_2e0ce4;
        case 0x2e0cf0u: goto label_2e0cf0;
        case 0x2e0d74u: goto label_2e0d74;
        case 0x2e0d7cu: goto label_2e0d7c;
        case 0x2e0d98u: goto label_2e0d98;
        default: break;
    }

    ctx->pc = 0x2e0b10u;

    // 0x2e0b10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e0b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e0b14: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e0b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e0b18: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e0b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2e0b1c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e0b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e0b20: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e0b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e0b24: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2e0b24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b28: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e0b2c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e0b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e0b30: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e0b30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e0b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e0b38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e0b38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e0b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e0b40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e0b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e0b44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e0b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e0b48: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e0b48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e0b4c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e0b4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e0b50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0b50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e0b54: 0xa4800056  sh          $zero, 0x56($a0)
    ctx->pc = 0x2e0b54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e0b58: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x2e0b58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2e0b5c: 0x120000a3  beqz        $s0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2E0B5Cu;
    {
        const bool branch_taken_0x2e0b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B5Cu;
            // 0x2e0b60: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b5c) {
            ctx->pc = 0x2E0DECu;
            goto label_2e0dec;
        }
    }
    ctx->pc = 0x2E0B64u;
    // 0x2e0b64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0b68: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2e0b6c: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x2e0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x2e0b70: 0x344323f0  ori         $v1, $v0, 0x23F0
    ctx->pc = 0x2e0b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9200);
    // 0x2e0b74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e0b78: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e0b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e0b7c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e0b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e0b80: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E0B80u;
    SET_GPR_U32(ctx, 31, 0x2E0B88u);
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B88u; }
        if (ctx->pc != 0x2E0B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B88u; }
        if (ctx->pc != 0x2E0B88u) { return; }
    }
    ctx->pc = 0x2E0B88u;
label_2e0b88:
    // 0x2e0b88: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2e0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2e0b8c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2e0b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e0b90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e0b94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e0b94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e0b98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e0b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e0b9c: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E0B9Cu;
    SET_GPR_U32(ctx, 31, 0x2E0BA4u);
    ctx->pc = 0x2E0BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B9Cu;
            // 0x2e0ba0: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BA4u; }
        if (ctx->pc != 0x2E0BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BA4u; }
        if (ctx->pc != 0x2E0BA4u) { return; }
    }
    ctx->pc = 0x2E0BA4u;
label_2e0ba4:
    // 0x2e0ba4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e0ba4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e0ba8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e0ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e0bac: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x2E0BACu;
    SET_GPR_U32(ctx, 31, 0x2E0BB4u);
    ctx->pc = 0x2E0BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0BACu;
            // 0x2e0bb0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BB4u; }
        if (ctx->pc != 0x2E0BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BB4u; }
        if (ctx->pc != 0x2E0BB4u) { return; }
    }
    ctx->pc = 0x2E0BB4u;
label_2e0bb4:
    // 0x2e0bb4: 0xe7b400ec  swc1        $f20, 0xEC($sp)
    ctx->pc = 0x2e0bb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2e0bb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e0bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bbc: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x2e0bbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e0bc0: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2e0bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0bc4: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x2e0bc4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e0bc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e0bcc: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x2e0bccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0bd0: 0x2f43c  dsll32      $fp, $v0, 16
    ctx->pc = 0x2e0bd0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e0bd4: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x2e0bd4u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
label_2e0bd8:
    // 0x2e0bd8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e0bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e0bdc: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x2E0BDCu;
    SET_GPR_U32(ctx, 31, 0x2E0BE4u);
    ctx->pc = 0x2E0BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0BDCu;
            // 0x2e0be0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BE4u; }
        if (ctx->pc != 0x2E0BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BE4u; }
        if (ctx->pc != 0x2E0BE4u) { return; }
    }
    ctx->pc = 0x2E0BE4u;
label_2e0be4:
    // 0x2e0be4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2E0BE4u;
    {
        const bool branch_taken_0x2e0be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0be4) {
            ctx->pc = 0x2E0D18u;
            goto label_2e0d18;
        }
    }
    ctx->pc = 0x2E0BECu;
    // 0x2e0bec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e0becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e0bf0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2e0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e0bf4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0BF4u;
    SET_GPR_U32(ctx, 31, 0x2E0BFCu);
    ctx->pc = 0x2E0BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0BF4u;
            // 0x2e0bf8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BFCu; }
        if (ctx->pc != 0x2E0BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BFCu; }
        if (ctx->pc != 0x2E0BFCu) { return; }
    }
    ctx->pc = 0x2E0BFCu;
label_2e0bfc:
    // 0x2e0bfc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e0c00: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E0C00u;
    SET_GPR_U32(ctx, 31, 0x2E0C08u);
    ctx->pc = 0x2E0C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C00u;
            // 0x2e0c04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C08u; }
        if (ctx->pc != 0x2E0C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C08u; }
        if (ctx->pc != 0x2E0C08u) { return; }
    }
    ctx->pc = 0x2E0C08u;
label_2e0c08:
    // 0x2e0c08: 0x52e0000b  beql        $s7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0C08u;
    {
        const bool branch_taken_0x2e0c08 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c08) {
            ctx->pc = 0x2E0C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C08u;
            // 0x2e0c0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0C38u;
            goto label_2e0c38;
        }
    }
    ctx->pc = 0x2E0C10u;
    // 0x2e0c10: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e0c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e0c14: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2E0C14u;
    SET_GPR_U32(ctx, 31, 0x2E0C1Cu);
    ctx->pc = 0x2E0C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C14u;
            // 0x2e0c18: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C1Cu; }
        if (ctx->pc != 0x2E0C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C1Cu; }
        if (ctx->pc != 0x2E0C1Cu) { return; }
    }
    ctx->pc = 0x2E0C1Cu;
label_2e0c1c:
    // 0x2e0c1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e0c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0c20: 0x0  nop
    ctx->pc = 0x2e0c20u;
    // NOP
    // 0x2e0c24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e0c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0c28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0C28u;
    {
        const bool branch_taken_0x2e0c28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C28u;
            // 0x2e0c2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c28) {
            ctx->pc = 0x2E0C34u;
            goto label_2e0c34;
        }
    }
    ctx->pc = 0x2E0C30u;
    // 0x2e0c30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0c34:
    // 0x2e0c34: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e0c34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e0c38:
    // 0x2e0c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0c3c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e0c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e0c40: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2e0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2e0c44: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e0c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e0c4c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0C4Cu;
    SET_GPR_U32(ctx, 31, 0x2E0C54u);
    ctx->pc = 0x2E0C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C4Cu;
            // 0x2e0c50: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C54u; }
        if (ctx->pc != 0x2E0C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C54u; }
        if (ctx->pc != 0x2E0C54u) { return; }
    }
    ctx->pc = 0x2E0C54u;
label_2e0c54:
    // 0x2e0c54: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e0c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e0c58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e0c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c5c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x2e0c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e0c60: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2E0C60u;
    SET_GPR_U32(ctx, 31, 0x2E0C68u);
    ctx->pc = 0x2E0C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C60u;
            // 0x2e0c64: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C68u; }
        if (ctx->pc != 0x2E0C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C68u; }
        if (ctx->pc != 0x2E0C68u) { return; }
    }
    ctx->pc = 0x2E0C68u;
label_2e0c68:
    // 0x2e0c68: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x2e0c68u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e0c6c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e0c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e0c70: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2E0C70u;
    SET_GPR_U32(ctx, 31, 0x2E0C78u);
    ctx->pc = 0x2E0C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C70u;
            // 0x2e0c74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C78u; }
        if (ctx->pc != 0x2E0C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C78u; }
        if (ctx->pc != 0x2E0C78u) { return; }
    }
    ctx->pc = 0x2E0C78u;
label_2e0c78:
    // 0x2e0c78: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2e0c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0c7c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0C7Cu;
    {
        const bool branch_taken_0x2e0c7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0c7c) {
            ctx->pc = 0x2E0C90u;
            goto label_2e0c90;
        }
    }
    ctx->pc = 0x2E0C84u;
    // 0x2e0c84: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x2e0c84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0c88: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0C88u;
    {
        const bool branch_taken_0x2e0c88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0c88) {
            ctx->pc = 0x2E0CB0u;
            goto label_2e0cb0;
        }
    }
    ctx->pc = 0x2E0C90u;
label_2e0c90:
    // 0x2e0c90: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2e0c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0c94: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x2E0C94u;
    {
        const bool branch_taken_0x2e0c94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0c94) {
            ctx->pc = 0x2E0D18u;
            goto label_2e0d18;
        }
    }
    ctx->pc = 0x2E0C9Cu;
    // 0x2e0c9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e0c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0ca0: 0x0  nop
    ctx->pc = 0x2e0ca0u;
    // NOP
    // 0x2e0ca4: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x2e0ca4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0ca8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2E0CA8u;
    {
        const bool branch_taken_0x2e0ca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0ca8) {
            ctx->pc = 0x2E0D18u;
            goto label_2e0d18;
        }
    }
    ctx->pc = 0x2E0CB0u;
label_2e0cb0:
    // 0x2e0cb0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2e0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e0cb4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2e0cb4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2e0cb8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2e0cbc: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2e0cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e0cc0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2e0cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e0cc4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E0CC4u;
    SET_GPR_U32(ctx, 31, 0x2E0CCCu);
    ctx->pc = 0x2E0CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0CC4u;
            // 0x2e0cc8: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CCCu; }
        if (ctx->pc != 0x2E0CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CCCu; }
        if (ctx->pc != 0x2E0CCCu) { return; }
    }
    ctx->pc = 0x2E0CCCu;
label_2e0ccc:
    // 0x2e0ccc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e0cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cd0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E0CD0u;
    SET_GPR_U32(ctx, 31, 0x2E0CD8u);
    ctx->pc = 0x2E0CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0CD0u;
            // 0x2e0cd4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CD8u; }
        if (ctx->pc != 0x2E0CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CD8u; }
        if (ctx->pc != 0x2E0CD8u) { return; }
    }
    ctx->pc = 0x2E0CD8u;
label_2e0cd8:
    // 0x2e0cd8: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2e0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2e0cdc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E0CDCu;
    SET_GPR_U32(ctx, 31, 0x2E0CE4u);
    ctx->pc = 0x2E0CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0CDCu;
            // 0x2e0ce0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CE4u; }
        if (ctx->pc != 0x2E0CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CE4u; }
        if (ctx->pc != 0x2E0CE4u) { return; }
    }
    ctx->pc = 0x2E0CE4u;
label_2e0ce4:
    // 0x2e0ce4: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x2e0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2e0ce8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E0CE8u;
    SET_GPR_U32(ctx, 31, 0x2E0CF0u);
    ctx->pc = 0x2E0CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0CE8u;
            // 0x2e0cec: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CF0u; }
        if (ctx->pc != 0x2E0CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CF0u; }
        if (ctx->pc != 0x2E0CF0u) { return; }
    }
    ctx->pc = 0x2E0CF0u;
label_2e0cf0:
    // 0x2e0cf0: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2e0cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e0cf4: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x2e0cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2e0cf8: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x2e0cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x2e0cfc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e0cfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e0d00: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2e0d00u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e0d04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e0d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e0d08: 0xa6a30052  sh          $v1, 0x52($s5)
    ctx->pc = 0x2e0d08u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0d0c: 0xa6a50056  sh          $a1, 0x56($s5)
    ctx->pc = 0x2e0d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 86), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e0d10: 0xa6a50050  sh          $a1, 0x50($s5)
    ctx->pc = 0x2e0d10u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e0d14: 0x0  nop
    ctx->pc = 0x2e0d14u;
    // NOP
label_2e0d18:
    // 0x2e0d18: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2e0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e0d1c: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x2e0d1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e0d20: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x2e0d20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x2e0d24: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2e0d24u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2e0d28: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2e0d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e0d2c: 0x23e182a  slt         $v1, $s1, $fp
    ctx->pc = 0x2e0d2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2e0d30: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2E0D30u;
    {
        const bool branch_taken_0x2e0d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0D30u;
            // 0x2e0d34: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d30) {
            ctx->pc = 0x2E0BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0bd8;
        }
    }
    ctx->pc = 0x2E0D38u;
    // 0x2e0d38: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2e0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e0d3c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e0d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0d40: 0x5064001d  beql        $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E0D40u;
    {
        const bool branch_taken_0x2e0d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e0d40) {
            ctx->pc = 0x2E0D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0D40u;
            // 0x2e0d44: 0xc6a10044  lwc1        $f1, 0x44($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DB8u;
            goto label_2e0db8;
        }
    }
    ctx->pc = 0x2E0D48u;
    // 0x2e0d48: 0x96a40050  lhu         $a0, 0x50($s5)
    ctx->pc = 0x2e0d48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2e0d4c: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x2e0d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2e0d50: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x2e0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x2e0d54: 0x96a30052  lhu         $v1, 0x52($s5)
    ctx->pc = 0x2e0d54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 82)));
    // 0x2e0d58: 0x38840002  xori        $a0, $a0, 0x2
    ctx->pc = 0x2e0d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x2e0d5c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2e0d5cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e0d60: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e0d64: 0x648823  subu        $s1, $v1, $a0
    ctx->pc = 0x2e0d64u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e0d68: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x2e0d68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2e0d6c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E0D6Cu;
    SET_GPR_U32(ctx, 31, 0x2E0D74u);
    ctx->pc = 0x2E0D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0D6Cu;
            // 0x2e0d70: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0D74u; }
        if (ctx->pc != 0x2E0D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0D74u; }
        if (ctx->pc != 0x2E0D74u) { return; }
    }
    ctx->pc = 0x2E0D74u;
label_2e0d74:
    // 0x2e0d74: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0D74u;
    {
        const bool branch_taken_0x2e0d74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0D74u;
            // 0x2e0d78: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d74) {
            ctx->pc = 0x2E0DA8u;
            goto label_2e0da8;
        }
    }
    ctx->pc = 0x2E0D7Cu;
label_2e0d7c:
    // 0x2e0d7c: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x2e0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x2e0d80: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x2e0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e0d84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e0d88: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e0d8c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e0d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0d90: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E0D90u;
    SET_GPR_U32(ctx, 31, 0x2E0D98u);
    ctx->pc = 0x2E0D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0D90u;
            // 0x2e0d94: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0D98u; }
        if (ctx->pc != 0x2E0D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0D98u; }
        if (ctx->pc != 0x2E0D98u) { return; }
    }
    ctx->pc = 0x2E0D98u;
label_2e0d98:
    // 0x2e0d98: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2e0d98u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2e0d9c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e0d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e0da0: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E0DA0u;
    {
        const bool branch_taken_0x2e0da0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0DA0u;
            // 0x2e0da4: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0da0) {
            ctx->pc = 0x2E0D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0d7c;
        }
    }
    ctx->pc = 0x2E0DA8u;
label_2e0da8:
    // 0x2e0da8: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x2e0da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0dac: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2e0dacu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2e0db0: 0xe6a00044  swc1        $f0, 0x44($s5)
    ctx->pc = 0x2e0db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x2e0db4: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x2e0db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e0db8:
    // 0x2e0db8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0dbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e0dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0dc0: 0x0  nop
    ctx->pc = 0x2e0dc0u;
    // NOP
    // 0x2e0dc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e0dc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0dc8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0DC8u;
    {
        const bool branch_taken_0x2e0dc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0dc8) {
            ctx->pc = 0x2E0DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0DC8u;
            // 0x2e0dcc: 0xa6a00056  sh          $zero, 0x56($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DE8u;
            goto label_2e0de8;
        }
    }
    ctx->pc = 0x2E0DD0u;
    // 0x2e0dd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e0dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0dd4: 0x0  nop
    ctx->pc = 0x2e0dd4u;
    // NOP
    // 0x2e0dd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e0dd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0ddc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0DDCu;
    {
        const bool branch_taken_0x2e0ddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0ddc) {
            ctx->pc = 0x2E0DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0DDCu;
            // 0x2e0de0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DF0u;
            goto label_2e0df0;
        }
    }
    ctx->pc = 0x2E0DE4u;
    // 0x2e0de4: 0xa6a00056  sh          $zero, 0x56($s5)
    ctx->pc = 0x2e0de4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 86), (uint16_t)GPR_U32(ctx, 0));
label_2e0de8:
    // 0x2e0de8: 0xa6a00050  sh          $zero, 0x50($s5)
    ctx->pc = 0x2e0de8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 80), (uint16_t)GPR_U32(ctx, 0));
label_2e0dec:
    // 0x2e0dec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e0decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e0df0:
    // 0x2e0df0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e0df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e0df4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e0df4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0df8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e0df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e0dfc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e0dfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e0e00: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0e04: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e0e04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e0e08: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e0e08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0e0c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e0e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0e10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e0e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0e14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e0e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0e18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e0e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0e1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e0e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0e20: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E20u;
            // 0x2e0e24: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0E28u;
    // 0x2e0e28: 0x0  nop
    ctx->pc = 0x2e0e28u;
    // NOP
    // 0x2e0e2c: 0x0  nop
    ctx->pc = 0x2e0e2cu;
    // NOP
}
