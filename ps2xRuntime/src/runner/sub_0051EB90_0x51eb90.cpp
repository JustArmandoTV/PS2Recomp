#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051EB90
// Address: 0x51eb90 - 0x51ed40
void sub_0051EB90_0x51eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051EB90_0x51eb90");
#endif

    switch (ctx->pc) {
        case 0x51eb90u: goto label_51eb90;
        case 0x51eb94u: goto label_51eb94;
        case 0x51eb98u: goto label_51eb98;
        case 0x51eb9cu: goto label_51eb9c;
        case 0x51eba0u: goto label_51eba0;
        case 0x51eba4u: goto label_51eba4;
        case 0x51eba8u: goto label_51eba8;
        case 0x51ebacu: goto label_51ebac;
        case 0x51ebb0u: goto label_51ebb0;
        case 0x51ebb4u: goto label_51ebb4;
        case 0x51ebb8u: goto label_51ebb8;
        case 0x51ebbcu: goto label_51ebbc;
        case 0x51ebc0u: goto label_51ebc0;
        case 0x51ebc4u: goto label_51ebc4;
        case 0x51ebc8u: goto label_51ebc8;
        case 0x51ebccu: goto label_51ebcc;
        case 0x51ebd0u: goto label_51ebd0;
        case 0x51ebd4u: goto label_51ebd4;
        case 0x51ebd8u: goto label_51ebd8;
        case 0x51ebdcu: goto label_51ebdc;
        case 0x51ebe0u: goto label_51ebe0;
        case 0x51ebe4u: goto label_51ebe4;
        case 0x51ebe8u: goto label_51ebe8;
        case 0x51ebecu: goto label_51ebec;
        case 0x51ebf0u: goto label_51ebf0;
        case 0x51ebf4u: goto label_51ebf4;
        case 0x51ebf8u: goto label_51ebf8;
        case 0x51ebfcu: goto label_51ebfc;
        case 0x51ec00u: goto label_51ec00;
        case 0x51ec04u: goto label_51ec04;
        case 0x51ec08u: goto label_51ec08;
        case 0x51ec0cu: goto label_51ec0c;
        case 0x51ec10u: goto label_51ec10;
        case 0x51ec14u: goto label_51ec14;
        case 0x51ec18u: goto label_51ec18;
        case 0x51ec1cu: goto label_51ec1c;
        case 0x51ec20u: goto label_51ec20;
        case 0x51ec24u: goto label_51ec24;
        case 0x51ec28u: goto label_51ec28;
        case 0x51ec2cu: goto label_51ec2c;
        case 0x51ec30u: goto label_51ec30;
        case 0x51ec34u: goto label_51ec34;
        case 0x51ec38u: goto label_51ec38;
        case 0x51ec3cu: goto label_51ec3c;
        case 0x51ec40u: goto label_51ec40;
        case 0x51ec44u: goto label_51ec44;
        case 0x51ec48u: goto label_51ec48;
        case 0x51ec4cu: goto label_51ec4c;
        case 0x51ec50u: goto label_51ec50;
        case 0x51ec54u: goto label_51ec54;
        case 0x51ec58u: goto label_51ec58;
        case 0x51ec5cu: goto label_51ec5c;
        case 0x51ec60u: goto label_51ec60;
        case 0x51ec64u: goto label_51ec64;
        case 0x51ec68u: goto label_51ec68;
        case 0x51ec6cu: goto label_51ec6c;
        case 0x51ec70u: goto label_51ec70;
        case 0x51ec74u: goto label_51ec74;
        case 0x51ec78u: goto label_51ec78;
        case 0x51ec7cu: goto label_51ec7c;
        case 0x51ec80u: goto label_51ec80;
        case 0x51ec84u: goto label_51ec84;
        case 0x51ec88u: goto label_51ec88;
        case 0x51ec8cu: goto label_51ec8c;
        case 0x51ec90u: goto label_51ec90;
        case 0x51ec94u: goto label_51ec94;
        case 0x51ec98u: goto label_51ec98;
        case 0x51ec9cu: goto label_51ec9c;
        case 0x51eca0u: goto label_51eca0;
        case 0x51eca4u: goto label_51eca4;
        case 0x51eca8u: goto label_51eca8;
        case 0x51ecacu: goto label_51ecac;
        case 0x51ecb0u: goto label_51ecb0;
        case 0x51ecb4u: goto label_51ecb4;
        case 0x51ecb8u: goto label_51ecb8;
        case 0x51ecbcu: goto label_51ecbc;
        case 0x51ecc0u: goto label_51ecc0;
        case 0x51ecc4u: goto label_51ecc4;
        case 0x51ecc8u: goto label_51ecc8;
        case 0x51ecccu: goto label_51eccc;
        case 0x51ecd0u: goto label_51ecd0;
        case 0x51ecd4u: goto label_51ecd4;
        case 0x51ecd8u: goto label_51ecd8;
        case 0x51ecdcu: goto label_51ecdc;
        case 0x51ece0u: goto label_51ece0;
        case 0x51ece4u: goto label_51ece4;
        case 0x51ece8u: goto label_51ece8;
        case 0x51ececu: goto label_51ecec;
        case 0x51ecf0u: goto label_51ecf0;
        case 0x51ecf4u: goto label_51ecf4;
        case 0x51ecf8u: goto label_51ecf8;
        case 0x51ecfcu: goto label_51ecfc;
        case 0x51ed00u: goto label_51ed00;
        case 0x51ed04u: goto label_51ed04;
        case 0x51ed08u: goto label_51ed08;
        case 0x51ed0cu: goto label_51ed0c;
        case 0x51ed10u: goto label_51ed10;
        case 0x51ed14u: goto label_51ed14;
        case 0x51ed18u: goto label_51ed18;
        case 0x51ed1cu: goto label_51ed1c;
        case 0x51ed20u: goto label_51ed20;
        case 0x51ed24u: goto label_51ed24;
        case 0x51ed28u: goto label_51ed28;
        case 0x51ed2cu: goto label_51ed2c;
        case 0x51ed30u: goto label_51ed30;
        case 0x51ed34u: goto label_51ed34;
        case 0x51ed38u: goto label_51ed38;
        case 0x51ed3cu: goto label_51ed3c;
        default: break;
    }

    ctx->pc = 0x51eb90u;

