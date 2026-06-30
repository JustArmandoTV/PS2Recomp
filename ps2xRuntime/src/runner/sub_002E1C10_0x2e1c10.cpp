#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E1C10
// Address: 0x2e1c10 - 0x2e2130
void sub_002E1C10_0x2e1c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1C10_0x2e1c10");
#endif

    switch (ctx->pc) {
        case 0x2e1c84u: goto label_2e1c84;
        case 0x2e1ca0u: goto label_2e1ca0;
        case 0x2e1cbcu: goto label_2e1cbc;
        case 0x2e1cd0u: goto label_2e1cd0;
        case 0x2e1d00u: goto label_2e1d00;
        case 0x2e1d30u: goto label_2e1d30;
        case 0x2e1d3cu: goto label_2e1d3c;
        case 0x2e1d54u: goto label_2e1d54;
        case 0x2e1d8cu: goto label_2e1d8c;
        case 0x2e1dc4u: goto label_2e1dc4;
        case 0x2e1dd0u: goto label_2e1dd0;
        case 0x2e1df8u: goto label_2e1df8;
        case 0x2e1e04u: goto label_2e1e04;
        case 0x2e1e1cu: goto label_2e1e1c;
        case 0x2e1e4cu: goto label_2e1e4c;
        case 0x2e1e5cu: goto label_2e1e5c;
        case 0x2e1eacu: goto label_2e1eac;
        case 0x2e1eb8u: goto label_2e1eb8;
        case 0x2e1ec4u: goto label_2e1ec4;
        case 0x2e1f00u: goto label_2e1f00;
        case 0x2e1f1cu: goto label_2e1f1c;
        case 0x2e1f54u: goto label_2e1f54;
        case 0x2e1f60u: goto label_2e1f60;
        case 0x2e1f7cu: goto label_2e1f7c;
        case 0x2e1fb0u: goto label_2e1fb0;
        case 0x2e2004u: goto label_2e2004;
        case 0x2e2058u: goto label_2e2058;
        case 0x2e2064u: goto label_2e2064;
        case 0x2e2070u: goto label_2e2070;
        default: break;
    }

    ctx->pc = 0x2e1c10u;

    // 0x2e1c10: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2e1c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2e1c14: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x2e1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x2e1c18: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e1c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e1c1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e1c20: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e1c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2e1c24: 0x346323f0  ori         $v1, $v1, 0x23F0
    ctx->pc = 0x2e1c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9200);
    // 0x2e1c28: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e1c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e1c2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e1c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e1c30: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e1c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e1c34: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e1c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e1c38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e1c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e1c3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e1c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e1c40: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2e1c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1c44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e1c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e1c48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e1c48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1c4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e1c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e1c50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e1c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1c54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e1c58: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e1c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1c5c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e1c5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e1c60: 0xafa5011c  sw          $a1, 0x11C($sp)
    ctx->pc = 0x2e1c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
    // 0x2e1c64: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2e1c64u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2e1c68: 0xafa70110  sw          $a3, 0x110($sp)
    ctx->pc = 0x2e1c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 7));
    // 0x2e1c6c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e1c6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e1c70: 0xafa9010c  sw          $t1, 0x10C($sp)
    ctx->pc = 0x2e1c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 9));
    // 0x2e1c74: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x2e1c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1c78: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e1c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1c7c: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E1C7Cu;
    SET_GPR_U32(ctx, 31, 0x2E1C84u);
    ctx->pc = 0x2E1C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1C7Cu;
            // 0x2e1c80: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1C84u; }
        if (ctx->pc != 0x2E1C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1C84u; }
        if (ctx->pc != 0x2E1C84u) { return; }
    }
    ctx->pc = 0x2E1C84u;
label_2e1c84:
    // 0x2e1c84: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2e1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2e1c88: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2e1c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e1c8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e1c90: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e1c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1c94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e1c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e1c98: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E1C98u;
    SET_GPR_U32(ctx, 31, 0x2E1CA0u);
    ctx->pc = 0x2E1C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1C98u;
            // 0x2e1c9c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1CA0u; }
        if (ctx->pc != 0x2E1CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1CA0u; }
        if (ctx->pc != 0x2E1CA0u) { return; }
    }
    ctx->pc = 0x2E1CA0u;
