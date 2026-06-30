#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BCCC0
// Address: 0x4bccc0 - 0x4bce50
void sub_004BCCC0_0x4bccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BCCC0_0x4bccc0");
#endif

    switch (ctx->pc) {
        case 0x4bcce8u: goto label_4bcce8;
        case 0x4bcd54u: goto label_4bcd54;
        case 0x4bcd90u: goto label_4bcd90;
        case 0x4bcdb0u: goto label_4bcdb0;
        case 0x4bcddcu: goto label_4bcddc;
        case 0x4bcdecu: goto label_4bcdec;
        default: break;
    }

    ctx->pc = 0x4bccc0u;

    // 0x4bccc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4bccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4bccc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4bccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bccc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4bccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4bcccc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4bccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4bccd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4bccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4bccd4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4bccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bccd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bccd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bccdc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x4bccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x4bcce0: 0xc0cd08c  jal         func_334230
    ctx->pc = 0x4BCCE0u;
    SET_GPR_U32(ctx, 31, 0x4BCCE8u);
    ctx->pc = 0x4BCCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCCE0u;
            // 0x4bcce4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334230u;
    if (runtime->hasFunction(0x334230u)) {
        auto targetFn = runtime->lookupFunction(0x334230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCCE8u; }
        if (ctx->pc != 0x4BCCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334230_0x334230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCCE8u; }
        if (ctx->pc != 0x4BCCE8u) { return; }
    }
    ctx->pc = 0x4BCCE8u;
label_4bcce8:
    // 0x4bcce8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bcce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bccec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4bccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4bccf0: 0x24420e00  addiu       $v0, $v0, 0xE00
    ctx->pc = 0x4bccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
    // 0x4bccf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4bccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bccf8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4bccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4bccfc: 0xae000cbc  sw          $zero, 0xCBC($s0)
    ctx->pc = 0x4bccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3260), GPR_U32(ctx, 0));
    // 0x4bcd00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4bcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bcd04: 0xae000cc0  sw          $zero, 0xCC0($s0)
    ctx->pc = 0x4bcd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3264), GPR_U32(ctx, 0));
    // 0x4bcd08: 0xae000cf4  sw          $zero, 0xCF4($s0)
    ctx->pc = 0x4bcd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3316), GPR_U32(ctx, 0));
    // 0x4bcd0c: 0xae000cf8  sw          $zero, 0xCF8($s0)
    ctx->pc = 0x4bcd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3320), GPR_U32(ctx, 0));
    // 0x4bcd10: 0xae000cfc  sw          $zero, 0xCFC($s0)
    ctx->pc = 0x4bcd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3324), GPR_U32(ctx, 0));
    // 0x4bcd14: 0xa2000db3  sb          $zero, 0xDB3($s0)
    ctx->pc = 0x4bcd14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3507), (uint8_t)GPR_U32(ctx, 0));
    // 0x4bcd18: 0xae050ce8  sw          $a1, 0xCE8($s0)
    ctx->pc = 0x4bcd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3304), GPR_U32(ctx, 5));
    // 0x4bcd1c: 0xae040cc4  sw          $a0, 0xCC4($s0)
    ctx->pc = 0x4bcd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3268), GPR_U32(ctx, 4));
    // 0x4bcd20: 0x8e030780  lw          $v1, 0x780($s0)
    ctx->pc = 0x4bcd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1920)));
    // 0x4bcd24: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BCD24u;
    {
        const bool branch_taken_0x4bcd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bcd24) {
            ctx->pc = 0x4BCD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCD24u;
            // 0x4bcd28: 0xae050cc4  sw          $a1, 0xCC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3268), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BCD48u;
            goto label_4bcd48;
        }
    }
    ctx->pc = 0x4BCD2Cu;
    // 0x4bcd2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4bcd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4bcd30: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BCD30u;
    {
        const bool branch_taken_0x4bcd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bcd30) {
            ctx->pc = 0x4BCD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCD30u;
            // 0x4bcd34: 0xae020ce8  sw          $v0, 0xCE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BCD40u;
            goto label_4bcd40;
        }
    }
    ctx->pc = 0x4BCD38u;
    // 0x4bcd38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4BCD38u;
    {
        const bool branch_taken_0x4bcd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCD38u;
            // 0x4bcd3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd38) {
            ctx->pc = 0x4BCD50u;
            goto label_4bcd50;
        }
    }
    ctx->pc = 0x4BCD40u;