label_51eb90:
    // 0x51eb90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x51eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_51eb94:
    // 0x51eb94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_51eb98:
    // 0x51eb98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x51eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_51eb9c:
    // 0x51eb9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x51eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_51eba0:
    // 0x51eba0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x51eba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_51eba4:
    // 0x51eba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51eba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51eba8:
    // 0x51eba8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x51eba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_51ebac:
    // 0x51ebac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x51ebacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_51ebb0:
    // 0x51ebb0: 0xac8601c8  sw          $a2, 0x1C8($a0)
    ctx->pc = 0x51ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 6));
label_51ebb4:
    // 0x51ebb4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_51ebb8:
    // 0x51ebb8: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x51ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
label_51ebbc:
    // 0x51ebbc: 0x24a5c480  addiu       $a1, $a1, -0x3B80
    ctx->pc = 0x51ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
label_51ebc0:
    // 0x51ebc0: 0xa0800220  sb          $zero, 0x220($a0)
    ctx->pc = 0x51ebc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 0));
label_51ebc4:
    // 0x51ebc4: 0xac8001cc  sw          $zero, 0x1CC($a0)
    ctx->pc = 0x51ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 0));
label_51ebc8:
    // 0x51ebc8: 0xa0800221  sb          $zero, 0x221($a0)
    ctx->pc = 0x51ebc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 545), (uint8_t)GPR_U32(ctx, 0));
label_51ebcc:
    // 0x51ebcc: 0xc04cc04  jal         func_133010
