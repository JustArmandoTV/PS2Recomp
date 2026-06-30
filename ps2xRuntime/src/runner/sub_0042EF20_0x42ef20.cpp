#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042EF20
// Address: 0x42ef20 - 0x42f0e0
void sub_0042EF20_0x42ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EF20_0x42ef20");
#endif

    switch (ctx->pc) {
        case 0x42ef20u: goto label_42ef20;
        case 0x42ef24u: goto label_42ef24;
        case 0x42ef28u: goto label_42ef28;
        case 0x42ef2cu: goto label_42ef2c;
        case 0x42ef30u: goto label_42ef30;
        case 0x42ef34u: goto label_42ef34;
        case 0x42ef38u: goto label_42ef38;
        case 0x42ef3cu: goto label_42ef3c;
        case 0x42ef40u: goto label_42ef40;
        case 0x42ef44u: goto label_42ef44;
        case 0x42ef48u: goto label_42ef48;
        case 0x42ef4cu: goto label_42ef4c;
        case 0x42ef50u: goto label_42ef50;
        case 0x42ef54u: goto label_42ef54;
        case 0x42ef58u: goto label_42ef58;
        case 0x42ef5cu: goto label_42ef5c;
        case 0x42ef60u: goto label_42ef60;
        case 0x42ef64u: goto label_42ef64;
        case 0x42ef68u: goto label_42ef68;
        case 0x42ef6cu: goto label_42ef6c;
        case 0x42ef70u: goto label_42ef70;
        case 0x42ef74u: goto label_42ef74;
        case 0x42ef78u: goto label_42ef78;
        case 0x42ef7cu: goto label_42ef7c;
        case 0x42ef80u: goto label_42ef80;
        case 0x42ef84u: goto label_42ef84;
        case 0x42ef88u: goto label_42ef88;
        case 0x42ef8cu: goto label_42ef8c;
        case 0x42ef90u: goto label_42ef90;
        case 0x42ef94u: goto label_42ef94;
        case 0x42ef98u: goto label_42ef98;
        case 0x42ef9cu: goto label_42ef9c;
        case 0x42efa0u: goto label_42efa0;
        case 0x42efa4u: goto label_42efa4;
        case 0x42efa8u: goto label_42efa8;
        case 0x42efacu: goto label_42efac;
        case 0x42efb0u: goto label_42efb0;
        case 0x42efb4u: goto label_42efb4;
        case 0x42efb8u: goto label_42efb8;
        case 0x42efbcu: goto label_42efbc;
        case 0x42efc0u: goto label_42efc0;
        case 0x42efc4u: goto label_42efc4;
        case 0x42efc8u: goto label_42efc8;
        case 0x42efccu: goto label_42efcc;
        case 0x42efd0u: goto label_42efd0;
        case 0x42efd4u: goto label_42efd4;
        case 0x42efd8u: goto label_42efd8;
        case 0x42efdcu: goto label_42efdc;
        case 0x42efe0u: goto label_42efe0;
        case 0x42efe4u: goto label_42efe4;
        case 0x42efe8u: goto label_42efe8;
        case 0x42efecu: goto label_42efec;
        case 0x42eff0u: goto label_42eff0;
        case 0x42eff4u: goto label_42eff4;
        case 0x42eff8u: goto label_42eff8;
        case 0x42effcu: goto label_42effc;
        case 0x42f000u: goto label_42f000;
        case 0x42f004u: goto label_42f004;
        case 0x42f008u: goto label_42f008;
        case 0x42f00cu: goto label_42f00c;
        case 0x42f010u: goto label_42f010;
        case 0x42f014u: goto label_42f014;
        case 0x42f018u: goto label_42f018;
        case 0x42f01cu: goto label_42f01c;
        case 0x42f020u: goto label_42f020;
        case 0x42f024u: goto label_42f024;
        case 0x42f028u: goto label_42f028;
        case 0x42f02cu: goto label_42f02c;
        case 0x42f030u: goto label_42f030;
        case 0x42f034u: goto label_42f034;
        case 0x42f038u: goto label_42f038;
        case 0x42f03cu: goto label_42f03c;
        case 0x42f040u: goto label_42f040;
        case 0x42f044u: goto label_42f044;
        case 0x42f048u: goto label_42f048;
        case 0x42f04cu: goto label_42f04c;
        case 0x42f050u: goto label_42f050;
        case 0x42f054u: goto label_42f054;
        case 0x42f058u: goto label_42f058;
        case 0x42f05cu: goto label_42f05c;
        case 0x42f060u: goto label_42f060;
        case 0x42f064u: goto label_42f064;
        case 0x42f068u: goto label_42f068;
        case 0x42f06cu: goto label_42f06c;
        case 0x42f070u: goto label_42f070;
        case 0x42f074u: goto label_42f074;
        case 0x42f078u: goto label_42f078;
        case 0x42f07cu: goto label_42f07c;
        case 0x42f080u: goto label_42f080;
        case 0x42f084u: goto label_42f084;
        case 0x42f088u: goto label_42f088;
        case 0x42f08cu: goto label_42f08c;
        case 0x42f090u: goto label_42f090;
        case 0x42f094u: goto label_42f094;
        case 0x42f098u: goto label_42f098;
        case 0x42f09cu: goto label_42f09c;
        case 0x42f0a0u: goto label_42f0a0;
        case 0x42f0a4u: goto label_42f0a4;
        case 0x42f0a8u: goto label_42f0a8;
        case 0x42f0acu: goto label_42f0ac;
        case 0x42f0b0u: goto label_42f0b0;
        case 0x42f0b4u: goto label_42f0b4;
        case 0x42f0b8u: goto label_42f0b8;
        case 0x42f0bcu: goto label_42f0bc;
        case 0x42f0c0u: goto label_42f0c0;
        case 0x42f0c4u: goto label_42f0c4;
        case 0x42f0c8u: goto label_42f0c8;
        case 0x42f0ccu: goto label_42f0cc;
        case 0x42f0d0u: goto label_42f0d0;
        case 0x42f0d4u: goto label_42f0d4;
        case 0x42f0d8u: goto label_42f0d8;
        case 0x42f0dcu: goto label_42f0dc;
        default: break;
    }

    ctx->pc = 0x42ef20u;

