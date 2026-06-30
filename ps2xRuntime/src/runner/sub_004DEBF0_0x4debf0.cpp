#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DEBF0
// Address: 0x4debf0 - 0x4ded90
void sub_004DEBF0_0x4debf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DEBF0_0x4debf0");
#endif

    switch (ctx->pc) {
        case 0x4dec0cu: goto label_4dec0c;
        case 0x4dec2cu: goto label_4dec2c;
        case 0x4dec78u: goto label_4dec78;
        case 0x4dec98u: goto label_4dec98;
        case 0x4decc0u: goto label_4decc0;
        case 0x4ded20u: goto label_4ded20;
        case 0x4ded2cu: goto label_4ded2c;
        case 0x4ded38u: goto label_4ded38;
        case 0x4ded44u: goto label_4ded44;
        case 0x4ded50u: goto label_4ded50;
        case 0x4ded5cu: goto label_4ded5c;
        case 0x4ded74u: goto label_4ded74;
        default: break;
    }

    ctx->pc = 0x4debf0u;

    // 0x4debf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4debf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4debf4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4debf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4debf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4debf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4debfc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4debfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4dec00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dec00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4dec04: 0xc137b9c  jal         func_4DEE70
    ctx->pc = 0x4DEC04u;
    SET_GPR_U32(ctx, 31, 0x4DEC0Cu);
    ctx->pc = 0x4DEC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEC04u;
            // 0x4dec08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DEE70u;
    if (runtime->hasFunction(0x4DEE70u)) {
        auto targetFn = runtime->lookupFunction(0x4DEE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEC0Cu; }
        if (ctx->pc != 0x4DEC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DEE70_0x4dee70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEC0Cu; }
        if (ctx->pc != 0x4DEC0Cu) { return; }
    }
    ctx->pc = 0x4DEC0Cu;
label_4dec0c:
    // 0x4dec0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4dec10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4dec14: 0x246330c0  addiu       $v1, $v1, 0x30C0
    ctx->pc = 0x4dec14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12480));
    // 0x4dec18: 0x244230f8  addiu       $v0, $v0, 0x30F8
    ctx->pc = 0x4dec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12536));
    // 0x4dec1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dec20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dec20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dec24: 0xc137b98  jal         func_4DEE60
    ctx->pc = 0x4DEC24u;
    SET_GPR_U32(ctx, 31, 0x4DEC2Cu);
    ctx->pc = 0x4DEC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEC24u;
            // 0x4dec28: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DEE60u;
    if (runtime->hasFunction(0x4DEE60u)) {
        auto targetFn = runtime->lookupFunction(0x4DEE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEC2Cu; }
        if (ctx->pc != 0x4DEC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DEE60_0x4dee60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEC2Cu; }
        if (ctx->pc != 0x4DEC2Cu) { return; }
    }
    ctx->pc = 0x4DEC2Cu;
label_4dec2c:
    // 0x4dec2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4dec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4dec30: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4dec30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4dec34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dec34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4dec38: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4dec38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4dec3c: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x4dec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x4dec40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4dec40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4dec44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4dec48: 0x24423048  addiu       $v0, $v0, 0x3048
    ctx->pc = 0x4dec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12360));
    // 0x4dec4c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4dec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4dec50: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x4dec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x4dec54: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4dec54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4dec58: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x4dec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x4dec5c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4dec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4dec60: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4dec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x4dec64: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4dec64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4dec68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4dec6c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4dec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4dec70: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4DEC70u;
    SET_GPR_U32(ctx, 31, 0x4DEC78u);
    ctx->pc = 0x4DEC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEC70u;
            // 0x4dec74: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEC78u; }
        if (ctx->pc != 0x4DEC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEC78u; }
        if (ctx->pc != 0x4DEC78u) { return; }
    }
    ctx->pc = 0x4DEC78u;
label_4dec78:
    // 0x4dec78: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4dec78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4dec7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dec7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dec80: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DEC80u;
    {
        const bool branch_taken_0x4dec80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEC80u;
            // 0x4dec84: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dec80) {
            ctx->pc = 0x4DEC9Cu;
            goto label_4dec9c;
        }
    }
    ctx->pc = 0x4DEC88u;
    // 0x4dec88: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4dec88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4dec8c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4dec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4dec90: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4DEC90u;
    SET_GPR_U32(ctx, 31, 0x4DEC98u);
    ctx->pc = 0x4DEC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEC90u;
            // 0x4dec94: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEC98u; }
        if (ctx->pc != 0x4DEC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEC98u; }
        if (ctx->pc != 0x4DEC98u) { return; }
    }
    ctx->pc = 0x4DEC98u;
label_4dec98:
    // 0x4dec98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dec9c:
    // 0x4dec9c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4dec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4deca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4deca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4deca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4deca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4deca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4deca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4decac: 0x3e00008  jr          $ra
    ctx->pc = 0x4DECACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DECB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DECACu;
            // 0x4decb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DECB4u;
    // 0x4decb4: 0x0  nop
    ctx->pc = 0x4decb4u;
    // NOP
    // 0x4decb8: 0x0  nop
    ctx->pc = 0x4decb8u;
    // NOP
    // 0x4decbc: 0x0  nop
    ctx->pc = 0x4decbcu;
    // NOP