label_51ebd0:
    if (ctx->pc == 0x51EBD0u) {
        ctx->pc = 0x51EBD0u;
            // 0x51ebd0: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x51EBD4u;
        goto label_51ebd4;
    }
    ctx->pc = 0x51EBCCu;
    SET_GPR_U32(ctx, 31, 0x51EBD4u);
    ctx->pc = 0x51EBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EBCCu;
            // 0x51ebd0: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EBD4u; }
        if (ctx->pc != 0x51EBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EBD4u; }
        if (ctx->pc != 0x51EBD4u) { return; }
    }
    ctx->pc = 0x51EBD4u;
label_51ebd4:
    // 0x51ebd4: 0xc04c968  jal         func_1325A0
label_51ebd8:
    if (ctx->pc == 0x51EBD8u) {
        ctx->pc = 0x51EBD8u;
            // 0x51ebd8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x51EBDCu;
        goto label_51ebdc;
    }
    ctx->pc = 0x51EBD4u;
    SET_GPR_U32(ctx, 31, 0x51EBDCu);
    ctx->pc = 0x51EBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EBD4u;
            // 0x51ebd8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EBDCu; }
        if (ctx->pc != 0x51EBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EBDCu; }
        if (ctx->pc != 0x51EBDCu) { return; }
    }
    ctx->pc = 0x51EBDCu;
label_51ebdc:
    // 0x51ebdc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51ebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_51ebe0:
    // 0x51ebe0: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x51ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_51ebe4:
    // 0x51ebe4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x51ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_51ebe8:
    // 0x51ebe8: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x51ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_51ebec:
    // 0x51ebec: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x51ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_51ebf0:
    // 0x51ebf0: 0xc04cc04  jal         func_133010
label_51ebf4:
    if (ctx->pc == 0x51EBF4u) {
        ctx->pc = 0x51EBF4u;
            // 0x51ebf4: 0x24a5c620  addiu       $a1, $a1, -0x39E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952480));
        ctx->pc = 0x51EBF8u;
        goto label_51ebf8;
    }
    ctx->pc = 0x51EBF0u;
    SET_GPR_U32(ctx, 31, 0x51EBF8u);
    ctx->pc = 0x51EBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EBF0u;
            // 0x51ebf4: 0x24a5c620  addiu       $a1, $a1, -0x39E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EBF8u; }
        if (ctx->pc != 0x51EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EBF8u; }
        if (ctx->pc != 0x51EBF8u) { return; }
    }
    ctx->pc = 0x51EBF8u;
label_51ebf8:
    // 0x51ebf8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x51ebf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51ebfc:
    // 0x51ebfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51ebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51ec00:
    // 0x51ec00: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x51ec00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_51ec04:
    // 0x51ec04: 0x320f809  jalr        $t9
label_51ec08:
    if (ctx->pc == 0x51EC08u) {
        ctx->pc = 0x51EC08u;
            // 0x51ec08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51EC0Cu;
        goto label_51ec0c;
    }
    ctx->pc = 0x51EC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51EC0Cu);
        ctx->pc = 0x51EC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EC04u;
            // 0x51ec08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51EC0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51EC0Cu; }
            if (ctx->pc != 0x51EC0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51EC0Cu;
label_51ec0c:
    // 0x51ec0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51ec10:
    // 0x51ec10: 0x26040580  addiu       $a0, $s0, 0x580
    ctx->pc = 0x51ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
label_51ec14:
    // 0x51ec14: 0xae020698  sw          $v0, 0x698($s0)
    ctx->pc = 0x51ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 2));
label_51ec18:
    // 0x51ec18: 0xc0ab808  jal         func_2AE020
label_51ec1c:
    if (ctx->pc == 0x51EC1Cu) {
        ctx->pc = 0x51EC1Cu;
            // 0x51ec1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51EC20u;
        goto label_51ec20;
    }
    ctx->pc = 0x51EC18u;
    SET_GPR_U32(ctx, 31, 0x51EC20u);
    ctx->pc = 0x51EC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EC18u;
            // 0x51ec1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC20u; }
        if (ctx->pc != 0x51EC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC20u; }
        if (ctx->pc != 0x51EC20u) { return; }
    }
    ctx->pc = 0x51EC20u;