label_42ef20:
    // 0x42ef20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42ef24:
    // 0x42ef24: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x42ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_42ef28:
    // 0x42ef28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42ef2c:
    // 0x42ef2c: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x42ef2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
label_42ef30:
    // 0x42ef30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42ef30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42ef34:
    // 0x42ef34: 0xc10bc70  jal         func_42F1C0
label_42ef38:
    if (ctx->pc == 0x42EF38u) {
        ctx->pc = 0x42EF38u;
            // 0x42ef38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EF3Cu;
        goto label_42ef3c;
    }
    ctx->pc = 0x42EF34u;
    SET_GPR_U32(ctx, 31, 0x42EF3Cu);
    ctx->pc = 0x42EF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EF34u;
            // 0x42ef38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42F1C0u;
    if (runtime->hasFunction(0x42F1C0u)) {
        auto targetFn = runtime->lookupFunction(0x42F1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EF3Cu; }
        if (ctx->pc != 0x42EF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042F1C0_0x42f1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EF3Cu; }
        if (ctx->pc != 0x42EF3Cu) { return; }
    }
    ctx->pc = 0x42EF3Cu;
label_42ef3c:
    // 0x42ef3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42ef40:
    // 0x42ef40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42ef44:
    // 0x42ef44: 0x2463c740  addiu       $v1, $v1, -0x38C0
    ctx->pc = 0x42ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
label_42ef48:
    // 0x42ef48: 0x2442c778  addiu       $v0, $v0, -0x3888
    ctx->pc = 0x42ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952824));