label_2e1ca0:
    // 0x2e1ca0: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x2e1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2e1ca4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e1ca4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e1ca8: 0x1060010f  beqz        $v1, . + 4 + (0x10F << 2)
    ctx->pc = 0x2E1CA8u;
    {
        const bool branch_taken_0x2e1ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1CA8u;
            // 0x2e1cac: 0xa6600056  sh          $zero, 0x56($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ca8) {
            ctx->pc = 0x2E20E8u;
            goto label_2e20e8;
        }
    }
    ctx->pc = 0x2E1CB0u;
    // 0x2e1cb0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2e1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e1cb4: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x2E1CB4u;
    SET_GPR_U32(ctx, 31, 0x2E1CBCu);
    ctx->pc = 0x2E1CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1CB4u;
            // 0x2e1cb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1CBCu; }
        if (ctx->pc != 0x2E1CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1CBCu; }
        if (ctx->pc != 0x2E1CBCu) { return; }
    }
    ctx->pc = 0x2E1CBCu;
label_2e1cbc:
    // 0x2e1cbc: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2e1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e1cc0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2e1cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2e1cc4: 0xe7b6015c  swc1        $f22, 0x15C($sp)
    ctx->pc = 0x2e1cc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2e1cc8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e1cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e1ccc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2e1cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2e1cd0:
    // 0x2e1cd0: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x2e1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2e1cd4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2e1cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e1cd8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2e1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e1cdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e1ce0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2e1ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2e1ce4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e1ce4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1ce8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e1cec: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x2e1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2e1cf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1cf4: 0x8c57000c  lw          $s7, 0xC($v0)
    ctx->pc = 0x2e1cf4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1cf8: 0xc0527c0  jal         func_149F00
    ctx->pc = 0x2E1CF8u;
    SET_GPR_U32(ctx, 31, 0x2E1D00u);
    ctx->pc = 0x2E1CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1CF8u;
            // 0x2e1cfc: 0x26e4000c  addiu       $a0, $s7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149F00u;
    if (runtime->hasFunction(0x149F00u)) {
        auto targetFn = runtime->lookupFunction(0x149F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D00u; }
        if (ctx->pc != 0x2E1D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149F00_0x149f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D00u; }
        if (ctx->pc != 0x2E1D00u) { return; }
    }
    ctx->pc = 0x2E1D00u;
label_2e1d00:
    // 0x2e1d00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1D00u;
    {
        const bool branch_taken_0x2e1d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d00) {
            ctx->pc = 0x2E1D18u;
            goto label_2e1d18;
        }
    }
    ctx->pc = 0x2E1D08u;
    // 0x2e1d08: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2e1d08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e1d0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1d10: 0x106400e3  beq         $v1, $a0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x2E1D10u;
    {
        const bool branch_taken_0x2e1d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e1d10) {
            ctx->pc = 0x2E20A0u;
            goto label_2e20a0;
        }
    }
    ctx->pc = 0x2E1D18u;
label_2e1d18:
    // 0x2e1d18: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2e1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e1d1c: 0x8ef00004  lw          $s0, 0x4($s7)
    ctx->pc = 0x2e1d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2e1d20: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e1d20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d24: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2e1d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x2e1d28: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x2e1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2e1d2c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2e1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_2e1d30:
    // 0x2e1d30: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2e1d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e1d34: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x2E1D34u;
    SET_GPR_U32(ctx, 31, 0x2E1D3Cu);
    ctx->pc = 0x2E1D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D34u;
            // 0x2e1d38: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D3Cu; }
        if (ctx->pc != 0x2E1D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D3Cu; }
        if (ctx->pc != 0x2E1D3Cu) { return; }
    }
    ctx->pc = 0x2E1D3Cu;