label_51ec20:
    // 0x51ec20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51ec24:
    // 0x51ec24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x51ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_51ec28:
    // 0x51ec28: 0x8c420d20  lw          $v0, 0xD20($v0)
    ctx->pc = 0x51ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3360)));
label_51ec2c:
    // 0x51ec2c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x51ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_51ec30:
    // 0x51ec30: 0xc04f278  jal         func_13C9E0
label_51ec34:
    if (ctx->pc == 0x51EC34u) {
        ctx->pc = 0x51EC34u;
            // 0x51ec34: 0x24520084  addiu       $s2, $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
        ctx->pc = 0x51EC38u;
        goto label_51ec38;
    }
    ctx->pc = 0x51EC30u;
    SET_GPR_U32(ctx, 31, 0x51EC38u);
    ctx->pc = 0x51EC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EC30u;
            // 0x51ec34: 0x24520084  addiu       $s2, $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC38u; }
        if (ctx->pc != 0x51EC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC38u; }
        if (ctx->pc != 0x51EC38u) { return; }
    }
    ctx->pc = 0x51EC38u;
label_51ec38:
    // 0x51ec38: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x51ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_51ec3c:
    // 0x51ec3c: 0xc04ce80  jal         func_133A00
label_51ec40:
    if (ctx->pc == 0x51EC40u) {
        ctx->pc = 0x51EC40u;
            // 0x51ec40: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x51EC44u;
        goto label_51ec44;
    }
    ctx->pc = 0x51EC3Cu;
    SET_GPR_U32(ctx, 31, 0x51EC44u);
    ctx->pc = 0x51EC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EC3Cu;
            // 0x51ec40: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC44u; }
        if (ctx->pc != 0x51EC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC44u; }
        if (ctx->pc != 0x51EC44u) { return; }
    }
    ctx->pc = 0x51EC44u;
label_51ec44:
    // 0x51ec44: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x51ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_51ec48:
    // 0x51ec48: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x51ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_51ec4c:
    // 0x51ec4c: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x51ec4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_51ec50:
    // 0x51ec50: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x51ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_51ec54:
    // 0x51ec54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51ec54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51ec58:
    // 0x51ec58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x51ec58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_51ec5c:
    // 0x51ec5c: 0xc05161c  jal         func_145870
label_51ec60:
    if (ctx->pc == 0x51EC60u) {
        ctx->pc = 0x51EC60u;
            // 0x51ec60: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x51EC64u;
        goto label_51ec64;
    }
    ctx->pc = 0x51EC5Cu;
    SET_GPR_U32(ctx, 31, 0x51EC64u);
    ctx->pc = 0x51EC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EC5Cu;
            // 0x51ec60: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145870u;
    if (runtime->hasFunction(0x145870u)) {
        auto targetFn = runtime->lookupFunction(0x145870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC64u; }
        if (ctx->pc != 0x51EC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145870_0x145870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC64u; }
        if (ctx->pc != 0x51EC64u) { return; }
    }
    ctx->pc = 0x51EC64u;
label_51ec64:
    // 0x51ec64: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x51ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_51ec68:
    // 0x51ec68: 0xc04cce4  jal         func_133390
label_51ec6c:
    if (ctx->pc == 0x51EC6Cu) {
        ctx->pc = 0x51EC6Cu;
            // 0x51ec6c: 0x262501d0  addiu       $a1, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->pc = 0x51EC70u;
        goto label_51ec70;
    }
    ctx->pc = 0x51EC68u;
    SET_GPR_U32(ctx, 31, 0x51EC70u);
    ctx->pc = 0x51EC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EC68u;
            // 0x51ec6c: 0x262501d0  addiu       $a1, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC70u; }
        if (ctx->pc != 0x51EC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC70u; }
        if (ctx->pc != 0x51EC70u) { return; }
    }
    ctx->pc = 0x51EC70u;