label_42ef4c:
    // 0x42ef4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42ef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42ef50:
    // 0x42ef50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42ef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42ef54:
    // 0x42ef54: 0xc10bc6c  jal         func_42F1B0
label_42ef58:
    if (ctx->pc == 0x42EF58u) {
        ctx->pc = 0x42EF58u;
            // 0x42ef58: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x42EF5Cu;
        goto label_42ef5c;
    }
    ctx->pc = 0x42EF54u;
    SET_GPR_U32(ctx, 31, 0x42EF5Cu);
    ctx->pc = 0x42EF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EF54u;
            // 0x42ef58: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42F1B0u;
    if (runtime->hasFunction(0x42F1B0u)) {
        auto targetFn = runtime->lookupFunction(0x42F1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EF5Cu; }
        if (ctx->pc != 0x42EF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042F1B0_0x42f1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EF5Cu; }
        if (ctx->pc != 0x42EF5Cu) { return; }
    }
    ctx->pc = 0x42EF5Cu;
label_42ef5c:
    // 0x42ef5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x42ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_42ef60:
    // 0x42ef60: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x42ef60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_42ef64:
    // 0x42ef64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42ef68:
    // 0x42ef68: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x42ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_42ef6c:
    // 0x42ef6c: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x42ef6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_42ef70:
    // 0x42ef70: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42ef74:
    // 0x42ef74: 0x24e7c4f0  addiu       $a3, $a3, -0x3B10
    ctx->pc = 0x42ef74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952176));
label_42ef78:
    // 0x42ef78: 0x2484c5f0  addiu       $a0, $a0, -0x3A10
    ctx->pc = 0x42ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952432));
label_42ef7c:
    // 0x42ef7c: 0x2463c628  addiu       $v1, $v1, -0x39D8
    ctx->pc = 0x42ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952488));
label_42ef80:
    // 0x42ef80: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x42ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_42ef84:
    // 0x42ef84: 0x8cc80968  lw          $t0, 0x968($a2)
    ctx->pc = 0x42ef84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
label_42ef88:
    // 0x42ef88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42ef8c:
    // 0x42ef8c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x42ef8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_42ef90:
    // 0x42ef90: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x42ef90u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_42ef94:
    // 0x42ef94: 0xa2070090  sb          $a3, 0x90($s0)
    ctx->pc = 0x42ef94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 7));
label_42ef98:
    // 0x42ef98: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x42ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_42ef9c:
    // 0x42ef9c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x42ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_42efa0:
    // 0x42efa0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_42efa4:
    // 0x42efa4: 0xc0a7a88  jal         func_29EA20
label_42efa8:
    if (ctx->pc == 0x42EFA8u) {
        ctx->pc = 0x42EFA8u;
            // 0x42efa8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x42EFACu;
        goto label_42efac;
    }
    ctx->pc = 0x42EFA4u;
    SET_GPR_U32(ctx, 31, 0x42EFACu);
    ctx->pc = 0x42EFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EFA4u;
            // 0x42efa8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EFACu; }
        if (ctx->pc != 0x42EFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EFACu; }
        if (ctx->pc != 0x42EFACu) { return; }
    }
    ctx->pc = 0x42EFACu;
label_42efac:
    // 0x42efac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x42efacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_42efb0:
    // 0x42efb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42efb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42efb4:
    // 0x42efb4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_42efb8:
    if (ctx->pc == 0x42EFB8u) {
        ctx->pc = 0x42EFB8u;
            // 0x42efb8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42EFBCu;
        goto label_42efbc;
    }
    ctx->pc = 0x42EFB4u;
    {
        const bool branch_taken_0x42efb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EFB4u;
            // 0x42efb8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42efb4) {
            ctx->pc = 0x42EFD0u;
            goto label_42efd0;
        }
    }
    ctx->pc = 0x42EFBCu;