label_2e1d3c:
    // 0x2e1d3c: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x2E1D3Cu;
    {
        const bool branch_taken_0x2e1d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d3c) {
            ctx->pc = 0x2E2070u;
            goto label_2e2070;
        }
    }
    ctx->pc = 0x2E1D44u;
    // 0x2e1d44: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2e1d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2e1d48: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2e1d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e1d4c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E1D4Cu;
    SET_GPR_U32(ctx, 31, 0x2E1D54u);
    ctx->pc = 0x2E1D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D4Cu;
            // 0x2e1d50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D54u; }
        if (ctx->pc != 0x2E1D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D54u; }
        if (ctx->pc != 0x2E1D54u) { return; }
    }
    ctx->pc = 0x2E1D54u;
label_2e1d54:
    // 0x2e1d54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1d58: 0x1222001f  beq         $s1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E1D58u;
    {
        const bool branch_taken_0x2e1d58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1d58) {
            ctx->pc = 0x2E1DD8u;
            goto label_2e1dd8;
        }
    }
    ctx->pc = 0x2E1D60u;
    // 0x2e1d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1d64: 0x1222001c  beq         $s1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E1D64u;
    {
        const bool branch_taken_0x2e1d64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1d64) {
            ctx->pc = 0x2E1DD8u;
            goto label_2e1dd8;
        }
    }
    ctx->pc = 0x2E1D6Cu;
    // 0x2e1d6c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1D6Cu;
    {
        const bool branch_taken_0x2e1d6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d6c) {
            ctx->pc = 0x2E1D80u;
            goto label_2e1d80;
        }
    }
    ctx->pc = 0x2E1D74u;
    // 0x2e1d74: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2E1D74u;
    {
        const bool branch_taken_0x2e1d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d74) {
            ctx->pc = 0x2E1E10u;
            goto label_2e1e10;
        }
    }
    ctx->pc = 0x2E1D7Cu;
    // 0x2e1d7c: 0x0  nop
    ctx->pc = 0x2e1d7cu;
    // NOP
label_2e1d80:
    // 0x2e1d80: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2e1d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2e1d84: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2E1D84u;
    SET_GPR_U32(ctx, 31, 0x2E1D8Cu);
    ctx->pc = 0x2E1D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D84u;
            // 0x2e1d88: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D8Cu; }
        if (ctx->pc != 0x2E1D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D8Cu; }
        if (ctx->pc != 0x2E1D8Cu) { return; }
    }
    ctx->pc = 0x2E1D8Cu;
label_2e1d8c:
    // 0x2e1d8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e1d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1d90: 0x0  nop
    ctx->pc = 0x2e1d90u;
    // NOP
    // 0x2e1d94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1d98: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1D98u;
    {
        const bool branch_taken_0x2e1d98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D98u;
            // 0x2e1d9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d98) {
            ctx->pc = 0x2E1DA4u;
            goto label_2e1da4;
        }
    }
    ctx->pc = 0x2E1DA0u;
    // 0x2e1da0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1da4:
    // 0x2e1da4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2e1da4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1da8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e1dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1db0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e1db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1db4: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2e1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e1db8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1dbc: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E1DBCu;
    SET_GPR_U32(ctx, 31, 0x2E1DC4u);
    ctx->pc = 0x2E1DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1DBCu;
            // 0x2e1dc0: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DC4u; }
        if (ctx->pc != 0x2E1DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DC4u; }
        if (ctx->pc != 0x2E1DC4u) { return; }
    }
    ctx->pc = 0x2E1DC4u;
label_2e1dc4:
    // 0x2e1dc4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e1dc8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E1DC8u;
    SET_GPR_U32(ctx, 31, 0x2E1DD0u);
    ctx->pc = 0x2E1DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1DC8u;
            // 0x2e1dcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DD0u; }
        if (ctx->pc != 0x2E1DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DD0u; }
        if (ctx->pc != 0x2E1DD0u) { return; }
    }
    ctx->pc = 0x2E1DD0u;