label_4bcd40:
    // 0x4bcd40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BCD40u;
    {
        const bool branch_taken_0x4bcd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCD40u;
            // 0x4bcd44: 0xae040cf4  sw          $a0, 0xCF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd40) {
            ctx->pc = 0x4BCD4Cu;
            goto label_4bcd4c;
        }
    }
    ctx->pc = 0x4BCD48u;
label_4bcd48:
    // 0x4bcd48: 0xae050cf4  sw          $a1, 0xCF4($s0)
    ctx->pc = 0x4bcd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3316), GPR_U32(ctx, 5));
label_4bcd4c:
    // 0x4bcd4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4bcd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bcd50:
    // 0x4bcd50: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4bcd50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bcd54:
    // 0x4bcd54: 0xac600cc8  sw          $zero, 0xCC8($v1)
    ctx->pc = 0x4bcd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3272), GPR_U32(ctx, 0));
    // 0x4bcd58: 0x8e020ce8  lw          $v0, 0xCE8($s0)
    ctx->pc = 0x4bcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3304)));
    // 0x4bcd5c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x4bcd5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4bcd60: 0xac620cd0  sw          $v0, 0xCD0($v1)
    ctx->pc = 0x4bcd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3280), GPR_U32(ctx, 2));
    // 0x4bcd64: 0x8e020ce8  lw          $v0, 0xCE8($s0)
    ctx->pc = 0x4bcd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3304)));
    // 0x4bcd68: 0x70441018  mult1       $v0, $v0, $a0
    ctx->pc = 0x4bcd68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4bcd6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4bcd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4bcd70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4bcd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4bcd74: 0xac620cd8  sw          $v0, 0xCD8($v1)
    ctx->pc = 0x4bcd74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3288), GPR_U32(ctx, 2));
    // 0x4bcd78: 0xac600cec  sw          $zero, 0xCEC($v1)
    ctx->pc = 0x4bcd78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3308), GPR_U32(ctx, 0));
    // 0x4bcd7c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x4bcd7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4bcd80: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4BCD80u;
    {
        const bool branch_taken_0x4bcd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BCD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCD80u;
            // 0x4bcd84: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd80) {
            ctx->pc = 0x4BCD54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bcd54;
        }
    }
    ctx->pc = 0x4BCD88u;
    // 0x4bcd88: 0xc040180  jal         func_100600
    ctx->pc = 0x4BCD88u;
    SET_GPR_U32(ctx, 31, 0x4BCD90u);
    ctx->pc = 0x4BCD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCD88u;
            // 0x4bcd8c: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCD90u; }
        if (ctx->pc != 0x4BCD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCD90u; }
        if (ctx->pc != 0x4BCD90u) { return; }
    }
    ctx->pc = 0x4BCD90u;
label_4bcd90:
    // 0x4bcd90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4BCD90u;
    {
        const bool branch_taken_0x4bcd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCD90u;
            // 0x4bcd94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd90) {
            ctx->pc = 0x4BCDC8u;
            goto label_4bcdc8;
        }
    }
    ctx->pc = 0x4BCD98u;
    // 0x4bcd98: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4bcd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4bcd9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bcd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcda0: 0x3445a598  ori         $a1, $v0, 0xA598
    ctx->pc = 0x4bcda0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42392);
    // 0x4bcda4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4bcda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bcda8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4BCDA8u;
    SET_GPR_U32(ctx, 31, 0x4BCDB0u);
    ctx->pc = 0x4BCDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCDA8u;
            // 0x4bcdac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCDB0u; }
        if (ctx->pc != 0x4BCDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCDB0u; }
        if (ctx->pc != 0x4BCDB0u) { return; }
    }
    ctx->pc = 0x4BCDB0u;
