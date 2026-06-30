#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036BCB0
// Address: 0x36bcb0 - 0x36be30
void sub_0036BCB0_0x36bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BCB0_0x36bcb0");
#endif

    switch (ctx->pc) {
        case 0x36bcccu: goto label_36bccc;
        case 0x36bcecu: goto label_36bcec;
        case 0x36bd1cu: goto label_36bd1c;
        case 0x36bd3cu: goto label_36bd3c;
        case 0x36bd60u: goto label_36bd60;
        case 0x36bdc0u: goto label_36bdc0;
        case 0x36bdccu: goto label_36bdcc;
        case 0x36bdd8u: goto label_36bdd8;
        case 0x36bde4u: goto label_36bde4;
        case 0x36bdf0u: goto label_36bdf0;
        case 0x36bdfcu: goto label_36bdfc;
        case 0x36be14u: goto label_36be14;
        default: break;
    }

    ctx->pc = 0x36bcb0u;

    // 0x36bcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36bcb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x36bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x36bcb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36bcbc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x36bcbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x36bcc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36bcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36bcc4: 0xc0dafc4  jal         func_36BF10
    ctx->pc = 0x36BCC4u;
    SET_GPR_U32(ctx, 31, 0x36BCCCu);
    ctx->pc = 0x36BCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BCC4u;
            // 0x36bcc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BF10u;
    if (runtime->hasFunction(0x36BF10u)) {
        auto targetFn = runtime->lookupFunction(0x36BF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BCCCu; }
        if (ctx->pc != 0x36BCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BF10_0x36bf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BCCCu; }
        if (ctx->pc != 0x36BCCCu) { return; }
    }
    ctx->pc = 0x36BCCCu;
label_36bccc:
    // 0x36bccc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36bcd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36bcd4: 0x24636a90  addiu       $v1, $v1, 0x6A90
    ctx->pc = 0x36bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27280));
    // 0x36bcd8: 0x24426ac8  addiu       $v0, $v0, 0x6AC8
    ctx->pc = 0x36bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27336));
    // 0x36bcdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x36bce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bce4: 0xc0dafc0  jal         func_36BF00
    ctx->pc = 0x36BCE4u;
    SET_GPR_U32(ctx, 31, 0x36BCECu);
    ctx->pc = 0x36BCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BCE4u;
            // 0x36bce8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BF00u;
    if (runtime->hasFunction(0x36BF00u)) {
        auto targetFn = runtime->lookupFunction(0x36BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BCECu; }
        if (ctx->pc != 0x36BCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BF00_0x36bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BCECu; }
        if (ctx->pc != 0x36BCECu) { return; }
    }
    ctx->pc = 0x36BCECu;
label_36bcec:
    // 0x36bcec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36bcf0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x36bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36bcf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36bcf8: 0x244269e0  addiu       $v0, $v0, 0x69E0
    ctx->pc = 0x36bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27104));
    // 0x36bcfc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x36bd00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36bd04: 0x24426a18  addiu       $v0, $v0, 0x6A18
    ctx->pc = 0x36bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27160));
    // 0x36bd08: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x36bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x36bd0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x36bd10: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x36bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x36bd14: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x36BD14u;
    SET_GPR_U32(ctx, 31, 0x36BD1Cu);
    ctx->pc = 0x36BD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BD14u;
            // 0x36bd18: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BD1Cu; }
        if (ctx->pc != 0x36BD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BD1Cu; }
        if (ctx->pc != 0x36BD1Cu) { return; }
    }
    ctx->pc = 0x36BD1Cu;
label_36bd1c:
    // 0x36bd1c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x36bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36bd20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36bd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd24: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36BD24u;
    {
        const bool branch_taken_0x36bd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BD24u;
            // 0x36bd28: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bd24) {
            ctx->pc = 0x36BD40u;
            goto label_36bd40;
        }
    }
    ctx->pc = 0x36BD2Cu;
    // 0x36bd2c: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x36bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x36bd30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36bd30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36bd34: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x36BD34u;
    SET_GPR_U32(ctx, 31, 0x36BD3Cu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BD3Cu; }
        if (ctx->pc != 0x36BD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BD3Cu; }
        if (ctx->pc != 0x36BD3Cu) { return; }
    }
    ctx->pc = 0x36BD3Cu;
label_36bd3c:
    // 0x36bd3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36bd40:
    // 0x36bd40: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x36bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x36bd44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36bd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36bd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bd4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36bd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bd50: 0x3e00008  jr          $ra
    ctx->pc = 0x36BD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BD50u;
            // 0x36bd54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36BD58u;
    // 0x36bd58: 0x0  nop
    ctx->pc = 0x36bd58u;
    // NOP
    // 0x36bd5c: 0x0  nop
    ctx->pc = 0x36bd5cu;
    // NOP