label_2e1dd0:
    // 0x2e1dd0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E1DD0u;
    {
        const bool branch_taken_0x2e1dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1DD0u;
            // 0x2e1dd4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1dd0) {
            ctx->pc = 0x2E1E20u;
            goto label_2e1e20;
        }
    }
    ctx->pc = 0x2E1DD8u;
label_2e1dd8:
    // 0x2e1dd8: 0x2634ffff  addiu       $s4, $s1, -0x1
    ctx->pc = 0x2e1dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e1ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1de0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e1de4: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2e1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e1de8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e1de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1dec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1df0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E1DF0u;
    SET_GPR_U32(ctx, 31, 0x2E1DF8u);
    ctx->pc = 0x2E1DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1DF0u;
            // 0x2e1df4: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DF8u; }
        if (ctx->pc != 0x2E1DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DF8u; }
        if (ctx->pc != 0x2E1DF8u) { return; }
    }
    ctx->pc = 0x2E1DF8u;
label_2e1df8:
    // 0x2e1df8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e1dfc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E1DFCu;
    SET_GPR_U32(ctx, 31, 0x2E1E04u);
    ctx->pc = 0x2E1E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1DFCu;
            // 0x2e1e00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E04u; }
        if (ctx->pc != 0x2E1E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E04u; }
        if (ctx->pc != 0x2E1E04u) { return; }
    }
    ctx->pc = 0x2E1E04u;
label_2e1e04:
    // 0x2e1e04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1E04u;
    {
        const bool branch_taken_0x2e1e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E04u;
            // 0x2e1e08: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e04) {
            ctx->pc = 0x2E1E20u;
            goto label_2e1e20;
        }
    }
    ctx->pc = 0x2E1E0Cu;
    // 0x2e1e0c: 0x0  nop
    ctx->pc = 0x2e1e0cu;
    // NOP
label_2e1e10:
    // 0x2e1e10: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e1e14: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E1E14u;
    SET_GPR_U32(ctx, 31, 0x2E1E1Cu);
    ctx->pc = 0x2E1E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E14u;
            // 0x2e1e18: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E1Cu; }
        if (ctx->pc != 0x2E1E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E1Cu; }
        if (ctx->pc != 0x2E1E1Cu) { return; }
    }
    ctx->pc = 0x2E1E1Cu;
label_2e1e1c:
    // 0x2e1e1c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2e1e1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1e20:
    // 0x2e1e20: 0x3a820002  xori        $v0, $s4, 0x2
    ctx->pc = 0x2e1e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
    // 0x2e1e24: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2e1e24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1e28: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e1e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e1e2c: 0x3a820001  xori        $v0, $s4, 0x1
    ctx->pc = 0x2e1e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
    // 0x2e1e30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e1e34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1e38: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e1e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e1e3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1e40: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e1e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1e44: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2E1E44u;
    SET_GPR_U32(ctx, 31, 0x2E1E4Cu);
    ctx->pc = 0x2E1E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E44u;
            // 0x2e1e48: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E4Cu; }
        if (ctx->pc != 0x2E1E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E4Cu; }
        if (ctx->pc != 0x2E1E4Cu) { return; }
    }
    ctx->pc = 0x2E1E4Cu;
label_2e1e4c:
    // 0x2e1e4c: 0x46000582  mul.s       $f22, $f0, $f0
    ctx->pc = 0x2e1e4cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e1e50: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e1e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e1e54: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2E1E54u;
    SET_GPR_U32(ctx, 31, 0x2E1E5Cu);
    ctx->pc = 0x2E1E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E54u;
            // 0x2e1e58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E5Cu; }
        if (ctx->pc != 0x2E1E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E5Cu; }
        if (ctx->pc != 0x2E1E5Cu) { return; }
    }
    ctx->pc = 0x2E1E5Cu;