label_42efbc:
    // 0x42efbc: 0x3c024148  lui         $v0, 0x4148
    ctx->pc = 0x42efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16712 << 16));
label_42efc0:
    // 0x42efc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42efc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42efc4:
    // 0x42efc4: 0xc0827ac  jal         func_209EB0
label_42efc8:
    if (ctx->pc == 0x42EFC8u) {
        ctx->pc = 0x42EFCCu;
        goto label_42efcc;
    }
    ctx->pc = 0x42EFC4u;
    SET_GPR_U32(ctx, 31, 0x42EFCCu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EFCCu; }
        if (ctx->pc != 0x42EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EFCCu; }
        if (ctx->pc != 0x42EFCCu) { return; }
    }
    ctx->pc = 0x42EFCCu;
label_42efcc:
    // 0x42efcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42efccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42efd0:
    // 0x42efd0: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x42efd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_42efd4:
    // 0x42efd4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x42efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_42efd8:
    // 0x42efd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x42efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_42efdc:
    // 0x42efdc: 0xa2000091  sb          $zero, 0x91($s0)
    ctx->pc = 0x42efdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 145), (uint8_t)GPR_U32(ctx, 0));
label_42efe0:
    // 0x42efe0: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x42efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_42efe4:
    // 0x42efe4: 0x346518a9  ori         $a1, $v1, 0x18A9
    ctx->pc = 0x42efe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6313);
label_42efe8:
    // 0x42efe8: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x42efe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42efec:
    // 0x42efec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x42efecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_42eff0:
    // 0x42eff0: 0x320f809  jalr        $t9
label_42eff4:
    if (ctx->pc == 0x42EFF4u) {
        ctx->pc = 0x42EFF4u;
            // 0x42eff4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x42EFF8u;
        goto label_42eff8;
    }
    ctx->pc = 0x42EFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42EFF8u);
        ctx->pc = 0x42EFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EFF0u;
            // 0x42eff4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42EFF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42EFF8u; }
            if (ctx->pc != 0x42EFF8u) { return; }
        }
        }
    }
    ctx->pc = 0x42EFF8u;
label_42eff8:
    // 0x42eff8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x42eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_42effc:
    // 0x42effc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42effcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f000:
    // 0x42f000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42f000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42f004:
    // 0x42f004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42f004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42f008:
    // 0x42f008: 0x3e00008  jr          $ra
label_42f00c:
    if (ctx->pc == 0x42F00Cu) {
        ctx->pc = 0x42F00Cu;
            // 0x42f00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42F010u;
        goto label_42f010;
    }
    ctx->pc = 0x42F008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F008u;
            // 0x42f00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42F010u;
label_42f010:
    // 0x42f010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42f014:
    // 0x42f014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42f018:
    // 0x42f018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42f01c:
    // 0x42f01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42f020:
    // 0x42f020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42f020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42f024:
    // 0x42f024: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_42f028:
    if (ctx->pc == 0x42F028u) {
        ctx->pc = 0x42F028u;
            // 0x42f028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F02Cu;
        goto label_42f02c;
    }
    ctx->pc = 0x42F024u;
    {
        const bool branch_taken_0x42f024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F024u;
            // 0x42f028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f024) {
            ctx->pc = 0x42F0C4u;
            goto label_42f0c4;
        }
    }
    ctx->pc = 0x42F02Cu;
label_42f02c:
    // 0x42f02c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42f030:
    // 0x42f030: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42f030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42f034:
    // 0x42f034: 0x2463c740  addiu       $v1, $v1, -0x38C0
    ctx->pc = 0x42f034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
label_42f038:
    // 0x42f038: 0x2442c778  addiu       $v0, $v0, -0x3888
    ctx->pc = 0x42f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952824));