label_36bd60:
    // 0x36bd60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36bd64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36bd68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36bd6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36bd70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36bd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd74: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x36BD74u;
    {
        const bool branch_taken_0x36bd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BD74u;
            // 0x36bd78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bd74) {
            ctx->pc = 0x36BE14u;
            goto label_36be14;
        }
    }
    ctx->pc = 0x36BD7Cu;
    // 0x36bd7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36bd80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36bd84: 0x24636a90  addiu       $v1, $v1, 0x6A90
    ctx->pc = 0x36bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27280));
    // 0x36bd88: 0x24426ac8  addiu       $v0, $v0, 0x6AC8
    ctx->pc = 0x36bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27336));
    // 0x36bd8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x36bd90: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x36BD90u;
    {
        const bool branch_taken_0x36bd90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BD90u;
            // 0x36bd94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bd90) {
            ctx->pc = 0x36BDFCu;
            goto label_36bdfc;
        }
    }
    ctx->pc = 0x36BD98u;
    // 0x36bd98: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36bd9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36bda0: 0x24636a40  addiu       $v1, $v1, 0x6A40
    ctx->pc = 0x36bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27200));
    // 0x36bda4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x36bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x36bda8: 0x24426a78  addiu       $v0, $v0, 0x6A78
    ctx->pc = 0x36bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27256));
    // 0x36bdac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x36bdb0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x36bdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x36bdb4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x36bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x36bdb8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x36BDB8u;
    SET_GPR_U32(ctx, 31, 0x36BDC0u);
    ctx->pc = 0x36BDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BDB8u;
            // 0x36bdbc: 0x24a5afb0  addiu       $a1, $a1, -0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDC0u; }
        if (ctx->pc != 0x36BDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDC0u; }
        if (ctx->pc != 0x36BDC0u) { return; }
    }
    ctx->pc = 0x36BDC0u;
label_36bdc0:
    // 0x36bdc0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x36bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x36bdc4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x36BDC4u;
    SET_GPR_U32(ctx, 31, 0x36BDCCu);
    ctx->pc = 0x36BDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BDC4u;
            // 0x36bdc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDCCu; }
        if (ctx->pc != 0x36BDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDCCu; }
        if (ctx->pc != 0x36BDCCu) { return; }
    }
    ctx->pc = 0x36BDCCu;
label_36bdcc:
    // 0x36bdcc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x36bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x36bdd0: 0xc0dafa4  jal         func_36BE90
    ctx->pc = 0x36BDD0u;
    SET_GPR_U32(ctx, 31, 0x36BDD8u);
    ctx->pc = 0x36BDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BDD0u;
            // 0x36bdd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BE90u;
    if (runtime->hasFunction(0x36BE90u)) {
        auto targetFn = runtime->lookupFunction(0x36BE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDD8u; }
        if (ctx->pc != 0x36BDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BE90_0x36be90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDD8u; }
        if (ctx->pc != 0x36BDD8u) { return; }
    }
    ctx->pc = 0x36BDD8u;
label_36bdd8:
    // 0x36bdd8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x36bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x36bddc: 0xc0dafa4  jal         func_36BE90
    ctx->pc = 0x36BDDCu;
    SET_GPR_U32(ctx, 31, 0x36BDE4u);
    ctx->pc = 0x36BDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BDDCu;
            // 0x36bde0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BE90u;
    if (runtime->hasFunction(0x36BE90u)) {
        auto targetFn = runtime->lookupFunction(0x36BE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDE4u; }
        if (ctx->pc != 0x36BDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BE90_0x36be90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDE4u; }
        if (ctx->pc != 0x36BDE4u) { return; }
    }
    ctx->pc = 0x36BDE4u;
label_36bde4:
    // 0x36bde4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x36bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x36bde8: 0xc0daf8c  jal         func_36BE30
    ctx->pc = 0x36BDE8u;
    SET_GPR_U32(ctx, 31, 0x36BDF0u);
    ctx->pc = 0x36BDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BDE8u;
            // 0x36bdec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BE30u;
    if (runtime->hasFunction(0x36BE30u)) {
        auto targetFn = runtime->lookupFunction(0x36BE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDF0u; }
        if (ctx->pc != 0x36BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BE30_0x36be30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDF0u; }
        if (ctx->pc != 0x36BDF0u) { return; }
    }
    ctx->pc = 0x36BDF0u;
label_36bdf0:
    // 0x36bdf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bdf4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x36BDF4u;
    SET_GPR_U32(ctx, 31, 0x36BDFCu);
    ctx->pc = 0x36BDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BDF4u;
            // 0x36bdf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDFCu; }
        if (ctx->pc != 0x36BDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BDFCu; }
        if (ctx->pc != 0x36BDFCu) { return; }
    }
    ctx->pc = 0x36BDFCu;
label_36bdfc:
    // 0x36bdfc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x36bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x36be00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36be00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36be04: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36BE04u;
    {
        const bool branch_taken_0x36be04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x36be04) {
            ctx->pc = 0x36BE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36BE04u;
            // 0x36be08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36BE18u;
            goto label_36be18;
        }
    }
    ctx->pc = 0x36BE0Cu;
    // 0x36be0c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x36BE0Cu;
    SET_GPR_U32(ctx, 31, 0x36BE14u);
    ctx->pc = 0x36BE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BE0Cu;
            // 0x36be10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BE14u; }
        if (ctx->pc != 0x36BE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BE14u; }
        if (ctx->pc != 0x36BE14u) { return; }
    }
    ctx->pc = 0x36BE14u;
label_36be14:
    // 0x36be14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36be14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36be18:
    // 0x36be18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36be18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36be1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36be1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36be20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36be20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36be24: 0x3e00008  jr          $ra
    ctx->pc = 0x36BE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BE24u;
            // 0x36be28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36BE2Cu;
    // 0x36be2c: 0x0  nop
    ctx->pc = 0x36be2cu;
    // NOP
}