label_2e1e5c:
    // 0x2e1e5c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2e1e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1e60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1E60u;
    {
        const bool branch_taken_0x2e1e60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1e60) {
            ctx->pc = 0x2E1E78u;
            goto label_2e1e78;
        }
    }
    ctx->pc = 0x2E1E68u;
    // 0x2e1e68: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x2e1e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1e6c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2E1E6Cu;
    {
        const bool branch_taken_0x2e1e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1e6c) {
            ctx->pc = 0x2E1E98u;
            goto label_2e1e98;
        }
    }
    ctx->pc = 0x2E1E74u;
    // 0x2e1e74: 0x0  nop
    ctx->pc = 0x2e1e74u;
    // NOP
label_2e1e78:
    // 0x2e1e78: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x2e1e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1e7c: 0x4500007c  bc1f        . + 4 + (0x7C << 2)
    ctx->pc = 0x2E1E7Cu;
    {
        const bool branch_taken_0x2e1e7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1e7c) {
            ctx->pc = 0x2E2070u;
            goto label_2e2070;
        }
    }
    ctx->pc = 0x2E1E84u;
    // 0x2e1e84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e1e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1e88: 0x0  nop
    ctx->pc = 0x2e1e88u;
    // NOP
    // 0x2e1e8c: 0x46160832  c.eq.s      $f1, $f22
    ctx->pc = 0x2e1e8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1e90: 0x45000077  bc1f        . + 4 + (0x77 << 2)
    ctx->pc = 0x2E1E90u;
    {
        const bool branch_taken_0x2e1e90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1e90) {
            ctx->pc = 0x2E2070u;
            goto label_2e2070;
        }
    }
    ctx->pc = 0x2E1E98u;
label_2e1e98:
    // 0x2e1e98: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2e1e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e1e9c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e1e9cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e1ea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e1ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ea4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E1EA4u;
    SET_GPR_U32(ctx, 31, 0x2E1EACu);
    ctx->pc = 0x2E1EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1EA4u;
            // 0x2e1ea8: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1EACu; }
        if (ctx->pc != 0x2E1EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1EACu; }
        if (ctx->pc != 0x2E1EACu) { return; }
    }
    ctx->pc = 0x2E1EACu;
label_2e1eac:
    // 0x2e1eac: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2e1eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2e1eb0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E1EB0u;
    SET_GPR_U32(ctx, 31, 0x2E1EB8u);
    ctx->pc = 0x2E1EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1EB0u;
            // 0x2e1eb4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1EB8u; }
        if (ctx->pc != 0x2E1EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1EB8u; }
        if (ctx->pc != 0x2E1EB8u) { return; }
    }
    ctx->pc = 0x2E1EB8u;
label_2e1eb8:
    // 0x2e1eb8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e1ebc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E1EBCu;
    SET_GPR_U32(ctx, 31, 0x2E1EC4u);
    ctx->pc = 0x2E1EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1EBCu;
            // 0x2e1ec0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1EC4u; }
        if (ctx->pc != 0x2E1EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1EC4u; }
        if (ctx->pc != 0x2E1EC4u) { return; }
    }
    ctx->pc = 0x2E1EC4u;
label_2e1ec4:
    // 0x2e1ec4: 0x3a820002  xori        $v0, $s4, 0x2
    ctx->pc = 0x2e1ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
    // 0x2e1ec8: 0xae770040  sw          $s7, 0x40($s3)
    ctx->pc = 0x2e1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 23));
    // 0x2e1ecc: 0x2c5e0001  sltiu       $fp, $v0, 0x1
    ctx->pc = 0x2e1eccu;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1ed0: 0x2de1021  addu        $v0, $s6, $fp
    ctx->pc = 0x2e1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x2e1ed4: 0xa6620052  sh          $v0, 0x52($s3)
    ctx->pc = 0x2e1ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1ed8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1edc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e1edcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1ee0: 0xa6620054  sh          $v0, 0x54($s3)
    ctx->pc = 0x2e1ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1ee4: 0xa6740056  sh          $s4, 0x56($s3)
    ctx->pc = 0x2e1ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 20));
    // 0x2e1ee8: 0xa6740050  sh          $s4, 0x50($s3)
    ctx->pc = 0x2e1ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 20));
    // 0x2e1eec: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1ef0: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x2e1ef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e1ef4: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x2e1ef4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e1ef8: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x2e1ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
    // 0x2e1efc: 0x15a100  sll         $s4, $s5, 4
    ctx->pc = 0x2e1efcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_2e1f00:
    // 0x2e1f00: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2e1f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1f04: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x2e1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e1f08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1f0c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e1f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e1f10: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e1f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e1f14: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E1F14u;
    SET_GPR_U32(ctx, 31, 0x2E1F1Cu);
    ctx->pc = 0x2E1F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F14u;
            // 0x2e1f18: 0x742021  addu        $a0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F1Cu; }
        if (ctx->pc != 0x2E1F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F1Cu; }
        if (ctx->pc != 0x2E1F1Cu) { return; }
    }
    ctx->pc = 0x2E1F1Cu;