label_4decc0:
    // 0x4decc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4decc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4decc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4decc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4decc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4decc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4deccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4decccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4decd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4decd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4decd4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4DECD4u;
    {
        const bool branch_taken_0x4decd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DECD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DECD4u;
            // 0x4decd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4decd4) {
            ctx->pc = 0x4DED74u;
            goto label_4ded74;
        }
    }
    ctx->pc = 0x4DECDCu;
    // 0x4decdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4decdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4dece0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dece0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4dece4: 0x246330c0  addiu       $v1, $v1, 0x30C0
    ctx->pc = 0x4dece4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12480));
    // 0x4dece8: 0x244230f8  addiu       $v0, $v0, 0x30F8
    ctx->pc = 0x4dece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12536));
    // 0x4decec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dececu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4decf0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4DECF0u;
    {
        const bool branch_taken_0x4decf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DECF0u;
            // 0x4decf4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4decf0) {
            ctx->pc = 0x4DED5Cu;
            goto label_4ded5c;
        }
    }
    ctx->pc = 0x4DECF8u;
    // 0x4decf8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4decf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4decfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4decfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4ded00: 0x24633070  addiu       $v1, $v1, 0x3070
    ctx->pc = 0x4ded00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12400));
    // 0x4ded04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4ded04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x4ded08: 0x244230a8  addiu       $v0, $v0, 0x30A8
    ctx->pc = 0x4ded08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12456));
    // 0x4ded0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ded0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ded10: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4ded10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4ded14: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4ded14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4ded18: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4DED18u;
    SET_GPR_U32(ctx, 31, 0x4DED20u);
    ctx->pc = 0x4DED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DED18u;
            // 0x4ded1c: 0x24a5e7b0  addiu       $a1, $a1, -0x1850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED20u; }
        if (ctx->pc != 0x4DED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED20u; }
        if (ctx->pc != 0x4DED20u) { return; }
    }
    ctx->pc = 0x4DED20u;
label_4ded20:
    // 0x4ded20: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4ded20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4ded24: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4DED24u;
    SET_GPR_U32(ctx, 31, 0x4DED2Cu);
    ctx->pc = 0x4DED28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DED24u;
            // 0x4ded28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED2Cu; }
        if (ctx->pc != 0x4DED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED2Cu; }
        if (ctx->pc != 0x4DED2Cu) { return; }
    }
    ctx->pc = 0x4DED2Cu;
label_4ded2c:
    // 0x4ded2c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4ded2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4ded30: 0xc137b7c  jal         func_4DEDF0
    ctx->pc = 0x4DED30u;
    SET_GPR_U32(ctx, 31, 0x4DED38u);
    ctx->pc = 0x4DED34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DED30u;
            // 0x4ded34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DEDF0u;
    if (runtime->hasFunction(0x4DEDF0u)) {
        auto targetFn = runtime->lookupFunction(0x4DEDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED38u; }
        if (ctx->pc != 0x4DED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DEDF0_0x4dedf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED38u; }
        if (ctx->pc != 0x4DED38u) { return; }
    }
    ctx->pc = 0x4DED38u;
label_4ded38:
    // 0x4ded38: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4ded38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4ded3c: 0xc137b7c  jal         func_4DEDF0
    ctx->pc = 0x4DED3Cu;
    SET_GPR_U32(ctx, 31, 0x4DED44u);
    ctx->pc = 0x4DED40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DED3Cu;
            // 0x4ded40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DEDF0u;
    if (runtime->hasFunction(0x4DEDF0u)) {
        auto targetFn = runtime->lookupFunction(0x4DEDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED44u; }
        if (ctx->pc != 0x4DED44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DEDF0_0x4dedf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED44u; }
        if (ctx->pc != 0x4DED44u) { return; }
    }
    ctx->pc = 0x4DED44u;
label_4ded44:
    // 0x4ded44: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4ded44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4ded48: 0xc137b64  jal         func_4DED90
    ctx->pc = 0x4DED48u;
    SET_GPR_U32(ctx, 31, 0x4DED50u);
    ctx->pc = 0x4DED4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DED48u;
            // 0x4ded4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DED90u;
    if (runtime->hasFunction(0x4DED90u)) {
        auto targetFn = runtime->lookupFunction(0x4DED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED50u; }
        if (ctx->pc != 0x4DED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DED90_0x4ded90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED50u; }
        if (ctx->pc != 0x4DED50u) { return; }
    }
    ctx->pc = 0x4DED50u;
label_4ded50:
    // 0x4ded50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ded50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ded54: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4DED54u;
    SET_GPR_U32(ctx, 31, 0x4DED5Cu);
    ctx->pc = 0x4DED58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DED54u;
            // 0x4ded58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED5Cu; }
        if (ctx->pc != 0x4DED5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED5Cu; }
        if (ctx->pc != 0x4DED5Cu) { return; }
    }
    ctx->pc = 0x4DED5Cu;
label_4ded5c:
    // 0x4ded5c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4ded5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4ded60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ded60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4ded64: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DED64u;
    {
        const bool branch_taken_0x4ded64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ded64) {
            ctx->pc = 0x4DED68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DED64u;
            // 0x4ded68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DED78u;
            goto label_4ded78;
        }
    }
    ctx->pc = 0x4DED6Cu;
    // 0x4ded6c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DED6Cu;
    SET_GPR_U32(ctx, 31, 0x4DED74u);
    ctx->pc = 0x4DED70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DED6Cu;
            // 0x4ded70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED74u; }
        if (ctx->pc != 0x4DED74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DED74u; }
        if (ctx->pc != 0x4DED74u) { return; }
    }
    ctx->pc = 0x4DED74u;
label_4ded74:
    // 0x4ded74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ded74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ded78:
    // 0x4ded78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ded78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ded7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ded7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ded80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ded80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ded84: 0x3e00008  jr          $ra
    ctx->pc = 0x4DED84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DED88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DED84u;
            // 0x4ded88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DED8Cu;
    // 0x4ded8c: 0x0  nop
    ctx->pc = 0x4ded8cu;
    // NOP
}