label_51ec70:
    // 0x51ec70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x51ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_51ec74:
    // 0x51ec74: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x51ec74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_51ec78:
    // 0x51ec78: 0xc04cc90  jal         func_133240
label_51ec7c:
    if (ctx->pc == 0x51EC7Cu) {
        ctx->pc = 0x51EC7Cu;
            // 0x51ec7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51EC80u;
        goto label_51ec80;
    }
    ctx->pc = 0x51EC78u;
    SET_GPR_U32(ctx, 31, 0x51EC80u);
    ctx->pc = 0x51EC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EC78u;
            // 0x51ec7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC80u; }
        if (ctx->pc != 0x51EC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC80u; }
        if (ctx->pc != 0x51EC80u) { return; }
    }
    ctx->pc = 0x51EC80u;
label_51ec80:
    // 0x51ec80: 0xc04cc14  jal         func_133050
label_51ec84:
    if (ctx->pc == 0x51EC84u) {
        ctx->pc = 0x51EC84u;
            // 0x51ec84: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x51EC88u;
        goto label_51ec88;
    }
    ctx->pc = 0x51EC80u;
    SET_GPR_U32(ctx, 31, 0x51EC88u);
    ctx->pc = 0x51EC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EC80u;
            // 0x51ec84: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC88u; }
        if (ctx->pc != 0x51EC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC88u; }
        if (ctx->pc != 0x51EC88u) { return; }
    }
    ctx->pc = 0x51EC88u;
label_51ec88:
    // 0x51ec88: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x51ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_51ec8c:
    // 0x51ec8c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x51ec8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_51ec90:
    // 0x51ec90: 0xc04cc44  jal         func_133110
label_51ec94:
    if (ctx->pc == 0x51EC94u) {
        ctx->pc = 0x51EC94u;
            // 0x51ec94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51EC98u;
        goto label_51ec98;
    }
    ctx->pc = 0x51EC90u;
    SET_GPR_U32(ctx, 31, 0x51EC98u);
    ctx->pc = 0x51EC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EC90u;
            // 0x51ec94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC98u; }
        if (ctx->pc != 0x51EC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EC98u; }
        if (ctx->pc != 0x51EC98u) { return; }
    }
    ctx->pc = 0x51EC98u;
label_51ec98:
    // 0x51ec98: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x51ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_51ec9c:
    // 0x51ec9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x51ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_51eca0:
    // 0x51eca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51eca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51eca4:
    // 0x51eca4: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x51eca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_51eca8:
    // 0x51eca8: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x51eca8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
label_51ecac:
    // 0x51ecac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51ecb0:
    // 0x51ecb0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x51ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_51ecb4:
    // 0x51ecb4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x51ecb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51ecb8:
    // 0x51ecb8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x51ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51ecbc:
    // 0x51ecbc: 0xc04cc7c  jal         func_1331F0
label_51ecc0:
    if (ctx->pc == 0x51ECC0u) {
        ctx->pc = 0x51ECC0u;
            // 0x51ecc0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x51ECC4u;
        goto label_51ecc4;
    }
    ctx->pc = 0x51ECBCu;
    SET_GPR_U32(ctx, 31, 0x51ECC4u);
    ctx->pc = 0x51ECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51ECBCu;
            // 0x51ecc0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ECC4u; }
        if (ctx->pc != 0x51ECC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ECC4u; }
        if (ctx->pc != 0x51ECC4u) { return; }
    }
    ctx->pc = 0x51ECC4u;
label_51ecc4:
    // 0x51ecc4: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x51ecc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_51ecc8:
    // 0x51ecc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51ecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51eccc:
    // 0x51eccc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x51ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_51ecd0:
    // 0x51ecd0: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x51ecd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_51ecd4:
    // 0x51ecd4: 0xc122c1c  jal         func_48B070