label_2e1f1c:
    // 0x2e1f1c: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x2e1f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1f20: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2e1f20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e1f24: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x2e1f24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x2e1f28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e1f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e1f2c: 0x16a0fff4  bnez        $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E1F2Cu;
    {
        const bool branch_taken_0x2e1f2c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F2Cu;
            // 0x2e1f30: 0xe6600048  swc1        $f0, 0x48($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f2c) {
            ctx->pc = 0x2E1F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1f00;
        }
    }
    ctx->pc = 0x2E1F34u;
    // 0x2e1f34: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1f38: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2e1f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e1f3c: 0x96630052  lhu         $v1, 0x52($s3)
    ctx->pc = 0x2e1f3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
    // 0x2e1f40: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e1f44: 0x7ea023  subu        $s4, $v1, $fp
    ctx->pc = 0x2e1f44u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2e1f48: 0x14a900  sll         $s5, $s4, 4
    ctx->pc = 0x2e1f48u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2e1f4c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E1F4Cu;
    SET_GPR_U32(ctx, 31, 0x2E1F54u);
    ctx->pc = 0x2E1F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F4Cu;
            // 0x2e1f50: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F54u; }
        if (ctx->pc != 0x2E1F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F54u; }
        if (ctx->pc != 0x2E1F54u) { return; }
    }
    ctx->pc = 0x2E1F54u;
label_2e1f54:
    // 0x2e1f54: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2E1F54u;
    {
        const bool branch_taken_0x2e1f54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F54u;
            // 0x2e1f58: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f54) {
            ctx->pc = 0x2E1F90u;
            goto label_2e1f90;
        }
    }
    ctx->pc = 0x2E1F5Cu;
    // 0x2e1f5c: 0x0  nop
    ctx->pc = 0x2e1f5cu;
    // NOP
label_2e1f60:
    // 0x2e1f60: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2e1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1f64: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2e1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e1f68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1f6c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e1f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e1f70: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e1f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e1f74: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E1F74u;
    SET_GPR_U32(ctx, 31, 0x2E1F7Cu);
    ctx->pc = 0x2E1F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F74u;
            // 0x2e1f78: 0x752021  addu        $a0, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F7Cu; }
        if (ctx->pc != 0x2E1F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F7Cu; }
        if (ctx->pc != 0x2E1F7Cu) { return; }
    }
    ctx->pc = 0x2E1F7Cu;
label_2e1f7c:
    // 0x2e1f7c: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2e1f7cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2e1f80: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e1f80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e1f84: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E1F84u;
    {
        const bool branch_taken_0x2e1f84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F84u;
            // 0x2e1f88: 0x26b5fff0  addiu       $s5, $s5, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f84) {
            ctx->pc = 0x2E1F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1f60;
        }
    }
    ctx->pc = 0x2E1F8Cu;
    // 0x2e1f8c: 0x0  nop
    ctx->pc = 0x2e1f8cu;
    // NOP