label_42f03c:
    // 0x42f03c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42f040:
    // 0x42f040: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_42f044:
    if (ctx->pc == 0x42F044u) {
        ctx->pc = 0x42F044u;
            // 0x42f044: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x42F048u;
        goto label_42f048;
    }
    ctx->pc = 0x42F040u;
    {
        const bool branch_taken_0x42f040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F040u;
            // 0x42f044: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f040) {
            ctx->pc = 0x42F0ACu;
            goto label_42f0ac;
        }
    }
    ctx->pc = 0x42F048u;
label_42f048:
    // 0x42f048: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42f048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42f04c:
    // 0x42f04c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42f050:
    // 0x42f050: 0x2463c6f0  addiu       $v1, $v1, -0x3910
    ctx->pc = 0x42f050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952688));
label_42f054:
    // 0x42f054: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f058:
    // 0x42f058: 0x2442c728  addiu       $v0, $v0, -0x38D8
    ctx->pc = 0x42f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952744));
label_42f05c:
    // 0x42f05c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42f060:
    // 0x42f060: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x42f060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_42f064:
    // 0x42f064: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x42f064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_42f068:
    // 0x42f068: 0xc0407c0  jal         func_101F00
label_42f06c:
    if (ctx->pc == 0x42F06Cu) {
        ctx->pc = 0x42F06Cu;
            // 0x42f06c: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
        ctx->pc = 0x42F070u;
        goto label_42f070;
    }
    ctx->pc = 0x42F068u;
    SET_GPR_U32(ctx, 31, 0x42F070u);
    ctx->pc = 0x42F06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F068u;
            // 0x42f06c: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F070u; }
        if (ctx->pc != 0x42F070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F070u; }
        if (ctx->pc != 0x42F070u) { return; }
    }
    ctx->pc = 0x42F070u;
label_42f070:
    // 0x42f070: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x42f070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_42f074:
    // 0x42f074: 0xc0a8cf8  jal         func_2A33E0
label_42f078:
    if (ctx->pc == 0x42F078u) {
        ctx->pc = 0x42F078u;
            // 0x42f078: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x42F07Cu;
        goto label_42f07c;
    }
    ctx->pc = 0x42F074u;
    SET_GPR_U32(ctx, 31, 0x42F07Cu);
    ctx->pc = 0x42F078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F074u;
            // 0x42f078: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F07Cu; }
        if (ctx->pc != 0x42F07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F07Cu; }
        if (ctx->pc != 0x42F07Cu) { return; }
    }
    ctx->pc = 0x42F07Cu;
label_42f07c:
    // 0x42f07c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x42f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_42f080:
    // 0x42f080: 0xc10bc50  jal         func_42F140
label_42f084:
    if (ctx->pc == 0x42F084u) {
        ctx->pc = 0x42F084u;
            // 0x42f084: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x42F088u;
        goto label_42f088;
    }
    ctx->pc = 0x42F080u;
    SET_GPR_U32(ctx, 31, 0x42F088u);
    ctx->pc = 0x42F084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F080u;
            // 0x42f084: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42F140u;
    if (runtime->hasFunction(0x42F140u)) {
        auto targetFn = runtime->lookupFunction(0x42F140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F088u; }
        if (ctx->pc != 0x42F088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042F140_0x42f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F088u; }
        if (ctx->pc != 0x42F088u) { return; }
    }
    ctx->pc = 0x42F088u;
label_42f088:
    // 0x42f088: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x42f088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_42f08c:
    // 0x42f08c: 0xc10bc50  jal         func_42F140
label_42f090:
    if (ctx->pc == 0x42F090u) {
        ctx->pc = 0x42F090u;
            // 0x42f090: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x42F094u;
        goto label_42f094;
    }
    ctx->pc = 0x42F08Cu;
    SET_GPR_U32(ctx, 31, 0x42F094u);
    ctx->pc = 0x42F090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F08Cu;
            // 0x42f090: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42F140u;
    if (runtime->hasFunction(0x42F140u)) {
        auto targetFn = runtime->lookupFunction(0x42F140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F094u; }
        if (ctx->pc != 0x42F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042F140_0x42f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F094u; }
        if (ctx->pc != 0x42F094u) { return; }
    }
    ctx->pc = 0x42F094u;