label_51ecd8:
    if (ctx->pc == 0x51ECD8u) {
        ctx->pc = 0x51ECD8u;
            // 0x51ecd8: 0x24e7c490  addiu       $a3, $a3, -0x3B70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952080));
        ctx->pc = 0x51ECDCu;
        goto label_51ecdc;
    }
    ctx->pc = 0x51ECD4u;
    SET_GPR_U32(ctx, 31, 0x51ECDCu);
    ctx->pc = 0x51ECD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51ECD4u;
            // 0x51ecd8: 0x24e7c490  addiu       $a3, $a3, -0x3B70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B070u;
    if (runtime->hasFunction(0x48B070u)) {
        auto targetFn = runtime->lookupFunction(0x48B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ECDCu; }
        if (ctx->pc != 0x51ECDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B070_0x48b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ECDCu; }
        if (ctx->pc != 0x51ECDCu) { return; }
    }
    ctx->pc = 0x51ECDCu;
label_51ecdc:
    // 0x51ecdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51ece0:
    // 0x51ece0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x51ece0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51ece4:
    // 0x51ece4: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x51ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
label_51ece8:
    // 0x51ece8: 0xae2001c4  sw          $zero, 0x1C4($s1)
    ctx->pc = 0x51ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
label_51ecec:
    // 0x51ecec: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x51ececu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_51ecf0:
    // 0x51ecf0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_51ecf4:
    if (ctx->pc == 0x51ECF4u) {
        ctx->pc = 0x51ECF8u;
        goto label_51ecf8;
    }
    ctx->pc = 0x51ECF0u;
    {
        const bool branch_taken_0x51ecf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ecf0) {
            ctx->pc = 0x51ED08u;
            goto label_51ed08;
        }
    }
    ctx->pc = 0x51ECF8u;
label_51ecf8:
    // 0x51ecf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51ecf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51ecfc:
    // 0x51ecfc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x51ecfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_51ed00:
    // 0x51ed00: 0x320f809  jalr        $t9
label_51ed04:
    if (ctx->pc == 0x51ED04u) {
        ctx->pc = 0x51ED08u;
        goto label_51ed08;
    }
    ctx->pc = 0x51ED00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51ED08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x51ED08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51ED08u; }
            if (ctx->pc != 0x51ED08u) { return; }
        }
        }
    }
    ctx->pc = 0x51ED08u;
label_51ed08:
    // 0x51ed08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x51ed08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_51ed0c:
    // 0x51ed0c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x51ed0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_51ed10:
    // 0x51ed10: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_51ed14:
    if (ctx->pc == 0x51ED14u) {
        ctx->pc = 0x51ED14u;
            // 0x51ed14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x51ED18u;
        goto label_51ed18;
    }
    ctx->pc = 0x51ED10u;
    {
        const bool branch_taken_0x51ed10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x51ED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51ED10u;
            // 0x51ed14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ed10) {
            ctx->pc = 0x51ECECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51ecec;
        }
    }
    ctx->pc = 0x51ED18u;
label_51ed18:
    // 0x51ed18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51ed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51ed1c:
    // 0x51ed1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x51ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_51ed20:
    // 0x51ed20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x51ed20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51ed24:
    // 0x51ed24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x51ed24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51ed28:
    // 0x51ed28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x51ed28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51ed2c:
    // 0x51ed2c: 0x3e00008  jr          $ra
label_51ed30:
    if (ctx->pc == 0x51ED30u) {
        ctx->pc = 0x51ED30u;
            // 0x51ed30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x51ED34u;
        goto label_51ed34;
    }
    ctx->pc = 0x51ED2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51ED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51ED2Cu;
            // 0x51ed30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51ED34u;
label_51ed34:
    // 0x51ed34: 0x0  nop
    ctx->pc = 0x51ed34u;
    // NOP
label_51ed38:
    // 0x51ed38: 0x0  nop
    ctx->pc = 0x51ed38u;
    // NOP
label_51ed3c:
    // 0x51ed3c: 0x0  nop
    ctx->pc = 0x51ed3cu;
    // NOP
}