label_2e1f90:
    // 0x2e1f90: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x2e1f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2e1f94: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x2e1f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1f98: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2e1f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e1f9c: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x2e1f9cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[0];
    // 0x2e1fa0: 0x0  nop
    ctx->pc = 0x2e1fa0u;
    // NOP
    // 0x2e1fa4: 0x0  nop
    ctx->pc = 0x2e1fa4u;
    // NOP
    // 0x2e1fa8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E1FA8u;
    SET_GPR_U32(ctx, 31, 0x2E1FB0u);
    ctx->pc = 0x2E1FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1FA8u;
            // 0x2e1fac: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1FB0u; }
        if (ctx->pc != 0x2E1FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1FB0u; }
        if (ctx->pc != 0x2E1FB0u) { return; }
    }
    ctx->pc = 0x2E1FB0u;
label_2e1fb0:
    // 0x2e1fb0: 0xc66c0044  lwc1        $f12, 0x44($s3)
    ctx->pc = 0x2e1fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e1fb4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1fb8: 0x96e5001e  lhu         $a1, 0x1E($s7)
    ctx->pc = 0x2e1fb8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 30)));
    // 0x2e1fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1fc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1fc4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e1fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1fc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1FC8u;
    {
        const bool branch_taken_0x2e1fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1FC8u;
            // 0x2e1fcc: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1fc8) {
            ctx->pc = 0x2E1FD4u;
            goto label_2e1fd4;
        }
    }
    ctx->pc = 0x2E1FD0u;
    // 0x2e1fd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e1fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1fd4:
    // 0x2e1fd4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2e1fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e1fd8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2e1fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e1fdc: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E1FDCu;
    {
        const bool branch_taken_0x2e1fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1fdc) {
            ctx->pc = 0x2E2070u;
            goto label_2e2070;
        }
    }
    ctx->pc = 0x2E1FE4u;
    // 0x2e1fe4: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1fe8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2e1fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e1fec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e1fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ff0: 0x9448001c  lhu         $t0, 0x1C($v0)
    ctx->pc = 0x2e1ff0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e1ff4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2e1ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e1ff8: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2e1ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e1ffc: 0xc0bc2a8  jal         func_2F0AA0
    ctx->pc = 0x2E1FFCu;
    SET_GPR_U32(ctx, 31, 0x2E2004u);
    ctx->pc = 0x2E2000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1FFCu;
            // 0x2e2000: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0AA0u;
    if (runtime->hasFunction(0x2F0AA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F0AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2004u; }
        if (ctx->pc != 0x2E2004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0AA0_0x2f0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2004u; }
        if (ctx->pc != 0x2E2004u) { return; }
    }
    ctx->pc = 0x2E2004u;
label_2e2004:
    // 0x2e2004: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e2004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e2008: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e200c: 0x0  nop
    ctx->pc = 0x2e200cu;
    // NOP
    // 0x2e2010: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e2010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2014: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2014u;
    {
        const bool branch_taken_0x2e2014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2014) {
            ctx->pc = 0x2E2018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2014u;
            // 0x2e2018: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E202Cu;
            goto label_2e202c;
        }
    }
    ctx->pc = 0x2E201Cu;
    // 0x2e201c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e201cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e2020: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e2020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e2024: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2024u;
    {
        const bool branch_taken_0x2e2024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2024u;
            // 0x2e2028: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2024) {
            ctx->pc = 0x2E2044u;
            goto label_2e2044;
        }
    }
    ctx->pc = 0x2E202Cu;
label_2e202c:
    // 0x2e202c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e2030: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e2034: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e2034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e2038: 0x0  nop
    ctx->pc = 0x2e2038u;
    // NOP
    // 0x2e203c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e203cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2040: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2e2040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e2044:
    // 0x2e2044: 0xa6630052  sh          $v1, 0x52($s3)
    ctx->pc = 0x2e2044u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2048: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e2048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e204c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2e204cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e2050: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E2050u;
    SET_GPR_U32(ctx, 31, 0x2E2058u);
    ctx->pc = 0x2E2054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2050u;
            // 0x2e2054: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2058u; }
        if (ctx->pc != 0x2E2058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2058u; }
        if (ctx->pc != 0x2E2058u) { return; }
    }
    ctx->pc = 0x2E2058u;