label_4bcdb0:
    // 0x4bcdb0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4bcdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4bcdb4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bcdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bcdb8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4bcdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4bcdbc: 0x24427ec0  addiu       $v0, $v0, 0x7EC0
    ctx->pc = 0x4bcdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32448));
    // 0x4bcdc0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bcdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bcdc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bcdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4bcdc8:
    // 0x4bcdc8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4bcdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4bcdcc: 0x26040d38  addiu       $a0, $s0, 0xD38
    ctx->pc = 0x4bcdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3384));
    // 0x4bcdd0: 0x24a56eb0  addiu       $a1, $a1, 0x6EB0
    ctx->pc = 0x4bcdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28336));
    // 0x4bcdd4: 0xc04a508  jal         func_129420
    ctx->pc = 0x4BCDD4u;
    SET_GPR_U32(ctx, 31, 0x4BCDDCu);
    ctx->pc = 0x4BCDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCDD4u;
            // 0x4bcdd8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCDDCu; }
        if (ctx->pc != 0x4BCDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCDDCu; }
        if (ctx->pc != 0x4BCDDCu) { return; }
    }
    ctx->pc = 0x4BCDDCu;
label_4bcddc:
    // 0x4bcddc: 0x26040d74  addiu       $a0, $s0, 0xD74
    ctx->pc = 0x4bcddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3444));
    // 0x4bcde0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bcde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcde4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4BCDE4u;
    SET_GPR_U32(ctx, 31, 0x4BCDECu);
    ctx->pc = 0x4BCDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCDE4u;
            // 0x4bcde8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCDECu; }
        if (ctx->pc != 0x4BCDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCDECu; }
        if (ctx->pc != 0x4BCDECu) { return; }
    }
    ctx->pc = 0x4BCDECu;
label_4bcdec:
    // 0x4bcdec: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4bcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x4bcdf0: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x4bcdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x4bcdf4: 0xae020d84  sw          $v0, 0xD84($s0)
    ctx->pc = 0x4bcdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3460), GPR_U32(ctx, 2));
    // 0x4bcdf8: 0xae030d78  sw          $v1, 0xD78($s0)
    ctx->pc = 0x4bcdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3448), GPR_U32(ctx, 3));
    // 0x4bcdfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4bcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4bce00: 0xae020d9c  sw          $v0, 0xD9C($s0)
    ctx->pc = 0x4bce00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
    // 0x4bce04: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4bce04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x4bce08: 0xae030da0  sw          $v1, 0xDA0($s0)
    ctx->pc = 0x4bce08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 3));
    // 0x4bce0c: 0x3c0241f8  lui         $v0, 0x41F8
    ctx->pc = 0x4bce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16888 << 16));
    // 0x4bce10: 0xae020da4  sw          $v0, 0xDA4($s0)
    ctx->pc = 0x4bce10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3492), GPR_U32(ctx, 2));
    // 0x4bce14: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x4bce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x4bce18: 0x8e040960  lw          $a0, 0x960($s0)
    ctx->pc = 0x4bce18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2400)));
    // 0x4bce1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bce1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bce20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4bce20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4bce24: 0xae030960  sw          $v1, 0x960($s0)
    ctx->pc = 0x4bce24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2400), GPR_U32(ctx, 3));
    // 0x4bce28: 0x8e030964  lw          $v1, 0x964($s0)
    ctx->pc = 0x4bce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2404)));
    // 0x4bce2c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x4bce2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x4bce30: 0xae030964  sw          $v1, 0x964($s0)
    ctx->pc = 0x4bce30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2404), GPR_U32(ctx, 3));
    // 0x4bce34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bce34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bce38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4bce38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bce3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4bce3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bce40: 0x3e00008  jr          $ra
    ctx->pc = 0x4BCE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BCE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCE40u;
            // 0x4bce44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BCE48u;
    // 0x4bce48: 0x0  nop
    ctx->pc = 0x4bce48u;
    // NOP
    // 0x4bce4c: 0x0  nop
    ctx->pc = 0x4bce4cu;
    // NOP
}