label_42f094:
    // 0x42f094: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x42f094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_42f098:
    // 0x42f098: 0xc10bc38  jal         func_42F0E0
label_42f09c:
    if (ctx->pc == 0x42F09Cu) {
        ctx->pc = 0x42F09Cu;
            // 0x42f09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F0A0u;
        goto label_42f0a0;
    }
    ctx->pc = 0x42F098u;
    SET_GPR_U32(ctx, 31, 0x42F0A0u);
    ctx->pc = 0x42F09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F098u;
            // 0x42f09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42F0E0u;
    if (runtime->hasFunction(0x42F0E0u)) {
        auto targetFn = runtime->lookupFunction(0x42F0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F0A0u; }
        if (ctx->pc != 0x42F0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042F0E0_0x42f0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F0A0u; }
        if (ctx->pc != 0x42F0A0u) { return; }
    }
    ctx->pc = 0x42F0A0u;
label_42f0a0:
    // 0x42f0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f0a4:
    // 0x42f0a4: 0xc0ae1c0  jal         func_2B8700
label_42f0a8:
    if (ctx->pc == 0x42F0A8u) {
        ctx->pc = 0x42F0A8u;
            // 0x42f0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F0ACu;
        goto label_42f0ac;
    }
    ctx->pc = 0x42F0A4u;
    SET_GPR_U32(ctx, 31, 0x42F0ACu);
    ctx->pc = 0x42F0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F0A4u;
            // 0x42f0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F0ACu; }
        if (ctx->pc != 0x42F0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F0ACu; }
        if (ctx->pc != 0x42F0ACu) { return; }
    }
    ctx->pc = 0x42F0ACu;
label_42f0ac:
    // 0x42f0ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x42f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_42f0b0:
    // 0x42f0b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42f0b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42f0b4:
    // 0x42f0b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42f0b8:
    if (ctx->pc == 0x42F0B8u) {
        ctx->pc = 0x42F0B8u;
            // 0x42f0b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F0BCu;
        goto label_42f0bc;
    }
    ctx->pc = 0x42F0B4u;
    {
        const bool branch_taken_0x42f0b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42f0b4) {
            ctx->pc = 0x42F0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42F0B4u;
            // 0x42f0b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42F0C8u;
            goto label_42f0c8;
        }
    }
    ctx->pc = 0x42F0BCu;
label_42f0bc:
    // 0x42f0bc: 0xc0400a8  jal         func_1002A0
label_42f0c0:
    if (ctx->pc == 0x42F0C0u) {
        ctx->pc = 0x42F0C0u;
            // 0x42f0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F0C4u;
        goto label_42f0c4;
    }
    ctx->pc = 0x42F0BCu;
    SET_GPR_U32(ctx, 31, 0x42F0C4u);
    ctx->pc = 0x42F0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F0BCu;
            // 0x42f0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F0C4u; }
        if (ctx->pc != 0x42F0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F0C4u; }
        if (ctx->pc != 0x42F0C4u) { return; }
    }
    ctx->pc = 0x42F0C4u;
label_42f0c4:
    // 0x42f0c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42f0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f0c8:
    // 0x42f0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42f0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42f0cc:
    // 0x42f0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42f0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42f0d0:
    // 0x42f0d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42f0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42f0d4:
    // 0x42f0d4: 0x3e00008  jr          $ra
label_42f0d8:
    if (ctx->pc == 0x42F0D8u) {
        ctx->pc = 0x42F0D8u;
            // 0x42f0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42F0DCu;
        goto label_42f0dc;
    }
    ctx->pc = 0x42F0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F0D4u;
            // 0x42f0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42F0DCu;
label_42f0dc:
    // 0x42f0dc: 0x0  nop
    ctx->pc = 0x42f0dcu;
    // NOP
}