label_2e2058:
    // 0x2e2058: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e2058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e205c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E205Cu;
    SET_GPR_U32(ctx, 31, 0x2E2064u);
    ctx->pc = 0x2E2060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E205Cu;
            // 0x2e2060: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2064u; }
        if (ctx->pc != 0x2E2064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2064u; }
        if (ctx->pc != 0x2E2064u) { return; }
    }
    ctx->pc = 0x2E2064u;
label_2e2064:
    // 0x2e2064: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x2e2064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2e2068: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E2068u;
    SET_GPR_U32(ctx, 31, 0x2E2070u);
    ctx->pc = 0x2E206Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2068u;
            // 0x2e206c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2070u; }
        if (ctx->pc != 0x2E2070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2070u; }
        if (ctx->pc != 0x2E2070u) { return; }
    }
    ctx->pc = 0x2E2070u;
label_2e2070:
    // 0x2e2070: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2e2070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e2074: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2e2074u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2e2078: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x2e2078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2e207c: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2e207cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x2e2080: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e2080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e2084: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e2084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e2088: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x2e2088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x2e208c: 0x96e3001c  lhu         $v1, 0x1C($s7)
    ctx->pc = 0x2e208cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x2e2090: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e2094: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x2e2094u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2098: 0x1460ff25  bnez        $v1, . + 4 + (-0xDB << 2)
    ctx->pc = 0x2E2098u;
    {
        const bool branch_taken_0x2e2098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E209Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2098u;
            // 0x2e209c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2098) {
            ctx->pc = 0x2E1D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1d30;
        }
    }
    ctx->pc = 0x2E20A0u;
label_2e20a0:
    // 0x2e20a0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e20a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e20a8: 0x461ff09  bgez        $v1, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x2E20A8u;
    {
        const bool branch_taken_0x2e20a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2E20ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E20A8u;
            // 0x2e20ac: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e20a8) {
            ctx->pc = 0x2E1CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1cd0;
        }
    }
    ctx->pc = 0x2E20B0u;
    // 0x2e20b0: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x2e20b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e20b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e20b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e20b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e20b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e20bc: 0x0  nop
    ctx->pc = 0x2e20bcu;
    // NOP
    // 0x2e20c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e20c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e20c4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2E20C4u;
    {
        const bool branch_taken_0x2e20c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e20c4) {
            ctx->pc = 0x2E20C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E20C4u;
            // 0x2e20c8: 0xa6600056  sh          $zero, 0x56($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E20E4u;
            goto label_2e20e4;
        }
    }
    ctx->pc = 0x2E20CCu;
    // 0x2e20cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e20ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e20d0: 0x0  nop
    ctx->pc = 0x2e20d0u;
    // NOP
    // 0x2e20d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e20d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e20d8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2E20D8u;
    {
        const bool branch_taken_0x2e20d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e20d8) {
            ctx->pc = 0x2E20DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E20D8u;
            // 0x2e20dc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E20ECu;
            goto label_2e20ec;
        }
    }
    ctx->pc = 0x2E20E0u;
    // 0x2e20e0: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x2e20e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
label_2e20e4:
    // 0x2e20e4: 0xa6600050  sh          $zero, 0x50($s3)
    ctx->pc = 0x2e20e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
label_2e20e8:
    // 0x2e20e8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e20e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e20ec:
    // 0x2e20ec: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e20f0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e20f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e20f4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e20f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e20f8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e20f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e20fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e20fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e2100: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e2100u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2104: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e2104u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2108: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e2108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e210c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e210cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e2110: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e2110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2114: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e2114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e2118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e211c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E211Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E211Cu;
            // 0x2e2120: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2124u;
    // 0x2e2124: 0x0  nop
    ctx->pc = 0x2e2124u;
    // NOP
    // 0x2e2128: 0x0  nop
    ctx->pc = 0x2e2128u;
    // NOP
    // 0x2e212c: 0x0  nop
    ctx->pc = 0x2e212cu;
    // NOP
}
