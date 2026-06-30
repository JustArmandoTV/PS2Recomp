#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180CD0
// Address: 0x180cd0 - 0x180d60
void sub_00180CD0_0x180cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180CD0_0x180cd0");
#endif

    switch (ctx->pc) {
        case 0x180cd0u: goto label_180cd0;
        case 0x180cd4u: goto label_180cd4;
        case 0x180cd8u: goto label_180cd8;
        case 0x180cdcu: goto label_180cdc;
        case 0x180ce0u: goto label_180ce0;
        case 0x180ce4u: goto label_180ce4;
        case 0x180ce8u: goto label_180ce8;
        case 0x180cecu: goto label_180cec;
        case 0x180cf0u: goto label_180cf0;
        case 0x180cf4u: goto label_180cf4;
        case 0x180cf8u: goto label_180cf8;
        case 0x180cfcu: goto label_180cfc;
        case 0x180d00u: goto label_180d00;
        case 0x180d04u: goto label_180d04;
        case 0x180d08u: goto label_180d08;
        case 0x180d0cu: goto label_180d0c;
        case 0x180d10u: goto label_180d10;
        case 0x180d14u: goto label_180d14;
        case 0x180d18u: goto label_180d18;
        case 0x180d1cu: goto label_180d1c;
        case 0x180d20u: goto label_180d20;
        case 0x180d24u: goto label_180d24;
        case 0x180d28u: goto label_180d28;
        case 0x180d2cu: goto label_180d2c;
        case 0x180d30u: goto label_180d30;
        case 0x180d34u: goto label_180d34;
        case 0x180d38u: goto label_180d38;
        case 0x180d3cu: goto label_180d3c;
        case 0x180d40u: goto label_180d40;
        case 0x180d44u: goto label_180d44;
        case 0x180d48u: goto label_180d48;
        case 0x180d4cu: goto label_180d4c;
        case 0x180d50u: goto label_180d50;
        case 0x180d54u: goto label_180d54;
        case 0x180d58u: goto label_180d58;
        case 0x180d5cu: goto label_180d5c;
        default: break;
    }

    ctx->pc = 0x180cd0u;

label_180cd0:
    // 0x180cd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_180cd4:
    // 0x180cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_180cd8:
    // 0x180cd8: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x180cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_180cdc:
    // 0x180cdc: 0x26106c60  addiu       $s0, $s0, 0x6C60
    ctx->pc = 0x180cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27744));
label_180ce0:
    // 0x180ce0: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x180ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
label_180ce4:
    // 0x180ce4: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x180ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_180ce8:
    // 0x180ce8: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x180ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_180cec:
    // 0x180cec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x180cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_180cf0:
    // 0x180cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180cf4:
    // 0x180cf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x180cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_180cf8:
    // 0x180cf8: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x180cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
label_180cfc:
    // 0x180cfc: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x180cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
label_180d00:
    // 0x180d00: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x180d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
label_180d04:
    // 0x180d04: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x180d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
label_180d08:
    // 0x180d08: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x180d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
label_180d0c:
    // 0x180d0c: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x180d0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_180d10:
    // 0x180d10: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x180d10u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_180d14:
    // 0x180d14: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x180d14u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_180d18:
    // 0x180d18: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x180d18u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_180d1c:
    // 0x180d1c: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x180d1cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_180d20:
    // 0x180d20: 0xe7b1002c  swc1        $f17, 0x2C($sp)
    ctx->pc = 0x180d20u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_180d24:
    // 0x180d24: 0xe7b20030  swc1        $f18, 0x30($sp)
    ctx->pc = 0x180d24u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_180d28:
    // 0x180d28: 0xc04c136  jal         func_1304D8
label_180d2c:
    if (ctx->pc == 0x180D2Cu) {
        ctx->pc = 0x180D2Cu;
            // 0x180d2c: 0xe7b30034  swc1        $f19, 0x34($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x180D30u;
        goto label_180d30;
    }
    ctx->pc = 0x180D28u;
    SET_GPR_U32(ctx, 31, 0x180D30u);
    ctx->pc = 0x180D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180D28u;
            // 0x180d2c: 0xe7b30034  swc1        $f19, 0x34($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1304D8u;
    if (runtime->hasFunction(0x1304D8u)) {
        auto targetFn = runtime->lookupFunction(0x1304D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D30u; }
        if (ctx->pc != 0x180D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001304D8_0x1304d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D30u; }
        if (ctx->pc != 0x180D30u) { return; }
    }
    ctx->pc = 0x180D30u;
label_180d30:
    // 0x180d30: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x180d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_180d34:
    // 0x180d34: 0x8c636c58  lw          $v1, 0x6C58($v1)
    ctx->pc = 0x180d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27736)));
label_180d38:
    // 0x180d38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_180d3c:
    if (ctx->pc == 0x180D3Cu) {
        ctx->pc = 0x180D3Cu;
            // 0x180d3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x180D40u;
        goto label_180d40;
    }
    ctx->pc = 0x180D38u;
    {
        const bool branch_taken_0x180d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180D38u;
            // 0x180d3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d38) {
            ctx->pc = 0x180D4Cu;
            goto label_180d4c;
        }
    }
    ctx->pc = 0x180D40u;
label_180d40:
    // 0x180d40: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x180d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_180d44:
    // 0x180d44: 0x60f809  jalr        $v1
label_180d48:
    if (ctx->pc == 0x180D48u) {
        ctx->pc = 0x180D48u;
            // 0x180d48: 0x8c446c5c  lw          $a0, 0x6C5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27740)));
        ctx->pc = 0x180D4Cu;
        goto label_180d4c;
    }
    ctx->pc = 0x180D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x180D4Cu);
        ctx->pc = 0x180D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180D44u;
            // 0x180d48: 0x8c446c5c  lw          $a0, 0x6C5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27740)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180D4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180D4Cu; }
            if (ctx->pc != 0x180D4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x180D4Cu;
label_180d4c:
    // 0x180d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180d50:
    // 0x180d50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x180d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_180d54:
    // 0x180d54: 0x3e00008  jr          $ra
label_180d58:
    if (ctx->pc == 0x180D58u) {
        ctx->pc = 0x180D58u;
            // 0x180d58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x180D5Cu;
        goto label_180d5c;
    }
    ctx->pc = 0x180D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180D54u;
            // 0x180d58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180D5Cu;
label_180d5c:
    // 0x180d5c: 0x0  nop
    ctx->pc = 0x180d5cu;
    // NOP
}
